// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_FeaCurveSectionGeometricRelationship_HeaderFile
#define _StepFEA_FeaCurveSectionGeometricRelationship_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepFEA_FeaCurveSectionGeometricRelationship_HeaderFile
#include <Handle_StepFEA_FeaCurveSectionGeometricRelationship.hxx>
#endif

#ifndef _Handle_StepElement_CurveElementSectionDefinition_HeaderFile
#include <Handle_StepElement_CurveElementSectionDefinition.hxx>
#endif
#ifndef _Handle_StepElement_AnalysisItemWithinRepresentation_HeaderFile
#include <Handle_StepElement_AnalysisItemWithinRepresentation.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class StepElement_CurveElementSectionDefinition;
class StepElement_AnalysisItemWithinRepresentation;


//! Representation of STEP entity FeaCurveSectionGeometricRelationship <br>
class StepFEA_FeaCurveSectionGeometricRelationship : public MMgt_TShared {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepFEA_FeaCurveSectionGeometricRelationship();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const Handle(StepElement_CurveElementSectionDefinition)& aSectionRef,const Handle(StepElement_AnalysisItemWithinRepresentation)& aItem) ;
  //! Returns field SectionRef <br>
  Standard_EXPORT     Handle_StepElement_CurveElementSectionDefinition SectionRef() const;
  //! Set field SectionRef <br>
  Standard_EXPORT     void SetSectionRef(const Handle(StepElement_CurveElementSectionDefinition)& SectionRef) ;
  //! Returns field Item <br>
  Standard_EXPORT     Handle_StepElement_AnalysisItemWithinRepresentation Item() const;
  //! Set field Item <br>
  Standard_EXPORT     void SetItem(const Handle(StepElement_AnalysisItemWithinRepresentation)& Item) ;




  DEFINE_STANDARD_RTTI(StepFEA_FeaCurveSectionGeometricRelationship)

protected:




private: 


Handle_StepElement_CurveElementSectionDefinition theSectionRef;
Handle_StepElement_AnalysisItemWithinRepresentation theItem;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
