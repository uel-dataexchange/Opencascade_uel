// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepElement_SurfaceSectionFieldVarying_HeaderFile
#define _StepElement_SurfaceSectionFieldVarying_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepElement_SurfaceSectionFieldVarying_HeaderFile
#include <Handle_StepElement_SurfaceSectionFieldVarying.hxx>
#endif

#ifndef _Handle_StepElement_HArray1OfSurfaceSection_HeaderFile
#include <Handle_StepElement_HArray1OfSurfaceSection.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _StepElement_SurfaceSectionField_HeaderFile
#include <StepElement_SurfaceSectionField.hxx>
#endif
class StepElement_HArray1OfSurfaceSection;


//! Representation of STEP entity SurfaceSectionFieldVarying <br>
class StepElement_SurfaceSectionFieldVarying : public StepElement_SurfaceSectionField {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepElement_SurfaceSectionFieldVarying();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const Handle(StepElement_HArray1OfSurfaceSection)& aDefinitions,const Standard_Boolean aAdditionalNodeValues) ;
  //! Returns field Definitions <br>
  Standard_EXPORT     Handle_StepElement_HArray1OfSurfaceSection Definitions() const;
  //! Set field Definitions <br>
  Standard_EXPORT     void SetDefinitions(const Handle(StepElement_HArray1OfSurfaceSection)& Definitions) ;
  //! Returns field AdditionalNodeValues <br>
  Standard_EXPORT     Standard_Boolean AdditionalNodeValues() const;
  //! Set field AdditionalNodeValues <br>
  Standard_EXPORT     void SetAdditionalNodeValues(const Standard_Boolean AdditionalNodeValues) ;




  DEFINE_STANDARD_RTTI(StepElement_SurfaceSectionFieldVarying)

protected:




private: 


Handle_StepElement_HArray1OfSurfaceSection theDefinitions;
Standard_Boolean theAdditionalNodeValues;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
