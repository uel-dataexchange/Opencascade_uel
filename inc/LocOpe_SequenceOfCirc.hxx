// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LocOpe_SequenceOfCirc_HeaderFile
#define _LocOpe_SequenceOfCirc_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_LocOpe_SequenceNodeOfSequenceOfCirc_HeaderFile
#include <Handle_LocOpe_SequenceNodeOfSequenceOfCirc.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class gp_Circ;
class LocOpe_SequenceNodeOfSequenceOfCirc;



class LocOpe_SequenceOfCirc  : public TCollection_BaseSequence {
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

  
      LocOpe_SequenceOfCirc();
  
  Standard_EXPORT     void Clear() ;
~LocOpe_SequenceOfCirc()
{
  Clear();
}
  
  Standard_EXPORT    const LocOpe_SequenceOfCirc& Assign(const LocOpe_SequenceOfCirc& Other) ;
   const LocOpe_SequenceOfCirc& operator =(const LocOpe_SequenceOfCirc& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const gp_Circ& T) ;
  
        void Append(LocOpe_SequenceOfCirc& S) ;
  
  Standard_EXPORT     void Prepend(const gp_Circ& T) ;
  
        void Prepend(LocOpe_SequenceOfCirc& S) ;
  
        void InsertBefore(const Standard_Integer Index,const gp_Circ& T) ;
  
        void InsertBefore(const Standard_Integer Index,LocOpe_SequenceOfCirc& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const gp_Circ& T) ;
  
        void InsertAfter(const Standard_Integer Index,LocOpe_SequenceOfCirc& S) ;
  
  Standard_EXPORT    const gp_Circ& First() const;
  
  Standard_EXPORT    const gp_Circ& Last() const;
  
        void Split(const Standard_Integer Index,LocOpe_SequenceOfCirc& Sub) ;
  
  Standard_EXPORT    const gp_Circ& Value(const Standard_Integer Index) const;
   const gp_Circ& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const gp_Circ& I) ;
  
  Standard_EXPORT     gp_Circ& ChangeValue(const Standard_Integer Index) ;
    gp_Circ& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   LocOpe_SequenceOfCirc(const LocOpe_SequenceOfCirc& Other);




};

#define SeqItem gp_Circ
#define SeqItem_hxx <gp_Circ.hxx>
#define TCollection_SequenceNode LocOpe_SequenceNodeOfSequenceOfCirc
#define TCollection_SequenceNode_hxx <LocOpe_SequenceNodeOfSequenceOfCirc.hxx>
#define Handle_TCollection_SequenceNode Handle_LocOpe_SequenceNodeOfSequenceOfCirc
#define TCollection_SequenceNode_Type_() LocOpe_SequenceNodeOfSequenceOfCirc_Type_()
#define TCollection_Sequence LocOpe_SequenceOfCirc
#define TCollection_Sequence_hxx <LocOpe_SequenceOfCirc.hxx>

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
