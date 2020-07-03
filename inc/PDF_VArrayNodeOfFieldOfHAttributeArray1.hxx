// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PDF_VArrayNodeOfFieldOfHAttributeArray1_HeaderFile
#define _PDF_VArrayNodeOfFieldOfHAttributeArray1_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PDF_VArrayNodeOfFieldOfHAttributeArray1_HeaderFile
#include <Handle_PDF_VArrayNodeOfFieldOfHAttributeArray1.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_PDF_Attribute_HeaderFile
#include <Handle_PDF_Attribute.hxx>
#endif
#ifndef _PStandard_ArrayNode_HeaderFile
#include <PStandard_ArrayNode.hxx>
#endif
class PDF_Attribute;
class PDF_FieldOfHAttributeArray1;
class PDF_VArrayTNodeOfFieldOfHAttributeArray1;


class PDF_VArrayNodeOfFieldOfHAttributeArray1 : public PStandard_ArrayNode {

public:

  
  Standard_EXPORT   PDF_VArrayNodeOfFieldOfHAttributeArray1();
  
  Standard_EXPORT   PDF_VArrayNodeOfFieldOfHAttributeArray1(const Handle(PDF_Attribute)& aValue);
  
  Standard_EXPORT     void SetValue(const Handle(PDF_Attribute)& aValue) ;
  
  Standard_EXPORT     Standard_Address Value() const;

PDF_VArrayNodeOfFieldOfHAttributeArray1(const Storage_stCONSTclCOM& a) : PStandard_ArrayNode(a)
{
  
}
    Handle(PDF_Attribute) _CSFDB_GetPDF_VArrayNodeOfFieldOfHAttributeArray1myValue() const { return myValue; }
    void _CSFDB_SetPDF_VArrayNodeOfFieldOfHAttributeArray1myValue(const Handle(PDF_Attribute)& p) { myValue = p; }



  DEFINE_STANDARD_RTTI(PDF_VArrayNodeOfFieldOfHAttributeArray1)

protected:




private: 


Handle_PDF_Attribute myValue;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
