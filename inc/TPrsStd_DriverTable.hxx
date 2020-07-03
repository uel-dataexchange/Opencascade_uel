// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TPrsStd_DriverTable_HeaderFile
#define _TPrsStd_DriverTable_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TPrsStd_DriverTable_HeaderFile
#include <Handle_TPrsStd_DriverTable.hxx>
#endif

#ifndef _TPrsStd_DataMapOfGUIDDriver_HeaderFile
#include <TPrsStd_DataMapOfGUIDDriver.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TPrsStd_Driver_HeaderFile
#include <Handle_TPrsStd_Driver.hxx>
#endif
class Standard_GUID;
class TPrsStd_Driver;


//!   This class is   a  container to record  (AddDriver) <br>
//!          binding between  GUID and  TPrsStd_Driver. <br>
//! You create a new instance of TPrsStd_Driver <br>
//! and use the method AddDriver to load it into the driver table. the method <br>
class TPrsStd_DriverTable : public MMgt_TShared {

public:

  //! Returns the static table. <br>
//!          If it does not exist, creates it and fills it with standard drivers. <br>
  Standard_EXPORT   static  Handle_TPrsStd_DriverTable Get() ;
  //! Default constructor <br>
  Standard_EXPORT   TPrsStd_DriverTable();
  //! Fills the table with standard drivers <br>
  Standard_EXPORT     void InitStandardDrivers() ;
  //! Returns true if the driver has been added successfully to the driver table. <br>
  Standard_EXPORT     Standard_Boolean AddDriver(const Standard_GUID& guid,const Handle(TPrsStd_Driver)& driver) ;
  //! Returns true if the driver was found. <br>
  Standard_EXPORT     Standard_Boolean FindDriver(const Standard_GUID& guid,Handle(TPrsStd_Driver)& driver) const;
  
//! Removes a driver with the given GUID. <br>
//!      Returns true if the driver has been removed successfully. <br>
  Standard_EXPORT     Standard_Boolean RemoveDriver(const Standard_GUID& guid) ;
  //! Removes all drivers. Returns <br>
//! true if the driver has been removed successfully. <br>
//! If this method is used, the InitStandardDrivers method should be <br>
//! called to fill the table with standard drivers. <br>
  Standard_EXPORT     void Clear() ;




  DEFINE_STANDARD_RTTI(TPrsStd_DriverTable)

protected:




private: 


TPrsStd_DataMapOfGUIDDriver myDrivers;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
