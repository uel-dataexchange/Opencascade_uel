// This file is generated by WOK (CSFDBSchema).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeSchema_PPoly_FieldOfHArray1OfTriangle_HeaderFile
#define _ShapeSchema_PPoly_FieldOfHArray1OfTriangle_HeaderFile

#ifndef _Handle_Storage_Schema_HeaderFile
#include <Handle_Storage_Schema.hxx>
#endif
#ifndef _Storage_BaseDriver_HeaderFile
#include <Storage_BaseDriver.hxx>
#endif

#ifndef _ShapeSchema_PPoly_Triangle_HeaderFile
#include <ShapeSchema_PPoly_Triangle.hxx>
#endif


class PPoly_FieldOfHArray1OfTriangle;

class ShapeSchema_PPoly_FieldOfHArray1OfTriangle {
public:
  Standard_EXPORT static void SAdd(const PPoly_FieldOfHArray1OfTriangle&,const Handle(Storage_Schema)& aSchema);
  Standard_EXPORT static void SWrite(const PPoly_FieldOfHArray1OfTriangle&,Storage_BaseDriver& aDriver,const Handle(Storage_Schema)& aSchema);
  Standard_EXPORT static void SRead(PPoly_FieldOfHArray1OfTriangle&,Storage_BaseDriver& aDriver,const Handle(Storage_Schema)& aSchema);
};
#endif
