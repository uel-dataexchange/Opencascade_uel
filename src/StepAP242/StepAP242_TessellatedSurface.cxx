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
#include <StepAP242_TessellatedSurface.hxx>
#include <StepVisual_TessellatedItem.hxx>


IMPLEMENT_STANDARD_RTTIEXT_1(StepAP242_TessellatedSurface,StepVisual_TessellatedItem)

StepAP242_TessellatedSurface::StepAP242_TessellatedSurface ()  {}

void StepAP242_TessellatedSurface::Init(const Handle(TCollection_HAsciiString)& theName,
  const Handle(StepVisual_CoordinatesList)& theCoordList, const Standard_Integer thePnMax,
  const NCollection_Handle<StepVisual_VectorOfHSequenceOfReal>& theNormals, const Handle(StepShape_Face)& theFace)
{
  StepRepr_RepresentationItem::Init(theName);
  myCoordList = theCoordList;
  myNormals = theNormals;
  myPnMax = thePnMax;
  myFace = theFace;
}


NCollection_Handle<StepVisual_VectorOfHSequenceOfReal> StepAP242_TessellatedSurface::Normals() const
{
  return myNormals;
}

Handle(StepVisual_CoordinatesList) StepAP242_TessellatedSurface::CoordList() const
{
  return myCoordList;
}

Standard_Integer StepAP242_TessellatedSurface::PnMax() const
{
	return myPnMax;
}

Handle(StepShape_Face) StepAP242_TessellatedSurface::Face() const
{
	return myFace;
}



