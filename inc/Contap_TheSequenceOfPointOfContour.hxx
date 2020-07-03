// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Contap_TheSequenceOfPointOfContour_HeaderFile
#define _Contap_TheSequenceOfPointOfContour_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_Contap_SequenceNodeOfTheSequenceOfPointOfContour_HeaderFile
#include <Handle_Contap_SequenceNodeOfTheSequenceOfPointOfContour.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Contap_ThePointOfContour;
class Contap_SequenceNodeOfTheSequenceOfPointOfContour;



class Contap_TheSequenceOfPointOfContour  : public TCollection_BaseSequence {
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

  
      Contap_TheSequenceOfPointOfContour();
  
  Standard_EXPORT     void Clear() ;
~Contap_TheSequenceOfPointOfContour()
{
  Clear();
}
  
  Standard_EXPORT    const Contap_TheSequenceOfPointOfContour& Assign(const Contap_TheSequenceOfPointOfContour& Other) ;
   const Contap_TheSequenceOfPointOfContour& operator =(const Contap_TheSequenceOfPointOfContour& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Contap_ThePointOfContour& T) ;
  
        void Append(Contap_TheSequenceOfPointOfContour& S) ;
  
  Standard_EXPORT     void Prepend(const Contap_ThePointOfContour& T) ;
  
        void Prepend(Contap_TheSequenceOfPointOfContour& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Contap_ThePointOfContour& T) ;
  
        void InsertBefore(const Standard_Integer Index,Contap_TheSequenceOfPointOfContour& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Contap_ThePointOfContour& T) ;
  
        void InsertAfter(const Standard_Integer Index,Contap_TheSequenceOfPointOfContour& S) ;
  
  Standard_EXPORT    const Contap_ThePointOfContour& First() const;
  
  Standard_EXPORT    const Contap_ThePointOfContour& Last() const;
  
        void Split(const Standard_Integer Index,Contap_TheSequenceOfPointOfContour& Sub) ;
  
  Standard_EXPORT    const Contap_ThePointOfContour& Value(const Standard_Integer Index) const;
   const Contap_ThePointOfContour& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Contap_ThePointOfContour& I) ;
  
  Standard_EXPORT     Contap_ThePointOfContour& ChangeValue(const Standard_Integer Index) ;
    Contap_ThePointOfContour& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   Contap_TheSequenceOfPointOfContour(const Contap_TheSequenceOfPointOfContour& Other);




};

#define SeqItem Contap_ThePointOfContour
#define SeqItem_hxx <Contap_ThePointOfContour.hxx>
#define TCollection_SequenceNode Contap_SequenceNodeOfTheSequenceOfPointOfContour
#define TCollection_SequenceNode_hxx <Contap_SequenceNodeOfTheSequenceOfPointOfContour.hxx>
#define Handle_TCollection_SequenceNode Handle_Contap_SequenceNodeOfTheSequenceOfPointOfContour
#define TCollection_SequenceNode_Type_() Contap_SequenceNodeOfTheSequenceOfPointOfContour_Type_()
#define TCollection_Sequence Contap_TheSequenceOfPointOfContour
#define TCollection_Sequence_hxx <Contap_TheSequenceOfPointOfContour.hxx>

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
