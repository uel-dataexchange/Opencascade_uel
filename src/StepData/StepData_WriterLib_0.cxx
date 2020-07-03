// Created on: 1992-02-11
// Created by: Christian CAILLET
// Copyright (c) 1992-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#include <StepData_WriterLib.hxx>

#include <StepData_NodeOfWriterLib.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_Transient.hxx>
#include <StepData_ReadWriteModule.hxx>
#include <StepData_Protocol.hxx>
#include <StepData_GlobalNodeOfWriterLib.hxx>
 

//#include <StepData_WriterLib.gxx>

// Copyright (c) 1998-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

//#include <LibCtl_Library.ixx>
#include <Standard_NoSuchObject.hxx>


//  Liste Globale des Modules, dans laquelle on va se servir

static Handle(StepData_GlobalNodeOfWriterLib) theglobal;

//  Donnees pour optimisation (dernier Protocole demande)

static Handle(StepData_Protocol) StepData_Protocol;
static Handle(StepData_NodeOfWriterLib) thelast;


//  Alimentation de la liste globale
//  ATTENTION : SetGlobal fait de la substitution, c-a-d que c est le dernier
//   qui a raison pour un Protocol donne
void StepData_WriterLib::SetGlobal
(const Handle(StepData_ReadWriteModule)& amodule, const Handle(StepData_Protocol)& aprotocol)
{
	if (theglobal.IsNull()) theglobal = new StepData_GlobalNodeOfWriterLib;
	theglobal->Add(amodule, aprotocol);
}

// Constructeur d apres Protocole
StepData_WriterLib::StepData_WriterLib(const Handle(StepData_Protocol)& aprotocol)
{
	Standard_Boolean last = Standard_False;
	if (aprotocol.IsNull()) return;    // PAS de protocole = Lib VIDE
	if (!StepData_Protocol.IsNull()) last =
		(StepData_Protocol == aprotocol);

	if (last) thelist = thelast;
	//  Si Pas d optimisation disponible : construire la liste
	else {
		AddProtocol(aprotocol);
		//  Ceci definit l optimisation (pour la fois suivante)
		thelast = thelist;
		StepData_Protocol = aprotocol;
	}
}

//  Constructeur vide
StepData_WriterLib::StepData_WriterLib()    {  }


//  Ajout d un Protocol : attention, desoptimise (sinon risque de confusion !)
void StepData_WriterLib::AddProtocol
(const Handle(Standard_Transient)& aprotocol)
{
	//  DownCast car Protocol->Resources, meme redefini et utilise dans d autres
	//  librairies, doit toujours renvoyer le type le plus haut
	Handle(StepData_Protocol) aproto = Handle(StepData_Protocol)::DownCast(aprotocol);
	if (aproto.IsNull()) return;

	//  D abord, ajouter celui-ci a la liste : chercher le Node
	Handle(StepData_GlobalNodeOfWriterLib) curr;
	for (curr = theglobal; !curr.IsNull();) {        // curr->Next : plus loin
		const Handle(StepData_Protocol)& protocol = curr->Protocol();
		if (!protocol.IsNull()) {
			//  Match Protocol ?
			if (protocol->DynamicType() == aprotocol->DynamicType()) {
				if (thelist.IsNull()) thelist = new StepData_NodeOfWriterLib;
				thelist->AddNode(curr);
				break;  // UN SEUL MODULE PAR PROTOCOLE
			}
		}
		curr = curr->Next();  // cette formule est refusee dans "for"
	}
	//  Ensuite, Traiter les ressources
	Standard_Integer nb = aproto->NbResources();
	for (Standard_Integer i = 1; i <= nb; i++) {
		AddProtocol(aproto->Resource(i));
	}
	//  Ne pas oublier de desoptimiser
	StepData_Protocol.Nullify();
	thelast.Nullify();
}

void StepData_WriterLib::Clear()
{
	thelist = new StepData_NodeOfWriterLib;
}

void StepData_WriterLib::SetComplete()
{
	thelist = new StepData_NodeOfWriterLib;
	//    On prend chacun des Protocoles de la Liste Globale et on l ajoute
	Handle(StepData_GlobalNodeOfWriterLib) curr;
	for (curr = theglobal; !curr.IsNull();) {        // curr->Next : plus loin
		const Handle(StepData_Protocol)& protocol = curr->Protocol();
		//    Comme on prend tout tout tout, on ne se preoccupe pas des Ressources !
		if (!protocol.IsNull()) thelist->AddNode(curr);
		curr = curr->Next();  // cette formule est refusee dans "for"
	}
}


//  Selection : Tres fort, on retourne le Module correspondant a un Type
//  (ainsi que le CaseNumber retourne par le protocole correspondant)

Standard_Boolean StepData_WriterLib::Select
(const Handle(Standard_Transient)& obj,
Handle(StepData_ReadWriteModule)& module, Standard_Integer& CN) const
{
	module.Nullify();  CN = 0;    // Reponse "pas trouve"
	if (thelist.IsNull()) return Standard_False;
	Handle(StepData_NodeOfWriterLib) curr = thelist;
	for (curr = thelist; !curr.IsNull();) {        // curr->Next : plus loin
		const Handle(StepData_Protocol)& protocol = curr->Protocol();
		if (!protocol.IsNull()) {
			CN = protocol->CaseNumber(obj);
			if (CN > 0) {
				module = curr->Module();
				return Standard_True;
			}
		}
		curr = curr->Next();        // cette formule est refusee dans "for"
	}
	return Standard_False;        // ici, pas trouce
}


//  ....                        Iteration                        ....

void StepData_WriterLib::Start()
{
	thecurr = thelist;
}

Standard_Boolean StepData_WriterLib::More() const
{
	return (!thecurr.IsNull());
}

void StepData_WriterLib::Next()
{
	if (!thecurr.IsNull()) thecurr = thecurr->Next();
}

const Handle(StepData_ReadWriteModule)& StepData_WriterLib::Module() const
{
	if (thecurr.IsNull()) throw Standard_NoSuchObject("Library from LibCtl");
	return thecurr->Module();
}

const Handle(StepData_Protocol)& StepData_WriterLib::Protocol() const
{
	if (thecurr.IsNull()) throw Standard_NoSuchObject("Library from LibCtl");
	return thecurr->Protocol();
}


