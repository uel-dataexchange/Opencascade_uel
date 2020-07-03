// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_Axis2Placement3d_HeaderFile
#define _StepGeom_Axis2Placement3d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepGeom_Axis2Placement3d_HeaderFile
#include <Handle_StepGeom_Axis2Placement3d.hxx>
#endif

#ifndef _Handle_StepGeom_Direction_HeaderFile
#include <Handle_StepGeom_Direction.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _StepGeom_Placement_HeaderFile
#include <StepGeom_Placement.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_StepGeom_CartesianPoint_HeaderFile
#include <Handle_StepGeom_CartesianPoint.hxx>
#endif
class StepGeom_Direction;
class TCollection_HAsciiString;
class StepGeom_CartesianPoint;



class StepGeom_Axis2Placement3d : public StepGeom_Placement {

public:

  //! Returns a Axis2Placement3d <br>
  Standard_EXPORT   StepGeom_Axis2Placement3d();
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const Handle(StepGeom_CartesianPoint)& aLocation) ;
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const Handle(StepGeom_CartesianPoint)& aLocation,const Standard_Boolean hasAaxis,const Handle(StepGeom_Direction)& aAxis,const Standard_Boolean hasArefDirection,const Handle(StepGeom_Direction)& aRefDirection) ;
  
  Standard_EXPORT     void SetAxis(const Handle(StepGeom_Direction)& aAxis) ;
  
  Standard_EXPORT     void UnSetAxis() ;
  
  Standard_EXPORT     Handle_StepGeom_Direction Axis() const;
  
  Standard_EXPORT     Standard_Boolean HasAxis() const;
  
  Standard_EXPORT     void SetRefDirection(const Handle(StepGeom_Direction)& aRefDirection) ;
  
  Standard_EXPORT     void UnSetRefDirection() ;
  
  Standard_EXPORT     Handle_StepGeom_Direction RefDirection() const;
  
  Standard_EXPORT     Standard_Boolean HasRefDirection() const;




  DEFINE_STANDARD_RTTI(StepGeom_Axis2Placement3d)

protected:




private: 


Handle_StepGeom_Direction axis;
Handle_StepGeom_Direction refDirection;
Standard_Boolean hasAxis;
Standard_Boolean hasRefDirection;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
