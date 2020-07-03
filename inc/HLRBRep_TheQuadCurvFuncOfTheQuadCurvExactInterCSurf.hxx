// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf_HeaderFile
#define _HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _IntSurf_Quadric_HeaderFile
#include <IntSurf_Quadric.hxx>
#endif
#ifndef _gp_Lin_HeaderFile
#include <gp_Lin.hxx>
#endif
#ifndef _math_FunctionWithDerivative_HeaderFile
#include <math_FunctionWithDerivative.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class IntSurf_Quadric;
class gp_Lin;
class HLRBRep_LineTool;



class HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf  : public math_FunctionWithDerivative {
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

  
  Standard_EXPORT   HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf(const IntSurf_Quadric& Q,const gp_Lin& C);
  
  Standard_EXPORT     Standard_Boolean Value(const Standard_Real Param,Standard_Real& F) ;
  
  Standard_EXPORT     Standard_Boolean Derivative(const Standard_Real Param,Standard_Real& D) ;
  
  Standard_EXPORT     Standard_Boolean Values(const Standard_Real Param,Standard_Real& F,Standard_Real& D) ;





protected:





private:



IntSurf_Quadric myQuadric;
gp_Lin myCurve;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
