// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_ListOfByte_HeaderFile
#define _TDataStd_ListOfByte_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Byte_HeaderFile
#include <Standard_Byte.hxx>
#endif
#ifndef _Handle_TDataStd_ListNodeOfListOfByte_HeaderFile
#include <Handle_TDataStd_ListNodeOfListOfByte.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class TDataStd_ListIteratorOfListOfByte;
class TDataStd_ListNodeOfListOfByte;



class TDataStd_ListOfByte  {
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

  
  Standard_EXPORT   TDataStd_ListOfByte();
  
  Standard_EXPORT     void Assign(const TDataStd_ListOfByte& Other) ;
    void operator=(const TDataStd_ListOfByte& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     Standard_Integer Extent() const;
  
  Standard_EXPORT     void Clear() ;
~TDataStd_ListOfByte()
{
  Clear();
}
  
        Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     void Prepend(const Standard_Byte& I) ;
  
  Standard_EXPORT     void Prepend(const Standard_Byte& I,TDataStd_ListIteratorOfListOfByte& theIt) ;
  
  Standard_EXPORT     void Prepend(TDataStd_ListOfByte& Other) ;
  
  Standard_EXPORT     void Append(const Standard_Byte& I) ;
  
  Standard_EXPORT     void Append(const Standard_Byte& I,TDataStd_ListIteratorOfListOfByte& theIt) ;
  
  Standard_EXPORT     void Append(TDataStd_ListOfByte& Other) ;
  
  Standard_EXPORT     Standard_Byte& First() const;
  
  Standard_EXPORT     Standard_Byte& Last() const;
  
  Standard_EXPORT     void RemoveFirst() ;
  
  Standard_EXPORT     void Remove(TDataStd_ListIteratorOfListOfByte& It) ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Byte& I,TDataStd_ListIteratorOfListOfByte& It) ;
  
  Standard_EXPORT     void InsertBefore(TDataStd_ListOfByte& Other,TDataStd_ListIteratorOfListOfByte& It) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Byte& I,TDataStd_ListIteratorOfListOfByte& It) ;
  
  Standard_EXPORT     void InsertAfter(TDataStd_ListOfByte& Other,TDataStd_ListIteratorOfListOfByte& It) ;


friend class TDataStd_ListIteratorOfListOfByte;



protected:





private:

  
  Standard_EXPORT   TDataStd_ListOfByte(const TDataStd_ListOfByte& Other);


Standard_Address myFirst;
Standard_Address myLast;


};

#define Item Standard_Byte
#define Item_hxx <Standard_Byte.hxx>
#define TCollection_ListNode TDataStd_ListNodeOfListOfByte
#define TCollection_ListNode_hxx <TDataStd_ListNodeOfListOfByte.hxx>
#define TCollection_ListIterator TDataStd_ListIteratorOfListOfByte
#define TCollection_ListIterator_hxx <TDataStd_ListIteratorOfListOfByte.hxx>
#define Handle_TCollection_ListNode Handle_TDataStd_ListNodeOfListOfByte
#define TCollection_ListNode_Type_() TDataStd_ListNodeOfListOfByte_Type_()
#define TCollection_List TDataStd_ListOfByte
#define TCollection_List_hxx <TDataStd_ListOfByte.hxx>

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
