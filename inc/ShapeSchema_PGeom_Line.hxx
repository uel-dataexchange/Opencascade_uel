// This file is generated by WOK (CSFDBSchema).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeSchema_PGeom_Line_HeaderFile
#define _ShapeSchema_PGeom_Line_HeaderFile

#ifndef _Storage_Schema_HeaderFile
#include <Storage_Schema.hxx>
#endif
#ifndef _Storage_CallBack_HeaderFile
#include <Storage_CallBack.hxx>
#endif
#ifndef _Storage_BaseDriver_HeaderFile
#include <Storage_BaseDriver.hxx>
#endif
#ifndef _Handle_PGeom_Line_HeaderFile
#include <Handle_PGeom_Line.hxx>
#endif

#ifndef _ShapeSchema_PGeom_Curve_HeaderFile
#include <ShapeSchema_PGeom_Curve.hxx>
#endif


DEFINE_STANDARD_HANDLE(ShapeSchema_PGeom_Line,Storage_CallBack)

class ShapeSchema_PGeom_Line : public Storage_CallBack {
public:
  ShapeSchema_PGeom_Line() {}
  Standard_EXPORT static void SAdd(const Handle(PGeom_Line)& ,const Handle(Storage_Schema)&);
  Standard_EXPORT static void SWrite(const Handle(Standard_Persistent)&,Storage_BaseDriver&,const Handle(Storage_Schema)&);
  Standard_EXPORT static void SRead(const Handle(Standard_Persistent)&,Storage_BaseDriver&,const Handle(Storage_Schema)&);

  Standard_EXPORT Handle_Standard_Persistent New() const;
  Standard_EXPORT void Add(const Handle(Standard_Persistent)&,const Handle(Storage_Schema)&) const;
  Standard_EXPORT void Write(const Handle(Standard_Persistent)&,Storage_BaseDriver&,const Handle(Storage_Schema)&) const;
  Standard_EXPORT void Read(const Handle(Standard_Persistent)&,Storage_BaseDriver&,const Handle(Storage_Schema)&) const;

  DEFINE_STANDARD_RTTI(ShapeSchema_PGeom_Line)
};
#endif
