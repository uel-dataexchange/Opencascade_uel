// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _gce_MakeElips2d_HeaderFile
#define _gce_MakeElips2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_Elips2d_HeaderFile
#include <gp_Elips2d.hxx>
#endif
#ifndef _gce_Root_HeaderFile
#include <gce_Root.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class StdFail_NotDone;
class gp_Ax2d;
class gp_Ax22d;
class gp_Pnt2d;
class gp_Elips2d;


//!This class implements the following algorithms used to <br>
//!          create Elips2d from gp. <br>
//! <br>
//!          * Create an ellipse from its center, and two points: <br>
//!            one on the ciconference giving the major radius, the <br>
//!            other giving the value of the small radius. <br>
//!          * Create an ellipse from its major axis and its major <br>
//!            radius and its minor radius. <br>
class gce_MakeElips2d  : public gce_Root {
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

  
//!  Creates an ellipse with the major axis, the major and the <br>
//!  minor radius. The location of the MajorAxis is the center <br>
//!  of the  ellipse. <br>
//!  The sense of parametrization is given by Sense. <br>
//!  It is possible to create an ellipse with MajorRadius = MinorRadius. <br>
//!  the status is "InvertRadius" if MajorRadius < MinorRadius or <br>
//!  "NegativeRadius" if MinorRadius < 0.0 <br>
  Standard_EXPORT   gce_MakeElips2d(const gp_Ax2d& MajorAxis,const Standard_Real MajorRadius,const Standard_Real MinorRadius,const Standard_Boolean Sense = Standard_True);
  
//!  Axis defines the Xaxis and Yaxis of the ellipse which defines <br>
//!  the origin and the sense of parametrization. <br>
//!  Creates an ellipse with the AxisPlacement the major and the <br>
//!  minor radius. The location of Axis is the center <br>
//!  of the  ellipse. <br>
//!  It is possible to create an ellipse with MajorRadius = MinorRadius. <br>
//!  the status is "InvertRadius" if MajorRadius < MinorRadius or <br>
//!  "NegativeRadius" if MinorRadius < 0.0 <br>
  Standard_EXPORT   gce_MakeElips2d(const gp_Ax22d& A,const Standard_Real MajorRadius,const Standard_Real MinorRadius);
  //! Makes an Elips2d with its center and two points. <br>
//!          The sense of parametrization is given by S1, S2, <br>
//!          and Center. <br>
//! Depending on the constructor, the  implicit orientation of the ellipse is: <br>
//! -   the sense defined by A, <br>
//! -   the sense defined by points Center, S1 and S2, <br>
//! -   the trigonometric sense if Sense is not given or is true, or <br>
//! -   the opposite if Sense is false. <br>
//! It is possible to construct an ellipse where the major <br>
//! and minor radii are equal. <br>
//! Warning <br>
//! If an error occurs (that is, when IsDone returns <br>
//! false), the Status function returns: <br>
//! -   gce_InvertRadius if MajorRadius is less than MinorRadius, <br>
//! -   gce_NegativeRadius if MajorRadius or <br>
//!   MinorRadius is less than 0.0, <br>
//! -   gce_NullAxis if points S1, S2 and Center are collinear, or <br>
//! -   gce_InvertAxis if the major radius computed with <br>
//!   Center and S1 is less than the minor radius <br>
//!   computed with Center, S1 and S2. <br>
  Standard_EXPORT   gce_MakeElips2d(const gp_Pnt2d& S1,const gp_Pnt2d& S2,const gp_Pnt2d& Center);
  //! Returns the constructed ellipse. <br>
//! Exceptions StdFail_NotDone if no ellipse is constructed. <br>
  Standard_EXPORT    const gp_Elips2d& Value() const;
  
  Standard_EXPORT    const gp_Elips2d& Operator() const;
Standard_EXPORT operator gp_Elips2d() const;





protected:





private:



gp_Elips2d TheElips2d;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
