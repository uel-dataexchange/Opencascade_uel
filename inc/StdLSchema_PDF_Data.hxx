// This file is generated by WOK (CSFDBSchema).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StdLSchema_PDF_Data_HeaderFile
#define _StdLSchema_PDF_Data_HeaderFile

#ifndef _Storage_Schema_HeaderFile
#include <Storage_Schema.hxx>
#endif
#ifndef _Storage_CallBack_HeaderFile
#include <Storage_CallBack.hxx>
#endif
#ifndef _Storage_BaseDriver_HeaderFile
#include <Storage_BaseDriver.hxx>
#endif
#ifndef _Handle_PDF_Data_HeaderFile
#include <Handle_PDF_Data.hxx>
#endif

#ifndef _StdLSchema_Standard_Persistent_HeaderFile
#include <StdLSchema_Standard_Persistent.hxx>
#endif


DEFINE_STANDARD_HANDLE(StdLSchema_PDF_Data,Storage_CallBack)

class StdLSchema_PDF_Data : public Storage_CallBack {
public:
  StdLSchema_PDF_Data() {}
  Standard_EXPORT static void SAdd(const Handle(PDF_Data)& ,const Handle(Storage_Schema)&);
  Standard_EXPORT static void SWrite(const Handle(Standard_Persistent)&,Storage_BaseDriver&,const Handle(Storage_Schema)&);
  Standard_EXPORT static void SRead(const Handle(Standard_Persistent)&,Storage_BaseDriver&,const Handle(Storage_Schema)&);

  Standard_EXPORT Handle_Standard_Persistent New() const;
  Standard_EXPORT void Add(const Handle(Standard_Persistent)&,const Handle(Storage_Schema)&) const;
  Standard_EXPORT void Write(const Handle(Standard_Persistent)&,Storage_BaseDriver&,const Handle(Storage_Schema)&) const;
  Standard_EXPORT void Read(const Handle(Standard_Persistent)&,Storage_BaseDriver&,const Handle(Storage_Schema)&) const;

  DEFINE_STANDARD_RTTI(StdLSchema_PDF_Data)
};
#endif
