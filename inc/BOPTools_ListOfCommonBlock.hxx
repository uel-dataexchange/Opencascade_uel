// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTools_ListOfCommonBlock_HeaderFile
#define _BOPTools_ListOfCommonBlock_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_BOPTools_ListNodeOfListOfCommonBlock_HeaderFile
#include <Handle_BOPTools_ListNodeOfListOfCommonBlock.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class BOPTools_ListIteratorOfListOfCommonBlock;
class BOPTools_CommonBlock;
class BOPTools_ListNodeOfListOfCommonBlock;



class BOPTools_ListOfCommonBlock  {
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

  
  Standard_EXPORT   BOPTools_ListOfCommonBlock();
  
  Standard_EXPORT     void Assign(const BOPTools_ListOfCommonBlock& Other) ;
    void operator=(const BOPTools_ListOfCommonBlock& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     Standard_Integer Extent() const;
  
  Standard_EXPORT     void Clear() ;
~BOPTools_ListOfCommonBlock()
{
  Clear();
}
  
        Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     void Prepend(const BOPTools_CommonBlock& I) ;
  
  Standard_EXPORT     void Prepend(const BOPTools_CommonBlock& I,BOPTools_ListIteratorOfListOfCommonBlock& theIt) ;
  
  Standard_EXPORT     void Prepend(BOPTools_ListOfCommonBlock& Other) ;
  
  Standard_EXPORT     void Append(const BOPTools_CommonBlock& I) ;
  
  Standard_EXPORT     void Append(const BOPTools_CommonBlock& I,BOPTools_ListIteratorOfListOfCommonBlock& theIt) ;
  
  Standard_EXPORT     void Append(BOPTools_ListOfCommonBlock& Other) ;
  
  Standard_EXPORT     BOPTools_CommonBlock& First() const;
  
  Standard_EXPORT     BOPTools_CommonBlock& Last() const;
  
  Standard_EXPORT     void RemoveFirst() ;
  
  Standard_EXPORT     void Remove(BOPTools_ListIteratorOfListOfCommonBlock& It) ;
  
  Standard_EXPORT     void InsertBefore(const BOPTools_CommonBlock& I,BOPTools_ListIteratorOfListOfCommonBlock& It) ;
  
  Standard_EXPORT     void InsertBefore(BOPTools_ListOfCommonBlock& Other,BOPTools_ListIteratorOfListOfCommonBlock& It) ;
  
  Standard_EXPORT     void InsertAfter(const BOPTools_CommonBlock& I,BOPTools_ListIteratorOfListOfCommonBlock& It) ;
  
  Standard_EXPORT     void InsertAfter(BOPTools_ListOfCommonBlock& Other,BOPTools_ListIteratorOfListOfCommonBlock& It) ;


friend class BOPTools_ListIteratorOfListOfCommonBlock;



protected:





private:

  
  Standard_EXPORT   BOPTools_ListOfCommonBlock(const BOPTools_ListOfCommonBlock& Other);


Standard_Address myFirst;
Standard_Address myLast;


};

#define Item BOPTools_CommonBlock
#define Item_hxx <BOPTools_CommonBlock.hxx>
#define TCollection_ListNode BOPTools_ListNodeOfListOfCommonBlock
#define TCollection_ListNode_hxx <BOPTools_ListNodeOfListOfCommonBlock.hxx>
#define TCollection_ListIterator BOPTools_ListIteratorOfListOfCommonBlock
#define TCollection_ListIterator_hxx <BOPTools_ListIteratorOfListOfCommonBlock.hxx>
#define Handle_TCollection_ListNode Handle_BOPTools_ListNodeOfListOfCommonBlock
#define TCollection_ListNode_Type_() BOPTools_ListNodeOfListOfCommonBlock_Type_()
#define TCollection_List BOPTools_ListOfCommonBlock
#define TCollection_List_hxx <BOPTools_ListOfCommonBlock.hxx>

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
