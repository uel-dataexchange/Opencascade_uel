// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlMFunction_HeaderFile
#define _XmlMFunction_HeaderFile

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
class XmlMDF_ADriverTable;
class CDM_MessageDriver;
class XmlMFunction_FunctionDriver;
class XmlMFunction_ScopeDriver;
class XmlMFunction_GraphNodeDriver;



class XmlMFunction  {
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

  //! Adds the attribute storage drivers to <aDriverTable>. <br>
  Standard_EXPORT   static  void AddDrivers(const Handle(XmlMDF_ADriverTable)& aDriverTable,const Handle(CDM_MessageDriver)& theMessageDriver) ;





protected:





private:




friend class XmlMFunction_FunctionDriver;
friend class XmlMFunction_ScopeDriver;
friend class XmlMFunction_GraphNodeDriver;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
