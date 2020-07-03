// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2d_Geometry_HeaderFile
#define _Geom2d_Geometry_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Geom2d_Geometry_HeaderFile
#include <Handle_Geom2d_Geometry.hxx>
#endif

#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Standard_ConstructionError;
class gp_Pnt2d;
class gp_Ax2d;
class gp_Vec2d;
class gp_Trsf2d;



//!  The general abstract class Geometry in 2D space describes <br>
//!  the common behaviour of all the geometric entities. <br>
//! <br>
//!  All the objects derived from this class can be move with a <br>
//!  geometric transformation. Only the transformations which <br>
//!  doesn't modify the nature of the geometry are available in <br>
//!  this package. <br>
//!  The method Transform which defines a general transformation <br>
//!  is deferred. The other specifics transformations used the <br>
//!  method Transform. <br>
//!  All the following transformations modify the object itself. <br>
//! Warning <br>
//! Only transformations which do not modify the nature <br>
//! of the geometry can be applied to Geom2d objects: <br>
//! this is the case with translations, rotations, <br>
//! symmetries and scales; this is also the case with <br>
//! gp_Trsf2d composite transformations which are <br>
//! used to define the geometric transformations applied <br>
//! using the Transform or Transformed functions. <br>
//! Note: Geometry defines the "prototype" of the <br>
//! abstract method Transform which is defined for each <br>
//! concrete type of derived object. All other <br>
//! transformations are implemented using the Transform method. <br>
class Geom2d_Geometry : public MMgt_TShared {

public:

  //! Performs the symmetrical transformation of a Geometry <br>
//!  with respect to the point P which is the center of the <br>
//!  symmetry and assigns the result to this geometric object. <br>
  Standard_EXPORT     void Mirror(const gp_Pnt2d& P) ;
  //! Performs the symmetrical transformation of a Geometry <br>
//!  with respect to an axis placement which is the axis of the symmetry. <br>
  Standard_EXPORT     void Mirror(const gp_Ax2d& A) ;
  //! Rotates a Geometry. P is the center of the rotation. <br>
//!  Ang is the angular value of the rotation in radians. <br>
  Standard_EXPORT     void Rotate(const gp_Pnt2d& P,const Standard_Real Ang) ;
  //! Scales a Geometry. S is the scaling value. <br>
  Standard_EXPORT     void Scale(const gp_Pnt2d& P,const Standard_Real S) ;
  //! Translates a Geometry.  V is the vector of the tanslation. <br>
  Standard_EXPORT     void Translate(const gp_Vec2d& V) ;
  //! Translates a Geometry from the point P1 to the point P2. <br>
  Standard_EXPORT     void Translate(const gp_Pnt2d& P1,const gp_Pnt2d& P2) ;
  //! Transformation of a geometric object. This tansformation <br>
//!  can be a translation, a rotation, a symmetry, a scaling <br>
//!  or a complex transformation obtained by combination of <br>
//!  the previous elementaries transformations. <br>
//!  (see class Transformation of the package Geom2d). <br>//! The following transformations have the same properties <br>
//!  as the previous ones but they don't modified the object <br>
//!  itself. A copy of the object is returned. <br>
  Standard_EXPORT   virtual  void Transform(const gp_Trsf2d& T)  = 0;
  
  Standard_EXPORT     Handle_Geom2d_Geometry Mirrored(const gp_Pnt2d& P) const;
  
  Standard_EXPORT     Handle_Geom2d_Geometry Mirrored(const gp_Ax2d& A) const;
  
  Standard_EXPORT     Handle_Geom2d_Geometry Rotated(const gp_Pnt2d& P,const Standard_Real Ang) const;
  
  Standard_EXPORT     Handle_Geom2d_Geometry Scaled(const gp_Pnt2d& P,const Standard_Real S) const;
  
  Standard_EXPORT     Handle_Geom2d_Geometry Transformed(const gp_Trsf2d& T) const;
  
  Standard_EXPORT     Handle_Geom2d_Geometry Translated(const gp_Vec2d& V) const;
  
  Standard_EXPORT     Handle_Geom2d_Geometry Translated(const gp_Pnt2d& P1,const gp_Pnt2d& P2) const;
  
  Standard_EXPORT   virtual  Handle_Geom2d_Geometry Copy() const = 0;




  DEFINE_STANDARD_RTTI(Geom2d_Geometry)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
