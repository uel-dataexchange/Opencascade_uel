// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDocStd_HeaderFile
#define _MDocStd_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_MDF_ASDriverHSequence_HeaderFile
#include <Handle_MDF_ASDriverHSequence.hxx>
#endif
#ifndef _Handle_CDM_MessageDriver_HeaderFile
#include <Handle_CDM_MessageDriver.hxx>
#endif
#ifndef _Handle_MDF_ARDriverHSequence_HeaderFile
#include <Handle_MDF_ARDriverHSequence.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
class MDF_ASDriverHSequence;
class CDM_MessageDriver;
class MDF_ARDriverHSequence;
class Standard_Transient;
class Standard_GUID;
class MDocStd_DocumentStorageDriver;
class MDocStd_DocumentRetrievalDriver;
class MDocStd_XLinkStorageDriver;
class MDocStd_XLinkRetrievalDriver;


//! Drivers for TDocStd_Document <br>
class MDocStd  {
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

  //! Adds the attribute storage driver(s) to <aDriverSeq>. <br>
  Standard_EXPORT   static  void AddStorageDrivers(const Handle(MDF_ASDriverHSequence)& aDriverSeq,const Handle(CDM_MessageDriver)& theMessageDriver) ;
  //! Adds the attribute retrieval driver(s) to <aDriverSeq>. <br>//! Factory method <br>
//!          ============== <br>
  Standard_EXPORT   static  void AddRetrievalDrivers(const Handle(MDF_ARDriverHSequence)& aDriverSeq,const Handle(CDM_MessageDriver)& theMessageDriver) ;
  
  Standard_EXPORT   static  Handle_Standard_Transient Factory(const Standard_GUID& aGUID) ;





protected:





private:




friend class MDocStd_DocumentStorageDriver;
friend class MDocStd_DocumentRetrievalDriver;
friend class MDocStd_XLinkStorageDriver;
friend class MDocStd_XLinkRetrievalDriver;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
