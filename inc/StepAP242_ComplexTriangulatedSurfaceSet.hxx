// Created on: 2015-10-29
// Created by: Galina Kulikova
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

#ifndef _StepAP242_ComplexTriangulatedSurfaceSet_HeaderFile
#define _StepAP242_ComplexTriangulatedSurfaceSet_HeaderFile
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Handle.hxx>
#include <StepVisual_CoordinatesList.hxx>
#include <StepAP242_TessellatedSurfaceSet.hxx>

#include <NCollection_Vector.hxx>
#include <NCollection_Handle.hxx>
#include <StepVisual_CoordinatesList.hxx>
#include <TColStd_HSequenceOfInteger.hxx>
class Standard_Transient;


typedef NCollection_Vector<Handle(TColStd_HSequenceOfInteger)> StepVisual_VectorOfHSequenceOfInteger;

DEFINE_STANDARD_HANDLE(StepAP242_ComplexTriangulatedSurfaceSet, StepAP242_TessellatedSurfaceSet);


class StepAP242_ComplexTriangulatedSurfaceSet  : public StepAP242_TessellatedSurfaceSet
{
public:

  DEFINE_STANDARD_ALLOC
  
  //! Returns a DraughtingCalloutElement select type
  Standard_EXPORT StepAP242_ComplexTriangulatedSurfaceSet();

  Standard_EXPORT void Init(const Handle(TCollection_HAsciiString)& theName, const Handle(StepVisual_CoordinatesList)& theCoordList,
	const Standard_Integer thePnMax,
    const NCollection_Handle<StepVisual_VectorOfHSequenceOfReal>& theNormals,
	const Handle(TColStd_HSequenceOfInteger)& thePnIndex,
	const NCollection_Handle<StepVisual_VectorOfHSequenceOfInteger>& theTriangleStrips,
	const NCollection_Handle<StepVisual_VectorOfHSequenceOfInteger>& theTriangleFans);

  Standard_EXPORT Handle(TColStd_HSequenceOfInteger) PnIndex() const;
  Standard_EXPORT NCollection_Handle<StepVisual_VectorOfHSequenceOfInteger> TriangleStrips() const;
  Standard_EXPORT NCollection_Handle<StepVisual_VectorOfHSequenceOfInteger> TriangleFans() const;
    

private:

  Handle(TColStd_HSequenceOfInteger) myPnIndex;
  NCollection_Handle<StepVisual_VectorOfHSequenceOfInteger> myTriangleStrips;
  NCollection_Handle<StepVisual_VectorOfHSequenceOfInteger> myTriangleFans;

public :
  DEFINE_STANDARD_RTTIEXT(StepAP242_ComplexTriangulatedSurfaceSet,StepAP242_TessellatedSurfaceSet);
};
#endif // StepAP242_ComplexTriangulatedSurfaceSet
