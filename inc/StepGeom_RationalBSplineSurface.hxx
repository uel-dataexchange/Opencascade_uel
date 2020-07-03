// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_RationalBSplineSurface_HeaderFile
#define _StepGeom_RationalBSplineSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepGeom_RationalBSplineSurface_HeaderFile
#include <Handle_StepGeom_RationalBSplineSurface.hxx>
#endif

#ifndef _Handle_TColStd_HArray2OfReal_HeaderFile
#include <Handle_TColStd_HArray2OfReal.hxx>
#endif
#ifndef _StepGeom_BSplineSurface_HeaderFile
#include <StepGeom_BSplineSurface.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_StepGeom_HArray2OfCartesianPoint_HeaderFile
#include <Handle_StepGeom_HArray2OfCartesianPoint.hxx>
#endif
#ifndef _StepGeom_BSplineSurfaceForm_HeaderFile
#include <StepGeom_BSplineSurfaceForm.hxx>
#endif
#ifndef _StepData_Logical_HeaderFile
#include <StepData_Logical.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class TColStd_HArray2OfReal;
class TCollection_HAsciiString;
class StepGeom_HArray2OfCartesianPoint;



class StepGeom_RationalBSplineSurface : public StepGeom_BSplineSurface {

public:

  //! Returns a RationalBSplineSurface <br>
  Standard_EXPORT   StepGeom_RationalBSplineSurface();
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const Standard_Integer aUDegree,const Standard_Integer aVDegree,const Handle(StepGeom_HArray2OfCartesianPoint)& aControlPointsList,const StepGeom_BSplineSurfaceForm aSurfaceForm,const StepData_Logical aUClosed,const StepData_Logical aVClosed,const StepData_Logical aSelfIntersect) ;
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const Standard_Integer aUDegree,const Standard_Integer aVDegree,const Handle(StepGeom_HArray2OfCartesianPoint)& aControlPointsList,const StepGeom_BSplineSurfaceForm aSurfaceForm,const StepData_Logical aUClosed,const StepData_Logical aVClosed,const StepData_Logical aSelfIntersect,const Handle(TColStd_HArray2OfReal)& aWeightsData) ;
  
  Standard_EXPORT     void SetWeightsData(const Handle(TColStd_HArray2OfReal)& aWeightsData) ;
  
  Standard_EXPORT     Handle_TColStd_HArray2OfReal WeightsData() const;
  
  Standard_EXPORT     Standard_Real WeightsDataValue(const Standard_Integer num1,const Standard_Integer num2) const;
  
  Standard_EXPORT     Standard_Integer NbWeightsDataI() const;
  
  Standard_EXPORT     Standard_Integer NbWeightsDataJ() const;




  DEFINE_STANDARD_RTTI(StepGeom_RationalBSplineSurface)

protected:




private: 


Handle_TColStd_HArray2OfReal weightsData;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
