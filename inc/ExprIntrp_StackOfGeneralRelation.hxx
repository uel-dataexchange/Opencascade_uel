// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ExprIntrp_StackOfGeneralRelation_HeaderFile
#define _ExprIntrp_StackOfGeneralRelation_HeaderFile

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
#ifndef _Handle_Expr_GeneralRelation_HeaderFile
#include <Handle_Expr_GeneralRelation.hxx>
#endif
#ifndef _Handle_ExprIntrp_StackNodeOfStackOfGeneralRelation_HeaderFile
#include <Handle_ExprIntrp_StackNodeOfStackOfGeneralRelation.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class ExprIntrp_StackIteratorOfStackOfGeneralRelation;
class Expr_GeneralRelation;
class ExprIntrp_StackNodeOfStackOfGeneralRelation;



class ExprIntrp_StackOfGeneralRelation  {
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

  
  Standard_EXPORT   ExprIntrp_StackOfGeneralRelation();
  
  Standard_EXPORT    const ExprIntrp_StackOfGeneralRelation& Assign(const ExprIntrp_StackOfGeneralRelation& Other) ;
   const ExprIntrp_StackOfGeneralRelation& operator =(const ExprIntrp_StackOfGeneralRelation& Other) 
{
  return Assign(Other);
}
  
        Standard_Boolean IsEmpty() const;
  
        Standard_Integer Depth() const;
  
  Standard_EXPORT    const Handle_Expr_GeneralRelation& Top() const;
  
  Standard_EXPORT     void Push(const Handle(Expr_GeneralRelation)& I) ;
  
  Standard_EXPORT     void Pop() ;
  
  Standard_EXPORT     void Clear() ;
~ExprIntrp_StackOfGeneralRelation()
{
  Clear();
}
  
  Standard_EXPORT     Handle_Expr_GeneralRelation& ChangeTop() ;


friend class ExprIntrp_StackIteratorOfStackOfGeneralRelation;



protected:





private:

  
  Standard_EXPORT   ExprIntrp_StackOfGeneralRelation(const ExprIntrp_StackOfGeneralRelation& Other);


Standard_Address myTop;
Standard_Integer myDepth;


};

#define Item Handle_Expr_GeneralRelation
#define Item_hxx <Expr_GeneralRelation.hxx>
#define TCollection_StackNode ExprIntrp_StackNodeOfStackOfGeneralRelation
#define TCollection_StackNode_hxx <ExprIntrp_StackNodeOfStackOfGeneralRelation.hxx>
#define TCollection_StackIterator ExprIntrp_StackIteratorOfStackOfGeneralRelation
#define TCollection_StackIterator_hxx <ExprIntrp_StackIteratorOfStackOfGeneralRelation.hxx>
#define Handle_TCollection_StackNode Handle_ExprIntrp_StackNodeOfStackOfGeneralRelation
#define TCollection_StackNode_Type_() ExprIntrp_StackNodeOfStackOfGeneralRelation_Type_()
#define TCollection_Stack ExprIntrp_StackOfGeneralRelation
#define TCollection_Stack_hxx <ExprIntrp_StackOfGeneralRelation.hxx>

#include <TCollection_Stack.lxx>

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
