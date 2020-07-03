// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDataStd_IntegerArrayRetrievalDriver_1_HeaderFile
#define _MDataStd_IntegerArrayRetrievalDriver_1_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MDataStd_IntegerArrayRetrievalDriver_1_HeaderFile
#include <Handle_MDataStd_IntegerArrayRetrievalDriver_1.hxx>
#endif

#ifndef _MDF_ARDriver_HeaderFile
#include <MDF_ARDriver.hxx>
#endif
#ifndef _Handle_CDM_MessageDriver_HeaderFile
#include <Handle_CDM_MessageDriver.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Type_HeaderFile
#include <Handle_Standard_Type.hxx>
#endif
#ifndef _Handle_TDF_Attribute_HeaderFile
#include <Handle_TDF_Attribute.hxx>
#endif
#ifndef _Handle_PDF_Attribute_HeaderFile
#include <Handle_PDF_Attribute.hxx>
#endif
#ifndef _Handle_MDF_RRelocationTable_HeaderFile
#include <Handle_MDF_RRelocationTable.hxx>
#endif
class CDM_MessageDriver;
class Standard_Type;
class TDF_Attribute;
class PDF_Attribute;
class MDF_RRelocationTable;


//! Retrieval  driver of IntegerArray attribute supporting <br>
//!          delta mechanism by default <br>
class MDataStd_IntegerArrayRetrievalDriver_1 : public MDF_ARDriver {

public:

  
  Standard_EXPORT   MDataStd_IntegerArrayRetrievalDriver_1(const Handle(CDM_MessageDriver)& theMessageDriver);
  //! Returns the version number from which the driver <br>
//!          is available: 1. <br>
  Standard_EXPORT     Standard_Integer VersionNumber() const;
  //! Returns the type: IntegerArray from PDataStd. <br>
  Standard_EXPORT     Handle_Standard_Type SourceType() const;
  
  Standard_EXPORT     Handle_TDF_Attribute NewEmpty() const;
  
  Standard_EXPORT     void Paste(const Handle(PDF_Attribute)& Source,const Handle(TDF_Attribute)& Target,const Handle(MDF_RRelocationTable)& RelocTable) const;




  DEFINE_STANDARD_RTTI(MDataStd_IntegerArrayRetrievalDriver_1)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
