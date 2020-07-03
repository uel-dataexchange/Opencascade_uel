// This file is generated by WOK (CSFDBSchema).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XCAFSchema_PXCAFDoc_GraphNodeSequence_HeaderFile
#define _XCAFSchema_PXCAFDoc_GraphNodeSequence_HeaderFile

#ifndef _Storage_Schema_HeaderFile
#include <Storage_Schema.hxx>
#endif
#ifndef _Storage_CallBack_HeaderFile
#include <Storage_CallBack.hxx>
#endif
#ifndef _Storage_BaseDriver_HeaderFile
#include <Storage_BaseDriver.hxx>
#endif
#ifndef _Handle_PXCAFDoc_GraphNodeSequence_HeaderFile
#include <Handle_PXCAFDoc_GraphNodeSequence.hxx>
#endif

#ifndef _XCAFSchema_Standard_Persistent_HeaderFile
#include <XCAFSchema_Standard_Persistent.hxx>
#endif


DEFINE_STANDARD_HANDLE(XCAFSchema_PXCAFDoc_GraphNodeSequence,Storage_CallBack)

class XCAFSchema_PXCAFDoc_GraphNodeSequence : public Storage_CallBack {
public:
  XCAFSchema_PXCAFDoc_GraphNodeSequence() {}
  Standard_EXPORT static void SAdd(const Handle(PXCAFDoc_GraphNodeSequence)& ,const Handle(Storage_Schema)&);
  Standard_EXPORT static void SWrite(const Handle(Standard_Persistent)&,Storage_BaseDriver&,const Handle(Storage_Schema)&);
  Standard_EXPORT static void SRead(const Handle(Standard_Persistent)&,Storage_BaseDriver&,const Handle(Storage_Schema)&);

  Standard_EXPORT Handle_Standard_Persistent New() const;
  Standard_EXPORT void Add(const Handle(Standard_Persistent)&,const Handle(Storage_Schema)&) const;
  Standard_EXPORT void Write(const Handle(Standard_Persistent)&,Storage_BaseDriver&,const Handle(Storage_Schema)&) const;
  Standard_EXPORT void Read(const Handle(Standard_Persistent)&,Storage_BaseDriver&,const Handle(Storage_Schema)&) const;

  DEFINE_STANDARD_RTTI(XCAFSchema_PXCAFDoc_GraphNodeSequence)
};
#endif
