// Created on: 2017-02-06
// Created by: Irina KRYLOVA
// Copyright (c) 2017 OPEN CASCADE SAS
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
#include <RWStepAP242_RepositionedTessellatedItemAndRepresentationItemAndTessellatedGeometricSet.hxx>
#include <StepData_StepReaderData.hxx>
#include <StepData_StepWriter.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepVisual_HArray1OfPresentationStyleAssignment.hxx>
#include <StepVisual_PresentationStyleAssignment.hxx>
#include <StepAP242_RepositionedTessellatedItemAndRepresentationItemAndTessellatedGeometricSet.hxx>
#include <RWStepAP242_RepositionedTessellatedItem.hxx>

//=======================================================================
//function : RWStepAP242_RepositionedTessellatedItemAndRepresentationItemAndTessellatedGeometricSet
//purpose  : 
//=======================================================================
RWStepAP242_RepositionedTessellatedItemAndRepresentationItemAndTessellatedGeometricSet::
  RWStepAP242_RepositionedTessellatedItemAndRepresentationItemAndTessellatedGeometricSet () {}

//=======================================================================
//function : ReadStep
//purpose  : 
//=======================================================================
void RWStepAP242_RepositionedTessellatedItemAndRepresentationItemAndTessellatedGeometricSet::ReadStep
(const Handle(StepData_StepReaderData)& data,
const Standard_Integer num0,
Handle(Interface_Check)& ach,
const Handle(StepAP242_RepositionedTessellatedItemAndRepresentationItemAndTessellatedGeometricSet)& ent) const
{
  Standard_Integer num = 0;
  data->NamedForComplex("GEOMETRIC_REPRESENTATION_ITEM", num0, num, ach);

  data->NamedForComplex("REPOSITIONED_TESSELLATED_ITEM", num0, num, ach);
  // Inherited field : item
  Handle(StepGeom_Axis2Placement3d) postion;
  data->ReadEntity(num, 1, "RepositionedTessellatedItem", ach, STANDARD_TYPE(StepGeom_Axis2Placement3d), postion);
  Handle(StepAP242_RepositionedTessellatedItem) aItem = new StepAP242_RepositionedTessellatedItem();
  aItem->Init(postion);

  // Inherited field : styles
  data->NamedForComplex("REPRESENTATION_ITEM", num0, num, ach);
  // Inherited field : name 
  Handle(TCollection_HAsciiString) aName;
  data->ReadString(num, 1, "name", ach, aName);
  
  data->NamedForComplex("TESSELLATED_GEOMETRIC_SET", num0, num, ach);
  NCollection_Handle<StepVisual_Array1OfTessellatedItem> anItems;
  Standard_Integer nsub2;
  if (data->ReadSubList(num, 1, "items", ach, nsub2)) {
	  Standard_Integer nb2 = data->NbParams(nsub2);
	  anItems = new StepVisual_Array1OfTessellatedItem(1, nb2);
	  for (Standard_Integer i2 = 1; i2 <= nb2; i2++) {
		  Handle(StepVisual_TessellatedItem) anItem;// = new StepVisual_TesselatedItem;
		  if (data->ReadEntity(nsub2, i2, "item", ach, STANDARD_TYPE(StepVisual_TessellatedItem), anItem))
			  anItems->SetValue(i2, anItem);
	  }
  }
  Handle(StepVisual_TessellatedGeometricSet) crvSet = new StepVisual_TessellatedGeometricSet();
  crvSet->Init(aName, anItems);
  // Initialization of the read entity
  ent->Init(aName, aItem, crvSet);
}

//=======================================================================
//function : WriteStep
//purpose  : 
//=======================================================================
void RWStepAP242_RepositionedTessellatedItemAndRepresentationItemAndTessellatedGeometricSet::WriteStep
(StepData_StepWriter& SW,
const Handle(StepAP242_RepositionedTessellatedItemAndRepresentationItemAndTessellatedGeometricSet)& ent) const
{

  SW.StartEntity("GEOMETRIC_REPRESENTATION_ITEM");
  // Inherited field : item
  Handle(StepAP242_RepositionedTessellatedItem) aRTI = ent->Item();
  SW.StartEntity("REPOSITIONED_TESSELLATED_ITEM");
  SW.Send(aRTI->Item());
  SW.StartEntity("REPRESENTATION_ITEM");
  //Inherited field : name
  SW.Send(ent->Name());
  SW.StartEntity("TESSELLATED_GEOMETRIC_SET");
  SW.OpenSub();
  for (Standard_Integer ii = 1; ii <= ent->GetGeomSet()->Items()->Size(); ii++) {
	  SW.Send(ent->GetGeomSet()->Items()->Value(ii));
  }
  SW.CloseSub();
  SW.StartEntity("TESSELLATED_ITEM");
}

//=======================================================================
//function : Share
//purpose  : 
//=======================================================================
void RWStepAP242_RepositionedTessellatedItemAndRepresentationItemAndTessellatedGeometricSet::Share(
  const Handle(StepAP242_RepositionedTessellatedItemAndRepresentationItemAndTessellatedGeometricSet)& ent,
  Interface_EntityIterator& iter) const
{
  iter.GetOneItem(ent->Item()->Item());
  iter.GetOneItem(ent->GetGeomSet());
}
