// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlMXCAFDoc_LayerToolDriver_HeaderFile
#define _XmlMXCAFDoc_LayerToolDriver_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_XmlMXCAFDoc_LayerToolDriver_HeaderFile
#include <Handle_XmlMXCAFDoc_LayerToolDriver.hxx>
#endif

#ifndef _XmlMDF_ADriver_HeaderFile
#include <XmlMDF_ADriver.hxx>
#endif
#ifndef _Handle_CDM_MessageDriver_HeaderFile
#include <Handle_CDM_MessageDriver.hxx>
#endif
#ifndef _Handle_TDF_Attribute_HeaderFile
#include <Handle_TDF_Attribute.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _XmlObjMgt_RRelocationTable_HeaderFile
#include <XmlObjMgt_RRelocationTable.hxx>
#endif
#ifndef _XmlObjMgt_SRelocationTable_HeaderFile
#include <XmlObjMgt_SRelocationTable.hxx>
#endif
class CDM_MessageDriver;
class TDF_Attribute;
class XmlObjMgt_Persistent;


//! Attribute Driver. <br>
class XmlMXCAFDoc_LayerToolDriver : public XmlMDF_ADriver {

public:

  
  Standard_EXPORT   XmlMXCAFDoc_LayerToolDriver(const Handle(CDM_MessageDriver)& theMsgDriver);
  
  Standard_EXPORT   virtual  Handle_TDF_Attribute NewEmpty() const;
  
  Standard_EXPORT   virtual  Standard_Boolean Paste(const XmlObjMgt_Persistent& theSource,const Handle(TDF_Attribute)& theTarget,XmlObjMgt_RRelocationTable& theRelocTable) const;
  
  Standard_EXPORT   virtual  void Paste(const Handle(TDF_Attribute)& theSource,XmlObjMgt_Persistent& theTarget,XmlObjMgt_SRelocationTable& theRelocTable) const;




  DEFINE_STANDARD_RTTI(XmlMXCAFDoc_LayerToolDriver)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
