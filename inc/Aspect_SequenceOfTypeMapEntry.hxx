// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Aspect_SequenceOfTypeMapEntry_HeaderFile
#define _Aspect_SequenceOfTypeMapEntry_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_Aspect_SequenceNodeOfSequenceOfTypeMapEntry_HeaderFile
#include <Handle_Aspect_SequenceNodeOfSequenceOfTypeMapEntry.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Aspect_TypeMapEntry;
class Aspect_SequenceNodeOfSequenceOfTypeMapEntry;



class Aspect_SequenceOfTypeMapEntry  : public TCollection_BaseSequence {
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

  
      Aspect_SequenceOfTypeMapEntry();
  
  Standard_EXPORT     void Clear() ;
~Aspect_SequenceOfTypeMapEntry()
{
  Clear();
}
  
  Standard_EXPORT    const Aspect_SequenceOfTypeMapEntry& Assign(const Aspect_SequenceOfTypeMapEntry& Other) ;
   const Aspect_SequenceOfTypeMapEntry& operator =(const Aspect_SequenceOfTypeMapEntry& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Aspect_TypeMapEntry& T) ;
  
        void Append(Aspect_SequenceOfTypeMapEntry& S) ;
  
  Standard_EXPORT     void Prepend(const Aspect_TypeMapEntry& T) ;
  
        void Prepend(Aspect_SequenceOfTypeMapEntry& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Aspect_TypeMapEntry& T) ;
  
        void InsertBefore(const Standard_Integer Index,Aspect_SequenceOfTypeMapEntry& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Aspect_TypeMapEntry& T) ;
  
        void InsertAfter(const Standard_Integer Index,Aspect_SequenceOfTypeMapEntry& S) ;
  
  Standard_EXPORT    const Aspect_TypeMapEntry& First() const;
  
  Standard_EXPORT    const Aspect_TypeMapEntry& Last() const;
  
        void Split(const Standard_Integer Index,Aspect_SequenceOfTypeMapEntry& Sub) ;
  
  Standard_EXPORT    const Aspect_TypeMapEntry& Value(const Standard_Integer Index) const;
   const Aspect_TypeMapEntry& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Aspect_TypeMapEntry& I) ;
  
  Standard_EXPORT     Aspect_TypeMapEntry& ChangeValue(const Standard_Integer Index) ;
    Aspect_TypeMapEntry& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   Aspect_SequenceOfTypeMapEntry(const Aspect_SequenceOfTypeMapEntry& Other);




};

#define SeqItem Aspect_TypeMapEntry
#define SeqItem_hxx <Aspect_TypeMapEntry.hxx>
#define TCollection_SequenceNode Aspect_SequenceNodeOfSequenceOfTypeMapEntry
#define TCollection_SequenceNode_hxx <Aspect_SequenceNodeOfSequenceOfTypeMapEntry.hxx>
#define Handle_TCollection_SequenceNode Handle_Aspect_SequenceNodeOfSequenceOfTypeMapEntry
#define TCollection_SequenceNode_Type_() Aspect_SequenceNodeOfSequenceOfTypeMapEntry_Type_()
#define TCollection_Sequence Aspect_SequenceOfTypeMapEntry
#define TCollection_Sequence_hxx <Aspect_SequenceOfTypeMapEntry.hxx>

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
