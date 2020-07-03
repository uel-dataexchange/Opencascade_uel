// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HeaderSection_FileName_HeaderFile
#define _HeaderSection_FileName_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_HeaderSection_FileName_HeaderFile
#include <Handle_HeaderSection_FileName.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_Interface_HArray1OfHAsciiString_HeaderFile
#include <Handle_Interface_HArray1OfHAsciiString.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class TCollection_HAsciiString;
class Interface_HArray1OfHAsciiString;



class HeaderSection_FileName : public MMgt_TShared {

public:

  //! Returns a FileName <br>
  Standard_EXPORT   HeaderSection_FileName();
  
  Standard_EXPORT     void Init(const Handle(TCollection_HAsciiString)& aName,const Handle(TCollection_HAsciiString)& aTimeStamp,const Handle(Interface_HArray1OfHAsciiString)& aAuthor,const Handle(Interface_HArray1OfHAsciiString)& aOrganization,const Handle(TCollection_HAsciiString)& aPreprocessorVersion,const Handle(TCollection_HAsciiString)& aOriginatingSystem,const Handle(TCollection_HAsciiString)& aAuthorisation) ;
  
  Standard_EXPORT     void SetName(const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString Name() const;
  
  Standard_EXPORT     void SetTimeStamp(const Handle(TCollection_HAsciiString)& aTimeStamp) ;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString TimeStamp() const;
  
  Standard_EXPORT     void SetAuthor(const Handle(Interface_HArray1OfHAsciiString)& aAuthor) ;
  
  Standard_EXPORT     Handle_Interface_HArray1OfHAsciiString Author() const;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString AuthorValue(const Standard_Integer num) const;
  
  Standard_EXPORT     Standard_Integer NbAuthor() const;
  
  Standard_EXPORT     void SetOrganization(const Handle(Interface_HArray1OfHAsciiString)& aOrganization) ;
  
  Standard_EXPORT     Handle_Interface_HArray1OfHAsciiString Organization() const;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString OrganizationValue(const Standard_Integer num) const;
  
  Standard_EXPORT     Standard_Integer NbOrganization() const;
  
  Standard_EXPORT     void SetPreprocessorVersion(const Handle(TCollection_HAsciiString)& aPreprocessorVersion) ;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString PreprocessorVersion() const;
  
  Standard_EXPORT     void SetOriginatingSystem(const Handle(TCollection_HAsciiString)& aOriginatingSystem) ;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString OriginatingSystem() const;
  
  Standard_EXPORT     void SetAuthorisation(const Handle(TCollection_HAsciiString)& aAuthorisation) ;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString Authorisation() const;




  DEFINE_STANDARD_RTTI(HeaderSection_FileName)

protected:




private: 


Handle_TCollection_HAsciiString name;
Handle_TCollection_HAsciiString timeStamp;
Handle_Interface_HArray1OfHAsciiString author;
Handle_Interface_HArray1OfHAsciiString organization;
Handle_TCollection_HAsciiString preprocessorVersion;
Handle_TCollection_HAsciiString originatingSystem;
Handle_TCollection_HAsciiString authorisation;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
