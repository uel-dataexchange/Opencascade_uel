// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PDataStd_ExtStringArray_HeaderFile
#define _PDataStd_ExtStringArray_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PDataStd_ExtStringArray_HeaderFile
#include <Handle_PDataStd_ExtStringArray.hxx>
#endif

#ifndef _Handle_PCollection_HExtendedString_HeaderFile
#include <Handle_PCollection_HExtendedString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_PColStd_HArray1OfExtendedString_HeaderFile
#include <Handle_PColStd_HArray1OfExtendedString.hxx>
#endif
#ifndef _PDF_Attribute_HeaderFile
#include <PDF_Attribute.hxx>
#endif
class PCollection_HExtendedString;
class PColStd_HArray1OfExtendedString;


class PDataStd_ExtStringArray : public PDF_Attribute {

public:

  
  Standard_EXPORT   PDataStd_ExtStringArray();
  
  Standard_EXPORT     void Init(const Standard_Integer lower,const Standard_Integer upper) ;
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(PCollection_HExtendedString)& Value) ;
  
  Standard_EXPORT     Handle_PCollection_HExtendedString Value(const Standard_Integer Index) const;
  
  Standard_EXPORT     Standard_Integer Lower() const;
  
  Standard_EXPORT     Standard_Integer Upper() const;

PDataStd_ExtStringArray(const Storage_stCONSTclCOM& a) : PDF_Attribute(a)
{
  
}
    Handle(PColStd_HArray1OfExtendedString) _CSFDB_GetPDataStd_ExtStringArraymyValue() const { return myValue; }
    void _CSFDB_SetPDataStd_ExtStringArraymyValue(const Handle(PColStd_HArray1OfExtendedString)& p) { myValue = p; }



  DEFINE_STANDARD_RTTI(PDataStd_ExtStringArray)

protected:




private: 


Handle_PColStd_HArray1OfExtendedString myValue;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
