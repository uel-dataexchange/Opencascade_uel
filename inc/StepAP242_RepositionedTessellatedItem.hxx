// Created on: 1999-03-10
// Created by: data exchange team
// Copyright (c) 1999 Matra Datavision
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

#ifndef _StepAP242_RepositionedTessellatedItem_HeaderFile
#define _StepAP242_RepositionedTessellatedItem_HeaderFile

#include <Standard.hxx>
#include <Standard_Type.hxx>

#include <StepGeom_Axis2Placement3d.hxx>
#include <StepVisual_PresentedItem.hxx>
#include <Standard_Integer.hxx>


DEFINE_STANDARD_HANDLE(StepAP242_RepositionedTessellatedItem, StepVisual_PresentedItem)


class StepAP242_RepositionedTessellatedItem : public StepVisual_PresentedItem
{

public:

  
  //! Returns a AutoDesignPresentedItem
  Standard_EXPORT StepAP242_RepositionedTessellatedItem();
  
  Standard_EXPORT void Init(const Handle(StepGeom_Axis2Placement3d)& aItem);
  
  Standard_EXPORT void SetItem(const Handle(StepGeom_Axis2Placement3d)& aItem);
  
  Standard_EXPORT Handle(StepGeom_Axis2Placement3d) Item() const;
  




  DEFINE_STANDARD_RTTIEXT(StepAP242_RepositionedTessellatedItem,StepVisual_PresentedItem)

protected:




private:


	Handle(StepGeom_Axis2Placement3d) item;


};







#endif // _StepAP242_RepositionedTessellatedItem_HeaderFile
