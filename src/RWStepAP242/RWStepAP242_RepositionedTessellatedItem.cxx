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


#include <Interface_Check.hxx>
#include <Interface_EntityIterator.hxx>
#include <RWStepAP242_RepositionedTessellatedItem.hxx>
#include <StepData_StepReaderData.hxx>
#include <StepData_StepWriter.hxx>
#include <StepGeom_Axis2Placement.hxx>
#include <StepAP242_RepositionedTessellatedItem.hxx>

RWStepAP242_RepositionedTessellatedItem::RWStepAP242_RepositionedTessellatedItem () {}

void RWStepAP242_RepositionedTessellatedItem::ReadStep
	(const Handle(StepData_StepReaderData)& data,
	 const Standard_Integer num,
	 Handle(Interface_Check)& ach,
	 const Handle(StepAP242_RepositionedTessellatedItem)& ent) const
{


	// --- Number of Parameter Control ---

	if (!data->CheckNbParams(num,1,ach,"repositioned_tessellated_item has not 1 parameter(s)")) return;
	// --- own field : placement ---
	Handle(StepGeom_Axis2Placement3d) aPlacement;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat3 =` not needed
	data->ReadEntity(num, 1, "placement", ach, STANDARD_TYPE(StepGeom_Axis2Placement3d), aPlacement);

	ent->Init(aPlacement);
}


void RWStepAP242_RepositionedTessellatedItem::WriteStep
	(StepData_StepWriter& SW,
	 const Handle(StepAP242_RepositionedTessellatedItem)& ent) const
{
	SW.StartEntity("REPOSITIONED_TESSELLATED_ITEM");
	SW.Send(ent->Item());
	SW.EndEntity();
}


void RWStepAP242_RepositionedTessellatedItem::Share(const Handle(StepAP242_RepositionedTessellatedItem)& ent, Interface_EntityIterator& iter) const
{

	iter.GetOneItem(ent->Item());
}

