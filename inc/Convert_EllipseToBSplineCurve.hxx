// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Convert_EllipseToBSplineCurve_HeaderFile
#define _Convert_EllipseToBSplineCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Convert_ConicToBSplineCurve_HeaderFile
#include <Convert_ConicToBSplineCurve.hxx>
#endif
#ifndef _Convert_ParameterisationType_HeaderFile
#include <Convert_ParameterisationType.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Standard_DomainError;
class gp_Elips2d;



//!  This algorithm converts a ellipse into a rational B-spline curve. <br>
//!  The ellipse is represented an Elips2d from package gp with <br>
//!  the parametrization : <br>
//!  P (U) = <br>
//!  Loc + (MajorRadius * Cos(U) * Xdir + MinorRadius * Sin(U) * Ydir) <br>
//!  where Loc is the center of the ellipse, Xdir and Ydir are the <br>
//!  normalized directions of the local cartesian coordinate system of <br>
//!  the ellipse. The parametrization range is U [0, 2PI]. <br>
//! KeyWords : <br>
//!  Convert, Ellipse, BSplineCurve, 2D . <br>
class Convert_EllipseToBSplineCurve  : public Convert_ConicToBSplineCurve {
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

  //! The equivalent B-spline curve has the same orientation <br>
//!  as the ellipse E. <br>
  Standard_EXPORT   Convert_EllipseToBSplineCurve(const gp_Elips2d& E,const Convert_ParameterisationType Parameterisation = Convert_TgtThetaOver2);
  
//!  The ellipse E is limited between the parametric values U1, U2. <br>
//!  The equivalent B-spline curve is oriented from U1 to U2 and has <br>
//!  the same orientation as E. <br>
//!  Raised if U1 = U2 or U1 = U2 + 2.0 * Pi <br>
  Standard_EXPORT   Convert_EllipseToBSplineCurve(const gp_Elips2d& E,const Standard_Real U1,const Standard_Real U2,const Convert_ParameterisationType Parameterisation = Convert_TgtThetaOver2);





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
