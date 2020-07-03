// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_ParametricCurve3dElementCoordinateSystem_HeaderFile
#define _StepFEA_ParametricCurve3dElementCoordinateSystem_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepFEA_ParametricCurve3dElementCoordinateSystem_HeaderFile
#include <Handle_StepFEA_ParametricCurve3dElementCoordinateSystem.hxx>
#endif

#ifndef _Handle_StepFEA_ParametricCurve3dElementCoordinateDirection_HeaderFile
#include <Handle_StepFEA_ParametricCurve3dElementCoordinateDirection.hxx>
#endif
#ifndef _StepFEA_FeaRepresentationItem_HeaderFile
#include <StepFEA_FeaRepresentationItem.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class StepFEA_ParametricCurve3dElementCoordinateDirection;
class TCollection_HAsciiString;


//! Representation of STEP entity ParametricCurve3dElementCoordinateSystem <br>
class StepFEA_ParametricCurve3dElementCoordinateSystem : public StepFEA_FeaRepresentationItem {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepFEA_ParametricCurve3dElementCoordinateSystem();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const Handle(TCollection_HAsciiString)& aRepresentationItem_Name,const Handle(StepFEA_ParametricCurve3dElementCoordinateDirection)& aDirection) ;
  //! Returns field Direction <br>
  Standard_EXPORT     Handle_StepFEA_ParametricCurve3dElementCoordinateDirection Direction() const;
  //! Set field Direction <br>
  Standard_EXPORT     void SetDirection(const Handle(StepFEA_ParametricCurve3dElementCoordinateDirection)& Direction) ;




  DEFINE_STANDARD_RTTI(StepFEA_ParametricCurve3dElementCoordinateSystem)

protected:




private: 


Handle_StepFEA_ParametricCurve3dElementCoordinateDirection theDirection;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
