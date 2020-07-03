// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_SequenceOfAsciiString_HeaderFile
#define _TColStd_SequenceOfAsciiString_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_TColStd_SequenceNodeOfSequenceOfAsciiString_HeaderFile
#include <Handle_TColStd_SequenceNodeOfSequenceOfAsciiString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class TCollection_AsciiString;
class TColStd_SequenceNodeOfSequenceOfAsciiString;



class TColStd_SequenceOfAsciiString  : public TCollection_BaseSequence {
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

  
      TColStd_SequenceOfAsciiString();
  
  Standard_EXPORT     void Clear() ;
~TColStd_SequenceOfAsciiString()
{
  Clear();
}
  
  Standard_EXPORT    const TColStd_SequenceOfAsciiString& Assign(const TColStd_SequenceOfAsciiString& Other) ;
   const TColStd_SequenceOfAsciiString& operator =(const TColStd_SequenceOfAsciiString& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const TCollection_AsciiString& T) ;
  
        void Append(TColStd_SequenceOfAsciiString& S) ;
  
  Standard_EXPORT     void Prepend(const TCollection_AsciiString& T) ;
  
        void Prepend(TColStd_SequenceOfAsciiString& S) ;
  
        void InsertBefore(const Standard_Integer Index,const TCollection_AsciiString& T) ;
  
        void InsertBefore(const Standard_Integer Index,TColStd_SequenceOfAsciiString& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const TCollection_AsciiString& T) ;
  
        void InsertAfter(const Standard_Integer Index,TColStd_SequenceOfAsciiString& S) ;
  
  Standard_EXPORT    const TCollection_AsciiString& First() const;
  
  Standard_EXPORT    const TCollection_AsciiString& Last() const;
  
        void Split(const Standard_Integer Index,TColStd_SequenceOfAsciiString& Sub) ;
  
  Standard_EXPORT    const TCollection_AsciiString& Value(const Standard_Integer Index) const;
   const TCollection_AsciiString& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const TCollection_AsciiString& I) ;
  
  Standard_EXPORT     TCollection_AsciiString& ChangeValue(const Standard_Integer Index) ;
    TCollection_AsciiString& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   TColStd_SequenceOfAsciiString(const TColStd_SequenceOfAsciiString& Other);




};

#define SeqItem TCollection_AsciiString
#define SeqItem_hxx <TCollection_AsciiString.hxx>
#define TCollection_SequenceNode TColStd_SequenceNodeOfSequenceOfAsciiString
#define TCollection_SequenceNode_hxx <TColStd_SequenceNodeOfSequenceOfAsciiString.hxx>
#define Handle_TCollection_SequenceNode Handle_TColStd_SequenceNodeOfSequenceOfAsciiString
#define TCollection_SequenceNode_Type_() TColStd_SequenceNodeOfSequenceOfAsciiString_Type_()
#define TCollection_Sequence TColStd_SequenceOfAsciiString
#define TCollection_Sequence_hxx <TColStd_SequenceOfAsciiString.hxx>

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
