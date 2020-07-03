
#include <Interface_Check.hxx>
#include <Interface_EntityIterator.hxx>
#include <RWStepAP242_TessellatedShell.hxx>
#include <StepData_StepReaderData.hxx>
#include <StepData_StepWriter.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepRepr_HArray1OfRepresentationItem.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <RWStepAP242_TessellatedShapeRepresentation.hxx>



RWStepAP242_TessellatedShapeRepresentation::RWStepAP242_TessellatedShapeRepresentation () {}

void RWStepAP242_TessellatedShapeRepresentation::ReadStep
	(const Handle(StepData_StepReaderData)& data,
	 const Standard_Integer num,
	 Handle(Interface_Check)& ach,
	 const Handle(StepAP242_TessellatedShapeRepresentation)& ent) const
{


	// --- Number of Parameter Control ---

	if (!data->CheckNbParams(num,3,ach,"advanced_brep_shape_representation")) return;

	// --- inherited field : name ---

	Handle(TCollection_HAsciiString) aName;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat1 =` not needed
	data->ReadString (num,1,"name",ach,aName);

	// --- inherited field : items ---

	Handle(StepRepr_HArray1OfRepresentationItem) aItems;
	Handle(StepRepr_RepresentationItem) anent2;
	Standard_Integer nsub2;
	if (data->ReadSubList (num,2,"items",ach,nsub2)) {
	  Standard_Integer nb2 = data->NbParams(nsub2);
	  aItems = new StepRepr_HArray1OfRepresentationItem (1, nb2);
	  for (Standard_Integer i2 = 1; i2 <= nb2; i2 ++) {
	    //szv#4:S4163:12Mar99 `Standard_Boolean stat2 =` not needed
	    if (data->ReadEntity (nsub2, i2,"representation_item", ach,
				  STANDARD_TYPE(StepRepr_RepresentationItem), anent2))
	      aItems->SetValue(i2, anent2);
	  }
	}

	// --- inherited field : contextOfItems ---

	Handle(StepRepr_RepresentationContext) aContextOfItems;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat3 =` not needed
	data->ReadEntity(num, 3,"context_of_items", ach, STANDARD_TYPE(StepRepr_RepresentationContext), aContextOfItems);

	//--- Initialisation of the read entity ---


	ent->Init(aName, aItems, aContextOfItems);
}


void RWStepAP242_TessellatedShapeRepresentation::WriteStep
	(StepData_StepWriter& SW,
	 const Handle(StepAP242_TessellatedShapeRepresentation)& ent) const
{

	// --- inherited field name ---

	SW.Send(ent->Name());

	// --- inherited field items ---

	SW.OpenSub();
	for (Standard_Integer i2 = 1;  i2 <= ent->NbItems();  i2 ++) {
	  SW.Send(ent->ItemsValue(i2));
	}
	SW.CloseSub();

	// --- inherited field contextOfItems ---

	SW.Send(ent->ContextOfItems());
}


void RWStepAP242_TessellatedShapeRepresentation::Share(const Handle(StepAP242_TessellatedShapeRepresentation)& ent, Interface_EntityIterator& iter) const
{

	Standard_Integer nbElem1 = ent->NbItems();
	for (Standard_Integer is1=1; is1<=nbElem1; is1 ++) {
	  iter.GetOneItem(ent->ItemsValue(is1));
	}



	iter.GetOneItem(ent->ContextOfItems());
}

