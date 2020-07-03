// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlMDF_ADriverTable_HeaderFile
#define _XmlMDF_ADriverTable_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_XmlMDF_ADriverTable_HeaderFile
#include <Handle_XmlMDF_ADriverTable.hxx>
#endif

#ifndef _XmlMDF_TypeADriverMap_HeaderFile
#include <XmlMDF_TypeADriverMap.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_XmlMDF_ADriver_HeaderFile
#include <Handle_XmlMDF_ADriver.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Standard_Type_HeaderFile
#include <Handle_Standard_Type.hxx>
#endif
class XmlMDF_ADriver;
class XmlMDF_TypeADriverMap;
class Standard_Type;


//! A driver table is an object building links between <br>
//!          object types and object drivers. In the <br>
//!          translation process, a driver table is asked to <br>
//!          give a translation driver for each current object <br>
//!          to be translated. <br>
class XmlMDF_ADriverTable : public MMgt_TShared {

public:

  //! Creates a mutable ADriverTable from XmlMDF. <br>
  Standard_EXPORT   XmlMDF_ADriverTable();
  //! Sets a translation driver: <aDriver>. <br>
  Standard_EXPORT     void AddDriver(const Handle(XmlMDF_ADriver)& anHDriver) ;
  //! Gets a map of drivers. <br>
  Standard_EXPORT    const XmlMDF_TypeADriverMap& GetDrivers() const;
  //! Gets a driver <aDriver> according to <aType> <br>
//! <br>
//!          Returns True if a driver is found; false otherwise. <br>
  Standard_EXPORT     Standard_Boolean GetDriver(const Handle(Standard_Type)& aType,Handle(XmlMDF_ADriver)& anHDriver) const;




  DEFINE_STANDARD_RTTI(XmlMDF_ADriverTable)

protected:




private: 


XmlMDF_TypeADriverMap myMap;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
