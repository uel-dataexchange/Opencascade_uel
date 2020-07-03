// Created on: 2015-10-29
// Created by: Irina KRYLOVA
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

#ifndef _RWStepVisual_RWAnnotationPlane_HeaderFile
#define _RWStepVisual_RWAnnotationPlane_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Handle.hxx>

#include <Standard_Integer.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_AnnotationPlane.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>

//! Read & Write Module for AnnotationPlane
class RWStepVisual_RWAnnotationPlane 
{
public:

  DEFINE_STANDARD_ALLOC
  
  Standard_EXPORT RWStepVisual_RWAnnotationPlane();
  
  Standard_EXPORT void ReadStep (const Handle(StepData_StepReaderData)& data, const Standard_Integer num, Handle(Interface_Check)& ach, const Handle(StepVisual_AnnotationPlane)& ent) const;
  
  Standard_EXPORT void WriteStep (StepData_StepWriter& SW, const Handle(StepVisual_AnnotationPlane)& ent) const;
  
  Standard_EXPORT void Share (const Handle(StepVisual_AnnotationPlane)& ent, Interface_EntityIterator& iter) const;
};
#endif // _RWStepVisual_RWAnnotationPlane_HeaderFile
