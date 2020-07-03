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

#ifndef _StepAP242_RepositionedTessellatedItemAndRepresentationItemAndTessellatedGeometricSet_HeaderFile
#define _StepAP242_RepositionedTessellatedItemAndRepresentationItemAndTessellatedGeometricSet_HeaderFile

#include <Standard.hxx>
#include <Standard_Type.hxx>

#include <StepRepr_RepresentationItem.hxx>
#include <StepAP242_RepositionedTessellatedItem.hxx>
#include <StepVisual_TessellatedGeometricSet.hxx>

class StepAP242_RepositionedTessellatedItemAndRepresentationItemAndTessellatedGeometricSet;
DEFINE_STANDARD_HANDLE(StepAP242_RepositionedTessellatedItemAndRepresentationItemAndTessellatedGeometricSet, StepRepr_RepresentationItem)
//! Added for Dimensional Tolerances
//! Complex STEP entity AnnotationCurveOccurrence & AnnotationOccurrence & GeometricRepresentationItem & RepresentationItem & StyledItem
class StepAP242_RepositionedTessellatedItemAndRepresentationItemAndTessellatedGeometricSet : public StepRepr_RepresentationItem
{

public:
  
  Standard_EXPORT StepAP242_RepositionedTessellatedItemAndRepresentationItemAndTessellatedGeometricSet();

  DEFINE_STANDARD_RTTIEXT(StepAP242_RepositionedTessellatedItemAndRepresentationItemAndTessellatedGeometricSet, StepVisual_StyledItem)
	
  Standard_EXPORT    void Init(const Handle(TCollection_HAsciiString)& aName, const Handle(StepAP242_RepositionedTessellatedItem)& arTesslatedItem, const Handle(StepVisual_TessellatedGeometricSet)& aGeomtricSet){
	  SetName(aName);
	  SetItem(arTesslatedItem);
	  SetGeomSet(aGeomtricSet);
  };
  Standard_EXPORT    void SetItem(const Handle(StepAP242_RepositionedTessellatedItem)& arTesslatedItem) {
	  repositionedTessellatedItem = arTesslatedItem;
  };

  Standard_EXPORT	 Handle(StepAP242_RepositionedTessellatedItem) Item() {
	  return repositionedTessellatedItem;
  }; 

  Standard_EXPORT   void SetGeomSet(const Handle(StepVisual_TessellatedGeometricSet)& aGeomtricSet) {
	  tesselatedGeomSet = aGeomtricSet;
  };

  Standard_EXPORT Handle(StepVisual_TessellatedGeometricSet) GetGeomSet() {
	  return tesselatedGeomSet;
  };
private:
	Handle(StepAP242_RepositionedTessellatedItem)	repositionedTessellatedItem;
	Handle(StepVisual_TessellatedGeometricSet)		tesselatedGeomSet;

};
#endif // _StepAP242_RepositionedTessellatedItemAndRepresentationItemAndTessellatedGeometricSet_HeaderFile
