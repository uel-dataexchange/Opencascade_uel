// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StdLDrivers_DocumentStorageDriver_HeaderFile
#define _StdLDrivers_DocumentStorageDriver_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StdLDrivers_DocumentStorageDriver_HeaderFile
#include <Handle_StdLDrivers_DocumentStorageDriver.hxx>
#endif

#ifndef _MDocStd_DocumentStorageDriver_HeaderFile
#include <MDocStd_DocumentStorageDriver.hxx>
#endif
#ifndef _Handle_CDM_Document_HeaderFile
#include <Handle_CDM_Document.hxx>
#endif
#ifndef _Handle_MDF_ASDriverTable_HeaderFile
#include <Handle_MDF_ASDriverTable.hxx>
#endif
#ifndef _Handle_CDM_MessageDriver_HeaderFile
#include <Handle_CDM_MessageDriver.hxx>
#endif
class CDM_Document;
class PCDM_SequenceOfDocument;
class MDF_ASDriverTable;
class CDM_MessageDriver;


//! storage driver of a  Part document <br>
class StdLDrivers_DocumentStorageDriver : public MDocStd_DocumentStorageDriver {

public:

  
  Standard_EXPORT   StdLDrivers_DocumentStorageDriver();
  
  Standard_EXPORT   virtual  void Make(const Handle(CDM_Document)& aDocument,PCDM_SequenceOfDocument& Documents) ;
  
  Standard_EXPORT   virtual  Handle_MDF_ASDriverTable AttributeDrivers(const Handle(CDM_MessageDriver)& theMessageDriver) ;




  DEFINE_STANDARD_RTTI(StdLDrivers_DocumentStorageDriver)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
