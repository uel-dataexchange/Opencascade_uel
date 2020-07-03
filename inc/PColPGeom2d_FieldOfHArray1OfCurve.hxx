// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColPGeom2d_FieldOfHArray1OfCurve_HeaderFile
#define _PColPGeom2d_FieldOfHArray1OfCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _DBC_BaseArray_HeaderFile
#include <DBC_BaseArray.hxx>
#endif
#ifndef _Handle_PGeom2d_Curve_HeaderFile
#include <Handle_PGeom2d_Curve.hxx>
#endif
#ifndef _Handle_PColPGeom2d_VArrayNodeOfFieldOfHArray1OfCurve_HeaderFile
#include <Handle_PColPGeom2d_VArrayNodeOfFieldOfHArray1OfCurve.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class Standard_NegativeValue;
class Standard_OutOfRange;
class Standard_DimensionMismatch;
class Standard_NullObject;
class PGeom2d_Curve;
class PColPGeom2d_VArrayNodeOfFieldOfHArray1OfCurve;
class PColPGeom2d_VArrayTNodeOfFieldOfHArray1OfCurve;



Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(PColPGeom2d_FieldOfHArray1OfCurve);


class PColPGeom2d_FieldOfHArray1OfCurve  : public DBC_BaseArray {

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

  
  Standard_EXPORT   PColPGeom2d_FieldOfHArray1OfCurve();
  
  Standard_EXPORT   PColPGeom2d_FieldOfHArray1OfCurve(const Standard_Integer Size);
  
  Standard_EXPORT   PColPGeom2d_FieldOfHArray1OfCurve(const PColPGeom2d_FieldOfHArray1OfCurve& Varray);
  
  Standard_EXPORT     void Resize(const Standard_Integer Size) ;
  
  Standard_EXPORT     void Assign(const PColPGeom2d_FieldOfHArray1OfCurve& Other) ;
    void operator =(const PColPGeom2d_FieldOfHArray1OfCurve& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(PGeom2d_Curve)& Value) ;
  
  Standard_EXPORT     Handle_PGeom2d_Curve& Value(const Standard_Integer Index) const;
    Handle_PGeom2d_Curve& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void Destroy() ;
~PColPGeom2d_FieldOfHArray1OfCurve()
{
  Destroy();
}



protected:




private: 

#ifdef CSFDB
// DBC_VArray : field
//
#endif



};





// other Inline functions and methods (like "C++: function call" methods)


#endif
