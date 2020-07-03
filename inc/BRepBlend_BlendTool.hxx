// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepBlend_BlendTool_HeaderFile
#define _BRepBlend_BlendTool_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Adaptor3d_HSurface_HeaderFile
#include <Handle_Adaptor3d_HSurface.hxx>
#endif
#ifndef _Handle_Adaptor2d_HCurve2d_HeaderFile
#include <Handle_Adaptor2d_HCurve2d.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Adaptor3d_HVertex_HeaderFile
#include <Handle_Adaptor3d_HVertex.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class gp_Pnt2d;
class Adaptor3d_HSurface;
class Adaptor2d_HCurve2d;
class Adaptor3d_HVertex;



class BRepBlend_BlendTool  {
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

  //! Projects the point P on the arc C. <br>
//!          If the methods returns Standard_True, the projection is <br>
//!          successful, and Paramproj is the parameter on the arc <br>
//!          of the projected point, Dist is the distance between <br>
//!          P and the curve.. <br>
//!          If the method returns Standard_False, Param proj and Dist <br>
//!          are not significant. <br>
//! <br>
  Standard_EXPORT   static  Standard_Boolean Project(const gp_Pnt2d& P,const Handle(Adaptor3d_HSurface)& S,const Handle(Adaptor2d_HCurve2d)& C,Standard_Real& Paramproj,Standard_Real& Dist) ;
  
  Standard_EXPORT   static  Standard_Boolean Inters(const gp_Pnt2d& P1,const gp_Pnt2d& P2,const Handle(Adaptor3d_HSurface)& S,const Handle(Adaptor2d_HCurve2d)& C,Standard_Real& Param,Standard_Real& Dist) ;
  //! Returns the parameter of the vertex V on the edge A. <br>
      static  Standard_Real Parameter(const Handle(Adaptor3d_HVertex)& V,const Handle(Adaptor2d_HCurve2d)& A) ;
  //! Returns the parametric tolerance on the arc A <br>
//!          used to consider that the vertex and another point meet, <br>
//!          i-e if Abs(Parameter(Vertex)-Parameter(OtherPnt))<= <br>
//!          Tolerance, the points are "merged". <br>
      static  Standard_Real Tolerance(const Handle(Adaptor3d_HVertex)& V,const Handle(Adaptor2d_HCurve2d)& A) ;
  
      static  Standard_Boolean SingularOnUMin(const Handle(Adaptor3d_HSurface)& S) ;
  
      static  Standard_Boolean SingularOnUMax(const Handle(Adaptor3d_HSurface)& S) ;
  
      static  Standard_Boolean SingularOnVMin(const Handle(Adaptor3d_HSurface)& S) ;
  
      static  Standard_Boolean SingularOnVMax(const Handle(Adaptor3d_HSurface)& S) ;
  
  Standard_EXPORT   static  Standard_Integer NbSamplesU(const Handle(Adaptor3d_HSurface)& S,const Standard_Real u1,const Standard_Real u2) ;
  
  Standard_EXPORT   static  Standard_Integer NbSamplesV(const Handle(Adaptor3d_HSurface)& S,const Standard_Real v1,const Standard_Real v2) ;
  //! Returns the parametric limits on the arc C. <br>
//!          These limits must be finite : they are either <br>
//!          the real limits of the arc, for a finite arc, <br>
//!          or a bounding box for an infinite arc. <br>
  Standard_EXPORT   static  void Bounds(const Handle(Adaptor2d_HCurve2d)& C,Standard_Real& Ufirst,Standard_Real& Ulast) ;
  
      static  Handle_Adaptor2d_HCurve2d CurveOnSurf(const Handle(Adaptor2d_HCurve2d)& C,const Handle(Adaptor3d_HSurface)& S) ;





protected:





private:





};


#include <BRepBlend_BlendTool.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
