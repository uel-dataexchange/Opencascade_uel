// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_GenLocateExtSS_HeaderFile
#define _Extrema_GenLocateExtSS_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Extrema_POnSurf_HeaderFile
#include <Extrema_POnSurf.hxx>
#endif
class Standard_DomainError;
class StdFail_NotDone;
class Adaptor3d_Surface;
class Extrema_POnSurf;


//! With two close points it calculates the distance <br>
//!          between two surfaces. <br>
//!          This distance can be a minimum or a maximum. <br>
class Extrema_GenLocateExtSS  {
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

  
  Standard_EXPORT   Extrema_GenLocateExtSS();
  //! Calculates the distance with two close points. <br>
//!          The close points are defined by the parameter values <br>
//!          (U1,V1) for S1 and (U2,V2) for S2. <br>
//!          The function F(u1,v1,u2,v2)=distance(S1(u1,v1),S2(u2,v2)) <br>
//!          has an extremun when gradient(F)=0. The algorithm searchs <br>
//!          a zero near the close points. <br>
  Standard_EXPORT   Extrema_GenLocateExtSS(const Adaptor3d_Surface& S1,const Adaptor3d_Surface& S2,const Standard_Real U1,const Standard_Real V1,const Standard_Real U2,const Standard_Real V2,const Standard_Real Tol1,const Standard_Real Tol2);
  
  Standard_EXPORT     void Perform(const Adaptor3d_Surface& S1,const Adaptor3d_Surface& S2,const Standard_Real U1,const Standard_Real V1,const Standard_Real U2,const Standard_Real V2,const Standard_Real Tol1,const Standard_Real Tol2) ;
  //! Returns True if the distance is found. <br>
  Standard_EXPORT     Standard_Boolean IsDone() const;
  //! Returns the value of the extremum square distance. <br>
  Standard_EXPORT     Standard_Real SquareDistance() const;
  //! Returns the point of the extremum distance on S1. <br>
  Standard_EXPORT    const Extrema_POnSurf& PointOnS1() const;
  //! Returns the point of the extremum distance on S2. <br>
  Standard_EXPORT    const Extrema_POnSurf& PointOnS2() const;





protected:





private:



Standard_Boolean myDone;
Standard_Real mySqDist;
Extrema_POnSurf myPoint1;
Extrema_POnSurf myPoint2;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
