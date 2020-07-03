// Created on: 2015-09-03
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

#ifndef _StepRepr_RealRepresentationItem _HeaderFile
#define _StepRepr_RealRepresentationItem _HeaderFile

#include <Standard.hxx>
#include <Standard_Type.hxx>

#include <StepRepr_RepresentationItem.hxx>
class TCollection_HAsciiString;


class StepRepr_RealRepresentationItem ;
DEFINE_STANDARD_HANDLE(StepRepr_RealRepresentationItem , StepRepr_RepresentationItem)


class StepRepr_RealRepresentationItem  : public StepRepr_RepresentationItem
{

public:

  
  //! Returns a IntegerRepresentationItem
  Standard_EXPORT StepRepr_RealRepresentationItem ();
  
  Standard_EXPORT void Init (const Handle(TCollection_HAsciiString)& theName, const Standard_Real theValue);
  
  inline void SetValue(const Standard_Real theValue)
  {
    value = theValue;
  }
  
  inline Standard_Real Value() const 
  {
    return value;
  }

  DEFINE_STANDARD_RTTIEXT(StepRepr_RealRepresentationItem ,StepRepr_RepresentationItem)

private:
  Standard_Real value;
};
#endif // _StepRepr_RealRepresentationItem _HeaderFile
