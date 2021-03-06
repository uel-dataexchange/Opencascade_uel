// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BinMXCAFDoc_HeaderFile
#define _BinMXCAFDoc_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_BinMDF_ADriverTable_HeaderFile
#include <Handle_BinMDF_ADriverTable.hxx>
#endif
#ifndef _Handle_CDM_MessageDriver_HeaderFile
#include <Handle_CDM_MessageDriver.hxx>
#endif
class BinMDF_ADriverTable;
class CDM_MessageDriver;
class BinMXCAFDoc_AreaDriver;
class BinMXCAFDoc_CentroidDriver;
class BinMXCAFDoc_ColorDriver;
class BinMXCAFDoc_GraphNodeDriver;
class BinMXCAFDoc_LocationDriver;
class BinMXCAFDoc_VolumeDriver;
class BinMXCAFDoc_DatumDriver;
class BinMXCAFDoc_DimTolDriver;
class BinMXCAFDoc_MaterialDriver;
class BinMXCAFDoc_ColorToolDriver;
class BinMXCAFDoc_DocumentToolDriver;
class BinMXCAFDoc_LayerToolDriver;
class BinMXCAFDoc_ShapeToolDriver;
class BinMXCAFDoc_DimTolToolDriver;
class BinMXCAFDoc_MaterialToolDriver;



class BinMXCAFDoc  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Adds the attribute drivers to <theDriverTable>. <br>
  Standard_EXPORT   static  void AddDrivers(const Handle(BinMDF_ADriverTable)& theDriverTable,const Handle(CDM_MessageDriver)& theMsgDrv) ;





protected:





private:




friend class BinMXCAFDoc_AreaDriver;
friend class BinMXCAFDoc_CentroidDriver;
friend class BinMXCAFDoc_ColorDriver;
friend class BinMXCAFDoc_GraphNodeDriver;
friend class BinMXCAFDoc_LocationDriver;
friend class BinMXCAFDoc_VolumeDriver;
friend class BinMXCAFDoc_DatumDriver;
friend class BinMXCAFDoc_DimTolDriver;
friend class BinMXCAFDoc_MaterialDriver;
friend class BinMXCAFDoc_ColorToolDriver;
friend class BinMXCAFDoc_DocumentToolDriver;
friend class BinMXCAFDoc_LayerToolDriver;
friend class BinMXCAFDoc_ShapeToolDriver;
friend class BinMXCAFDoc_DimTolToolDriver;
friend class BinMXCAFDoc_MaterialToolDriver;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
