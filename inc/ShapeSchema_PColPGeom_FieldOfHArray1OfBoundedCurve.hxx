// This file is generated by WOK (CSFDBSchema).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeSchema_PColPGeom_FieldOfHArray1OfBoundedCurve_HeaderFile
#define _ShapeSchema_PColPGeom_FieldOfHArray1OfBoundedCurve_HeaderFile

#ifndef _Handle_Storage_Schema_HeaderFile
#include <Handle_Storage_Schema.hxx>
#endif
#ifndef _Storage_BaseDriver_HeaderFile
#include <Storage_BaseDriver.hxx>
#endif

#ifndef _ShapeSchema_PGeom_BoundedCurve_HeaderFile
#include <ShapeSchema_PGeom_BoundedCurve.hxx>
#endif


class PColPGeom_FieldOfHArray1OfBoundedCurve;

class ShapeSchema_PColPGeom_FieldOfHArray1OfBoundedCurve {
public:
  Standard_EXPORT static void SAdd(const PColPGeom_FieldOfHArray1OfBoundedCurve&,const Handle(Storage_Schema)& aSchema);
  Standard_EXPORT static void SWrite(const PColPGeom_FieldOfHArray1OfBoundedCurve&,Storage_BaseDriver& aDriver,const Handle(Storage_Schema)& aSchema);
  Standard_EXPORT static void SRead(PColPGeom_FieldOfHArray1OfBoundedCurve&,Storage_BaseDriver& aDriver,const Handle(Storage_Schema)& aSchema);
};
#endif
