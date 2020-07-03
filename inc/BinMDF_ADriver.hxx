// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BinMDF_ADriver_HeaderFile
#define _BinMDF_ADriver_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BinMDF_ADriver_HeaderFile
#include <Handle_BinMDF_ADriver.hxx>
#endif

#ifndef _Handle_CDM_MessageDriver_HeaderFile
#include <Handle_CDM_MessageDriver.hxx>
#endif
#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Handle_TDF_Attribute_HeaderFile
#include <Handle_TDF_Attribute.hxx>
#endif
#ifndef _Handle_Standard_Type_HeaderFile
#include <Handle_Standard_Type.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _BinObjMgt_RRelocationTable_HeaderFile
#include <BinObjMgt_RRelocationTable.hxx>
#endif
#ifndef _BinObjMgt_SRelocationTable_HeaderFile
#include <BinObjMgt_SRelocationTable.hxx>
#endif
class CDM_MessageDriver;
class TDF_Attribute;
class Standard_Type;
class TCollection_AsciiString;
class BinObjMgt_Persistent;
class TCollection_ExtendedString;


//! Attribute Storage/Retrieval Driver. <br>
class BinMDF_ADriver : public MMgt_TShared {

public:

  //! Creates a new attribute from TDF. <br>
  Standard_EXPORT   virtual  Handle_TDF_Attribute NewEmpty() const = 0;
  //! Returns the type of source object, <br>
//!          inheriting from Attribute from TDF. <br>
       const Handle_Standard_Type& SourceType() const;
  //! Returns the type name of the attribute object <br>
       const TCollection_AsciiString& TypeName() const;
  //! Translate the contents of <aSource> and put it <br>
//!          into <aTarget>, using the relocation table <br>
//!          <aRelocTable> to keep the sharings. <br>
  Standard_EXPORT   virtual  Standard_Boolean Paste(const BinObjMgt_Persistent& aSource,const Handle(TDF_Attribute)& aTarget,BinObjMgt_RRelocationTable& aRelocTable) const = 0;
  //! Translate the contents of <aSource> and put it <br>
//!          into <aTarget>, using the relocation table <br>
//!          <aRelocTable> to keep the sharings. <br>
  Standard_EXPORT   virtual  void Paste(const Handle(TDF_Attribute)& aSource,BinObjMgt_Persistent& aTarget,BinObjMgt_SRelocationTable& aRelocTable) const = 0;
  //! Send message to Application (usually when error occurres) <br>
  Standard_EXPORT     void WriteMessage(const TCollection_ExtendedString& theMessage) const;




  DEFINE_STANDARD_RTTI(BinMDF_ADriver)

protected:

  
  Standard_EXPORT   BinMDF_ADriver(const Handle(CDM_MessageDriver)& theMsgDriver,const Standard_CString theName = NULL);

TCollection_AsciiString myTypeName;


private: 


Handle_CDM_MessageDriver myMessageDriver;


};


#include <BinMDF_ADriver.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
