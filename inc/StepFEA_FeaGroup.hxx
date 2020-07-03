// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_FeaGroup_HeaderFile
#define _StepFEA_FeaGroup_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepFEA_FeaGroup_HeaderFile
#include <Handle_StepFEA_FeaGroup.hxx>
#endif

#ifndef _Handle_StepFEA_FeaModel_HeaderFile
#include <Handle_StepFEA_FeaModel.hxx>
#endif
#ifndef _StepBasic_Group_HeaderFile
#include <StepBasic_Group.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class StepFEA_FeaModel;
class TCollection_HAsciiString;


//! Representation of STEP entity FeaGroup <br>
class StepFEA_FeaGroup : public StepBasic_Group {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepFEA_FeaGroup();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const Handle(TCollection_HAsciiString)& aGroup_Name,const Handle(TCollection_HAsciiString)& aGroup_Description,const Handle(StepFEA_FeaModel)& aModelRef) ;
  //! Returns field ModelRef <br>
  Standard_EXPORT     Handle_StepFEA_FeaModel ModelRef() const;
  //! Set field ModelRef <br>
  Standard_EXPORT     void SetModelRef(const Handle(StepFEA_FeaModel)& ModelRef) ;




  DEFINE_STANDARD_RTTI(StepFEA_FeaGroup)

protected:




private: 


Handle_StepFEA_FeaModel theModelRef;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
