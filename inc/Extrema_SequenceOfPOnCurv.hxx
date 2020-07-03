// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_SequenceOfPOnCurv_HeaderFile
#define _Extrema_SequenceOfPOnCurv_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_Extrema_SequenceNodeOfSequenceOfPOnCurv_HeaderFile
#include <Handle_Extrema_SequenceNodeOfSequenceOfPOnCurv.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Extrema_POnCurv;
class Extrema_SequenceNodeOfSequenceOfPOnCurv;



class Extrema_SequenceOfPOnCurv  : public TCollection_BaseSequence {
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

  
      Extrema_SequenceOfPOnCurv();
  
  Standard_EXPORT     void Clear() ;
~Extrema_SequenceOfPOnCurv()
{
  Clear();
}
  
  Standard_EXPORT    const Extrema_SequenceOfPOnCurv& Assign(const Extrema_SequenceOfPOnCurv& Other) ;
   const Extrema_SequenceOfPOnCurv& operator =(const Extrema_SequenceOfPOnCurv& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Extrema_POnCurv& T) ;
  
        void Append(Extrema_SequenceOfPOnCurv& S) ;
  
  Standard_EXPORT     void Prepend(const Extrema_POnCurv& T) ;
  
        void Prepend(Extrema_SequenceOfPOnCurv& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Extrema_POnCurv& T) ;
  
        void InsertBefore(const Standard_Integer Index,Extrema_SequenceOfPOnCurv& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Extrema_POnCurv& T) ;
  
        void InsertAfter(const Standard_Integer Index,Extrema_SequenceOfPOnCurv& S) ;
  
  Standard_EXPORT    const Extrema_POnCurv& First() const;
  
  Standard_EXPORT    const Extrema_POnCurv& Last() const;
  
        void Split(const Standard_Integer Index,Extrema_SequenceOfPOnCurv& Sub) ;
  
  Standard_EXPORT    const Extrema_POnCurv& Value(const Standard_Integer Index) const;
   const Extrema_POnCurv& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Extrema_POnCurv& I) ;
  
  Standard_EXPORT     Extrema_POnCurv& ChangeValue(const Standard_Integer Index) ;
    Extrema_POnCurv& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   Extrema_SequenceOfPOnCurv(const Extrema_SequenceOfPOnCurv& Other);




};

#define SeqItem Extrema_POnCurv
#define SeqItem_hxx <Extrema_POnCurv.hxx>
#define TCollection_SequenceNode Extrema_SequenceNodeOfSequenceOfPOnCurv
#define TCollection_SequenceNode_hxx <Extrema_SequenceNodeOfSequenceOfPOnCurv.hxx>
#define Handle_TCollection_SequenceNode Handle_Extrema_SequenceNodeOfSequenceOfPOnCurv
#define TCollection_SequenceNode_Type_() Extrema_SequenceNodeOfSequenceOfPOnCurv_Type_()
#define TCollection_Sequence Extrema_SequenceOfPOnCurv
#define TCollection_Sequence_hxx <Extrema_SequenceOfPOnCurv.hxx>

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
