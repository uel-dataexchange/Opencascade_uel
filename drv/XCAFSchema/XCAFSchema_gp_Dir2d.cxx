#ifndef _XCAFSchema_gp_Dir2d_HeaderFile
#include <XCAFSchema_gp_Dir2d.hxx>
#endif
#ifndef _gp_Dir2d_HeaderFile
#include <gp_Dir2d.hxx>
#endif
#include <XCAFSchema_gp_Dir2d.ixx>
#ifndef _Storage_Schema_HeaderFile
#include <Storage_Schema.hxx>
#endif
#ifndef _Storage_stCONSTclCOM_HeaderFile
#include <Storage_stCONSTclCOM.hxx>
#endif

void XCAFSchema_gp_Dir2d::SWrite(const gp_Dir2d& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  f.BeginWriteObjectData();
    XCAFSchema_gp_XY::SWrite(pp._CSFDB_Getgp_Dir2dcoord(),f,theSchema);

  f.EndWriteObjectData();
}

void XCAFSchema_gp_Dir2d::SRead(gp_Dir2d& pp, Storage_BaseDriver& f, const Handle(Storage_Schema)& theSchema)
{
  f.BeginReadObjectData();

    XCAFSchema_gp_XY::SRead((gp_XY&)pp._CSFDB_Getgp_Dir2dcoord(),f,theSchema);

  f.EndReadObjectData();
}
