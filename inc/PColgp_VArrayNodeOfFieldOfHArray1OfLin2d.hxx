// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_VArrayNodeOfFieldOfHArray1OfLin2d_HeaderFile
#define _PColgp_VArrayNodeOfFieldOfHArray1OfLin2d_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PColgp_VArrayNodeOfFieldOfHArray1OfLin2d_HeaderFile
#include <Handle_PColgp_VArrayNodeOfFieldOfHArray1OfLin2d.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _gp_Lin2d_HeaderFile
#include <gp_Lin2d.hxx>
#endif
#ifndef _PStandard_ArrayNode_HeaderFile
#include <PStandard_ArrayNode.hxx>
#endif
class gp_Lin2d;
class PColgp_FieldOfHArray1OfLin2d;
class PColgp_VArrayTNodeOfFieldOfHArray1OfLin2d;


class PColgp_VArrayNodeOfFieldOfHArray1OfLin2d : public PStandard_ArrayNode {

public:

  
  Standard_EXPORT   PColgp_VArrayNodeOfFieldOfHArray1OfLin2d();
  
  Standard_EXPORT   PColgp_VArrayNodeOfFieldOfHArray1OfLin2d(const gp_Lin2d& aValue);
  
  Standard_EXPORT     void SetValue(const gp_Lin2d& aValue) ;
  
  Standard_EXPORT     Standard_Address Value() const;

PColgp_VArrayNodeOfFieldOfHArray1OfLin2d(const Storage_stCONSTclCOM& a) : PStandard_ArrayNode(a)
{
  
}
    const gp_Lin2d& _CSFDB_GetPColgp_VArrayNodeOfFieldOfHArray1OfLin2dmyValue() const { return myValue; }



  DEFINE_STANDARD_RTTI(PColgp_VArrayNodeOfFieldOfHArray1OfLin2d)

protected:




private: 


gp_Lin2d myValue;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
