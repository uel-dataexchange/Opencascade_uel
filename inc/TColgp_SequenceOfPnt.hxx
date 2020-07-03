// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_SequenceOfPnt_HeaderFile
#define _TColgp_SequenceOfPnt_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_TColgp_SequenceNodeOfSequenceOfPnt_HeaderFile
#include <Handle_TColgp_SequenceNodeOfSequenceOfPnt.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class gp_Pnt;
class TColgp_SequenceNodeOfSequenceOfPnt;



class TColgp_SequenceOfPnt  : public TCollection_BaseSequence {
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

  
      TColgp_SequenceOfPnt();
  
  Standard_EXPORT     void Clear() ;
~TColgp_SequenceOfPnt()
{
  Clear();
}
  
  Standard_EXPORT    const TColgp_SequenceOfPnt& Assign(const TColgp_SequenceOfPnt& Other) ;
   const TColgp_SequenceOfPnt& operator =(const TColgp_SequenceOfPnt& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const gp_Pnt& T) ;
  
        void Append(TColgp_SequenceOfPnt& S) ;
  
  Standard_EXPORT     void Prepend(const gp_Pnt& T) ;
  
        void Prepend(TColgp_SequenceOfPnt& S) ;
  
        void InsertBefore(const Standard_Integer Index,const gp_Pnt& T) ;
  
        void InsertBefore(const Standard_Integer Index,TColgp_SequenceOfPnt& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const gp_Pnt& T) ;
  
        void InsertAfter(const Standard_Integer Index,TColgp_SequenceOfPnt& S) ;
  
  Standard_EXPORT    const gp_Pnt& First() const;
  
  Standard_EXPORT    const gp_Pnt& Last() const;
  
        void Split(const Standard_Integer Index,TColgp_SequenceOfPnt& Sub) ;
  
  Standard_EXPORT    const gp_Pnt& Value(const Standard_Integer Index) const;
   const gp_Pnt& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const gp_Pnt& I) ;
  
  Standard_EXPORT     gp_Pnt& ChangeValue(const Standard_Integer Index) ;
    gp_Pnt& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   TColgp_SequenceOfPnt(const TColgp_SequenceOfPnt& Other);




};

#define SeqItem gp_Pnt
#define SeqItem_hxx <gp_Pnt.hxx>
#define TCollection_SequenceNode TColgp_SequenceNodeOfSequenceOfPnt
#define TCollection_SequenceNode_hxx <TColgp_SequenceNodeOfSequenceOfPnt.hxx>
#define Handle_TCollection_SequenceNode Handle_TColgp_SequenceNodeOfSequenceOfPnt
#define TCollection_SequenceNode_Type_() TColgp_SequenceNodeOfSequenceOfPnt_Type_()
#define TCollection_Sequence TColgp_SequenceOfPnt
#define TCollection_Sequence_hxx <TColgp_SequenceOfPnt.hxx>

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
