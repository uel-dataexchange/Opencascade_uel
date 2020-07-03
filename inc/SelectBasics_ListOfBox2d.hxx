// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SelectBasics_ListOfBox2d_HeaderFile
#define _SelectBasics_ListOfBox2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_SelectBasics_ListNodeOfListOfBox2d_HeaderFile
#include <Handle_SelectBasics_ListNodeOfListOfBox2d.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class SelectBasics_ListIteratorOfListOfBox2d;
class Bnd_Box2d;
class SelectBasics_ListNodeOfListOfBox2d;



class SelectBasics_ListOfBox2d  {
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

  
  Standard_EXPORT   SelectBasics_ListOfBox2d();
  
  Standard_EXPORT     void Assign(const SelectBasics_ListOfBox2d& Other) ;
    void operator=(const SelectBasics_ListOfBox2d& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     Standard_Integer Extent() const;
  
  Standard_EXPORT     void Clear() ;
~SelectBasics_ListOfBox2d()
{
  Clear();
}
  
        Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     void Prepend(const Bnd_Box2d& I) ;
  
  Standard_EXPORT     void Prepend(const Bnd_Box2d& I,SelectBasics_ListIteratorOfListOfBox2d& theIt) ;
  
  Standard_EXPORT     void Prepend(SelectBasics_ListOfBox2d& Other) ;
  
  Standard_EXPORT     void Append(const Bnd_Box2d& I) ;
  
  Standard_EXPORT     void Append(const Bnd_Box2d& I,SelectBasics_ListIteratorOfListOfBox2d& theIt) ;
  
  Standard_EXPORT     void Append(SelectBasics_ListOfBox2d& Other) ;
  
  Standard_EXPORT     Bnd_Box2d& First() const;
  
  Standard_EXPORT     Bnd_Box2d& Last() const;
  
  Standard_EXPORT     void RemoveFirst() ;
  
  Standard_EXPORT     void Remove(SelectBasics_ListIteratorOfListOfBox2d& It) ;
  
  Standard_EXPORT     void InsertBefore(const Bnd_Box2d& I,SelectBasics_ListIteratorOfListOfBox2d& It) ;
  
  Standard_EXPORT     void InsertBefore(SelectBasics_ListOfBox2d& Other,SelectBasics_ListIteratorOfListOfBox2d& It) ;
  
  Standard_EXPORT     void InsertAfter(const Bnd_Box2d& I,SelectBasics_ListIteratorOfListOfBox2d& It) ;
  
  Standard_EXPORT     void InsertAfter(SelectBasics_ListOfBox2d& Other,SelectBasics_ListIteratorOfListOfBox2d& It) ;


friend class SelectBasics_ListIteratorOfListOfBox2d;



protected:





private:

  
  Standard_EXPORT   SelectBasics_ListOfBox2d(const SelectBasics_ListOfBox2d& Other);


Standard_Address myFirst;
Standard_Address myLast;


};

#define Item Bnd_Box2d
#define Item_hxx <Bnd_Box2d.hxx>
#define TCollection_ListNode SelectBasics_ListNodeOfListOfBox2d
#define TCollection_ListNode_hxx <SelectBasics_ListNodeOfListOfBox2d.hxx>
#define TCollection_ListIterator SelectBasics_ListIteratorOfListOfBox2d
#define TCollection_ListIterator_hxx <SelectBasics_ListIteratorOfListOfBox2d.hxx>
#define Handle_TCollection_ListNode Handle_SelectBasics_ListNodeOfListOfBox2d
#define TCollection_ListNode_Type_() SelectBasics_ListNodeOfListOfBox2d_Type_()
#define TCollection_List SelectBasics_ListOfBox2d
#define TCollection_List_hxx <SelectBasics_ListOfBox2d.hxx>

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
