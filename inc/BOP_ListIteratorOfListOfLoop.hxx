// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOP_ListIteratorOfListOfLoop_HeaderFile
#define _BOP_ListIteratorOfListOfLoop_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_BOP_Loop_HeaderFile
#include <Handle_BOP_Loop.hxx>
#endif
#ifndef _Handle_BOP_ListNodeOfListOfLoop_HeaderFile
#include <Handle_BOP_ListNodeOfListOfLoop.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class BOP_ListOfLoop;
class BOP_Loop;
class BOP_ListNodeOfListOfLoop;



class BOP_ListIteratorOfListOfLoop  {
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

  
  Standard_EXPORT   BOP_ListIteratorOfListOfLoop();
  
  Standard_EXPORT   BOP_ListIteratorOfListOfLoop(const BOP_ListOfLoop& L);
  
  Standard_EXPORT     void Initialize(const BOP_ListOfLoop& L) ;
  
        Standard_Boolean More() const;
  
  Standard_EXPORT     void Next() ;
  
  Standard_EXPORT     Handle_BOP_Loop& Value() const;


friend class BOP_ListOfLoop;



protected:





private:



Standard_Address current;
Standard_Address previous;


};

#define Item Handle_BOP_Loop
#define Item_hxx <BOP_Loop.hxx>
#define TCollection_ListNode BOP_ListNodeOfListOfLoop
#define TCollection_ListNode_hxx <BOP_ListNodeOfListOfLoop.hxx>
#define TCollection_ListIterator BOP_ListIteratorOfListOfLoop
#define TCollection_ListIterator_hxx <BOP_ListIteratorOfListOfLoop.hxx>
#define Handle_TCollection_ListNode Handle_BOP_ListNodeOfListOfLoop
#define TCollection_ListNode_Type_() BOP_ListNodeOfListOfLoop_Type_()
#define TCollection_List BOP_ListOfLoop
#define TCollection_List_hxx <BOP_ListOfLoop.hxx>

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
