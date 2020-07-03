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

#ifndef _StepAP242_TessellatedSurface_HeaderFile
#define _StepAP242_TessellatedSurface_HeaderFile
#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Handle.hxx>
#include <StepVisual_CoordinatesList.hxx>
#include <StepVisual_TessellatedItem.hxx>

#include <NCollection_Vector.hxx>
#include <NCollection_Handle.hxx>
#include <StepVisual_CoordinatesList.hxx>
#include <TColStd_HSequenceOfReal.hxx>
#include <StepShape_Face.hxx>
#include <StepShape_Subface.hxx>

class Standard_Transient;


typedef NCollection_Vector<Handle(TColStd_HSequenceOfReal)> StepVisual_VectorOfHSequenceOfReal;

DEFINE_STANDARD_HANDLE(StepAP242_TessellatedSurface, StepVisual_TessellatedItem);


class StepAP242_TessellatedSurface  : public StepVisual_TessellatedItem
{
public:

  DEFINE_STANDARD_ALLOC
  
  //! Returns a DraughtingCalloutElement select type
  Standard_EXPORT StepAP242_TessellatedSurface();

  Standard_EXPORT void Init(const Handle(TCollection_HAsciiString)& theName, const Handle(StepVisual_CoordinatesList)& theCoordList, const Standard_Integer thePnMax,
    const NCollection_Handle<StepVisual_VectorOfHSequenceOfReal>& theNormals, const Handle(StepShape_Face)& theFace);

  Standard_EXPORT Handle(StepVisual_CoordinatesList) CoordList() const;
  Standard_EXPORT NCollection_Handle<StepVisual_VectorOfHSequenceOfReal> Normals() const;
  Standard_EXPORT Standard_Integer PnMax() const;  
  Standard_EXPORT Handle(StepShape_Face) Face() const;

protected:

  Handle(StepVisual_CoordinatesList) myCoordList;
  NCollection_Handle<StepVisual_VectorOfHSequenceOfReal> myNormals;
  Standard_Integer myPnMax;
  Handle(StepShape_Face)	myFace;
  
  

public :
  DEFINE_STANDARD_RTTIEXT(StepAP242_TessellatedSurface,StepVisual_TessellatedItem);
};
#endif // StepAP242_TessellatedSurface
