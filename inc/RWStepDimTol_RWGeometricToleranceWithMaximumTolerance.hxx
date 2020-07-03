// Created on: 2015-07-07
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

#ifndef _RWStepDimTol_RWGeometricToleranceWithMaximumTolerance_HeaderFile
#define _RWStepDimTol_RWGeometricToleranceWithMaximumTolerance_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Handle.hxx>

#include <Standard_Integer.hxx>

#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepDimTol_GeometricToleranceWithMaximumTolerance.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>


//! Read & Write tool for GeometricToleranceWithMaximumTolerance
class RWStepDimTol_RWGeometricToleranceWithMaximumTolerance 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor
  Standard_EXPORT RWStepDimTol_RWGeometricToleranceWithMaximumTolerance();
  
  //! Reads GeometricToleranceWithMaximumTolerance
  Standard_EXPORT   void ReadStep (const Handle(StepData_StepReaderData)& data, const Standard_Integer num, Handle(Interface_Check)& ach, const Handle(StepDimTol_GeometricToleranceWithMaximumTolerance)& ent)  const;
  
  //! Writes GeometricToleranceWithMaximumTolerance
  Standard_EXPORT   void WriteStep (StepData_StepWriter& SW, const Handle(StepDimTol_GeometricToleranceWithMaximumTolerance)& ent)  const;
  
  //! Fills data for graph (shared items)
  Standard_EXPORT   void Share (const Handle(StepDimTol_GeometricToleranceWithMaximumTolerance)& ent, Interface_EntityIterator& iter)  const;
};
#endif // _RWStepDimTol_RWGeometricToleranceWithMaximumTolerance_HeaderFile