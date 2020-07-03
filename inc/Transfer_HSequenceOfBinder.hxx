// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Transfer_HSequenceOfBinder_HeaderFile
#define _Transfer_HSequenceOfBinder_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Transfer_HSequenceOfBinder_HeaderFile
#include <Handle_Transfer_HSequenceOfBinder.hxx>
#endif

#ifndef _Transfer_SequenceOfBinder_HeaderFile
#include <Transfer_SequenceOfBinder.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_Transfer_Binder_HeaderFile
#include <Handle_Transfer_Binder.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Transfer_Binder;
class Transfer_SequenceOfBinder;



class Transfer_HSequenceOfBinder : public MMgt_TShared {

public:

  
      Transfer_HSequenceOfBinder();
  
        Standard_Boolean IsEmpty() const;
  
        Standard_Integer Length() const;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     void Append(const Handle(Transfer_Binder)& anItem) ;
  
  Standard_EXPORT     void Append(const Handle(Transfer_HSequenceOfBinder)& aSequence) ;
  
  Standard_EXPORT     void Prepend(const Handle(Transfer_Binder)& anItem) ;
  
  Standard_EXPORT     void Prepend(const Handle(Transfer_HSequenceOfBinder)& aSequence) ;
  
  Standard_EXPORT     void Reverse() ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(Transfer_Binder)& anItem) ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(Transfer_HSequenceOfBinder)& aSequence) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(Transfer_Binder)& anItem) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(Transfer_HSequenceOfBinder)& aSequence) ;
  
  Standard_EXPORT     void Exchange(const Standard_Integer anIndex,const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT     Handle_Transfer_HSequenceOfBinder Split(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void SetValue(const Standard_Integer anIndex,const Handle(Transfer_Binder)& anItem) ;
  
  Standard_EXPORT    const Handle_Transfer_Binder& Value(const Standard_Integer anIndex) const;
  
  Standard_EXPORT     Handle_Transfer_Binder& ChangeValue(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer fromIndex,const Standard_Integer toIndex) ;
  
       const Transfer_SequenceOfBinder& Sequence() const;
  
        Transfer_SequenceOfBinder& ChangeSequence() ;
  
  Standard_EXPORT     Handle_Transfer_HSequenceOfBinder ShallowCopy() const;




  DEFINE_STANDARD_RTTI(Transfer_HSequenceOfBinder)

protected:




private: 


Transfer_SequenceOfBinder mySequence;


};

#define Item Handle_Transfer_Binder
#define Item_hxx <Transfer_Binder.hxx>
#define TheSequence Transfer_SequenceOfBinder
#define TheSequence_hxx <Transfer_SequenceOfBinder.hxx>
#define TCollection_HSequence Transfer_HSequenceOfBinder
#define TCollection_HSequence_hxx <Transfer_HSequenceOfBinder.hxx>
#define Handle_TCollection_HSequence Handle_Transfer_HSequenceOfBinder
#define TCollection_HSequence_Type_() Transfer_HSequenceOfBinder_Type_()

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
inline Handle_Transfer_HSequenceOfBinder ShallowCopy(const Handle_Transfer_HSequenceOfBinder& me) {
 return me->ShallowCopy();
}



#endif
