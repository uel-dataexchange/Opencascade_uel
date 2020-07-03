// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2d_Parabola_HeaderFile
#define _Geom2d_Parabola_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Geom2d_Parabola_HeaderFile
#include <Handle_Geom2d_Parabola.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Geom2d_Conic_HeaderFile
#include <Geom2d_Conic.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Geom2d_Geometry_HeaderFile
#include <Handle_Geom2d_Geometry.hxx>
#endif
class Standard_ConstructionError;
class Standard_RangeError;
class gp_Parab2d;
class gp_Ax2d;
class gp_Ax22d;
class gp_Pnt2d;
class gp_Vec2d;
class gp_Trsf2d;
class Geom2d_Geometry;


//! Describes a parabola in the plane (2D space). <br>
//! A parabola is defined by its focal length (i.e. the <br>
//! distance between its focus and its apex) and is <br>
//! positioned in the plane with a coordinate system <br>
//! (gp_Ax22d object) where: <br>
//! - the origin is the apex of the parabola, and <br>
//! - the "X Axis" defines the axis of symmetry; the <br>
//!   parabola is on the positive side of this axis. <br>
//! This coordinate system is the local coordinate <br>
//! system of the parabola. <br>
//! The orientation (direct or indirect) of the local <br>
//! coordinate system gives an explicit orientation to the <br>
//! parabola, determining the direction in which the <br>
//! parameter increases along the parabola. <br>
//! The Geom_Parabola parabola is parameterized as follows: <br>
//! P(U) = O + U*U/(4.*F)*XDir + U*YDir, where: <br>
//! - P is the point of parameter U, <br>
//! - O, XDir and YDir are respectively the origin, "X <br>
//!   Direction" and "Y Direction" of its local coordinate system, <br>
//! - F is the focal length of the parabola. <br>
//! The parameter of the parabola is therefore its Y <br>
//! coordinate in the local coordinate system, with the "X <br>
//! Axis" of the local coordinate system defining the <br>
//! origin of the parameter. <br>
//! The parameter range is ] -infinite,+infinite [. <br>
class Geom2d_Parabola : public Geom2d_Conic {

public:

  //! Creates a parabola from a non persistent one. <br>
  Standard_EXPORT   Geom2d_Parabola(const gp_Parab2d& Prb);
  
//!  Creates a parabola with its "MirrorAxis" and it's focal <br>
//!  length "Focal". <br>
//!  MirrorAxis is the axis of symmetry of the curve, it is the <br>
//!  "XAxis". The "YAxis" is parallel to the directrix of the <br>
//!  parabola and is in the direct sense if Sense is True. <br>
//!  The "Location" point of "MirrorAxis" is the vertex of the parabola <br>//! Raised if Focal < 0.0 <br>
  Standard_EXPORT   Geom2d_Parabola(const gp_Ax2d& MirrorAxis,const Standard_Real Focal,const Standard_Boolean Sense = Standard_True);
  
//!  Creates a parabola with its Axis and it's focal <br>
//!  length "Focal". <br>
//!  The XDirection of Axis is the axis of symmetry of the curve, <br>
//!  it is the "XAxis". The "YAxis" is parallel to the directrix of the <br>
//!  parabola. The "Location" point of "Axis" is the vertex <br>
//!  of the parabola. <br>//! Raised if Focal < 0.0 <br>
  Standard_EXPORT   Geom2d_Parabola(const gp_Ax22d& Axis,const Standard_Real Focal);
  
//!  D is the directrix of the parabola and F the focus point. <br>
//!  The symmetry axis "XAxis" of the parabola is normal to the <br>
//!  directrix and pass through the focus point F, but its <br>
//!  "Location" point is the vertex of the parabola. <br>
//!  The "YAxis" of the parabola is parallel to D and its "Location" <br>
//!  point is the vertex of the parabola. <br>
  Standard_EXPORT   Geom2d_Parabola(const gp_Ax2d& D,const gp_Pnt2d& F);
  //! Assigns the value Focal to the focal length of this parabola. <br>
//! Exceptions Standard_ConstructionError if Focal is negative. <br>
  Standard_EXPORT     void SetFocal(const Standard_Real Focal) ;
  //! Converts the gp_Parab2d parabola Prb into this parabola. <br>
  Standard_EXPORT     void SetParab2d(const gp_Parab2d& Prb) ;
  
//!  Returns the non persistent parabola from gp with the same <br>
//!  geometric properties as <me>. <br>
  Standard_EXPORT     gp_Parab2d Parab2d() const;
  //! Computes the parameter on the reversed parabola <br>
//! for the point of parameter U on this parabola. <br>
//! For a parabola, the returned value is -U. <br>
  Standard_EXPORT     Standard_Real ReversedParameter(const Standard_Real U) const;
  //! Returns RealFirst from Standard. <br>
  Standard_EXPORT     Standard_Real FirstParameter() const;
  //! Returns  RealLast from Standard. <br>
  Standard_EXPORT     Standard_Real LastParameter() const;
  //! Returns False <br>
  Standard_EXPORT     Standard_Boolean IsClosed() const;
  //! Returns False <br>
  Standard_EXPORT     Standard_Boolean IsPeriodic() const;
  //! The directrix is parallel to the "YAxis" of the parabola. <br>
//!  The "Location" point of the directrix is the intersection <br>
//!  point between the directrix and the symmetry axis ("XAxis") of the parabola. <br>
  Standard_EXPORT     gp_Ax2d Directrix() const;
  //! Returns the eccentricity e = 1.0 <br>
  Standard_EXPORT     Standard_Real Eccentricity() const;
  //! Computes the focus of this parabola The focus is on the <br>
//! positive side of the "X Axis" of the local coordinate system of the parabola. <br>
  Standard_EXPORT     gp_Pnt2d Focus() const;
  //!  Computes the focal length of this parabola. <br>
//! The focal length is the distance between the apex and the focus of the parabola. <br>
  Standard_EXPORT     Standard_Real Focal() const;
  //! Computes the parameter of this parabola, which is <br>
//! the distance between its focus and its directrix. This <br>
//! distance is twice the focal length. <br>
//! If P is the parameter of the parabola, the equation of <br>
//! the parabola in its local coordinate system is: Y**2 = 2.*P*X. <br>
  Standard_EXPORT     Standard_Real Parameter() const;
  //! Returns in P the point of parameter U. <br>
//!  If U = 0 the returned point is the origin of the XAxis and <br>
//!  the YAxis of the parabola and it is the vertex of the parabola. <br>
//!  P = S + F * (U * U * XDir +  * U * YDir) <br>
//!  where S is the vertex of the parabola, XDir the XDirection and <br>
//!  YDir the YDirection of the parabola's local coordinate system. <br>
  Standard_EXPORT     void D0(const Standard_Real U,gp_Pnt2d& P) const;
  
//!  Returns the point P of parameter U and the first derivative V1. <br>
  Standard_EXPORT     void D1(const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& V1) const;
  
//!  Returns the point P of parameter U, the first and second <br>
//!  derivatives V1 and V2. <br>
  Standard_EXPORT     void D2(const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2) const;
  
//!  Returns the point P of parameter U, the first second and third <br>
//!  derivatives V1 V2 and V3. <br>
  Standard_EXPORT     void D3(const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2,gp_Vec2d& V3) const;
  //! For the point of parameter U of this parabola, <br>
//! computes the vector corresponding to the Nth derivative. <br>
//! Exceptions Standard_RangeError if N is less than 1. <br>
  Standard_EXPORT     gp_Vec2d DN(const Standard_Real U,const Standard_Integer N) const;
  //! Applies the transformation T to this parabola. <br>
  Standard_EXPORT     void Transform(const gp_Trsf2d& T) ;
  //! Computes the parameter on the transformed <br>
//! parabola, for the point of parameter U on this parabola. <br>
//! For a parabola, the returned value is equal to U <br>
//! multiplied by the scale factor of transformation T. <br>
  Standard_EXPORT     Standard_Real TransformedParameter(const Standard_Real U,const gp_Trsf2d& T) const;
  //! Returns a  coefficient to compute the parameter on <br>
//!          the transformed  curve  for  the transform  of the <br>
//!          point on <me>. <br>
//! <br>
//!          Transformed(T)->Value(U * ParametricTransformation(T)) <br>
//! <br>
//!          is the same point as <br>
//! <br>
//!          Value(U).Transformed(T) <br>
//! <br>
//!          This methods returns T.ScaleFactor() <br>
  Standard_EXPORT     Standard_Real ParametricTransformation(const gp_Trsf2d& T) const;
  //! Creates a new object, which is a copy of this parabola. <br>
  Standard_EXPORT     Handle_Geom2d_Geometry Copy() const;




  DEFINE_STANDARD_RTTI(Geom2d_Parabola)

protected:




private: 


Standard_Real focalLength;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
