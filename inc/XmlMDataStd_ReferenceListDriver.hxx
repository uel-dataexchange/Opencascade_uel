// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlMDataStd_ReferenceListDriver_HeaderFile
#define _XmlMDataStd_ReferenceListDriver_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_XmlMDataStd_ReferenceListDriver_HeaderFile
#include <Handle_XmlMDataStd_ReferenceListDriver.hxx>
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



class XmlMDataStd_ReferenceListDriver : public XmlMDF_ADriver {

public:

  
  Standard_EXPORT   XmlMDataStd_ReferenceListDriver(const Handle(CDM_MessageDriver)& theMessageDriver);
  
  Standard_EXPORT     Handle_TDF_Attribute NewEmpty() const;
  
  Standard_EXPORT     Standard_Boolean Paste(const XmlObjMgt_Persistent& Source,const Handle(TDF_Attribute)& Target,XmlObjMgt_RRelocationTable& RelocTable) const;
  
  Standard_EXPORT     void Paste(const Handle(TDF_Attribute)& Source,XmlObjMgt_Persistent& Target,XmlObjMgt_SRelocationTable& RelocTable) const;




  DEFINE_STANDARD_RTTI(XmlMDataStd_ReferenceListDriver)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
