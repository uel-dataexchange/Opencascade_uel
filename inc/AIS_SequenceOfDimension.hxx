// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_SequenceOfDimension_HeaderFile
#define _AIS_SequenceOfDimension_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_AIS_Relation_HeaderFile
#include <Handle_AIS_Relation.hxx>
#endif
#ifndef _Handle_AIS_SequenceNodeOfSequenceOfDimension_HeaderFile
#include <Handle_AIS_SequenceNodeOfSequenceOfDimension.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class AIS_Relation;
class AIS_SequenceNodeOfSequenceOfDimension;



class AIS_SequenceOfDimension  : public TCollection_BaseSequence {
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

  
      AIS_SequenceOfDimension();
  
  Standard_EXPORT     void Clear() ;
~AIS_SequenceOfDimension()
{
  Clear();
}
  
  Standard_EXPORT    const AIS_SequenceOfDimension& Assign(const AIS_SequenceOfDimension& Other) ;
   const AIS_SequenceOfDimension& operator =(const AIS_SequenceOfDimension& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(AIS_Relation)& T) ;
  
        void Append(AIS_SequenceOfDimension& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(AIS_Relation)& T) ;
  
        void Prepend(AIS_SequenceOfDimension& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(AIS_Relation)& T) ;
  
        void InsertBefore(const Standard_Integer Index,AIS_SequenceOfDimension& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(AIS_Relation)& T) ;
  
        void InsertAfter(const Standard_Integer Index,AIS_SequenceOfDimension& S) ;
  
  Standard_EXPORT    const Handle_AIS_Relation& First() const;
  
  Standard_EXPORT    const Handle_AIS_Relation& Last() const;
  
        void Split(const Standard_Integer Index,AIS_SequenceOfDimension& Sub) ;
  
  Standard_EXPORT    const Handle_AIS_Relation& Value(const Standard_Integer Index) const;
   const Handle_AIS_Relation& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(AIS_Relation)& I) ;
  
  Standard_EXPORT     Handle_AIS_Relation& ChangeValue(const Standard_Integer Index) ;
    Handle_AIS_Relation& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   AIS_SequenceOfDimension(const AIS_SequenceOfDimension& Other);




};

#define SeqItem Handle_AIS_Relation
#define SeqItem_hxx <AIS_Relation.hxx>
#define TCollection_SequenceNode AIS_SequenceNodeOfSequenceOfDimension
#define TCollection_SequenceNode_hxx <AIS_SequenceNodeOfSequenceOfDimension.hxx>
#define Handle_TCollection_SequenceNode Handle_AIS_SequenceNodeOfSequenceOfDimension
#define TCollection_SequenceNode_Type_() AIS_SequenceNodeOfSequenceOfDimension_Type_()
#define TCollection_Sequence AIS_SequenceOfDimension
#define TCollection_Sequence_hxx <AIS_SequenceOfDimension.hxx>

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
