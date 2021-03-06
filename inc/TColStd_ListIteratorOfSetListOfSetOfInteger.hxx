// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_ListIteratorOfSetListOfSetOfInteger_HeaderFile
#define _TColStd_ListIteratorOfSetListOfSetOfInteger_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TColStd_ListNodeOfSetListOfSetOfInteger_HeaderFile
#include <Handle_TColStd_ListNodeOfSetListOfSetOfInteger.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class TColStd_SetListOfSetOfInteger;
class TColStd_ListNodeOfSetListOfSetOfInteger;



class TColStd_ListIteratorOfSetListOfSetOfInteger  {
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

  
  Standard_EXPORT   TColStd_ListIteratorOfSetListOfSetOfInteger();
  
  Standard_EXPORT   TColStd_ListIteratorOfSetListOfSetOfInteger(const TColStd_SetListOfSetOfInteger& L);
  
  Standard_EXPORT     void Initialize(const TColStd_SetListOfSetOfInteger& L) ;
  
        Standard_Boolean More() const;
  
  Standard_EXPORT     void Next() ;
  
  Standard_EXPORT     Standard_Integer& Value() const;


friend class TColStd_SetListOfSetOfInteger;



protected:





private:



Standard_Address current;
Standard_Address previous;


};

#define Item Standard_Integer
#define Item_hxx <Standard_Integer.hxx>
#define TCollection_ListNode TColStd_ListNodeOfSetListOfSetOfInteger
#define TCollection_ListNode_hxx <TColStd_ListNodeOfSetListOfSetOfInteger.hxx>
#define TCollection_ListIterator TColStd_ListIteratorOfSetListOfSetOfInteger
#define TCollection_ListIterator_hxx <TColStd_ListIteratorOfSetListOfSetOfInteger.hxx>
#define Handle_TCollection_ListNode Handle_TColStd_ListNodeOfSetListOfSetOfInteger
#define TCollection_ListNode_Type_() TColStd_ListNodeOfSetListOfSetOfInteger_Type_()
#define TCollection_List TColStd_SetListOfSetOfInteger
#define TCollection_List_hxx <TColStd_SetListOfSetOfInteger.hxx>

#include <TCollection_ListIterator.lxx>

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
