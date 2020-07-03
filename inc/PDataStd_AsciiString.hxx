// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PDataStd_AsciiString_HeaderFile
#define _PDataStd_AsciiString_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PDataStd_AsciiString_HeaderFile
#include <Handle_PDataStd_AsciiString.hxx>
#endif

#ifndef _Handle_PCollection_HAsciiString_HeaderFile
#include <Handle_PCollection_HAsciiString.hxx>
#endif
#ifndef _PDF_Attribute_HeaderFile
#include <PDF_Attribute.hxx>
#endif
class PCollection_HAsciiString;


class PDataStd_AsciiString : public PDF_Attribute {

public:

  
  Standard_EXPORT   PDataStd_AsciiString();
  
  Standard_EXPORT   PDataStd_AsciiString(const Handle(PCollection_HAsciiString)& V);
  
  Standard_EXPORT     Handle_PCollection_HAsciiString Get() const;
  
  Standard_EXPORT     void Set(const Handle(PCollection_HAsciiString)& V) ;

PDataStd_AsciiString(const Storage_stCONSTclCOM& a) : PDF_Attribute(a)
{
  
}
    Handle(PCollection_HAsciiString) _CSFDB_GetPDataStd_AsciiStringmyValue() const { return myValue; }
    void _CSFDB_SetPDataStd_AsciiStringmyValue(const Handle(PCollection_HAsciiString)& p) { myValue = p; }



  DEFINE_STANDARD_RTTI(PDataStd_AsciiString)

protected:




private: 


Handle_PCollection_HAsciiString myValue;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
