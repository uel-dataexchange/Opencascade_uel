// Created on: 2015-10-29
// Created by: Irina KRYLOVA
// Copyright (c) 2015 OPEN CASCADE SAS
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


#include <Interface_Check.hxx>
#include <Interface_EntityIterator.hxx>
#include <RWStepAP242_TessellatedShell.hxx>
#include <StepData_StepReaderData.hxx>
#include <StepData_StepWriter.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepVisual_CoordinatesList.hxx>
#include <StepAP242_TessellatedShell.hxx>

//=======================================================================
//function : RWStepAP242_TessellatedShell
//purpose  : 
//=======================================================================
RWStepAP242_TessellatedShell::RWStepAP242_TessellatedShell () {}

//=======================================================================
//function : ReadStep
//purpose  : 
//=======================================================================
void RWStepAP242_TessellatedShell::ReadStep
  (const Handle(StepData_StepReaderData)& data,
  const Standard_Integer num,
  Handle(Interface_Check)& ach,
  const Handle(StepAP242_TessellatedShell)& ent) const
{
  // Number of Parameter Control
	if (!data->CheckNbParams(num, 3, ach, "tessellated_shell")) return;

  // Inherited field : name
  Handle(TCollection_HAsciiString) aName;
  data->ReadString (num, 1, "name", ach, aName);
  
  //--- Initialisation of the read entity ---
  Standard_Integer nsub2;
  NCollection_Handle<StepAP242_ArrayOfTessellatedSurface> aSurfaces;
  if (data->ReadSubList (num,2,"surfaces",ach,nsub2)) 
  {
    Standard_Integer nb2 = data->NbParams(nsub2);
    if( !nb2)
      return;

	aSurfaces = new StepAP242_ArrayOfTessellatedSurface(1, nb2);
    for (Standard_Integer i = 1; i <= nb2; i++) 
    {
		Handle(StepAP242_TessellatedSurface) surface;
		if (data->ReadEntity(nsub2, i, "face", ach, STANDARD_TYPE(StepAP242_TessellatedSurface), surface))
		{
			aSurfaces->SetValue(i, surface);
		}
    }
  }

  StepShape_Shell aShell;
  Handle(StepShape_ClosedShell) clsShell;
  Handle(StepShape_OpenShell) openShell;
  if (data->ReadEntity(num, 3, "shell", ach, STANDARD_TYPE(StepShape_ClosedShell), clsShell))
  {
	  aShell.SetValue(clsShell);
  }
  else if (data->ReadEntity(num, 3, "shell", ach, STANDARD_TYPE(StepShape_OpenShell), openShell)) {
	  aShell.SetValue(openShell);
  }
  
  ent->Init(aName, aSurfaces, aShell);
  
}

//=======================================================================
//function : WriteStep
//purpose  : 
//=======================================================================
void RWStepAP242_TessellatedShell::WriteStep
  (StepData_StepWriter& SW,
  const Handle(StepAP242_TessellatedShell)& ent) const
{
  // Inherited field : name
  SW.Send(ent->Name());

  SW.OpenSub();
  for (Standard_Integer normalIt = 1; normalIt <= ent->TesslatedSurfaces()->Length(); normalIt++) {
	  Handle(StepAP242_TessellatedSurface) aSrf = ent->TesslatedSurfaces()->Value(normalIt);
	  SW.Send(aSrf);
  }
  SW.CloseSub();
  SW.Send(ent->Shell().Value());

}

//=======================================================================
//function : Share
//purpose  : 
//=======================================================================
void RWStepAP242_TessellatedShell::Share (const Handle(StepAP242_TessellatedShell) &ent,
                                                Interface_EntityIterator& iter) const
{
  // Own filed : coordinates
	for (Standard_Integer normalIt = 1; normalIt <= ent->TesslatedSurfaces()->Length(); normalIt++) {
		Handle(StepAP242_TessellatedSurface) aSrf = ent->TesslatedSurfaces()->Value(normalIt);
		iter.AddItem(aSrf);
	}
	if (!ent->Shell().IsNull())
		iter.AddItem(ent->Shell().Value());
}

