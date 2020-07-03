// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_HSequenceOfShape_HeaderFile
#define _TopTools_HSequenceOfShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TopTools_HSequenceOfShape_HeaderFile
#include <Handle_TopTools_HSequenceOfShape.hxx>
#endif

#ifndef _TopTools_SequenceOfShape_HeaderFile
#include <TopTools_SequenceOfShape.hxx>
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
class TopoDS_Shape;
class TopTools_SequenceOfShape;



class TopTools_HSequenceOfShape : public MMgt_TShared {

public:

  
      TopTools_HSequenceOfShape();
  
        Standard_Boolean IsEmpty() const;
  
        Standard_Integer Length() const;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     void Append(const TopoDS_Shape& anItem) ;
  
  Standard_EXPORT     void Append(const Handle(TopTools_HSequenceOfShape)& aSequence) ;
  
  Standard_EXPORT     void Prepend(const TopoDS_Shape& anItem) ;
  
  Standard_EXPORT     void Prepend(const Handle(TopTools_HSequenceOfShape)& aSequence) ;
  
  Standard_EXPORT     void Reverse() ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const TopoDS_Shape& anItem) ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(TopTools_HSequenceOfShape)& aSequence) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const TopoDS_Shape& anItem) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(TopTools_HSequenceOfShape)& aSequence) ;
  
  Standard_EXPORT     void Exchange(const Standard_Integer anIndex,const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT     Handle_TopTools_HSequenceOfShape Split(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void SetValue(const Standard_Integer anIndex,const TopoDS_Shape& anItem) ;
  
  Standard_EXPORT    const TopoDS_Shape& Value(const Standard_Integer anIndex) const;
  
  Standard_EXPORT     TopoDS_Shape& ChangeValue(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer fromIndex,const Standard_Integer toIndex) ;
  
       const TopTools_SequenceOfShape& Sequence() const;
  
        TopTools_SequenceOfShape& ChangeSequence() ;
  
  Standard_EXPORT     Handle_TopTools_HSequenceOfShape ShallowCopy() const;




  DEFINE_STANDARD_RTTI(TopTools_HSequenceOfShape)

protected:




private: 


TopTools_SequenceOfShape mySequence;


};

#define Item TopoDS_Shape
#define Item_hxx <TopoDS_Shape.hxx>
#define TheSequence TopTools_SequenceOfShape
#define TheSequence_hxx <TopTools_SequenceOfShape.hxx>
#define TCollection_HSequence TopTools_HSequenceOfShape
#define TCollection_HSequence_hxx <TopTools_HSequenceOfShape.hxx>
#define Handle_TCollection_HSequence Handle_TopTools_HSequenceOfShape
#define TCollection_HSequence_Type_() TopTools_HSequenceOfShape_Type_()

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
inline Handle_TopTools_HSequenceOfShape ShallowCopy(const Handle_TopTools_HSequenceOfShape& me) {
 return me->ShallowCopy();
}



#endif
