// This file is generated by WOK (CSFDBSchema).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeSchema_PColPGeom2d_FieldOfHArray1OfCurve_HeaderFile
#define _ShapeSchema_PColPGeom2d_FieldOfHArray1OfCurve_HeaderFile

#ifndef _Handle_Storage_Schema_HeaderFile
#include <Handle_Storage_Schema.hxx>
#endif
#ifndef _Storage_BaseDriver_HeaderFile
#include <Storage_BaseDriver.hxx>
#endif

#ifndef _ShapeSchema_PGeom2d_Curve_HeaderFile
#include <ShapeSchema_PGeom2d_Curve.hxx>
#endif


class PColPGeom2d_FieldOfHArray1OfCurve;

class ShapeSchema_PColPGeom2d_FieldOfHArray1OfCurve {
public:
  Standard_EXPORT static void SAdd(const PColPGeom2d_FieldOfHArray1OfCurve&,const Handle(Storage_Schema)& aSchema);
  Standard_EXPORT static void SWrite(const PColPGeom2d_FieldOfHArray1OfCurve&,Storage_BaseDriver& aDriver,const Handle(Storage_Schema)& aSchema);
  Standard_EXPORT static void SRead(PColPGeom2d_FieldOfHArray1OfCurve&,Storage_BaseDriver& aDriver,const Handle(Storage_Schema)& aSchema);
};
#endif
