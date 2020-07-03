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
#include <StepAP242_TessellatedSurfaceSet.hxx>
#include <StepVisual_TessellatedItem.hxx>


IMPLEMENT_STANDARD_RTTIEXT_1(StepAP242_TessellatedSurfaceSet,StepVisual_TessellatedItem)

StepAP242_TessellatedSurfaceSet::StepAP242_TessellatedSurfaceSet ()  {}

void StepAP242_TessellatedSurfaceSet::Init(const Handle(TCollection_HAsciiString)& theName,
  const Handle(StepVisual_CoordinatesList)& theCoordList, const Standard_Integer thePnMax,
  const NCollection_Handle<StepVisual_VectorOfHSequenceOfReal>& theNormals)
{
  StepRepr_RepresentationItem::Init(theName);
  myCoordList = theCoordList;
  myNormals = theNormals;
  myPnMax = thePnMax;
  
}


NCollection_Handle<StepVisual_VectorOfHSequenceOfReal> StepAP242_TessellatedSurfaceSet::Normals() const
{
  return myNormals;
}

Handle(StepVisual_CoordinatesList) StepAP242_TessellatedSurfaceSet::CoordList() const
{
  return myCoordList;
}

Standard_Integer StepAP242_TessellatedSurfaceSet::PnMax() const
{
	return myPnMax;
}
