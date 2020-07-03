// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GCE2d_MakeEllipse_HeaderFile
#define _GCE2d_MakeEllipse_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Geom2d_Ellipse_HeaderFile
#include <Handle_Geom2d_Ellipse.hxx>
#endif
#ifndef _GCE2d_Root_HeaderFile
#include <GCE2d_Root.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Geom2d_Ellipse;
class StdFail_NotDone;
class gp_Elips2d;
class gp_Ax2d;
class gp_Ax22d;
class gp_Pnt2d;


//!This class implements the following algorithms used to <br>
//!          create Ellipse from gp. <br>
//!          * Create an Ellipse from two apex  and the center. <br>
//!  Defines an ellipse in 2D space. <br>
//!  The parametrization range is [0,2*PI]. <br>
//!  The ellipse is a closed and periodic curve. <br>
//!  The center of the ellipse is the "Location" point of its <br>
//!  axis placement "XAxis". <br>
//!  The "XAxis" of the ellipse defines the origin of the <br>
//!  parametrization, it is the major axis of the ellipse. <br>
//!  The YAxis is the minor axis of the ellipse. <br>
class GCE2d_MakeEllipse  : public GCE2d_Root {
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

  
//!  Creates an ellipse from a non persistent one from package gp <br>
  Standard_EXPORT   GCE2d_MakeEllipse(const gp_Elips2d& E);
  
//!  MajorAxis is the local coordinate system of the ellipse. <br>
//!  It is the "XAxis". The minor axis  is the YAxis of the <br>
//!  ellipse. <br>
//!  Sense give the sense of parametrization of the Ellipse. <br>
//!  It is not forbidden to create an ellipse with MajorRadius = <br>
//!  MinorRadius. <br>
//!  The status is "InvertRadius" if MajorRadius < MinorRadius or <br>
//!  "NegativeRadius" if MinorRadius < 0. <br>
  Standard_EXPORT   GCE2d_MakeEllipse(const gp_Ax2d& MajorAxis,const Standard_Real MajorRadius,const Standard_Real MinorRadius,const Standard_Boolean Sense = Standard_True);
  
//!  Axis is the local coordinate system of the ellipse. <br>
//!  It is not forbidden to create an ellipse with MajorRadius = <br>
//!  MinorRadius. <br>
//!  The status is "InvertRadius" if MajorRadius < MinorRadius or <br>
//!  "NegativeRadius" if MinorRadius < 0. <br>
  Standard_EXPORT   GCE2d_MakeEllipse(const gp_Ax22d& Axis,const Standard_Real MajorRadius,const Standard_Real MinorRadius);
  //! Make an Ellipse centered on the point Center, where <br>
//!   -   the major axis of the ellipse is defined by Center and S1, <br>
//!   -   its major radius is the distance between Center and S1, and <br>
//!   -   its minor radius is the distance between S2 and the major axis. <br>
//! The implicit orientation of the ellipse is: <br>
//! -   the sense defined by Axis or E, <br>
//! -   the sense defined by points Center, S1 and S2, <br>
//! -   the trigonometric sense if Sense is not given or is true, or <br>
//! -   the opposite sense if Sense is false. <br>
  Standard_EXPORT   GCE2d_MakeEllipse(const gp_Pnt2d& S1,const gp_Pnt2d& S2,const gp_Pnt2d& Center);
  //! Returns the constructed ellipse. <br>
//! Exceptions StdFail_NotDone if no ellipse is constructed. <br>
  Standard_EXPORT    const Handle_Geom2d_Ellipse& Value() const;
  
  Standard_EXPORT    const Handle_Geom2d_Ellipse& Operator() const;
Standard_EXPORT operator Handle_Geom2d_Ellipse() const;





protected:





private:



Handle_Geom2d_Ellipse TheEllipse;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
