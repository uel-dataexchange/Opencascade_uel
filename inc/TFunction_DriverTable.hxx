// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TFunction_DriverTable_HeaderFile
#define _TFunction_DriverTable_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TFunction_DriverTable_HeaderFile
#include <Handle_TFunction_DriverTable.hxx>
#endif

#ifndef _TFunction_DataMapOfGUIDDriver_HeaderFile
#include <TFunction_DataMapOfGUIDDriver.hxx>
#endif
#ifndef _Handle_TFunction_HArray1OfDataMapOfGUIDDriver_HeaderFile
#include <Handle_TFunction_HArray1OfDataMapOfGUIDDriver.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TFunction_Driver_HeaderFile
#include <Handle_TFunction_Driver.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class TFunction_HArray1OfDataMapOfGUIDDriver;
class Standard_GUID;
class TFunction_Driver;


//! A container for instances of drivers. <br>
//! You create a new instance of TFunction_Driver <br>
//! and use the method AddDriver to load it into the driver table. <br>
class TFunction_DriverTable : public MMgt_TShared {

public:

  //! Returns the driver table. If a driver does not exist, creates it. <br>
  Standard_EXPORT   static  Handle_TFunction_DriverTable Get() ;
  //! Default constructor <br>
  Standard_EXPORT   TFunction_DriverTable();
  //! Returns true if the driver has been added successfully to the driver table. <br>
  Standard_EXPORT     Standard_Boolean AddDriver(const Standard_GUID& guid,const Handle(TFunction_Driver)& driver,const Standard_Integer thread = 0) ;
  //! Returns true if the driver exists in the driver table. <br>
  Standard_EXPORT     Standard_Boolean HasDriver(const Standard_GUID& guid,const Standard_Integer thread = 0) const;
  //! Returns true if the driver was found. <br>
  Standard_EXPORT     Standard_Boolean FindDriver(const Standard_GUID& guid,Handle(TFunction_Driver)& driver,const Standard_Integer thread = 0) const;
  
  Standard_EXPORT     Standard_OStream& Dump(Standard_OStream& anOS) const;
    Standard_OStream& operator <<(Standard_OStream& anOS) const
{
  return Dump(anOS);
}
  //! Removes a driver with the given GUID. <br>
//!     Returns true if the driver has been removed successfully. <br>
  Standard_EXPORT     Standard_Boolean RemoveDriver(const Standard_GUID& guid,const Standard_Integer thread = 0) ;
  //! Removes all drivers. Returns true if the driver has been removed successfully. <br>
  Standard_EXPORT     void Clear() ;




  DEFINE_STANDARD_RTTI(TFunction_DriverTable)

protected:




private: 


TFunction_DataMapOfGUIDDriver myDrivers;
Handle_TFunction_HArray1OfDataMapOfGUIDDriver myThreadDrivers;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
