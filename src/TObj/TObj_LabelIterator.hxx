// File:        TObj_LabelIterator.hxx
// Created:     Tue Nov 23 11:42:23 2004
// Author:      Pavel TELKOV
// Copyright:   Open CASCADE  2007
// The original implementation Copyright: (C) RINA S.p.A

#ifndef TObj_LabelIterator_HeaderFile
#define TObj_LabelIterator_HeaderFile

#include <TObj_Object.hxx>

#include <TDF_Label.hxx>
#include <TDF_ChildIterator.hxx>
#include <TObj_ObjectIterator.hxx>

/**
* This class is a basis for OCAF based iterators.
*/

class TObj_LabelIterator : public TObj_ObjectIterator
{
  
 protected:
  /**
  * Constructor
  */
  
  //! Creates an Empty Iterator
  Standard_EXPORT TObj_LabelIterator();
  
 public:
  /**
  * Constructor
  */
  
  //! Creates an iterator an initialize it by theLabel and recursive flag.
  //! If isRecursive is Standard_True make recursive iterations
  Standard_EXPORT TObj_LabelIterator
                        (const TDF_Label& theLabel,
                         const Standard_Boolean isRecursive = Standard_False);

 public:
  /**
  * Redefined methods
  */
  
  //! Returns True if there is a current Item in the iteration.
  virtual Standard_EXPORT Standard_Boolean More () const
    { return !myNode.IsNull(); }
  
  //! Move to the next Item
  virtual Standard_EXPORT void Next ();
   
  //! Returns the current item
  virtual Standard_EXPORT Handle(TObj_Object) Value () const
    { return myObject; }
  
  //! Returns the label of the current item
  inline const TDF_Label& LabelValue() const
    { return myNode; }
  
 protected:
  /**
  * Iterating methods
  */
  
  //! Shifts iterator to the next object
  virtual Standard_EXPORT void MakeStep() = 0;
  
 protected:
  /**
  * Internal methods
  */
  
  //! Initialize Iterator by the theLabel
  Standard_EXPORT void Init(const TDF_Label& theLabel,
                            const Standard_Boolean isRecursive = Standard_False)
    { myIterator.Initialize(theLabel,isRecursive); }
  
  
 protected:
  /**
  * Fields
  */
  TDF_Label               myNode;     //!< Current node
  TDF_ChildIterator       myIterator; //!< OCAF Child iterator
  Handle(TObj_Object)     myObject;   //!< Current Object
  
 public:
  //! CASCADE RTTI
  DEFINE_STANDARD_RTTI(TObj_LabelIterator)
};

//! Define handle class for TObj_LabelIterator
DEFINE_STANDARD_HANDLE(TObj_LabelIterator,TObj_ObjectIterator)

#endif

#ifdef _MSC_VER
#pragma once
#endif
