// Created on: 2002-04-24
// Created by: Alexander KARTOMIN (akm)
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

#ifndef NCollection_DataMap1_HeaderFile
#define NCollection_DataMap1_HeaderFile

#include <NCollection_BaseMap1.hxx>
#include <NCollection_TListNode1.hxx>
#include <NCollection_StlIterator.hxx>
#include <NCollection_DefaultHasher.hxx>

#include <Standard_TypeMismatch.hxx>
#include <Standard_NoSuchObject.hxx>

/**
* Purpose:     The DataMap is a Map to store keys with associated
*              Items. See Map  from NCollection for  a discussion
*              about the number of buckets.
*
*              The DataMap can be seen as an extended array where
*              the Keys  are the   indices.  For this reason  the
*              operator () is defined on DataMap to fetch an Item
*              from a Key. So the following syntax can be used :
*
*              anItem = aMap(aKey);
*              aMap(aKey) = anItem;
*
*              This analogy has its  limit.   aMap(aKey) = anItem
*              can  be done only  if aKey was previously bound to
*              an item in the map.
*/              

template < class TheKeyType, 
           class TheItemType, 
           class Hasher = NCollection_DefaultHasher<TheKeyType> >
class NCollection_DataMap1 : public NCollection_BaseMap1
{
public:
  //! STL-compliant typedef for key type
  typedef TheKeyType key_type;
  //! STL-compliant typedef for value type
  typedef TheItemType value_type;

public:
  // **************** Adaptation of the TListNode to the DATAmap
  class DataMapNode1 : public NCollection_TListNode1<TheItemType>
  {
  public:
    //! Constructor with 'Next'
    DataMapNode1 (const TheKeyType&     theKey, 
                 const TheItemType&    theItem, 
                 NCollection_ListNode1* theNext) :
      NCollection_TListNode1<TheItemType> (theItem, theNext),
      myKey(theKey)
    {}

    //! Key
    const TheKeyType& Key (void) const
    { return myKey; }
    
    //! Static deleter to be passed to BaseMap
    static void delNode (NCollection_ListNode1 * theNode, 
                         Handle(NCollection_BaseAllocator)& theAl)
    {
      ((DataMapNode1 *) theNode)->~DataMapNode1();
      theAl->Free(theNode);
    }

  private:
    TheKeyType    myKey;
  };

 public:
  // **************** Implementation of the Iterator interface.
  class Iterator : public NCollection_BaseMap1::Iterator
  {
  public:
    //! Empty constructor
    Iterator (void) :
      NCollection_BaseMap1::Iterator() {}
    //! Constructor
    Iterator (const NCollection_DataMap1& theMap) :
      NCollection_BaseMap1::Iterator(theMap) {}
    //! Query if the end of collection is reached by iterator
    Standard_Boolean More(void) const
    { return PMore(); }
    //! Make a step along the collection
    void Next(void)
    { PNext(); }
    //! Value inquiry
    const TheItemType& Value(void) const
    {  
      Standard_NoSuchObject_Raise_if(!More(), "NCollection_DataMap1::Iterator::Value");  
      return ((DataMapNode1 *) myNode)->Value();
    }
    //! Value change access
    TheItemType& ChangeValue(void) const
    {  
      Standard_NoSuchObject_Raise_if(!More(), "NCollection_DataMap1::Iterator::ChangeValue");  
      return ((DataMapNode1 *) myNode)->ChangeValue();
    }
    //! Key
    const TheKeyType& Key (void) const
    { 
      Standard_NoSuchObject_Raise_if(!More(), "NCollection_DataMap1::Iterator::Key");  
      return ((DataMapNode1 *) myNode)->Key();
    }
  };
  
  //! Shorthand for a regular iterator type.
  typedef NCollection_StlIterator<std::forward_iterator_tag, Iterator, TheItemType, false> iterator;

  //! Shorthand for a constant iterator type.
  typedef NCollection_StlIterator<std::forward_iterator_tag, Iterator, TheItemType, true> const_iterator;

  //! Returns an iterator pointing to the first element in the map.
  iterator begin() const { return Iterator (*this); }

  //! Returns an iterator referring to the past-the-end element in the map.
  iterator end() const { return Iterator(); }

  //! Returns a const iterator pointing to the first element in the map.
  const_iterator cbegin() const { return Iterator (*this); }

  //! Returns a const iterator referring to the past-the-end element in the map.
  const_iterator cend() const { return Iterator(); }

 public:
  // ---------- PUBLIC METHODS ------------

  //! Empty Constructor.
	 NCollection_DataMap1() : NCollection_BaseMap1(1, Standard_True, Handle(NCollection_BaseAllocator)()) {}

  //! Constructor
  explicit NCollection_DataMap1 (const Standard_Integer theNbBuckets,
                                const Handle(NCollection_BaseAllocator)& theAllocator = 0L)
  : NCollection_BaseMap1 (theNbBuckets, Standard_True, theAllocator) {}

  //! Copy constructor
  NCollection_DataMap1 (const NCollection_DataMap1& theOther)
    : NCollection_BaseMap1 (theOther.NbBuckets(), Standard_True, theOther.myAllocator) 
  { *this = theOther; }

  //! Exchange the content of two maps without re-allocations.
  //! Notice that allocators will be swapped as well!
  void Exchange (NCollection_DataMap1& theOther)
  {
    this->exchangeMapsData (theOther);
  }

  //! Assignment.
  //! This method does not change the internal allocator.
  NCollection_DataMap1& Assign (const NCollection_DataMap1& theOther)
  { 
    if (this == &theOther)
      return *this;

    Clear();
    Standard_Integer anExt = theOther.Extent();
    if (anExt)
    {
      ReSize (anExt-1);
      Iterator anIter(theOther);
      for (; anIter.More(); anIter.Next())
        Bind (anIter.Key(), anIter.Value());
    }
    return *this;
  }

  //! Assignment operator
  NCollection_DataMap1& operator= (const NCollection_DataMap1& theOther)
  { 
    return Assign (theOther);
  }

  //! ReSize
  void ReSize (const Standard_Integer N)
  {
    NCollection_ListNode1** newdata = NULL;
    NCollection_ListNode1** dummy   = NULL;
    Standard_Integer newBuck;
    if (BeginResize (N, newBuck, newdata, dummy))
    {
      if (myData1) 
      {
        DataMapNode1** olddata = (DataMapNode1**) myData1;
        DataMapNode1 *p, *q;
        Standard_Integer i,k;
        for (i = 0; i <= NbBuckets(); i++) 
        {
          if (olddata[i]) 
          {
            p = olddata[i];
            while (p) 
            {
              k = Hasher::HashCode(p->Key(),newBuck);
              q = (DataMapNode1*) p->Next();
              p->Next() = newdata[k];
              newdata[k] = p;
              p = q;
            }
          }
        }
      }
      EndResize (N, newBuck, newdata, dummy);
    }
  }

  //! Bind binds Item to Key in map.
  //! @param theKey  key to add/update
  //! @param theItem new item; overrides value previously bound to the key, if any
  //! @return Standard_True if Key was not bound already
  Standard_Boolean Bind (const TheKeyType& theKey, const TheItemType& theItem)
  {
    if (Resizable()) 
      ReSize(Extent());
    DataMapNode1** data = (DataMapNode1**)myData1;
    Standard_Integer k = Hasher::HashCode (theKey, NbBuckets());
    DataMapNode1* p = data[k];
    while (p) 
    {
      if (Hasher::IsEqual(p->Key(), theKey))
      {
        p->ChangeValue() = theItem;
        return Standard_False;
      }
      p = (DataMapNode1 *) p->Next();
    }
	data[k] = new (this->myAllocator) DataMapNode1(theKey, theItem, data[k]);
    Increment();
    return Standard_True;
  }

  //! Bound binds Item to Key in map. Returns modifiable Item 
  TheItemType* Bound (const TheKeyType& theKey, const TheItemType& theItem)
  {
    if (Resizable()) 
      ReSize(Extent());
    DataMapNode1** data = (DataMapNode1**)myData1;
    Standard_Integer k = Hasher::HashCode (theKey, NbBuckets());
    DataMapNode1* p = data[k];
    while (p)
    {
      if (Hasher::IsEqual(p->Key(), theKey))
      {
        p->ChangeValue() = theItem;
        return &p->ChangeValue();
      }
      p = (DataMapNode1*)p->Next();
    }
    data[k] = new (this->myAllocator) DataMapNode1 (theKey, theItem, data[k]);
    Increment();
    return &data[k]->ChangeValue();
  }

  //! IsBound
  Standard_Boolean IsBound(const TheKeyType& theKey) const
  {
    DataMapNode1* p;
    return lookup(theKey, p);
  }

  //! UnBind removes Item Key pair from map
  Standard_Boolean UnBind(const TheKeyType& theKey)
  {
    if (IsEmpty()) 
      return Standard_False;
    DataMapNode1** data = (DataMapNode1**) myData1;
    Standard_Integer k = Hasher::HashCode(theKey,NbBuckets());
    DataMapNode1* p = data[k];
    DataMapNode1* q = NULL;
    while (p) 
    {
      if (Hasher::IsEqual(p->Key(), theKey))
      {
        Decrement();
        if (q) 
          q->Next() = p->Next();
        else
          data[k] = (DataMapNode1*) p->Next();
        p->~DataMapNode1();
        this->myAllocator->Free(p);
        return Standard_True;
      }
      q = p;
      p = (DataMapNode1*) p->Next();
    }
    return Standard_False;
  }

  //! Seek returns pointer to Item by Key. Returns
  //! NULL is Key was not bound.
  const TheItemType* Seek(const TheKeyType& theKey) const
  {
    DataMapNode1* p = 0;
    if (!lookup(theKey, p))
      return 0L;
    return &p->Value();
  }

  //! Find returns the Item for Key. Raises if Key was not bound
  const TheItemType& Find(const TheKeyType& theKey) const
  {
    DataMapNode1* p = 0;
    if (!lookup(theKey, p))
      throw Standard_NoSuchObject("NCollection_DataMap1::Find");
    return p->Value();
  }

  //! Find Item for key with copying.
  //! @return true if key was found
  Standard_Boolean Find (const TheKeyType& theKey,
                         TheItemType&      theValue) const
  {
    DataMapNode1* p = 0;
    if (!lookup(theKey, p))
      return Standard_False;

    theValue = p->Value();
    return Standard_True;
  }

  //! operator ()
  const TheItemType& operator() (const TheKeyType& theKey) const
  { return Find(theKey); }

  //! ChangeSeek returns modifiable pointer to Item by Key. Returns
  //! NULL is Key was not bound.
  TheItemType* ChangeSeek(const TheKeyType& theKey)
  {
    DataMapNode1* p = 0;
    if (!lookup(theKey, p))
      return 0L;
    return &p->ChangeValue();
  }

  //! ChangeFind returns mofifiable Item by Key. Raises if Key was not bound
  TheItemType& ChangeFind (const TheKeyType& theKey)
  {
    DataMapNode1* p = 0;
    if (!lookup(theKey, p))
      throw Standard_NoSuchObject("NCollection_DataMap1::Find");
    return p->ChangeValue();
  }

  //! operator ()
  TheItemType& operator() (const TheKeyType& theKey)
  { return ChangeFind(theKey); }

  //! Clear data. If doReleaseMemory is false then the table of
  //! buckets is not released and will be reused.
  void Clear(const Standard_Boolean doReleaseMemory = Standard_True)
  { Destroy (DataMapNode1::delNode, doReleaseMemory); }

  //! Clear data and reset allocator
  void Clear (const Handle(NCollection_BaseAllocator)& theAllocator)
  { 
    Clear();
    this->myAllocator = ( ! theAllocator.IsNull() ? theAllocator :
                    NCollection_BaseAllocator::CommonBaseAllocator() );
  }

  //! Destructor
  virtual ~NCollection_DataMap1 (void)
  { Clear(); }

  //! Size
  Standard_Integer Size(void) const
  { return Extent(); }

  
 protected:
  // ---------- PROTECTED METHODS ----------
  //! Lookup for particular key in map. Returns true if key is found and
  //! thepNode points to binded node. Returns false if key is not found,
  //! thehNode value is this case is not usable.
  Standard_Boolean lookup(const TheKeyType& theKey,DataMapNode1*& thepNode) const
  {
    if (IsEmpty())
      return Standard_False; // Not found
    for (thepNode = (DataMapNode1*)myData1[Hasher::HashCode(theKey, NbBuckets())];
         thepNode; thepNode = (DataMapNode1*)thepNode->Next())
    {
      if (Hasher::IsEqual(thepNode->Key(), theKey)) 
        return Standard_True;
    }
    return Standard_False; // Not found
  }

};

#endif

