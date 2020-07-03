// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TNaming_ListOfIndexedDataMapOfShapeListOfShape_HeaderFile
#define _TNaming_ListOfIndexedDataMapOfShapeListOfShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_TNaming_ListNodeOfListOfIndexedDataMapOfShapeListOfShape_HeaderFile
#include <Handle_TNaming_ListNodeOfListOfIndexedDataMapOfShapeListOfShape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class TNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape;
class TopTools_IndexedDataMapOfShapeListOfShape;
class TNaming_ListNodeOfListOfIndexedDataMapOfShapeListOfShape;



class TNaming_ListOfIndexedDataMapOfShapeListOfShape  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   TNaming_ListOfIndexedDataMapOfShapeListOfShape();
  
  Standard_EXPORT     void Assign(const TNaming_ListOfIndexedDataMapOfShapeListOfShape& Other) ;
    void operator=(const TNaming_ListOfIndexedDataMapOfShapeListOfShape& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     Standard_Integer Extent() const;
  
  Standard_EXPORT     void Clear() ;
~TNaming_ListOfIndexedDataMapOfShapeListOfShape()
{
  Clear();
}
  
        Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     void Prepend(const TopTools_IndexedDataMapOfShapeListOfShape& I) ;
  
  Standard_EXPORT     void Prepend(const TopTools_IndexedDataMapOfShapeListOfShape& I,TNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape& theIt) ;
  
  Standard_EXPORT     void Prepend(TNaming_ListOfIndexedDataMapOfShapeListOfShape& Other) ;
  
  Standard_EXPORT     void Append(const TopTools_IndexedDataMapOfShapeListOfShape& I) ;
  
  Standard_EXPORT     void Append(const TopTools_IndexedDataMapOfShapeListOfShape& I,TNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape& theIt) ;
  
  Standard_EXPORT     void Append(TNaming_ListOfIndexedDataMapOfShapeListOfShape& Other) ;
  
  Standard_EXPORT     TopTools_IndexedDataMapOfShapeListOfShape& First() const;
  
  Standard_EXPORT     TopTools_IndexedDataMapOfShapeListOfShape& Last() const;
  
  Standard_EXPORT     void RemoveFirst() ;
  
  Standard_EXPORT     void Remove(TNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape& It) ;
  
  Standard_EXPORT     void InsertBefore(const TopTools_IndexedDataMapOfShapeListOfShape& I,TNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape& It) ;
  
  Standard_EXPORT     void InsertBefore(TNaming_ListOfIndexedDataMapOfShapeListOfShape& Other,TNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape& It) ;
  
  Standard_EXPORT     void InsertAfter(const TopTools_IndexedDataMapOfShapeListOfShape& I,TNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape& It) ;
  
  Standard_EXPORT     void InsertAfter(TNaming_ListOfIndexedDataMapOfShapeListOfShape& Other,TNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape& It) ;


friend class TNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape;



protected:





private:

  
  Standard_EXPORT   TNaming_ListOfIndexedDataMapOfShapeListOfShape(const TNaming_ListOfIndexedDataMapOfShapeListOfShape& Other);


Standard_Address myFirst;
Standard_Address myLast;


};

#define Item TopTools_IndexedDataMapOfShapeListOfShape
#define Item_hxx <TopTools_IndexedDataMapOfShapeListOfShape.hxx>
#define TCollection_ListNode TNaming_ListNodeOfListOfIndexedDataMapOfShapeListOfShape
#define TCollection_ListNode_hxx <TNaming_ListNodeOfListOfIndexedDataMapOfShapeListOfShape.hxx>
#define TCollection_ListIterator TNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape
#define TCollection_ListIterator_hxx <TNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape.hxx>
#define Handle_TCollection_ListNode Handle_TNaming_ListNodeOfListOfIndexedDataMapOfShapeListOfShape
#define TCollection_ListNode_Type_() TNaming_ListNodeOfListOfIndexedDataMapOfShapeListOfShape_Type_()
#define TCollection_List TNaming_ListOfIndexedDataMapOfShapeListOfShape
#define TCollection_List_hxx <TNaming_ListOfIndexedDataMapOfShapeListOfShape.hxx>

#include <TCollection_List.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
