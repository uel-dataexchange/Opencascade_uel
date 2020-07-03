// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom_Vector_HeaderFile
#define _Geom_Vector_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Geom_Vector_HeaderFile
#include <Handle_Geom_Vector.hxx>
#endif

#ifndef _gp_Vec_HeaderFile
#include <gp_Vec.hxx>
#endif
#ifndef _Geom_Geometry_HeaderFile
#include <Geom_Geometry.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Standard_ConstructionError;
class Standard_DomainError;
class gp_VectorWithNullMagnitude;
class gp_Vec;


//!  The abstract class Vector describes the common <br>
//! behavior of vectors in 3D space. <br>
//! The Geom package provides two concrete classes of <br>
//! vectors: Geom_Direction (unit vector) and Geom_VectorWithMagnitude. <br>
class Geom_Vector : public Geom_Geometry {

public:

  //! Reverses the vector <me>. <br>
  Standard_EXPORT     void Reverse() ;
  
//!  Returns a copy of <me> reversed. <br>
  Standard_EXPORT     Handle_Geom_Vector Reversed() const;
  //! Computes the angular value, in radians, between this <br>
//! vector and vector Other. The result is a value between 0 and Pi. <br>
//! Exceptions <br>
//! gp_VectorWithNullMagnitude if: <br>
//! - the magnitude of this vector is less than or equal to <br>
//!   gp::Resolution(), or <br>
//! - the magnitude of vector Other is less than or equal <br>
//!   to gp::Resolution(). <br>
  Standard_EXPORT     Standard_Real Angle(const Handle(Geom_Vector)& Other) const;
  //! Computes the angular value, in radians, between this <br>
//! vector and vector Other. The result is a value <br>
//! between -Pi and Pi. The vector VRef defines the <br>
//! positive sense of rotation: the angular value is positive <br>
//! if the cross product this ^ Other has the same <br>
//! orientation as VRef (in relation to the plane defined <br>
//! by this vector and vector Other). Otherwise, it is negative. <br>
//! Exceptions <br>
//! Standard_DomainError if this vector, vector Other <br>
//! and vector VRef are coplanar, except if this vector <br>
//! and vector Other are parallel. <br>
//! gp_VectorWithNullMagnitude if the magnitude of <br>
//! this vector, vector Other or vector VRef is less than <br>
//! or equal to gp::Resolution(). <br>
  Standard_EXPORT     Standard_Real AngleWithRef(const Handle(Geom_Vector)& Other,const Handle(Geom_Vector)& VRef) const;
  //! Returns the coordinates X, Y and Z of this vector. <br>
  Standard_EXPORT     void Coord(Standard_Real& X,Standard_Real& Y,Standard_Real& Z) const;
  //! Returns the  Magnitude of <me>. <br>
  Standard_EXPORT   virtual  Standard_Real Magnitude() const = 0;
  //! Returns the square magnitude of <me>. <br>
  Standard_EXPORT   virtual  Standard_Real SquareMagnitude() const = 0;
  //! Returns the X coordinate of <me>. <br>
  Standard_EXPORT     Standard_Real X() const;
  //! Returns the Y coordinate of <me>. <br>
  Standard_EXPORT     Standard_Real Y() const;
  //! Returns the Z coordinate of <me>. <br>
  Standard_EXPORT     Standard_Real Z() const;
  
//!  Computes the cross product between <me> and <Other>. <br>
//!  Raised if <me> is a "Direction" and if <me> and <Other> <br>
//!  are parallel because it is not possible to build a <br>
//!  "Direction" with null length. <br>
  Standard_EXPORT   virtual  void Cross(const Handle(Geom_Vector)& Other)  = 0;
  
//!  Computes the cross product between <me> and <Other>. <br>
//!  A new direction is returned. <br>
//!  Raised if <me> is a "Direction" and if the two vectors <br>
//!  are parallel because it is not possible to create a <br>
//!  "Direction" with null length. <br>
  Standard_EXPORT   virtual  Handle_Geom_Vector Crossed(const Handle(Geom_Vector)& Other) const = 0;
  
//!  Computes the triple vector product  <me> ^(V1 ^ V2). <br>
//!  Raised if <me> is a "Direction" and if V1 and V2 are parallel <br>
//!  or <me> and (V1 ^ V2) are  parallel <br>
  Standard_EXPORT   virtual  void CrossCross(const Handle(Geom_Vector)& V1,const Handle(Geom_Vector)& V2)  = 0;
  
//!  Computes the triple vector product <me> ^(V1 ^ V2). <br>
//!  Raised if <me> is a direction and if V1 and V2 are <br>
//!  parallel or <me> and (V1 ^ V2) are parallel <br>
  Standard_EXPORT   virtual  Handle_Geom_Vector CrossCrossed(const Handle(Geom_Vector)& V1,const Handle(Geom_Vector)& V2) const = 0;
  //! Computes the scalar product of this vector and vector Other. <br>
  Standard_EXPORT     Standard_Real Dot(const Handle(Geom_Vector)& Other) const;
  
//!  Computes the triple scalar product. Returns me . (V1 ^ V2) <br>
  Standard_EXPORT     Standard_Real DotCross(const Handle(Geom_Vector)& V1,const Handle(Geom_Vector)& V2) const;
  //! Converts this vector into a gp_Vec vector. <br>
  Standard_EXPORT    const gp_Vec& Vec() const;




  DEFINE_STANDARD_RTTI(Geom_Vector)

protected:


gp_Vec gpVec;


private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
