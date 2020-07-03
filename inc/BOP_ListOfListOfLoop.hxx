// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOP_ListOfListOfLoop_HeaderFile
#define _BOP_ListOfListOfLoop_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_BOP_ListNodeOfListOfListOfLoop_HeaderFile
#include <Handle_BOP_ListNodeOfListOfListOfLoop.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class BOP_ListIteratorOfListOfListOfLoop;
class BOP_ListOfLoop;
class BOP_ListNodeOfListOfListOfLoop;



class BOP_ListOfListOfLoop  {
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

  
  Standard_EXPORT   BOP_ListOfListOfLoop();
  
  Standard_EXPORT     void Assign(const BOP_ListOfListOfLoop& Other) ;
    void operator=(const BOP_ListOfListOfLoop& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     Standard_Integer Extent() const;
  
  Standard_EXPORT     void Clear() ;
~BOP_ListOfListOfLoop()
{
  Clear();
}
  
        Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     void Prepend(const BOP_ListOfLoop& I) ;
  
  Standard_EXPORT     void Prepend(const BOP_ListOfLoop& I,BOP_ListIteratorOfListOfListOfLoop& theIt) ;
  
  Standard_EXPORT     void Prepend(BOP_ListOfListOfLoop& Other) ;
  
  Standard_EXPORT     void Append(const BOP_ListOfLoop& I) ;
  
  Standard_EXPORT     void Append(const BOP_ListOfLoop& I,BOP_ListIteratorOfListOfListOfLoop& theIt) ;
  
  Standard_EXPORT     void Append(BOP_ListOfListOfLoop& Other) ;
  
  Standard_EXPORT     BOP_ListOfLoop& First() const;
  
  Standard_EXPORT     BOP_ListOfLoop& Last() const;
  
  Standard_EXPORT     void RemoveFirst() ;
  
  Standard_EXPORT     void Remove(BOP_ListIteratorOfListOfListOfLoop& It) ;
  
  Standard_EXPORT     void InsertBefore(const BOP_ListOfLoop& I,BOP_ListIteratorOfListOfListOfLoop& It) ;
  
  Standard_EXPORT     void InsertBefore(BOP_ListOfListOfLoop& Other,BOP_ListIteratorOfListOfListOfLoop& It) ;
  
  Standard_EXPORT     void InsertAfter(const BOP_ListOfLoop& I,BOP_ListIteratorOfListOfListOfLoop& It) ;
  
  Standard_EXPORT     void InsertAfter(BOP_ListOfListOfLoop& Other,BOP_ListIteratorOfListOfListOfLoop& It) ;


friend class BOP_ListIteratorOfListOfListOfLoop;



protected:





private:

  
  Standard_EXPORT   BOP_ListOfListOfLoop(const BOP_ListOfListOfLoop& Other);


Standard_Address myFirst;
Standard_Address myLast;


};

#define Item BOP_ListOfLoop
#define Item_hxx <BOP_ListOfLoop.hxx>
#define TCollection_ListNode BOP_ListNodeOfListOfListOfLoop
#define TCollection_ListNode_hxx <BOP_ListNodeOfListOfListOfLoop.hxx>
#define TCollection_ListIterator BOP_ListIteratorOfListOfListOfLoop
#define TCollection_ListIterator_hxx <BOP_ListIteratorOfListOfListOfLoop.hxx>
#define Handle_TCollection_ListNode Handle_BOP_ListNodeOfListOfListOfLoop
#define TCollection_ListNode_Type_() BOP_ListNodeOfListOfListOfLoop_Type_()
#define TCollection_List BOP_ListOfListOfLoop
#define TCollection_List_hxx <BOP_ListOfListOfLoop.hxx>

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
