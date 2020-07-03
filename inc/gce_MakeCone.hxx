// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _gce_MakeCone_HeaderFile
#define _gce_MakeCone_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_Cone_HeaderFile
#include <gp_Cone.hxx>
#endif
#ifndef _gce_Root_HeaderFile
#include <gce_Root.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class StdFail_NotDone;
class gp_Ax2;
class gp_Cone;
class gp_Pnt;
class gp_Ax1;
class gp_Lin;


//! This class implements the following algorithms used <br>
//!           to create a Cone from gp. <br>
//!           * Create a Cone coaxial to another and passing <br>
//!             through a point. <br>
//!           * Create a Cone coaxial to another at a distance <br>
//!             <Dist>. <br>
//!           * Create a Cone by 4 points. <br>
//!           * Create a Cone by its axis and 2 points. <br>
//!           * Create a Cone by 2 points and 2 radius. <br>
//!           * Create a Cone by an Ax2 an angle and the radius of <br>
//!             its reference section. <br>
class gce_MakeCone  : public gce_Root {
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

  
//!  Creates an infinite conical surface. A2 locates the cone <br>
//!  in the space and defines the reference plane of the surface. <br>
//!  Ang is the conical surface semi-angle between 0 and PI/2 radians. <br>
//!  Radius is the radius of the circle in the reference plane of <br>
//!  the cone. <br>
//!  If Radius is lower than 0.0 the status is " <br>
//!  If Ang < Resolution from gp  or Ang >= (PI/2) - Resolution. <br>
  Standard_EXPORT   gce_MakeCone(const gp_Ax2& A2,const Standard_Real Ang,const Standard_Real Radius);
  //! Makes a Cone from gp <TheCone> coaxial to another <br>
//!           Cone <Cone> and passing through a Pnt <Point>. <br>
  Standard_EXPORT   gce_MakeCone(const gp_Cone& Cone,const gp_Pnt& Point);
  //! Makes a Cone from gp <TheCone> coaxial to another <br>
//!           Cone <Cone> at the distance <Dist> which can <br>
//!           be greater or lower than zero. <br>
  Standard_EXPORT   gce_MakeCone(const gp_Cone& Cone,const Standard_Real Dist);
  //! Makes a Cone from gp <TheCone> by four points <P1>, <br>
//!           <P2>,<P3> and <P4>. <br>
//!           Its axis is <P1P2> and the radius of its base is <br>
//!           the distance between <P3> and <P1P2>. <br>
//!           The distance between <P4> and <P1P2> is the radius of <br>
//!           the section passing through <P4>. <br>
//!           If <P1> and <P2> are confused or <P3> and <P4> are <br>
//!           confused we have the status "ConfusedPoints" <br>
//!           if <P1>,<P2>,<P3>,<P4> are colinear we have the <br>
//!           status "ColinearPoints" <br>
//!           If <P3P4> is perpendicular to <P1P2> we have the <br>
//!           status "NullAngle". <br>
//!           <P3P4> is colinear to <P1P2> we have the status <br>
//!           "NullAngle". <br>
  Standard_EXPORT   gce_MakeCone(const gp_Pnt& P1,const gp_Pnt& P2,const gp_Pnt& P3,const gp_Pnt& P4);
  //! Makes a Cone by its axis <Axis> and and two points. <br>
//!          The distance between <P1> and the axis is the radius <br>
//!          of the section passing through <P1>. <br>
//!          The distance between <P2> and the axis is the radius <br>
//!          of the section passing through <P2>. <br>
//!          If <P1P2> is colinear to <Axis> we have the status <br>
//!          "NullAngle" <br>
//!          If <P3P4> is perpendicular to <Axis> we have the status <br>
//!          "NullAngle" <br>
//!          If <P1> and <P2> are confused we have the status <br>
//!          "ConfusedPoints" <br>
  Standard_EXPORT   gce_MakeCone(const gp_Ax1& Axis,const gp_Pnt& P1,const gp_Pnt& P2);
  //! Makes a Cone by its axis <Axis> and and two points. <br>
//!          The distance between <P1> and the axis is the radius <br>
//!          of the section passing through <P1> <br>
//!          The distance between <P2> and the axis is the radius <br>
//!          of the section passing through <P2> <br>
//!          If <P1P2> is colinear to <Axis> we have the status <br>
//!          "NullAngle" <br>
//!          If <P3P4> is perpendicular to <Axis> we have the status <br>
//!          "NullAngle" <br>
//!          If <P1> and <P2> are confused we have the status <br>
//!          "ConfusedPoints" <br>
  Standard_EXPORT   gce_MakeCone(const gp_Lin& Axis,const gp_Pnt& P1,const gp_Pnt& P2);
  //! Makes a Cone with two points and two radius. <br>
//!          The axis of the solution is the line passing through <br>
//!          <P1> and <P2>. <br>
//!          <R1> is the radius of the section passing through <P1> <br>
//!          and <R2> the radius of the section passing through <P2>. <br>
//!          If <P1> and <P2> are confused we have the status "NullAxis". <br>
//! Warning <br>
//! If an error occurs (that is, when IsDone returns <br>
//! false), the Status function returns: <br>
//! -   gce_NegativeRadius if Radius, R1 or R2 is less than 0.0; <br>
//! -   gce_BadAngle if Ang is less than <br>
//!   gp::Resolution() or greater than Pi/2.- gp::Resolution(); <br>
//! -   gce_ConfusedPoints if P1 and P2 or P3 and P4 are coincident; <br>
//! -   gce_NullAxis if the points P1 and P2, are coincident (5th syntax only); <br>
//! -   gce_NullAngle if: <br>
//!   -   the vector joining P1 to P2 is parallel to either <br>
//!    Axis or the line joining P3 to P4, or <br>
//!   -   R1 and R2 are equal, (that is, their difference is <br>
//!    less than gp::Resolution()); or <br>
//! -   gce_NullRadius if: <br>
//! -   the vector joining P1 to P2 is perpendicular to the line joining P3 to P4, <br>
//!   -   the vector joining P1 to P2 is perpendicular to Axis, or <br>
//!   -   P1, P2, P3, and P4 are collinear. <br>
  Standard_EXPORT   gce_MakeCone(const gp_Pnt& P1,const gp_Pnt& P2,const Standard_Real R1,const Standard_Real R2);
  //! Returns the constructed cone. <br>
//! Exceptions StdFail_NotDone if no cone is constructed. <br>
  Standard_EXPORT    const gp_Cone& Value() const;
  
  Standard_EXPORT    const gp_Cone& Operator() const;
Standard_EXPORT operator gp_Cone() const;





protected:





private:



gp_Cone TheCone;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
