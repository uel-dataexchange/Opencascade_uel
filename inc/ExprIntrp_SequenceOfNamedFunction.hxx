// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ExprIntrp_SequenceOfNamedFunction_HeaderFile
#define _ExprIntrp_SequenceOfNamedFunction_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_Expr_NamedFunction_HeaderFile
#include <Handle_Expr_NamedFunction.hxx>
#endif
#ifndef _Handle_ExprIntrp_SequenceNodeOfSequenceOfNamedFunction_HeaderFile
#include <Handle_ExprIntrp_SequenceNodeOfSequenceOfNamedFunction.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Expr_NamedFunction;
class ExprIntrp_SequenceNodeOfSequenceOfNamedFunction;



class ExprIntrp_SequenceOfNamedFunction  : public TCollection_BaseSequence {
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

  
      ExprIntrp_SequenceOfNamedFunction();
  
  Standard_EXPORT     void Clear() ;
~ExprIntrp_SequenceOfNamedFunction()
{
  Clear();
}
  
  Standard_EXPORT    const ExprIntrp_SequenceOfNamedFunction& Assign(const ExprIntrp_SequenceOfNamedFunction& Other) ;
   const ExprIntrp_SequenceOfNamedFunction& operator =(const ExprIntrp_SequenceOfNamedFunction& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(Expr_NamedFunction)& T) ;
  
        void Append(ExprIntrp_SequenceOfNamedFunction& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(Expr_NamedFunction)& T) ;
  
        void Prepend(ExprIntrp_SequenceOfNamedFunction& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(Expr_NamedFunction)& T) ;
  
        void InsertBefore(const Standard_Integer Index,ExprIntrp_SequenceOfNamedFunction& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(Expr_NamedFunction)& T) ;
  
        void InsertAfter(const Standard_Integer Index,ExprIntrp_SequenceOfNamedFunction& S) ;
  
  Standard_EXPORT    const Handle_Expr_NamedFunction& First() const;
  
  Standard_EXPORT    const Handle_Expr_NamedFunction& Last() const;
  
        void Split(const Standard_Integer Index,ExprIntrp_SequenceOfNamedFunction& Sub) ;
  
  Standard_EXPORT    const Handle_Expr_NamedFunction& Value(const Standard_Integer Index) const;
   const Handle_Expr_NamedFunction& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(Expr_NamedFunction)& I) ;
  
  Standard_EXPORT     Handle_Expr_NamedFunction& ChangeValue(const Standard_Integer Index) ;
    Handle_Expr_NamedFunction& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   ExprIntrp_SequenceOfNamedFunction(const ExprIntrp_SequenceOfNamedFunction& Other);




};

#define SeqItem Handle_Expr_NamedFunction
#define SeqItem_hxx <Expr_NamedFunction.hxx>
#define TCollection_SequenceNode ExprIntrp_SequenceNodeOfSequenceOfNamedFunction
#define TCollection_SequenceNode_hxx <ExprIntrp_SequenceNodeOfSequenceOfNamedFunction.hxx>
#define Handle_TCollection_SequenceNode Handle_ExprIntrp_SequenceNodeOfSequenceOfNamedFunction
#define TCollection_SequenceNode_Type_() ExprIntrp_SequenceNodeOfSequenceOfNamedFunction_Type_()
#define TCollection_Sequence ExprIntrp_SequenceOfNamedFunction
#define TCollection_Sequence_hxx <ExprIntrp_SequenceOfNamedFunction.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
