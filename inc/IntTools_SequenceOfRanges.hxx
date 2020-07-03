// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_SequenceOfRanges_HeaderFile
#define _IntTools_SequenceOfRanges_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_IntTools_SequenceNodeOfSequenceOfRanges_HeaderFile
#include <Handle_IntTools_SequenceNodeOfSequenceOfRanges.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class IntTools_Range;
class IntTools_SequenceNodeOfSequenceOfRanges;



class IntTools_SequenceOfRanges  : public TCollection_BaseSequence {
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

  
      IntTools_SequenceOfRanges();
  
  Standard_EXPORT     void Clear() ;
~IntTools_SequenceOfRanges()
{
  Clear();
}
  
  Standard_EXPORT    const IntTools_SequenceOfRanges& Assign(const IntTools_SequenceOfRanges& Other) ;
   const IntTools_SequenceOfRanges& operator =(const IntTools_SequenceOfRanges& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const IntTools_Range& T) ;
  
        void Append(IntTools_SequenceOfRanges& S) ;
  
  Standard_EXPORT     void Prepend(const IntTools_Range& T) ;
  
        void Prepend(IntTools_SequenceOfRanges& S) ;
  
        void InsertBefore(const Standard_Integer Index,const IntTools_Range& T) ;
  
        void InsertBefore(const Standard_Integer Index,IntTools_SequenceOfRanges& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const IntTools_Range& T) ;
  
        void InsertAfter(const Standard_Integer Index,IntTools_SequenceOfRanges& S) ;
  
  Standard_EXPORT    const IntTools_Range& First() const;
  
  Standard_EXPORT    const IntTools_Range& Last() const;
  
        void Split(const Standard_Integer Index,IntTools_SequenceOfRanges& Sub) ;
  
  Standard_EXPORT    const IntTools_Range& Value(const Standard_Integer Index) const;
   const IntTools_Range& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const IntTools_Range& I) ;
  
  Standard_EXPORT     IntTools_Range& ChangeValue(const Standard_Integer Index) ;
    IntTools_Range& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   IntTools_SequenceOfRanges(const IntTools_SequenceOfRanges& Other);




};

#define SeqItem IntTools_Range
#define SeqItem_hxx <IntTools_Range.hxx>
#define TCollection_SequenceNode IntTools_SequenceNodeOfSequenceOfRanges
#define TCollection_SequenceNode_hxx <IntTools_SequenceNodeOfSequenceOfRanges.hxx>
#define Handle_TCollection_SequenceNode Handle_IntTools_SequenceNodeOfSequenceOfRanges
#define TCollection_SequenceNode_Type_() IntTools_SequenceNodeOfSequenceOfRanges_Type_()
#define TCollection_Sequence IntTools_SequenceOfRanges
#define TCollection_Sequence_hxx <IntTools_SequenceOfRanges.hxx>

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
