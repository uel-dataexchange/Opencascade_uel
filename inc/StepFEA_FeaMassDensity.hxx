// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_FeaMassDensity_HeaderFile
#define _StepFEA_FeaMassDensity_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepFEA_FeaMassDensity_HeaderFile
#include <Handle_StepFEA_FeaMassDensity.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _StepFEA_FeaMaterialPropertyRepresentationItem_HeaderFile
#include <StepFEA_FeaMaterialPropertyRepresentationItem.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class TCollection_HAsciiString;


//! Representation of STEP entity FeaMassDensity <br>
class StepFEA_FeaMassDensity : public StepFEA_FeaMaterialPropertyRepresentationItem {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepFEA_FeaMassDensity();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const Handle(TCollection_HAsciiString)& aRepresentationItem_Name,const Standard_Real aFeaConstant) ;
  //! Returns field FeaConstant <br>
  Standard_EXPORT     Standard_Real FeaConstant() const;
  //! Set field FeaConstant <br>
  Standard_EXPORT     void SetFeaConstant(const Standard_Real FeaConstant) ;




  DEFINE_STANDARD_RTTI(StepFEA_FeaMassDensity)

protected:




private: 


Standard_Real theFeaConstant;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
