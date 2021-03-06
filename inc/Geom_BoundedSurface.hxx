// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom_BoundedSurface_HeaderFile
#define _Geom_BoundedSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Geom_BoundedSurface_HeaderFile
#include <Handle_Geom_BoundedSurface.hxx>
#endif

#ifndef _Geom_Surface_HeaderFile
#include <Geom_Surface.hxx>
#endif


//! The root class for bounded surfaces in 3D space. A <br>
//! bounded surface is defined by a rectangle in its 2D parametric space, i.e. <br>
//! - its u parameter, which ranges between two finite <br>
//!   values u0 and u1, referred to as "First u <br>
//!   parameter" and "Last u parameter" respectively, and <br>
//! - its v parameter, which ranges between two finite <br>
//!   values v0 and v1, referred to as "First v <br>
//!   parameter" and the "Last v parameter" respectively. <br>
//!   The surface is limited by four curves which are the <br>
//! boundaries of the surface: <br>
//! - its u0 and u1 isoparametric curves in the u parametric direction, and <br>
//! - its v0 and v1 isoparametric curves in the v parametric direction. <br>
//! A bounded surface is finite. <br>
//! The common behavior of all bounded surfaces is <br>
//! described by the Geom_Surface class. <br>
//! The Geom package provides three concrete <br>
//! implementations of bounded surfaces: <br>
//! - Geom_BezierSurface, <br>
//! - Geom_BSplineSurface, and <br>
//! - Geom_RectangularTrimmedSurface. <br>
//!  The first two of these implement well known <br>
//! mathematical definitions of complex surfaces, the third <br>
//! trims a surface using four isoparametric curves, i.e. it <br>
//! limits the variation of its parameters to a rectangle in <br>
//! 2D parametric space. <br>
class Geom_BoundedSurface : public Geom_Surface {

public:





  DEFINE_STANDARD_RTTI(Geom_BoundedSurface)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
