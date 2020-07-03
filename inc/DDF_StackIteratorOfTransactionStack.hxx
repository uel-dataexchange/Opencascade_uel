// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DDF_StackIteratorOfTransactionStack_HeaderFile
#define _DDF_StackIteratorOfTransactionStack_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_DDF_Transaction_HeaderFile
#include <Handle_DDF_Transaction.hxx>
#endif
#ifndef _Handle_DDF_StackNodeOfTransactionStack_HeaderFile
#include <Handle_DDF_StackNodeOfTransactionStack.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class DDF_Transaction;
class DDF_TransactionStack;
class DDF_StackNodeOfTransactionStack;



class DDF_StackIteratorOfTransactionStack  {
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

  
  Standard_EXPORT   DDF_StackIteratorOfTransactionStack();
  
  Standard_EXPORT   DDF_StackIteratorOfTransactionStack(const DDF_TransactionStack& S);
  
  Standard_EXPORT     void Initialize(const DDF_TransactionStack& S) ;
  
        Standard_Boolean More() const;
  
  Standard_EXPORT     void Next() ;
  
  Standard_EXPORT    const Handle_DDF_Transaction& Value() const;





protected:





private:



Standard_Address current;


};

#define Item Handle_DDF_Transaction
#define Item_hxx <DDF_Transaction.hxx>
#define TCollection_StackNode DDF_StackNodeOfTransactionStack
#define TCollection_StackNode_hxx <DDF_StackNodeOfTransactionStack.hxx>
#define TCollection_StackIterator DDF_StackIteratorOfTransactionStack
#define TCollection_StackIterator_hxx <DDF_StackIteratorOfTransactionStack.hxx>
#define Handle_TCollection_StackNode Handle_DDF_StackNodeOfTransactionStack
#define TCollection_StackNode_Type_() DDF_StackNodeOfTransactionStack_Type_()
#define TCollection_Stack DDF_TransactionStack
#define TCollection_Stack_hxx <DDF_TransactionStack.hxx>

#include <TCollection_StackIterator.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_StackNode
#undef TCollection_StackNode_hxx
#undef TCollection_StackIterator
#undef TCollection_StackIterator_hxx
#undef Handle_TCollection_StackNode
#undef TCollection_StackNode_Type_
#undef TCollection_Stack
#undef TCollection_Stack_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
