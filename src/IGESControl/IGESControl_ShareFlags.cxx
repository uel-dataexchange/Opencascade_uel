#include "IGESControl_ShareFlags.hxx"
#include <Interface_ShareFlags.ixx>
#include <Interface_GeneralModule.hxx>
#include <Interface_ReportEntity.hxx>
#include <Interface_IntList.hxx>
#include <Standard_DomainError.hxx>
#include <IGESData_IGESEntity.hxx>


IGESControl_ShareFlags::IGESControl_ShareFlags(const Handle(Interface_InterfaceModel)& amodel, const Interface_GeneralLib& lib) :Interface_ShareFlags(amodel, lib)
{
	theflags = Interface_BitMap(amodel->NbEntities());
	Handle(Interface_GTool) gtool;  // null
	themodel = amodel;
	Evaluate(lib, gtool);
}

IGESControl_ShareFlags::IGESControl_ShareFlags(const Handle(Interface_InterfaceModel)& amodel, const Handle(Interface_GTool)& gtool) :Interface_ShareFlags(amodel, gtool)
{
	theflags = Interface_BitMap(amodel->NbEntities());
	themodel = amodel;
	Evaluate(gtool->Lib(), gtool);
}

IGESControl_ShareFlags::IGESControl_ShareFlags(const Handle(Interface_InterfaceModel)& amodel, const Handle(Interface_Protocol)& protocol) :Interface_ShareFlags(amodel, protocol)
{
	theflags = Interface_BitMap(amodel->NbEntities());
	Handle(Interface_GTool) gtool;  // null
	themodel = amodel;
	Evaluate(Interface_GeneralLib(protocol), gtool);
}

IGESControl_ShareFlags::IGESControl_ShareFlags(const Handle(Interface_InterfaceModel)& amodel) :Interface_ShareFlags(amodel)
{
	theflags = Interface_BitMap(amodel->NbEntities());
	Handle(Interface_GTool) gtool = themodel->GTool();
	gtool->Reservate(amodel->NbEntities());
	themodel = amodel;
	Evaluate(gtool->Lib(), gtool);
}

IGESControl_ShareFlags::IGESControl_ShareFlags(const Interface_Graph& agraph) :Interface_ShareFlags(agraph)
{
	themodel = agraph.Model();
	theflags = Interface_BitMap(themodel->NbEntities());
	Standard_Integer nb = themodel->NbEntities();
	if (nb == 0) return;
	theroots = new TColStd_HSequenceOfTransient();
	for (Standard_Integer i = 1; i <= nb; i++) {
		//    Resultat obtenu depuis le Graph
		Interface_IntList list = agraph.SharingNums(i);
		if (list.Length() > 0) theflags.SetTrue(i);
		else theroots->Append(themodel->Value(i));
	}
}


void  IGESControl_ShareFlags::Evaluate
(const Interface_GeneralLib& lib, const Handle(Interface_GTool)& gtool)
{
	Standard_Boolean patool = gtool.IsNull();
	Standard_Integer nb = themodel->NbEntities();
	if (nb == 0) return;
	theroots = new TColStd_HSequenceOfTransient();
	Standard_Integer i; // svv Jan11 2000 : porting on DEC
	for (i = 1; i <= nb; i++) {

		//    ATTENTION : Si Entite non chargee donc illisible, basculer sur son
		//    "Contenu" equivalent
		Handle(Standard_Transient) ent = themodel->Value(i);
		Handle(IGESData_IGESEntity) igesent = Handle(IGESData_IGESEntity)::DownCast(ent);
		if (themodel->IsRedefinedContent(i)) ent = themodel->ReportEntity(i)->Content();
		Standard_Integer grpFlag = 0;
		if (!igesent.IsNull()) {
			Standard_Integer typnum = igesent->TypeNumber();
			Standard_Integer fornum = igesent->FormNumber();
			if ((typnum == 402 && (fornum == 1 || fornum == 7 ||
				fornum == 14 || fornum == 15))) {
				grpFlag = 1;
			}
		}
		//    Resultat obtenu via GeneralLib
		Interface_EntityIterator iter;
		Handle(Interface_GeneralModule) module;
		Standard_Integer CN;
		if (patool) {
			if (!grpFlag) {
				if (lib.Select(ent, module, CN))  module->FillShared(themodel, CN, ent, iter);
			}
		}
		else {
			if (!grpFlag) {
				if (gtool->Select(ent, module, CN))  module->FillShared(themodel, CN, ent, iter);
			}
		}

		//    Entites partagees par <ent> : reste a noter chacune comme "Shared"
		for (iter.Start(); iter.More(); iter.Next()) {
			Standard_Integer num = themodel->Number(iter.Value());
			theflags.SetTrue(num);    // Et Voila
		}
	}
	for (i = 1; i <= nb; i++) {
		if (!theflags.Value(i)) theroots->Append(themodel->Value(i));
	}
}

IGESControl_ShareFlags::~IGESControl_ShareFlags()
{
}
