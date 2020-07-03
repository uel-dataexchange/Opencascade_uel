// This file is generated by WOK (CSFDBSchema).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeSchema_PColPGeom_FieldOfHArray2OfBezierSurface_HeaderFile
#define _ShapeSchema_PColPGeom_FieldOfHArray2OfBezierSurface_HeaderFile

#ifndef _Handle_Storage_Schema_HeaderFile
#include <Handle_Storage_Schema.hxx>
#endif
#ifndef _Storage_BaseDriver_HeaderFile
#include <Storage_BaseDriver.hxx>
#endif

#ifndef _ShapeSchema_PGeom_BezierSurface_HeaderFile
#include <ShapeSchema_PGeom_BezierSurface.hxx>
#endif


class PColPGeom_FieldOfHArray2OfBezierSurface;

class ShapeSchema_PColPGeom_FieldOfHArray2OfBezierSurface {
public:
  Standard_EXPORT static void SAdd(const PColPGeom_FieldOfHArray2OfBezierSurface&,const Handle(Storage_Schema)& aSchema);
  Standard_EXPORT static void SWrite(const PColPGeom_FieldOfHArray2OfBezierSurface&,Storage_BaseDriver& aDriver,const Handle(Storage_Schema)& aSchema);
  Standard_EXPORT static void SRead(PColPGeom_FieldOfHArray2OfBezierSurface&,Storage_BaseDriver& aDriver,const Handle(Storage_Schema)& aSchema);
};
#endif
