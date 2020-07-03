// Created on: 2000-01-13
// Created by: Andrey BETENEV
// Copyright (c) 2000-2014 OPEN CASCADE SAS
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

#ifndef _RWStepVisual_RWDraughtingModel_HeaderFile
#define _RWStepVisual_RWDraughtingModel_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Handle.hxx>

#include <Standard_Integer.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepVisual_DraughtingModel.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>


//! Read & Write tool for DraughtingModel
class RWStepVisual_RWDraughtingModel 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor
  Standard_EXPORT RWStepVisual_RWDraughtingModel();
  
  //! Reads DraughtingModel
  Standard_EXPORT void ReadStep (const Handle(StepData_StepReaderData)& data, const Standard_Integer num, Handle(Interface_Check)& ach, const Handle(StepVisual_DraughtingModel)& ent) const;
  
  //! Writes DraughtingModel
  Standard_EXPORT void WriteStep (StepData_StepWriter& SW, const Handle(StepVisual_DraughtingModel)& ent) const;
  
  //! Fills data for graph (shared items)
  Standard_EXPORT void Share (const Handle(StepVisual_DraughtingModel)& ent, Interface_EntityIterator& iter) const;




protected:





private:





};







#endif // _RWStepVisual_RWDraughtingModel_HeaderFile
