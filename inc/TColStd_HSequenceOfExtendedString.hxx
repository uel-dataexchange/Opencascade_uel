// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_HSequenceOfExtendedString_HeaderFile
#define _TColStd_HSequenceOfExtendedString_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfExtendedString_HeaderFile
#include <Handle_TColStd_HSequenceOfExtendedString.hxx>
#endif

#ifndef _TColStd_SequenceOfExtendedString_HeaderFile
#include <TColStd_SequenceOfExtendedString.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class TCollection_ExtendedString;
class TColStd_SequenceOfExtendedString;



class TColStd_HSequenceOfExtendedString : public MMgt_TShared {

public:

  
      TColStd_HSequenceOfExtendedString();
  
        Standard_Boolean IsEmpty() const;
  
        Standard_Integer Length() const;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     void Append(const TCollection_ExtendedString& anItem) ;
  
  Standard_EXPORT     void Append(const Handle(TColStd_HSequenceOfExtendedString)& aSequence) ;
  
  Standard_EXPORT     void Prepend(const TCollection_ExtendedString& anItem) ;
  
  Standard_EXPORT     void Prepend(const Handle(TColStd_HSequenceOfExtendedString)& aSequence) ;
  
  Standard_EXPORT     void Reverse() ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const TCollection_ExtendedString& anItem) ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(TColStd_HSequenceOfExtendedString)& aSequence) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const TCollection_ExtendedString& anItem) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(TColStd_HSequenceOfExtendedString)& aSequence) ;
  
  Standard_EXPORT     void Exchange(const Standard_Integer anIndex,const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT     Handle_TColStd_HSequenceOfExtendedString Split(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void SetValue(const Standard_Integer anIndex,const TCollection_ExtendedString& anItem) ;
  
  Standard_EXPORT    const TCollection_ExtendedString& Value(const Standard_Integer anIndex) const;
  
  Standard_EXPORT     TCollection_ExtendedString& ChangeValue(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer fromIndex,const Standard_Integer toIndex) ;
  
       const TColStd_SequenceOfExtendedString& Sequence() const;
  
        TColStd_SequenceOfExtendedString& ChangeSequence() ;
  
  Standard_EXPORT     Handle_TColStd_HSequenceOfExtendedString ShallowCopy() const;




  DEFINE_STANDARD_RTTI(TColStd_HSequenceOfExtendedString)

protected:




private: 


TColStd_SequenceOfExtendedString mySequence;


};

#define Item TCollection_ExtendedString
#define Item_hxx <TCollection_ExtendedString.hxx>
#define TheSequence TColStd_SequenceOfExtendedString
#define TheSequence_hxx <TColStd_SequenceOfExtendedString.hxx>
#define TCollection_HSequence TColStd_HSequenceOfExtendedString
#define TCollection_HSequence_hxx <TColStd_HSequenceOfExtendedString.hxx>
#define Handle_TCollection_HSequence Handle_TColStd_HSequenceOfExtendedString
#define TCollection_HSequence_Type_() TColStd_HSequenceOfExtendedString_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


// other Inline functions and methods (like "C++: function call" methods)
inline Handle_TColStd_HSequenceOfExtendedString ShallowCopy(const Handle_TColStd_HSequenceOfExtendedString& me) {
 return me->ShallowCopy();
}



#endif
