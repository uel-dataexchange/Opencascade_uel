// Created on: 2002-04-23
// Created by: Alexander KARTOMIN
// Copyright (c) 2002-2014 OPEN CASCADE SAS
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

#ifndef NCollection_TListIterator1_HeaderFile
#define NCollection_TListIterator1_HeaderFile

#include <NCollection_BaseList1.hxx>
#include <NCollection_TListNode1.hxx>

/**
 * Purpose:     This Iterator class iterates on BaseList of TListNode and is 
 *              instantiated in List/Set/Queue/Stack
 * Remark:      TListIterator is internal class
 */
template <class TheItemType> class NCollection_TListIterator1 
  : public NCollection_BaseList1::Iterator
{
 public:
  //! Empty constructor - for later Init
  NCollection_TListIterator1  (void) :
    NCollection_BaseList1::Iterator () {}
  //! Constructor with initialisation
  NCollection_TListIterator1  (const NCollection_BaseList1& theList) :
    NCollection_BaseList1::Iterator (theList) {}
  //! Check end
  Standard_Boolean More (void) const
  { return (myCurrent!=NULL); }
  //! Make step
  void Next (void)
  {
    myPrevious = myCurrent;
    myCurrent = myCurrent->Next();
  }

  //! Constant Value access
  const TheItemType& Value (void) const
  { return ((const NCollection_TListNode1<TheItemType>*) myCurrent)->Value(); }

  //! Non-const Value access
  TheItemType& Value (void)
  { return ((NCollection_TListNode1<TheItemType>*) myCurrent)->ChangeValue(); }

  //! Non-const Value access
  TheItemType& ChangeValue (void) const
  { return ((NCollection_TListNode1<TheItemType> *)myCurrent)->ChangeValue(); }
};

#endif
