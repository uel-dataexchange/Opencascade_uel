// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_FeaModel_HeaderFile
#define _StepFEA_FeaModel_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepFEA_FeaModel_HeaderFile
#include <Handle_StepFEA_FeaModel.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfAsciiString_HeaderFile
#include <Handle_TColStd_HArray1OfAsciiString.hxx>
#endif
#ifndef _StepRepr_Representation_HeaderFile
#include <StepRepr_Representation.hxx>
#endif
#ifndef _Handle_StepRepr_HArray1OfRepresentationItem_HeaderFile
#include <Handle_StepRepr_HArray1OfRepresentationItem.hxx>
#endif
#ifndef _Handle_StepRepr_RepresentationContext_HeaderFile
#include <Handle_StepRepr_RepresentationContext.hxx>
#endif
class TCollection_HAsciiString;
class TColStd_HArray1OfAsciiString;
class StepRepr_HArray1OfRepresentationItem;
class StepRepr_RepresentationContext;


//! Representation of STEP entity FeaModel <br>
class StepFEA_FeaModel : public StepRepr_Representation {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepFEA_FeaModel();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const Handle(TCollection_HAsciiString)& aRepresentation_Name,const Handle(StepRepr_HArray1OfRepresentationItem)& aRepresentation_Items,const Handle(StepRepr_RepresentationContext)& aRepresentation_ContextOfItems,const Handle(TCollection_HAsciiString)& aCreatingSoftware,const Handle(TColStd_HArray1OfAsciiString)& aIntendedAnalysisCode,const Handle(TCollection_HAsciiString)& aDescription,const Handle(TCollection_HAsciiString)& aAnalysisType) ;
  //! Returns field CreatingSoftware <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString CreatingSoftware() const;
  //! Set field CreatingSoftware <br>
  Standard_EXPORT     void SetCreatingSoftware(const Handle(TCollection_HAsciiString)& CreatingSoftware) ;
  //! Returns field IntendedAnalysisCode <br>
  Standard_EXPORT     Handle_TColStd_HArray1OfAsciiString IntendedAnalysisCode() const;
  //! Set field IntendedAnalysisCode <br>
  Standard_EXPORT     void SetIntendedAnalysisCode(const Handle(TColStd_HArray1OfAsciiString)& IntendedAnalysisCode) ;
  //! Returns field Description <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString Description() const;
  //! Set field Description <br>
  Standard_EXPORT     void SetDescription(const Handle(TCollection_HAsciiString)& Description) ;
  //! Returns field AnalysisType <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString AnalysisType() const;
  //! Set field AnalysisType <br>
  Standard_EXPORT     void SetAnalysisType(const Handle(TCollection_HAsciiString)& AnalysisType) ;




  DEFINE_STANDARD_RTTI(StepFEA_FeaModel)

protected:




private: 


Handle_TCollection_HAsciiString theCreatingSoftware;
Handle_TColStd_HArray1OfAsciiString theIntendedAnalysisCode;
Handle_TCollection_HAsciiString theDescription;
Handle_TCollection_HAsciiString theAnalysisType;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
