// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AppDef_MyGradientOfCompute_HeaderFile
#define _AppDef_MyGradientOfCompute_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _AppParCurves_MultiCurve_HeaderFile
#include <AppParCurves_MultiCurve.hxx>
#endif
#ifndef _math_Vector_HeaderFile
#include <math_Vector.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_AppParCurves_HArray1OfConstraintCouple_HeaderFile
#include <Handle_AppParCurves_HArray1OfConstraintCouple.hxx>
#endif
class Standard_OutOfRange;
class StdFail_NotDone;
class AppDef_MultiLine;
class AppDef_MyLineTool;
class AppDef_ParLeastSquareOfMyGradientOfCompute;
class AppDef_ResConstraintOfMyGradientOfCompute;
class AppDef_ParFunctionOfMyGradientOfCompute;
class AppDef_Gradient_BFGSOfMyGradientOfCompute;
class AppParCurves_HArray1OfConstraintCouple;
class math_Vector;
class AppParCurves_MultiCurve;



class AppDef_MyGradientOfCompute  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   AppDef_MyGradientOfCompute(const AppDef_MultiLine& SSP,const Standard_Integer FirstPoint,const Standard_Integer LastPoint,const Handle(AppParCurves_HArray1OfConstraintCouple)& TheConstraints,math_Vector& Parameters,const Standard_Integer Deg,const Standard_Real Tol3d,const Standard_Real Tol2d,const Standard_Integer NbIterations = 200);
  
  Standard_EXPORT     Standard_Boolean IsDone() const;
  
  Standard_EXPORT     AppParCurves_MultiCurve Value() const;
  
  Standard_EXPORT     Standard_Real Error(const Standard_Integer Index) const;
  
  Standard_EXPORT     Standard_Real MaxError3d() const;
  
  Standard_EXPORT     Standard_Real MaxError2d() const;
  
  Standard_EXPORT     Standard_Real AverageError() const;





protected:





private:



AppParCurves_MultiCurve SCU;
math_Vector ParError;
Standard_Real AvError;
Standard_Real MError3d;
Standard_Real MError2d;
Standard_Boolean Done;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
