// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Expr_SequenceOfGeneralRelation_HeaderFile
#define _Expr_SequenceOfGeneralRelation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_Expr_GeneralRelation_HeaderFile
#include <Handle_Expr_GeneralRelation.hxx>
#endif
#ifndef _Handle_Expr_SequenceNodeOfSequenceOfGeneralRelation_HeaderFile
#include <Handle_Expr_SequenceNodeOfSequenceOfGeneralRelation.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Expr_GeneralRelation;
class Expr_SequenceNodeOfSequenceOfGeneralRelation;



class Expr_SequenceOfGeneralRelation  : public TCollection_BaseSequence {
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

  
      Expr_SequenceOfGeneralRelation();
  
  Standard_EXPORT     void Clear() ;
~Expr_SequenceOfGeneralRelation()
{
  Clear();
}
  
  Standard_EXPORT    const Expr_SequenceOfGeneralRelation& Assign(const Expr_SequenceOfGeneralRelation& Other) ;
   const Expr_SequenceOfGeneralRelation& operator =(const Expr_SequenceOfGeneralRelation& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(Expr_GeneralRelation)& T) ;
  
        void Append(Expr_SequenceOfGeneralRelation& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(Expr_GeneralRelation)& T) ;
  
        void Prepend(Expr_SequenceOfGeneralRelation& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(Expr_GeneralRelation)& T) ;
  
        void InsertBefore(const Standard_Integer Index,Expr_SequenceOfGeneralRelation& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(Expr_GeneralRelation)& T) ;
  
        void InsertAfter(const Standard_Integer Index,Expr_SequenceOfGeneralRelation& S) ;
  
  Standard_EXPORT    const Handle_Expr_GeneralRelation& First() const;
  
  Standard_EXPORT    const Handle_Expr_GeneralRelation& Last() const;
  
        void Split(const Standard_Integer Index,Expr_SequenceOfGeneralRelation& Sub) ;
  
  Standard_EXPORT    const Handle_Expr_GeneralRelation& Value(const Standard_Integer Index) const;
   const Handle_Expr_GeneralRelation& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(Expr_GeneralRelation)& I) ;
  
  Standard_EXPORT     Handle_Expr_GeneralRelation& ChangeValue(const Standard_Integer Index) ;
    Handle_Expr_GeneralRelation& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   Expr_SequenceOfGeneralRelation(const Expr_SequenceOfGeneralRelation& Other);




};

#define SeqItem Handle_Expr_GeneralRelation
#define SeqItem_hxx <Expr_GeneralRelation.hxx>
#define TCollection_SequenceNode Expr_SequenceNodeOfSequenceOfGeneralRelation
#define TCollection_SequenceNode_hxx <Expr_SequenceNodeOfSequenceOfGeneralRelation.hxx>
#define Handle_TCollection_SequenceNode Handle_Expr_SequenceNodeOfSequenceOfGeneralRelation
#define TCollection_SequenceNode_Type_() Expr_SequenceNodeOfSequenceOfGeneralRelation_Type_()
#define TCollection_Sequence Expr_SequenceOfGeneralRelation
#define TCollection_Sequence_hxx <Expr_SequenceOfGeneralRelation.hxx>

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
