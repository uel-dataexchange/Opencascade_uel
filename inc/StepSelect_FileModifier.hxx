// Created on: 1994-12-22
// Created by: Christian CAILLET
// Copyright (c) 1994-1999 Matra Datavision
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

#ifndef _StepSelect_FileModifier_HeaderFile
#define _StepSelect_FileModifier_HeaderFile

#include <Standard.hxx>
#include <Standard_Type.hxx>

#include <IFSelect_GeneralModifier.hxx>
#include <StepData_StepWriter.hxx>
#include <IFSelect_ContextWrite.hxx>


DEFINE_STANDARD_HANDLE(StepSelect_FileModifier, IFSelect_GeneralModifier)


class StepSelect_FileModifier : public IFSelect_GeneralModifier
{

public:

  
  //! Perform the action specific to each class of File Modifier
  //! <ctx> is the ContextWrite, which brings : the model, the
  //! protocol, the file name, plus the object AppliedModifiers
  //! (not used here) and the CheckList
  //! Remark that the model has to be casted for specific access
  //!
  //! <writer> is the Writer and is specific to each norm, on which
  //! to act
  Standard_EXPORT virtual void Perform (IFSelect_ContextWrite& ctx, StepData_StepWriter& writer) const = 0;




  DEFINE_STANDARD_RTTI_INLINE(StepSelect_FileModifier,IFSelect_GeneralModifier)

protected:

  
  //! Sets a File Modifier to keep the graph of dependences
  //! unchanges (because it works on the model already produced)
  Standard_EXPORT StepSelect_FileModifier();



private:




};







#endif // _StepSelect_FileModifier_HeaderFile
