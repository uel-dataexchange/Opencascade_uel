// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_RevolvedAreaSolid_HeaderFile
#define _StepShape_RevolvedAreaSolid_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepShape_RevolvedAreaSolid_HeaderFile
#include <Handle_StepShape_RevolvedAreaSolid.hxx>
#endif

#ifndef _Handle_StepGeom_Axis1Placement_HeaderFile
#include <Handle_StepGeom_Axis1Placement.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _StepShape_SweptAreaSolid_HeaderFile
#include <StepShape_SweptAreaSolid.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_StepGeom_CurveBoundedSurface_HeaderFile
#include <Handle_StepGeom_CurveBoundedSurface.hxx>
#endif
class StepGeom_Axis1Placement;
class TCollection_HAsciiString;
class StepGeom_CurveBoundedSurface;



class StepShape_RevolvedAreaSolid : public StepShape_SweptAreaSolid {

public:

  //! Returns a RevolvedAreaSolid <br>
  Standard_EXPORT   StepShape_RevolvedAreaSolid();
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const Handle(StepGeom_CurveBoundedSurface)& aSweptArea) ;
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const Handle(StepGeom_CurveBoundedSurface)& aSweptArea,const Handle(StepGeom_Axis1Placement)& aAxis,const Standard_Real aAngle) ;
  
  Standard_EXPORT     void SetAxis(const Handle(StepGeom_Axis1Placement)& aAxis) ;
  
  Standard_EXPORT     Handle_StepGeom_Axis1Placement Axis() const;
  
  Standard_EXPORT     void SetAngle(const Standard_Real aAngle) ;
  
  Standard_EXPORT     Standard_Real Angle() const;




  DEFINE_STANDARD_RTTI(StepShape_RevolvedAreaSolid)

protected:




private: 


Handle_StepGeom_Axis1Placement axis;
Standard_Real angle;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
