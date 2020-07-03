// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomPlate_SequenceOfCurveConstraint_HeaderFile
#define _GeomPlate_SequenceOfCurveConstraint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_GeomPlate_CurveConstraint_HeaderFile
#include <Handle_GeomPlate_CurveConstraint.hxx>
#endif
#ifndef _Handle_GeomPlate_SequenceNodeOfSequenceOfCurveConstraint_HeaderFile
#include <Handle_GeomPlate_SequenceNodeOfSequenceOfCurveConstraint.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class GeomPlate_CurveConstraint;
class GeomPlate_SequenceNodeOfSequenceOfCurveConstraint;



class GeomPlate_SequenceOfCurveConstraint  : public TCollection_BaseSequence {
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

  
      GeomPlate_SequenceOfCurveConstraint();
  
  Standard_EXPORT     void Clear() ;
~GeomPlate_SequenceOfCurveConstraint()
{
  Clear();
}
  
  Standard_EXPORT    const GeomPlate_SequenceOfCurveConstraint& Assign(const GeomPlate_SequenceOfCurveConstraint& Other) ;
   const GeomPlate_SequenceOfCurveConstraint& operator =(const GeomPlate_SequenceOfCurveConstraint& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(GeomPlate_CurveConstraint)& T) ;
  
        void Append(GeomPlate_SequenceOfCurveConstraint& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(GeomPlate_CurveConstraint)& T) ;
  
        void Prepend(GeomPlate_SequenceOfCurveConstraint& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(GeomPlate_CurveConstraint)& T) ;
  
        void InsertBefore(const Standard_Integer Index,GeomPlate_SequenceOfCurveConstraint& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(GeomPlate_CurveConstraint)& T) ;
  
        void InsertAfter(const Standard_Integer Index,GeomPlate_SequenceOfCurveConstraint& S) ;
  
  Standard_EXPORT    const Handle_GeomPlate_CurveConstraint& First() const;
  
  Standard_EXPORT    const Handle_GeomPlate_CurveConstraint& Last() const;
  
        void Split(const Standard_Integer Index,GeomPlate_SequenceOfCurveConstraint& Sub) ;
  
  Standard_EXPORT    const Handle_GeomPlate_CurveConstraint& Value(const Standard_Integer Index) const;
   const Handle_GeomPlate_CurveConstraint& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(GeomPlate_CurveConstraint)& I) ;
  
  Standard_EXPORT     Handle_GeomPlate_CurveConstraint& ChangeValue(const Standard_Integer Index) ;
    Handle_GeomPlate_CurveConstraint& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   GeomPlate_SequenceOfCurveConstraint(const GeomPlate_SequenceOfCurveConstraint& Other);




};

#define SeqItem Handle_GeomPlate_CurveConstraint
#define SeqItem_hxx <GeomPlate_CurveConstraint.hxx>
#define TCollection_SequenceNode GeomPlate_SequenceNodeOfSequenceOfCurveConstraint
#define TCollection_SequenceNode_hxx <GeomPlate_SequenceNodeOfSequenceOfCurveConstraint.hxx>
#define Handle_TCollection_SequenceNode Handle_GeomPlate_SequenceNodeOfSequenceOfCurveConstraint
#define TCollection_SequenceNode_Type_() GeomPlate_SequenceNodeOfSequenceOfCurveConstraint_Type_()
#define TCollection_Sequence GeomPlate_SequenceOfCurveConstraint
#define TCollection_Sequence_hxx <GeomPlate_SequenceOfCurveConstraint.hxx>

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
