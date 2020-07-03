// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AppDef_Gradient_BFGSOfMyGradientbisOfBSplineCompute_HeaderFile
#define _AppDef_Gradient_BFGSOfMyGradientbisOfBSplineCompute_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _math_BFGS_HeaderFile
#include <math_BFGS.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class AppDef_MultiLine;
class AppDef_MyLineTool;
class AppDef_MyGradientbisOfBSplineCompute;
class AppDef_ParLeastSquareOfMyGradientbisOfBSplineCompute;
class AppDef_ResConstraintOfMyGradientbisOfBSplineCompute;
class AppDef_ParFunctionOfMyGradientbisOfBSplineCompute;
class math_MultipleVarFunctionWithGradient;
class math_Vector;



class AppDef_Gradient_BFGSOfMyGradientbisOfBSplineCompute  : public math_BFGS {
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

  
  Standard_EXPORT   AppDef_Gradient_BFGSOfMyGradientbisOfBSplineCompute(math_MultipleVarFunctionWithGradient& F,const math_Vector& StartingPoint,const Standard_Real Tolerance3d,const Standard_Real Tolerance2d,const Standard_Real Eps,const Standard_Integer NbIterations = 200);
  
  Standard_EXPORT   virtual  Standard_Boolean IsSolutionReached(math_MultipleVarFunctionWithGradient& F) const;





protected:





private:



Standard_Real myTol3d;
Standard_Real myTol2d;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
