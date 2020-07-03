// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESGeom_HArray1OfCurveOnSurface_HeaderFile
#define _IGESGeom_HArray1OfCurveOnSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESGeom_HArray1OfCurveOnSurface_HeaderFile
#include <Handle_IGESGeom_HArray1OfCurveOnSurface.hxx>
#endif

#ifndef _IGESGeom_Array1OfCurveOnSurface_HeaderFile
#include <IGESGeom_Array1OfCurveOnSurface.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_IGESGeom_CurveOnSurface_HeaderFile
#include <Handle_IGESGeom_CurveOnSurface.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class IGESGeom_CurveOnSurface;
class IGESGeom_Array1OfCurveOnSurface;



class IGESGeom_HArray1OfCurveOnSurface : public MMgt_TShared {

public:

  
  Standard_EXPORT   IGESGeom_HArray1OfCurveOnSurface(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   IGESGeom_HArray1OfCurveOnSurface(const Standard_Integer Low,const Standard_Integer Up,const Handle(IGESGeom_CurveOnSurface)& V);
  
  Standard_EXPORT     void Init(const Handle(IGESGeom_CurveOnSurface)& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(IGESGeom_CurveOnSurface)& Value) ;
  
       const Handle_IGESGeom_CurveOnSurface& Value(const Standard_Integer Index) const;
  
        Handle_IGESGeom_CurveOnSurface& ChangeValue(const Standard_Integer Index) ;
  
       const IGESGeom_Array1OfCurveOnSurface& Array1() const;
  
        IGESGeom_Array1OfCurveOnSurface& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(IGESGeom_HArray1OfCurveOnSurface)

protected:




private: 


IGESGeom_Array1OfCurveOnSurface myArray;


};

#define ItemHArray1 Handle_IGESGeom_CurveOnSurface
#define ItemHArray1_hxx <IGESGeom_CurveOnSurface.hxx>
#define TheArray1 IGESGeom_Array1OfCurveOnSurface
#define TheArray1_hxx <IGESGeom_Array1OfCurveOnSurface.hxx>
#define TCollection_HArray1 IGESGeom_HArray1OfCurveOnSurface
#define TCollection_HArray1_hxx <IGESGeom_HArray1OfCurveOnSurface.hxx>
#define Handle_TCollection_HArray1 Handle_IGESGeom_HArray1OfCurveOnSurface
#define TCollection_HArray1_Type_() IGESGeom_HArray1OfCurveOnSurface_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_


// other Inline functions and methods (like "C++: function call" methods)


#endif
