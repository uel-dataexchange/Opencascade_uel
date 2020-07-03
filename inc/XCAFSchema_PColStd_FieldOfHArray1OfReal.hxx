// This file is generated by WOK (CSFDBSchema).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XCAFSchema_PColStd_FieldOfHArray1OfReal_HeaderFile
#define _XCAFSchema_PColStd_FieldOfHArray1OfReal_HeaderFile

#ifndef _Handle_Storage_Schema_HeaderFile
#include <Handle_Storage_Schema.hxx>
#endif
#ifndef _Storage_BaseDriver_HeaderFile
#include <Storage_BaseDriver.hxx>
#endif



class PColStd_FieldOfHArray1OfReal;

class XCAFSchema_PColStd_FieldOfHArray1OfReal {
public:
  Standard_EXPORT static void SAdd(const PColStd_FieldOfHArray1OfReal&,const Handle(Storage_Schema)& aSchema);
  Standard_EXPORT static void SWrite(const PColStd_FieldOfHArray1OfReal&,Storage_BaseDriver& aDriver,const Handle(Storage_Schema)& aSchema);
  Standard_EXPORT static void SRead(PColStd_FieldOfHArray1OfReal&,Storage_BaseDriver& aDriver,const Handle(Storage_Schema)& aSchema);
};
#endif
