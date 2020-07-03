// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GC_MakeConicalSurface_HeaderFile
#define _GC_MakeConicalSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Geom_ConicalSurface_HeaderFile
#include <Handle_Geom_ConicalSurface.hxx>
#endif
#ifndef _GC_Root_HeaderFile
#include <GC_Root.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Geom_ConicalSurface;
class StdFail_NotDone;
class gp_Ax2;
class gp_Cone;
class gp_Pnt;
class gp_Ax1;
class gp_Lin;


//! This class implements the following algorithms used <br>
//!           to create a ConicalSurface from Geom. <br>
//!           * Create a ConicalSurface parallel to another and passing <br>
//!             through a point. <br>
//!           * Create a ConicalSurface parallel to another at a distance <br>
//!             <Dist>. <br>
//!           * Create a ConicalSurface by 4 points. <br>
//!           * Create a ConicalSurface by its axis and 2 points. <br>
//!           * Create a ConicalSurface by 2 points and 2 radius. <br>
//!  The local coordinate system of the ConicalSurface is defined <br>
//!  with an axis placement (see class ElementarySurface). <br>
//! <br>
//!  The "ZAxis" is the symmetry axis of the ConicalSurface, <br>
//!  it gives the direction of increasing parametric value V. <br>
//!  The apex of the surface is on the negative side of this axis. <br>
//! <br>
//!  The parametrization range is  : <br>
//!     U [0, 2*PI],  V ]-infinite, + infinite[ <br>
//! <br>
//!  The "XAxis" and the "YAxis" define the placement plane of the <br>
//!  surface (Z = 0, and parametric value V = 0)  perpendicular to <br>
//!  the symmetry axis. The "XAxis" defines the origin of the <br>
//!  parameter U = 0.  The trigonometric sense gives the positive <br>
//!  orientation for the parameter U. <br>
//! <br>
//!  When you create a ConicalSurface the U and V directions of <br>
//!  parametrization are such that at each point of the surface the <br>
//!  normal is oriented towards the "outside region". <br>
class GC_MakeConicalSurface  : public GC_Root {
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

  
//!  A2 defines the local coordinate system of the conical surface. <br>
//!  Ang is the conical surface semi-angle ]0, PI/2[. <br>
//!  Radius is the radius of the circle Viso in the placement plane <br>
//!  of the conical surface defined with "XAxis" and "YAxis". <br>
//!  The "ZDirection" of A2 defines the direction of the surface's <br>
//!  axis of symmetry. <br>
//!  If the location point of A2 is the apex of the surface <br>
//!  Radius = 0 . <br>
//!  At the creation the parametrization of the surface is defined <br>
//!  such that the normal Vector (N = D1U ^ D1V) is oriented towards <br>
//! the "outside region" of the surface. <br>
//!  Status is "NegativeRadius" if Radius < 0.0 or "BadAngle" if <br>
//!  Ang < Resolution from gp or Ang >= PI/ - Resolution <br>
  Standard_EXPORT   GC_MakeConicalSurface(const gp_Ax2& A2,const Standard_Real Ang,const Standard_Real Radius);
  //! Creates a ConicalSurface from a non persistent Cone from package gp. <br>
  Standard_EXPORT   GC_MakeConicalSurface(const gp_Cone& C);
  //! Make a ConicalSurface from Geom <TheCone> parallel to another <br>
//!           ConicalSurface <Cone> and passing through a Pnt <Point>. <br>
  Standard_EXPORT   GC_MakeConicalSurface(const gp_Cone& Cone,const gp_Pnt& Point);
  //! Make a ConicalSurface from Geom <TheCone> parallel to another <br>
//!           ConicalSurface <Cone> at the distance <Dist> which can <br>
//!           be greater or lower than zero. <br>
  Standard_EXPORT   GC_MakeConicalSurface(const gp_Cone& Cone,const Standard_Real Dist);
  //! Make a ConicalSurface from Geom <TheCone> passing through 3 <br>
//!           Pnt <P1>,<P2>,<P3>. <br>
//!           Its axis is <P1P2> and the radius of its base is <br>
//!           the distance between <P3> and <P1P2>. <br>
//!           The distance between <P4> and <P1P2> is the radius of <br>
//!           the section passing through <P4>. <br>
//!           An error iss raised if <P1>,<P2>,<P3>,<P4> are <br>
//!           colinear or if <P3P4> is perpendicular to <P1P2> or <br>
//!           <P3P4> is colinear to <P1P2>. <br>
  Standard_EXPORT   GC_MakeConicalSurface(const gp_Pnt& P1,const gp_Pnt& P2,const gp_Pnt& P3,const gp_Pnt& P4);
  //! Make a ConicalSurface by its axis <Axis> and and two points. <br>
  Standard_EXPORT   GC_MakeConicalSurface(const gp_Ax1& Axis,const gp_Pnt& P1,const gp_Pnt& P2);
  //! Make a ConicalSurface by its axis <Axis> and and two points. <br>
  Standard_EXPORT   GC_MakeConicalSurface(const gp_Lin& Axis,const gp_Pnt& P1,const gp_Pnt& P2);
  //! Make a ConicalSurface with two points and two radius. <br>
//!          The axis of the solution is the line passing through <br>
//!          <P1> and <P2>. <br>
//!          <R1> is the radius of the section passing through <P1> <br>
//!          and <R2> the radius of the section passing through <P2>. <br>
  Standard_EXPORT   GC_MakeConicalSurface(const gp_Pnt& P1,const gp_Pnt& P2,const Standard_Real R1,const Standard_Real R2);
  //! Returns the constructed cone. <br>
//! Exceptions <br>
//! StdFail_NotDone if no cone is constructed. <br>
  Standard_EXPORT    const Handle_Geom_ConicalSurface& Value() const;
  
  Standard_EXPORT    const Handle_Geom_ConicalSurface& Operator() const;
Standard_EXPORT operator Handle_Geom_ConicalSurface() const;





protected:





private:



Handle_Geom_ConicalSurface TheCone;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
