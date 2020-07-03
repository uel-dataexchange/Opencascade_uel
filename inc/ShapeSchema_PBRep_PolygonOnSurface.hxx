// This file is generated by WOK (CSFDBSchema).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeSchema_PBRep_PolygonOnSurface_HeaderFile
#define _ShapeSchema_PBRep_PolygonOnSurface_HeaderFile

#ifndef _Storage_Schema_HeaderFile
#include <Storage_Schema.hxx>
#endif
#ifndef _Storage_CallBack_HeaderFile
#include <Storage_CallBack.hxx>
#endif
#ifndef _Storage_BaseDriver_HeaderFile
#include <Storage_BaseDriver.hxx>
#endif
#ifndef _Handle_PBRep_PolygonOnSurface_HeaderFile
#include <Handle_PBRep_PolygonOnSurface.hxx>
#endif

#ifndef _ShapeSchema_PBRep_CurveRepresentation_HeaderFile
#include <ShapeSchema_PBRep_CurveRepresentation.hxx>
#endif


DEFINE_STANDARD_HANDLE(ShapeSchema_PBRep_PolygonOnSurface,Storage_CallBack)

class ShapeSchema_PBRep_PolygonOnSurface : public Storage_CallBack {
public:
  ShapeSchema_PBRep_PolygonOnSurface() {}
  Standard_EXPORT static void SAdd(const Handle(PBRep_PolygonOnSurface)& ,const Handle(Storage_Schema)&);
  Standard_EXPORT static void SWrite(const Handle(Standard_Persistent)&,Storage_BaseDriver&,const Handle(Storage_Schema)&);
  Standard_EXPORT static void SRead(const Handle(Standard_Persistent)&,Storage_BaseDriver&,const Handle(Storage_Schema)&);

  Standard_EXPORT Handle_Standard_Persistent New() const;
  Standard_EXPORT void Add(const Handle(Standard_Persistent)&,const Handle(Storage_Schema)&) const;
  Standard_EXPORT void Write(const Handle(Standard_Persistent)&,Storage_BaseDriver&,const Handle(Storage_Schema)&) const;
  Standard_EXPORT void Read(const Handle(Standard_Persistent)&,Storage_BaseDriver&,const Handle(Storage_Schema)&) const;

  DEFINE_STANDARD_RTTI(ShapeSchema_PBRep_PolygonOnSurface)
};
#endif
