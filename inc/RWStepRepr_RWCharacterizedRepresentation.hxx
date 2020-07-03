// Created on: 2016-08-25
// Created by: Irina KRYLOVA
// Copyright (c) 2016 OPEN CASCADE SAS
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

#ifndef _RWStepRepr_RWCharacterizedRepresentation_HeaderFile
#define _RWStepRepr_RWCharacterizedRepresentation_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Handle.hxx>

#include <Standard_Integer.hxx>

#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepRepr_CharacterizedRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>

class StepData_StepReaderData;
class Interface_Check;
class StepRepr_CharacterizedRepresentation;
class StepData_StepWriter;
class Interface_EntityIterator;


//! Read & Write Module for CharacterizedRepresentation
class RWStepRepr_RWCharacterizedRepresentation 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT RWStepRepr_RWCharacterizedRepresentation();
  
  Standard_EXPORT void ReadStep (const Handle(StepData_StepReaderData)& data, const Standard_Integer num, Handle(Interface_Check)& ach, const Handle(StepRepr_CharacterizedRepresentation)& ent) const;
  
  Standard_EXPORT void WriteStep (StepData_StepWriter& SW, const Handle(StepRepr_CharacterizedRepresentation)& ent) const;
  
  Standard_EXPORT void Share (const Handle(StepRepr_CharacterizedRepresentation)& ent, Interface_EntityIterator& iter) const;
};

#endif // _RWStepRepr_RWCharacterizedRepresentation_HeaderFile
