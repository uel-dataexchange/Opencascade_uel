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
#include <StepAP242_ComplexTriangulatedSurface.hxx>
#include <StepAP242_TessellatedSurface.hxx>


IMPLEMENT_STANDARD_RTTIEXT_1(StepAP242_ComplexTriangulatedSurface,StepAP242_TessellatedSurface)

StepAP242_ComplexTriangulatedSurface::StepAP242_ComplexTriangulatedSurface ()  {}

void StepAP242_ComplexTriangulatedSurface::Init(const Handle(TCollection_HAsciiString)& theName,
  const Handle(StepVisual_CoordinatesList)& theCoordList, const Standard_Integer thePnMax,
  const NCollection_Handle<StepVisual_VectorOfHSequenceOfReal>& theNormals,
  const Handle(StepShape_Face)& theFace,
  const Handle(TColStd_HSequenceOfInteger)& thePnIndex,
  const NCollection_Handle<StepVisual_VectorOfHSequenceOfInteger>& theTriangleStrips,
  const NCollection_Handle<StepVisual_VectorOfHSequenceOfInteger>& theTriangleFans)
{
	StepAP242_TessellatedSurface::Init(theName, theCoordList, thePnMax, theNormals, theFace);
	myPnIndex = thePnIndex;
	myTriangleStrips = theTriangleStrips;
	myTriangleFans = theTriangleFans;
}

Handle(TColStd_HSequenceOfInteger) StepAP242_ComplexTriangulatedSurface::PnIndex() const
{
	return myPnIndex;
}

NCollection_Handle<StepVisual_VectorOfHSequenceOfInteger> StepAP242_ComplexTriangulatedSurface::TriangleStrips() const
{
	return myTriangleStrips;
}

NCollection_Handle<StepVisual_VectorOfHSequenceOfInteger> StepAP242_ComplexTriangulatedSurface::TriangleFans() const
{
	return myTriangleFans;
}
