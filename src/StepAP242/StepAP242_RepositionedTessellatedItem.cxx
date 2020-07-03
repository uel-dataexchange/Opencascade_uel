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


#include <Standard_Type.hxx>
#include <StepAP242_RepositionedTessellatedItem.hxx>

IMPLEMENT_STANDARD_RTTIEXT_1(StepAP242_RepositionedTessellatedItem,StepVisual_PresentedItem)

StepAP242_RepositionedTessellatedItem::StepAP242_RepositionedTessellatedItem ()  {}

void StepAP242_RepositionedTessellatedItem::Init(
	const Handle(StepGeom_Axis2Placement3d)& aItem)
{
  // --- classe own fields ---
  item = aItem;
}


void StepAP242_RepositionedTessellatedItem::SetItem(const Handle(StepGeom_Axis2Placement3d)& aItem)
{
  item = aItem;
}

Handle(StepGeom_Axis2Placement3d) StepAP242_RepositionedTessellatedItem::Item() const
{
  return item;
}

