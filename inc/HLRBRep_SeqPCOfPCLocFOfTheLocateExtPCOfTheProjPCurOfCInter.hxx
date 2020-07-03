// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfCInter_HeaderFile
#define _HLRBRep_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfCInter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_HLRBRep_SequenceNodeOfSeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfCInter_HeaderFile
#include <Handle_HLRBRep_SequenceNodeOfSeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfCInter.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Extrema_POnCurv2d;
class HLRBRep_SequenceNodeOfSeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfCInter;



class HLRBRep_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfCInter  : public TCollection_BaseSequence {
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

  
      HLRBRep_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfCInter();
  
  Standard_EXPORT     void Clear() ;
~HLRBRep_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfCInter()
{
  Clear();
}
  
  Standard_EXPORT    const HLRBRep_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfCInter& Assign(const HLRBRep_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfCInter& Other) ;
   const HLRBRep_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfCInter& operator =(const HLRBRep_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfCInter& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Extrema_POnCurv2d& T) ;
  
        void Append(HLRBRep_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfCInter& S) ;
  
  Standard_EXPORT     void Prepend(const Extrema_POnCurv2d& T) ;
  
        void Prepend(HLRBRep_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfCInter& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Extrema_POnCurv2d& T) ;
  
        void InsertBefore(const Standard_Integer Index,HLRBRep_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfCInter& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Extrema_POnCurv2d& T) ;
  
        void InsertAfter(const Standard_Integer Index,HLRBRep_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfCInter& S) ;
  
  Standard_EXPORT    const Extrema_POnCurv2d& First() const;
  
  Standard_EXPORT    const Extrema_POnCurv2d& Last() const;
  
        void Split(const Standard_Integer Index,HLRBRep_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfCInter& Sub) ;
  
  Standard_EXPORT    const Extrema_POnCurv2d& Value(const Standard_Integer Index) const;
   const Extrema_POnCurv2d& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Extrema_POnCurv2d& I) ;
  
  Standard_EXPORT     Extrema_POnCurv2d& ChangeValue(const Standard_Integer Index) ;
    Extrema_POnCurv2d& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   HLRBRep_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfCInter(const HLRBRep_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfCInter& Other);




};

#define SeqItem Extrema_POnCurv2d
#define SeqItem_hxx <Extrema_POnCurv2d.hxx>
#define TCollection_SequenceNode HLRBRep_SequenceNodeOfSeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfCInter
#define TCollection_SequenceNode_hxx <HLRBRep_SequenceNodeOfSeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfCInter.hxx>
#define Handle_TCollection_SequenceNode Handle_HLRBRep_SequenceNodeOfSeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfCInter
#define TCollection_SequenceNode_Type_() HLRBRep_SequenceNodeOfSeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfCInter_Type_()
#define TCollection_Sequence HLRBRep_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfCInter
#define TCollection_Sequence_hxx <HLRBRep_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfCInter.hxx>

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
