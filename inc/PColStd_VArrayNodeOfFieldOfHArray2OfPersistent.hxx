// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColStd_VArrayNodeOfFieldOfHArray2OfPersistent_HeaderFile
#define _PColStd_VArrayNodeOfFieldOfHArray2OfPersistent_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PColStd_VArrayNodeOfFieldOfHArray2OfPersistent_HeaderFile
#include <Handle_PColStd_VArrayNodeOfFieldOfHArray2OfPersistent.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_Standard_Persistent_HeaderFile
#include <Handle_Standard_Persistent.hxx>
#endif
#ifndef _PStandard_ArrayNode_HeaderFile
#include <PStandard_ArrayNode.hxx>
#endif
class Standard_Persistent;
class PColStd_FieldOfHArray2OfPersistent;
class PColStd_VArrayTNodeOfFieldOfHArray2OfPersistent;


class PColStd_VArrayNodeOfFieldOfHArray2OfPersistent : public PStandard_ArrayNode {

public:

  
  Standard_EXPORT   PColStd_VArrayNodeOfFieldOfHArray2OfPersistent();
  
  Standard_EXPORT   PColStd_VArrayNodeOfFieldOfHArray2OfPersistent(const Handle(Standard_Persistent)& aValue);
  
  Standard_EXPORT     void SetValue(const Handle(Standard_Persistent)& aValue) ;
  
  Standard_EXPORT     Standard_Address Value() const;

PColStd_VArrayNodeOfFieldOfHArray2OfPersistent(const Storage_stCONSTclCOM& a) : PStandard_ArrayNode(a)
{
  
}
    Handle(Standard_Persistent) _CSFDB_GetPColStd_VArrayNodeOfFieldOfHArray2OfPersistentmyValue() const { return myValue; }
    void _CSFDB_SetPColStd_VArrayNodeOfFieldOfHArray2OfPersistentmyValue(const Handle(Standard_Persistent)& p) { myValue = p; }



  DEFINE_STANDARD_RTTI(PColStd_VArrayNodeOfFieldOfHArray2OfPersistent)

protected:




private: 


Handle_Standard_Persistent myValue;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
