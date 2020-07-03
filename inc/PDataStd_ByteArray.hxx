// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PDataStd_ByteArray_HeaderFile
#define _PDataStd_ByteArray_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PDataStd_ByteArray_HeaderFile
#include <Handle_PDataStd_ByteArray.hxx>
#endif

#ifndef _Handle_PColStd_HArray1OfInteger_HeaderFile
#include <Handle_PColStd_HArray1OfInteger.hxx>
#endif
#ifndef _PDF_Attribute_HeaderFile
#include <PDF_Attribute.hxx>
#endif
class PColStd_HArray1OfInteger;


class PDataStd_ByteArray : public PDF_Attribute {

public:

  
  Standard_EXPORT   PDataStd_ByteArray();
  
  Standard_EXPORT     void Set(const Handle(PColStd_HArray1OfInteger)& values) ;
  
  Standard_EXPORT    const Handle_PColStd_HArray1OfInteger& Get() const;

PDataStd_ByteArray(const Storage_stCONSTclCOM& a) : PDF_Attribute(a)
{
  
}
    Handle(PColStd_HArray1OfInteger) _CSFDB_GetPDataStd_ByteArraymyValues() const { return myValues; }
    void _CSFDB_SetPDataStd_ByteArraymyValues(const Handle(PColStd_HArray1OfInteger)& p) { myValues = p; }



  DEFINE_STANDARD_RTTI(PDataStd_ByteArray)

protected:




private: 


Handle_PColStd_HArray1OfInteger myValues;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
