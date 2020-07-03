// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepRepr_SequenceOfMaterialPropertyRepresentation_HeaderFile
#define _StepRepr_SequenceOfMaterialPropertyRepresentation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_StepRepr_MaterialPropertyRepresentation_HeaderFile
#include <Handle_StepRepr_MaterialPropertyRepresentation.hxx>
#endif
#ifndef _Handle_StepRepr_SequenceNodeOfSequenceOfMaterialPropertyRepresentation_HeaderFile
#include <Handle_StepRepr_SequenceNodeOfSequenceOfMaterialPropertyRepresentation.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class StepRepr_MaterialPropertyRepresentation;
class StepRepr_SequenceNodeOfSequenceOfMaterialPropertyRepresentation;



class StepRepr_SequenceOfMaterialPropertyRepresentation  : public TCollection_BaseSequence {
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

  
      StepRepr_SequenceOfMaterialPropertyRepresentation();
  
  Standard_EXPORT     void Clear() ;
~StepRepr_SequenceOfMaterialPropertyRepresentation()
{
  Clear();
}
  
  Standard_EXPORT    const StepRepr_SequenceOfMaterialPropertyRepresentation& Assign(const StepRepr_SequenceOfMaterialPropertyRepresentation& Other) ;
   const StepRepr_SequenceOfMaterialPropertyRepresentation& operator =(const StepRepr_SequenceOfMaterialPropertyRepresentation& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(StepRepr_MaterialPropertyRepresentation)& T) ;
  
        void Append(StepRepr_SequenceOfMaterialPropertyRepresentation& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(StepRepr_MaterialPropertyRepresentation)& T) ;
  
        void Prepend(StepRepr_SequenceOfMaterialPropertyRepresentation& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(StepRepr_MaterialPropertyRepresentation)& T) ;
  
        void InsertBefore(const Standard_Integer Index,StepRepr_SequenceOfMaterialPropertyRepresentation& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(StepRepr_MaterialPropertyRepresentation)& T) ;
  
        void InsertAfter(const Standard_Integer Index,StepRepr_SequenceOfMaterialPropertyRepresentation& S) ;
  
  Standard_EXPORT    const Handle_StepRepr_MaterialPropertyRepresentation& First() const;
  
  Standard_EXPORT    const Handle_StepRepr_MaterialPropertyRepresentation& Last() const;
  
        void Split(const Standard_Integer Index,StepRepr_SequenceOfMaterialPropertyRepresentation& Sub) ;
  
  Standard_EXPORT    const Handle_StepRepr_MaterialPropertyRepresentation& Value(const Standard_Integer Index) const;
   const Handle_StepRepr_MaterialPropertyRepresentation& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(StepRepr_MaterialPropertyRepresentation)& I) ;
  
  Standard_EXPORT     Handle_StepRepr_MaterialPropertyRepresentation& ChangeValue(const Standard_Integer Index) ;
    Handle_StepRepr_MaterialPropertyRepresentation& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   StepRepr_SequenceOfMaterialPropertyRepresentation(const StepRepr_SequenceOfMaterialPropertyRepresentation& Other);




};

#define SeqItem Handle_StepRepr_MaterialPropertyRepresentation
#define SeqItem_hxx <StepRepr_MaterialPropertyRepresentation.hxx>
#define TCollection_SequenceNode StepRepr_SequenceNodeOfSequenceOfMaterialPropertyRepresentation
#define TCollection_SequenceNode_hxx <StepRepr_SequenceNodeOfSequenceOfMaterialPropertyRepresentation.hxx>
#define Handle_TCollection_SequenceNode Handle_StepRepr_SequenceNodeOfSequenceOfMaterialPropertyRepresentation
#define TCollection_SequenceNode_Type_() StepRepr_SequenceNodeOfSequenceOfMaterialPropertyRepresentation_Type_()
#define TCollection_Sequence StepRepr_SequenceOfMaterialPropertyRepresentation
#define TCollection_Sequence_hxx <StepRepr_SequenceOfMaterialPropertyRepresentation.hxx>

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
