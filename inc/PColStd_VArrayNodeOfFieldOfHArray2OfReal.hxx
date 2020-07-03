// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColStd_VArrayNodeOfFieldOfHArray2OfReal_HeaderFile
#define _PColStd_VArrayNodeOfFieldOfHArray2OfReal_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PColStd_VArrayNodeOfFieldOfHArray2OfReal_HeaderFile
#include <Handle_PColStd_VArrayNodeOfFieldOfHArray2OfReal.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _PStandard_ArrayNode_HeaderFile
#include <PStandard_ArrayNode.hxx>
#endif
class PColStd_FieldOfHArray2OfReal;
class PColStd_VArrayTNodeOfFieldOfHArray2OfReal;


class PColStd_VArrayNodeOfFieldOfHArray2OfReal : public PStandard_ArrayNode {

public:

  
  Standard_EXPORT   PColStd_VArrayNodeOfFieldOfHArray2OfReal();
  
  Standard_EXPORT   PColStd_VArrayNodeOfFieldOfHArray2OfReal(const Standard_Real& aValue);
  
  Standard_EXPORT     void SetValue(const Standard_Real& aValue) ;
  
  Standard_EXPORT     Standard_Address Value() const;

PColStd_VArrayNodeOfFieldOfHArray2OfReal(const Storage_stCONSTclCOM& a) : PStandard_ArrayNode(a)
{
  
}
    Standard_Real _CSFDB_GetPColStd_VArrayNodeOfFieldOfHArray2OfRealmyValue() const { return myValue; }
    void _CSFDB_SetPColStd_VArrayNodeOfFieldOfHArray2OfRealmyValue(const Standard_Real p) { myValue = p; }



  DEFINE_STANDARD_RTTI(PColStd_VArrayNodeOfFieldOfHArray2OfReal)

protected:




private: 


Standard_Real myValue;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
