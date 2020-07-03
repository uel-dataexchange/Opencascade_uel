
#include <RWStepShape_RWShellBasedSurfaceModel.ixx>
#include <StepShape_HArray1OfShell.hxx>
#include <StepShape_Shell.hxx>


#include <Interface_EntityIterator.hxx>


#include <StepShape_ShellBasedSurfaceModel.hxx>


RWStepShape_RWShellBasedSurfaceModel::RWStepShape_RWShellBasedSurfaceModel () {}

void RWStepShape_RWShellBasedSurfaceModel::ReadStep
	(const Handle(StepData_StepReaderData)& data,
	 const Standard_Integer num,
	 Handle(Interface_Check)& ach,
	 const Handle(StepShape_ShellBasedSurfaceModel)& ent) const
{


	// --- Number of Parameter Control ---

	if (!data->CheckNbParams(num,2,ach,"shell_based_surface_model")) return;

	// --- inherited field : name ---

	Handle(TCollection_HAsciiString) aName;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat1 =` not needed
	data->ReadString (num,1,"name",ach,aName);

	// --- own field : sbsmBoundary ---

	Handle(StepShape_HArray1OfShell) aSbsmBoundary;
	StepShape_Shell aSbsmBoundaryItem;
	Standard_Integer nsub2;
	if (data->ReadSubList (num,2,"sbsm_boundary",ach,nsub2)) {
	  Standard_Integer nb2 = data->NbParams(nsub2);
	  aSbsmBoundary = new StepShape_HArray1OfShell (1, nb2);
	  for (Standard_Integer i2 = 1; i2 <= nb2; i2 ++) {
	    //szv#4:S4163:12Mar99 `Standard_Boolean stat2 =` not needed
	    if (data->ReadEntity (nsub2,i2,"sbsm_boundary",ach,aSbsmBoundaryItem))
	      aSbsmBoundary->SetValue(i2,aSbsmBoundaryItem);
	  }
	}

	//--- Initialisation of the read entity ---


	ent->Init(aName, aSbsmBoundary);
}


void RWStepShape_RWShellBasedSurfaceModel::WriteStep
	(StepData_StepWriter& SW,
	 const Handle(StepShape_ShellBasedSurfaceModel)& ent) const
{

	// --- inherited field name ---

	SW.Send(ent->Name());

	// --- own field : sbsmBoundary ---

	SW.OpenSub();
	for (Standard_Integer i2 = 1;  i2 <= ent->NbSbsmBoundary();  i2 ++) {
	  SW.Send(ent->SbsmBoundaryValue(i2).Value());
	}
	SW.CloseSub();
}


void RWStepShape_RWShellBasedSurfaceModel::Share(const Handle(StepShape_ShellBasedSurfaceModel)& ent, Interface_EntityIterator& iter) const
{

	Standard_Integer nbElem1 = ent->NbSbsmBoundary();
	for (Standard_Integer is1=1; is1<=nbElem1; is1 ++) {
	  iter.GetOneItem(ent->SbsmBoundaryValue(is1).Value());
	}

}

