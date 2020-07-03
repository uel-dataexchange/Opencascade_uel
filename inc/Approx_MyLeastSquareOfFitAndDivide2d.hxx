// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Approx_MyLeastSquareOfFitAndDivide2d_HeaderFile
#define _Approx_MyLeastSquareOfFitAndDivide2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _AppParCurves_MultiCurve_HeaderFile
#include <AppParCurves_MultiCurve.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _math_Matrix_HeaderFile
#include <math_Matrix.hxx>
#endif
#ifndef _math_Vector_HeaderFile
#include <math_Vector.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _AppParCurves_Constraint_HeaderFile
#include <AppParCurves_Constraint.hxx>
#endif
class StdFail_NotDone;
class Standard_OutOfRange;
class Standard_DimensionError;
class AppCont_Function2d;
class AppCont_FunctionTool2d;
class AppParCurves_MultiCurve;



class Approx_MyLeastSquareOfFitAndDivide2d  {
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

  
  Standard_EXPORT   Approx_MyLeastSquareOfFitAndDivide2d(const AppCont_Function2d& SSP,const Standard_Real U0,const Standard_Real U1,const AppParCurves_Constraint FirstCons,const AppParCurves_Constraint LastCons,const Standard_Integer Deg,const Standard_Integer NbPoints = 24);
  
  Standard_EXPORT     Standard_Boolean IsDone() const;
  
  Standard_EXPORT    const AppParCurves_MultiCurve& Value() ;
  
  Standard_EXPORT     void Error(Standard_Real& F,Standard_Real& MaxE3d,Standard_Real& MaxE2d) const;





protected:

  
  Standard_EXPORT     Standard_Integer NbBColumns(const AppCont_Function2d& SSP) const;




private:



Standard_Boolean Done;
AppParCurves_MultiCurve SCU;
Standard_Integer Degre;
Standard_Integer Nbdiscret;
Standard_Integer nbP;
Standard_Integer nbP2d;
math_Matrix Points;
math_Matrix Poles;
math_Vector myParam;
math_Matrix VB;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
