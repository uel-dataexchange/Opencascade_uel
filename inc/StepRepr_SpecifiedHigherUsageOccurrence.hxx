// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepRepr_SpecifiedHigherUsageOccurrence_HeaderFile
#define _StepRepr_SpecifiedHigherUsageOccurrence_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepRepr_SpecifiedHigherUsageOccurrence_HeaderFile
#include <Handle_StepRepr_SpecifiedHigherUsageOccurrence.hxx>
#endif

#ifndef _Handle_StepRepr_AssemblyComponentUsage_HeaderFile
#include <Handle_StepRepr_AssemblyComponentUsage.hxx>
#endif
#ifndef _Handle_StepRepr_NextAssemblyUsageOccurrence_HeaderFile
#include <Handle_StepRepr_NextAssemblyUsageOccurrence.hxx>
#endif
#ifndef _StepRepr_AssemblyComponentUsage_HeaderFile
#include <StepRepr_AssemblyComponentUsage.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_StepBasic_ProductDefinition_HeaderFile
#include <Handle_StepBasic_ProductDefinition.hxx>
#endif
class StepRepr_AssemblyComponentUsage;
class StepRepr_NextAssemblyUsageOccurrence;
class TCollection_HAsciiString;
class StepBasic_ProductDefinition;


//! Representation of STEP entity SpecifiedHigherUsageOccurrence <br>
class StepRepr_SpecifiedHigherUsageOccurrence : public StepRepr_AssemblyComponentUsage {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepRepr_SpecifiedHigherUsageOccurrence();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const Handle(TCollection_HAsciiString)& aProductDefinitionRelationship_Id,const Handle(TCollection_HAsciiString)& aProductDefinitionRelationship_Name,const Standard_Boolean hasProductDefinitionRelationship_Description,const Handle(TCollection_HAsciiString)& aProductDefinitionRelationship_Description,const Handle(StepBasic_ProductDefinition)& aProductDefinitionRelationship_RelatingProductDefinition,const Handle(StepBasic_ProductDefinition)& aProductDefinitionRelationship_RelatedProductDefinition,const Standard_Boolean hasAssemblyComponentUsage_ReferenceDesignator,const Handle(TCollection_HAsciiString)& aAssemblyComponentUsage_ReferenceDesignator,const Handle(StepRepr_AssemblyComponentUsage)& aUpperUsage,const Handle(StepRepr_NextAssemblyUsageOccurrence)& aNextUsage) ;
  //! Returns field UpperUsage <br>
  Standard_EXPORT     Handle_StepRepr_AssemblyComponentUsage UpperUsage() const;
  //! Set field UpperUsage <br>
  Standard_EXPORT     void SetUpperUsage(const Handle(StepRepr_AssemblyComponentUsage)& UpperUsage) ;
  //! Returns field NextUsage <br>
  Standard_EXPORT     Handle_StepRepr_NextAssemblyUsageOccurrence NextUsage() const;
  //! Set field NextUsage <br>
  Standard_EXPORT     void SetNextUsage(const Handle(StepRepr_NextAssemblyUsageOccurrence)& NextUsage) ;




  DEFINE_STANDARD_RTTI(StepRepr_SpecifiedHigherUsageOccurrence)

protected:




private: 


Handle_StepRepr_AssemblyComponentUsage theUpperUsage;
Handle_StepRepr_NextAssemblyUsageOccurrence theNextUsage;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
