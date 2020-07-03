// Created on: 1995-12-04
// Created by: EXPRESS->CDL V0.2 Translator
// Copyright (c) 1995-1999 Matra Datavision
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

#ifndef _RWStepVisual_RWTextStyle_HeaderFile
#define _RWStepVisual_RWTextStyle_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Handle.hxx>

#include <Standard_Integer.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_TextStyle.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>


//! Read & Write Module for TextStyle
class RWStepVisual_RWTextStyle 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT RWStepVisual_RWTextStyle();
  
  Standard_EXPORT void ReadStep (const Handle(StepData_StepReaderData)& data, const Standard_Integer num, Handle(Interface_Check)& ach, const Handle(StepVisual_TextStyle)& ent) const;
  
  Standard_EXPORT void WriteStep (StepData_StepWriter& SW, const Handle(StepVisual_TextStyle)& ent) const;
  
  Standard_EXPORT void Share (const Handle(StepVisual_TextStyle)& ent, Interface_EntityIterator& iter) const;




protected:





private:





};







#endif // _RWStepVisual_RWTextStyle_HeaderFile
