// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomLib_PolyFunc_HeaderFile
#define _GeomLib_PolyFunc_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _math_Vector_HeaderFile
#include <math_Vector.hxx>
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
class math_Vector;


//! Polynomial  Function <br>
class GeomLib_PolyFunc  : public math_FunctionWithDerivative {
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

  
  Standard_EXPORT   GeomLib_PolyFunc(const math_Vector& Coeffs);
  //! computes the value <F>of the function for the variable <X>. <br>
//!          Returns True if the calculation were successfully done, <br>
//!          False otherwise. <br>
  Standard_EXPORT   virtual  Standard_Boolean Value(const Standard_Real X,Standard_Real& F) ;
  //! computes the derivative <D> of the function <br>
//!          for the variable <X>. <br>
//!           Returns True if the calculation were successfully done, <br>
//!           False otherwise. <br>
  Standard_EXPORT   virtual  Standard_Boolean Derivative(const Standard_Real X,Standard_Real& D) ;
  //! computes the value <F> and the derivative <D> of the <br>
//!          function for the variable <X>. <br>
//!          Returns True if the calculation were successfully done, <br>
//!          False otherwise. <br>
  Standard_EXPORT   virtual  Standard_Boolean Values(const Standard_Real X,Standard_Real& F,Standard_Real& D) ;





protected:





private:



math_Vector myCoeffs;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
