// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AppParCurves_SmoothCriterion_HeaderFile
#define _AppParCurves_SmoothCriterion_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AppParCurves_SmoothCriterion_HeaderFile
#include <Handle_AppParCurves_SmoothCriterion.hxx>
#endif

#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
#ifndef _Handle_FEmTool_Curve_HeaderFile
#include <Handle_FEmTool_Curve.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_FEmTool_HAssemblyTable_HeaderFile
#include <Handle_FEmTool_HAssemblyTable.hxx>
#endif
#ifndef _Handle_TColStd_HArray2OfInteger_HeaderFile
#include <Handle_TColStd_HArray2OfInteger.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NotImplemented;
class Standard_DomainError;
class TColStd_HArray1OfReal;
class FEmTool_Curve;
class FEmTool_HAssemblyTable;
class TColStd_HArray2OfInteger;
class math_Matrix;
class math_Vector;
class TColStd_Array1OfReal;


//! defined criterion to smooth  points in  curve <br>
class AppParCurves_SmoothCriterion : public MMgt_TShared {

public:

  
  Standard_EXPORT   virtual  void SetParameters(const Handle(TColStd_HArray1OfReal)& Parameters)  = 0;
  
  Standard_EXPORT   virtual  void SetCurve(const Handle(FEmTool_Curve)& C)  = 0;
  
  Standard_EXPORT   virtual  void GetCurve(Handle(FEmTool_Curve)& C) const = 0;
  
  Standard_EXPORT   virtual  void SetEstimation(const Standard_Real E1,const Standard_Real E2,const Standard_Real E3)  = 0;
  
  Standard_EXPORT   virtual  Standard_Real& EstLength()  = 0;
  
  Standard_EXPORT   virtual  void GetEstimation(Standard_Real& E1,Standard_Real& E2,Standard_Real& E3) const = 0;
  
  Standard_EXPORT   virtual  Handle_FEmTool_HAssemblyTable AssemblyTable() const = 0;
  
  Standard_EXPORT   virtual  Handle_TColStd_HArray2OfInteger DependenceTable() const = 0;
  
  Standard_EXPORT   virtual  Standard_Integer QualityValues(const Standard_Real J1min,const Standard_Real J2min,const Standard_Real J3min,Standard_Real& J1,Standard_Real& J2,Standard_Real& J3)  = 0;
  
  Standard_EXPORT   virtual  void ErrorValues(Standard_Real& MaxError,Standard_Real& QuadraticError,Standard_Real& AverageError)  = 0;
  
  Standard_EXPORT   virtual  void Hessian(const Standard_Integer Element,const Standard_Integer Dimension1,const Standard_Integer Dimension2,math_Matrix& H)  = 0;
  
  Standard_EXPORT   virtual  void Gradient(const Standard_Integer Element,const Standard_Integer Dimension,math_Vector& G)  = 0;
  //! Convert the assembly Vector in an Curve; <br>
//! <br>
  Standard_EXPORT   virtual  void InputVector(const math_Vector& X,const Handle(FEmTool_HAssemblyTable)& AssTable)  = 0;
  
  Standard_EXPORT   virtual  void SetWeight(const Standard_Real QuadraticWeight,const Standard_Real QualityWeight,const Standard_Real percentJ1,const Standard_Real percentJ2,const Standard_Real percentJ3)  = 0;
  
  Standard_EXPORT   virtual  void GetWeight(Standard_Real& QuadraticWeight,Standard_Real& QualityWeight) const = 0;
  
  Standard_EXPORT   virtual  void SetWeight(const TColStd_Array1OfReal& Weight)  = 0;




  DEFINE_STANDARD_RTTI(AppParCurves_SmoothCriterion)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
