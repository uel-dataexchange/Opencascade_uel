// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Dynamic_SequenceOfMethods_HeaderFile
#define _Dynamic_SequenceOfMethods_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Dynamic_SequenceOfMethods_HeaderFile
#include <Handle_Dynamic_SequenceOfMethods.hxx>
#endif

#ifndef _Dynamic_SeqOfMethods_HeaderFile
#include <Dynamic_SeqOfMethods.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_Dynamic_Method_HeaderFile
#include <Handle_Dynamic_Method.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Dynamic_Method;
class Dynamic_SeqOfMethods;



class Dynamic_SequenceOfMethods : public MMgt_TShared {

public:

  
      Dynamic_SequenceOfMethods();
  
        Standard_Boolean IsEmpty() const;
  
        Standard_Integer Length() const;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     void Append(const Handle(Dynamic_Method)& anItem) ;
  
  Standard_EXPORT     void Append(const Handle(Dynamic_SequenceOfMethods)& aSequence) ;
  
  Standard_EXPORT     void Prepend(const Handle(Dynamic_Method)& anItem) ;
  
  Standard_EXPORT     void Prepend(const Handle(Dynamic_SequenceOfMethods)& aSequence) ;
  
  Standard_EXPORT     void Reverse() ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(Dynamic_Method)& anItem) ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(Dynamic_SequenceOfMethods)& aSequence) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(Dynamic_Method)& anItem) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(Dynamic_SequenceOfMethods)& aSequence) ;
  
  Standard_EXPORT     void Exchange(const Standard_Integer anIndex,const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT     Handle_Dynamic_SequenceOfMethods Split(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void SetValue(const Standard_Integer anIndex,const Handle(Dynamic_Method)& anItem) ;
  
  Standard_EXPORT    const Handle_Dynamic_Method& Value(const Standard_Integer anIndex) const;
  
  Standard_EXPORT     Handle_Dynamic_Method& ChangeValue(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer fromIndex,const Standard_Integer toIndex) ;
  
       const Dynamic_SeqOfMethods& Sequence() const;
  
        Dynamic_SeqOfMethods& ChangeSequence() ;
  
  Standard_EXPORT     Handle_Dynamic_SequenceOfMethods ShallowCopy() const;




  DEFINE_STANDARD_RTTI(Dynamic_SequenceOfMethods)

protected:




private: 


Dynamic_SeqOfMethods mySequence;


};

#define Item Handle_Dynamic_Method
#define Item_hxx <Dynamic_Method.hxx>
#define TheSequence Dynamic_SeqOfMethods
#define TheSequence_hxx <Dynamic_SeqOfMethods.hxx>
#define TCollection_HSequence Dynamic_SequenceOfMethods
#define TCollection_HSequence_hxx <Dynamic_SequenceOfMethods.hxx>
#define Handle_TCollection_HSequence Handle_Dynamic_SequenceOfMethods
#define TCollection_HSequence_Type_() Dynamic_SequenceOfMethods_Type_()

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
inline Handle_Dynamic_SequenceOfMethods ShallowCopy(const Handle_Dynamic_SequenceOfMethods& me) {
 return me->ShallowCopy();
}



#endif