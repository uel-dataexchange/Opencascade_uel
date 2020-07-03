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

#ifndef _StepVisual_ComplexTriangulatedTessellatedSurfaceSet_HeaderFile
#define _StepVisual_ComplexTriangulatedTessellatedSurfaceSet_HeaderFile
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Handle.hxx>
#include <StepVisual_CoordinatesList.hxx>
#include <StepVisual_TessellatedItem.hxx>

#include <NCollection_Vector.hxx>
#include <NCollection_Handle.hxx>
#include <StepVisual_CoordinatesList.hxx>
#include <TColStd_HSequenceOfInteger.hxx>
class Standard_Transient;


typedef NCollection_Vector<Handle(TColStd_HSequenceOfInteger)> StepVisual_VectorOfHSequenceOfInteger;

DEFINE_STANDARD_HANDLE(StepVisual_ComplexTriangulatedTessellatedSurfaceSet, StepVisual_TessellatedItem);


class StepVisual_ComplexTriangulatedTessellatedSurfaceSet  : public StepVisual_TessellatedItem
{
public:

  DEFINE_STANDARD_ALLOC
  
  //! Returns a DraughtingCalloutElement select type
  Standard_EXPORT StepVisual_ComplexTriangulatedTessellatedSurfaceSet();

  Standard_EXPORT void Init(const Handle(TCollection_HAsciiString)& theName, const Handle(StepVisual_CoordinatesList)& theCoordList,
    const NCollection_Handle<StepVisual_VectorOfHSequenceOfInteger>& theSurfaces, const Handle(TColStd_HSequenceOfInteger) theNormals);

  Standard_EXPORT Handle(StepVisual_CoordinatesList) CoordList() const;
  Standard_EXPORT NCollection_Handle<StepVisual_VectorOfHSequenceOfInteger> Surfaces() const;
  Standard_EXPORT Handle(TColStd_HSequenceOfInteger) Normals() const;  

private:

  Handle(StepVisual_CoordinatesList) myCoordList;
  NCollection_Handle<StepVisual_VectorOfHSequenceOfInteger> mySurfaces;
  Handle(TColStd_HSequenceOfInteger) myNormals;
  

public :
  DEFINE_STANDARD_RTTIEXT(StepVisual_ComplexTriangulatedTessellatedSurfaceSet,StepVisual_TessellatedItem);
};
#endif // StepVisual_TessellatedCurveSet
