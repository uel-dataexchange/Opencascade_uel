// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlMDataXtd_HeaderFile
#define _XmlMDataXtd_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_XmlMDF_ADriverTable_HeaderFile
#include <Handle_XmlMDF_ADriverTable.hxx>
#endif
#ifndef _Handle_CDM_MessageDriver_HeaderFile
#include <Handle_CDM_MessageDriver.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class XmlMDF_ADriverTable;
class CDM_MessageDriver;
class XmlMDataXtd_AxisDriver;
class XmlMDataXtd_ShapeDriver;
class XmlMDataXtd_PointDriver;
class XmlMDataXtd_PlaneDriver;
class XmlMDataXtd_GeometryDriver;
class XmlMDataXtd_ConstraintDriver;
class XmlMDataXtd_PlacementDriver;
class XmlMDataXtd_PatternStdDriver;


//! Storage and Retrieval drivers for modelling attributes. <br>
//!          Transient attributes are defined in package TDataXtd. <br>
class XmlMDataXtd  {
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

  //! Adds the attribute drivers to <aDriverTable>. <br>
  Standard_EXPORT   static  void AddDrivers(const Handle(XmlMDF_ADriverTable)& aDriverTable,const Handle(CDM_MessageDriver)& anMsgDrv) ;
  
  Standard_EXPORT   static  void SetDocumentVersion(const Standard_Integer DocVersion) ;
  
  Standard_EXPORT   static  Standard_Integer DocumentVersion() ;





protected:





private:




friend class XmlMDataXtd_AxisDriver;
friend class XmlMDataXtd_ShapeDriver;
friend class XmlMDataXtd_PointDriver;
friend class XmlMDataXtd_PlaneDriver;
friend class XmlMDataXtd_GeometryDriver;
friend class XmlMDataXtd_ConstraintDriver;
friend class XmlMDataXtd_PlacementDriver;
friend class XmlMDataXtd_PatternStdDriver;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
