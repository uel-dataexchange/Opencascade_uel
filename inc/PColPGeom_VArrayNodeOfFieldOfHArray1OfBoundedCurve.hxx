// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColPGeom_VArrayNodeOfFieldOfHArray1OfBoundedCurve_HeaderFile
#define _PColPGeom_VArrayNodeOfFieldOfHArray1OfBoundedCurve_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PColPGeom_VArrayNodeOfFieldOfHArray1OfBoundedCurve_HeaderFile
#include <Handle_PColPGeom_VArrayNodeOfFieldOfHArray1OfBoundedCurve.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_PGeom_BoundedCurve_HeaderFile
#include <Handle_PGeom_BoundedCurve.hxx>
#endif
#ifndef _PStandard_ArrayNode_HeaderFile
#include <PStandard_ArrayNode.hxx>
#endif
class PGeom_BoundedCurve;
class PColPGeom_FieldOfHArray1OfBoundedCurve;
class PColPGeom_VArrayTNodeOfFieldOfHArray1OfBoundedCurve;


class PColPGeom_VArrayNodeOfFieldOfHArray1OfBoundedCurve : public PStandard_ArrayNode {

public:

  
  Standard_EXPORT   PColPGeom_VArrayNodeOfFieldOfHArray1OfBoundedCurve();
  
  Standard_EXPORT   PColPGeom_VArrayNodeOfFieldOfHArray1OfBoundedCurve(const Handle(PGeom_BoundedCurve)& aValue);
  
  Standard_EXPORT     void SetValue(const Handle(PGeom_BoundedCurve)& aValue) ;
  
  Standard_EXPORT     Standard_Address Value() const;

PColPGeom_VArrayNodeOfFieldOfHArray1OfBoundedCurve(const Storage_stCONSTclCOM& a) : PStandard_ArrayNode(a)
{
  
}
    Handle(PGeom_BoundedCurve) _CSFDB_GetPColPGeom_VArrayNodeOfFieldOfHArray1OfBoundedCurvemyValue() const { return myValue; }
    void _CSFDB_SetPColPGeom_VArrayNodeOfFieldOfHArray1OfBoundedCurvemyValue(const Handle(PGeom_BoundedCurve)& p) { myValue = p; }



  DEFINE_STANDARD_RTTI(PColPGeom_VArrayNodeOfFieldOfHArray1OfBoundedCurve)

protected:




private: 


Handle_PGeom_BoundedCurve myValue;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
