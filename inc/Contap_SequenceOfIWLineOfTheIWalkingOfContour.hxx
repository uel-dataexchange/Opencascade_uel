// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Contap_SequenceOfIWLineOfTheIWalkingOfContour_HeaderFile
#define _Contap_SequenceOfIWLineOfTheIWalkingOfContour_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_Contap_TheIWLineOfTheIWalkingOfContour_HeaderFile
#include <Handle_Contap_TheIWLineOfTheIWalkingOfContour.hxx>
#endif
#ifndef _Handle_Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalkingOfContour_HeaderFile
#include <Handle_Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalkingOfContour.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Contap_TheIWLineOfTheIWalkingOfContour;
class Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalkingOfContour;



class Contap_SequenceOfIWLineOfTheIWalkingOfContour  : public TCollection_BaseSequence {
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

  
      Contap_SequenceOfIWLineOfTheIWalkingOfContour();
  
  Standard_EXPORT     void Clear() ;
~Contap_SequenceOfIWLineOfTheIWalkingOfContour()
{
  Clear();
}
  
  Standard_EXPORT    const Contap_SequenceOfIWLineOfTheIWalkingOfContour& Assign(const Contap_SequenceOfIWLineOfTheIWalkingOfContour& Other) ;
   const Contap_SequenceOfIWLineOfTheIWalkingOfContour& operator =(const Contap_SequenceOfIWLineOfTheIWalkingOfContour& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(Contap_TheIWLineOfTheIWalkingOfContour)& T) ;
  
        void Append(Contap_SequenceOfIWLineOfTheIWalkingOfContour& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(Contap_TheIWLineOfTheIWalkingOfContour)& T) ;
  
        void Prepend(Contap_SequenceOfIWLineOfTheIWalkingOfContour& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(Contap_TheIWLineOfTheIWalkingOfContour)& T) ;
  
        void InsertBefore(const Standard_Integer Index,Contap_SequenceOfIWLineOfTheIWalkingOfContour& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(Contap_TheIWLineOfTheIWalkingOfContour)& T) ;
  
        void InsertAfter(const Standard_Integer Index,Contap_SequenceOfIWLineOfTheIWalkingOfContour& S) ;
  
  Standard_EXPORT    const Handle_Contap_TheIWLineOfTheIWalkingOfContour& First() const;
  
  Standard_EXPORT    const Handle_Contap_TheIWLineOfTheIWalkingOfContour& Last() const;
  
        void Split(const Standard_Integer Index,Contap_SequenceOfIWLineOfTheIWalkingOfContour& Sub) ;
  
  Standard_EXPORT    const Handle_Contap_TheIWLineOfTheIWalkingOfContour& Value(const Standard_Integer Index) const;
   const Handle_Contap_TheIWLineOfTheIWalkingOfContour& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(Contap_TheIWLineOfTheIWalkingOfContour)& I) ;
  
  Standard_EXPORT     Handle_Contap_TheIWLineOfTheIWalkingOfContour& ChangeValue(const Standard_Integer Index) ;
    Handle_Contap_TheIWLineOfTheIWalkingOfContour& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   Contap_SequenceOfIWLineOfTheIWalkingOfContour(const Contap_SequenceOfIWLineOfTheIWalkingOfContour& Other);




};

#define SeqItem Handle_Contap_TheIWLineOfTheIWalkingOfContour
#define SeqItem_hxx <Contap_TheIWLineOfTheIWalkingOfContour.hxx>
#define TCollection_SequenceNode Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalkingOfContour
#define TCollection_SequenceNode_hxx <Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalkingOfContour.hxx>
#define Handle_TCollection_SequenceNode Handle_Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalkingOfContour
#define TCollection_SequenceNode_Type_() Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalkingOfContour_Type_()
#define TCollection_Sequence Contap_SequenceOfIWLineOfTheIWalkingOfContour
#define TCollection_Sequence_hxx <Contap_SequenceOfIWLineOfTheIWalkingOfContour.hxx>

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
