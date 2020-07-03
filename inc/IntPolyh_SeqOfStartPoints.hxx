// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPolyh_SeqOfStartPoints_HeaderFile
#define _IntPolyh_SeqOfStartPoints_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_IntPolyh_SequenceNodeOfSeqOfStartPoints_HeaderFile
#include <Handle_IntPolyh_SequenceNodeOfSeqOfStartPoints.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class IntPolyh_StartPoint;
class IntPolyh_SequenceNodeOfSeqOfStartPoints;



class IntPolyh_SeqOfStartPoints  : public TCollection_BaseSequence {
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

  
      IntPolyh_SeqOfStartPoints();
  
  Standard_EXPORT     void Clear() ;
~IntPolyh_SeqOfStartPoints()
{
  Clear();
}
  
  Standard_EXPORT    const IntPolyh_SeqOfStartPoints& Assign(const IntPolyh_SeqOfStartPoints& Other) ;
   const IntPolyh_SeqOfStartPoints& operator =(const IntPolyh_SeqOfStartPoints& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const IntPolyh_StartPoint& T) ;
  
        void Append(IntPolyh_SeqOfStartPoints& S) ;
  
  Standard_EXPORT     void Prepend(const IntPolyh_StartPoint& T) ;
  
        void Prepend(IntPolyh_SeqOfStartPoints& S) ;
  
        void InsertBefore(const Standard_Integer Index,const IntPolyh_StartPoint& T) ;
  
        void InsertBefore(const Standard_Integer Index,IntPolyh_SeqOfStartPoints& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const IntPolyh_StartPoint& T) ;
  
        void InsertAfter(const Standard_Integer Index,IntPolyh_SeqOfStartPoints& S) ;
  
  Standard_EXPORT    const IntPolyh_StartPoint& First() const;
  
  Standard_EXPORT    const IntPolyh_StartPoint& Last() const;
  
        void Split(const Standard_Integer Index,IntPolyh_SeqOfStartPoints& Sub) ;
  
  Standard_EXPORT    const IntPolyh_StartPoint& Value(const Standard_Integer Index) const;
   const IntPolyh_StartPoint& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const IntPolyh_StartPoint& I) ;
  
  Standard_EXPORT     IntPolyh_StartPoint& ChangeValue(const Standard_Integer Index) ;
    IntPolyh_StartPoint& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   IntPolyh_SeqOfStartPoints(const IntPolyh_SeqOfStartPoints& Other);




};

#define SeqItem IntPolyh_StartPoint
#define SeqItem_hxx <IntPolyh_StartPoint.hxx>
#define TCollection_SequenceNode IntPolyh_SequenceNodeOfSeqOfStartPoints
#define TCollection_SequenceNode_hxx <IntPolyh_SequenceNodeOfSeqOfStartPoints.hxx>
#define Handle_TCollection_SequenceNode Handle_IntPolyh_SequenceNodeOfSeqOfStartPoints
#define TCollection_SequenceNode_Type_() IntPolyh_SequenceNodeOfSeqOfStartPoints_Type_()
#define TCollection_Sequence IntPolyh_SeqOfStartPoints
#define TCollection_Sequence_hxx <IntPolyh_SeqOfStartPoints.hxx>

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
