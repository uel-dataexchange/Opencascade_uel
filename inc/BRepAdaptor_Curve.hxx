// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepAdaptor_Curve_HeaderFile
#define _BRepAdaptor_Curve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_Trsf_HeaderFile
#include <gp_Trsf.hxx>
#endif
#ifndef _GeomAdaptor_Curve_HeaderFile
#include <GeomAdaptor_Curve.hxx>
#endif
#ifndef _Handle_Adaptor3d_HCurveOnSurface_HeaderFile
#include <Handle_Adaptor3d_HCurveOnSurface.hxx>
#endif
#ifndef _TopoDS_Edge_HeaderFile
#include <TopoDS_Edge.hxx>
#endif
#ifndef _Adaptor3d_Curve_HeaderFile
#include <Adaptor3d_Curve.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Adaptor3d_HCurve_HeaderFile
#include <Handle_Adaptor3d_HCurve.hxx>
#endif
#ifndef _GeomAbs_CurveType_HeaderFile
#include <GeomAbs_CurveType.hxx>
#endif
#ifndef _Handle_Geom_BezierCurve_HeaderFile
#include <Handle_Geom_BezierCurve.hxx>
#endif
#ifndef _Handle_Geom_BSplineCurve_HeaderFile
#include <Handle_Geom_BSplineCurve.hxx>
#endif
class Adaptor3d_HCurveOnSurface;
class Standard_NullObject;
class Standard_DomainError;
class Standard_OutOfRange;
class Standard_NoSuchObject;
class TopoDS_Edge;
class TopoDS_Face;
class gp_Trsf;
class GeomAdaptor_Curve;
class Adaptor3d_CurveOnSurface;
class TColStd_Array1OfReal;
class Adaptor3d_HCurve;
class gp_Pnt;
class gp_Vec;
class gp_Lin;
class gp_Circ;
class gp_Elips;
class gp_Hypr;
class gp_Parab;
class Geom_BezierCurve;
class Geom_BSplineCurve;


//! The Curve from BRepAdaptor  allows to use  an Edge <br>
//!          of the BRep topology like a 3D curve. <br>
//! <br>
//!          It has the methods the class Curve from Adaptor3d. <br>
//! <br>
//!          It  is created or  Initialized  with  an Edge.  It <br>
//!          takes  into account local  coordinate systems.  If <br>
//!          the Edge has a 3D curve it is  use  with priority. <br>
//!          If the edge  has no 3D curve one  of the curves on <br>
//!          surface is used. It is possible to enforce using a <br>
//!          curve on surface by creating  or initialising with <br>
//!          an Edge and a Face. <br>
class BRepAdaptor_Curve  : public Adaptor3d_Curve {
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

  //! Creates an undefined Curve with no Edge loaded. <br>
  Standard_EXPORT   BRepAdaptor_Curve();
  //! Creates a Curve  to  acces to the geometry of edge <br>
//!          <E>. <br>
  Standard_EXPORT   BRepAdaptor_Curve(const TopoDS_Edge& E);
  //! Creates a Curve to acces to  the geometry  of edge <br>
//!          <E>.   The geometry  will   be  computed using the <br>
//!          parametric curve of <E> on the face  <F>. An Error <br>
//!          is  raised if  the edge does  not have a pcurve on <br>
//!          the face. <br>
  Standard_EXPORT   BRepAdaptor_Curve(const TopoDS_Edge& E,const TopoDS_Face& F);
  //! Sets  the Curve <me>  to acces to the  geometry of <br>
//!          edge <E>. <br>
  Standard_EXPORT     void Initialize(const TopoDS_Edge& E) ;
  //! Sets the Curve <me>  to acces to  the  geometry of <br>
//!          edge <E>.  The geometry will be computed using the <br>
//!          parametric curve of <E>  on the face <F>. An Error <br>
//!          is raised if the edge  does not  have a pcurve  on <br>
//!          the face. <br>
  Standard_EXPORT     void Initialize(const TopoDS_Edge& E,const TopoDS_Face& F) ;
  //! Returns the coordinate system of the curve. <br>
  Standard_EXPORT    const gp_Trsf& Trsf() const;
  //! Returns True if the edge geometry is computed from <br>
//!          a 3D curve. <br>
  Standard_EXPORT     Standard_Boolean Is3DCurve() const;
  //! Returns True if the edge geometry is computed from <br>
//!          a pcurve on a surface. <br>
  Standard_EXPORT     Standard_Boolean IsCurveOnSurface() const;
  //! Returns the Curve of  the  edge. <br>
  Standard_EXPORT    const GeomAdaptor_Curve& Curve() const;
  //! Returns the CurveOnSurface of the edge. <br>
  Standard_EXPORT    const Adaptor3d_CurveOnSurface& CurveOnSurface() const;
  //! Returns the edge. <br>
//! <br>
  Standard_EXPORT    const TopoDS_Edge& Edge() const;
  //! Returns the edge tolerance. <br>
//! <br>
  Standard_EXPORT     Standard_Real Tolerance() const;
  
  Standard_EXPORT     Standard_Real FirstParameter() const;
  
  Standard_EXPORT     Standard_Real LastParameter() const;
  
  Standard_EXPORT     GeomAbs_Shape Continuity() const;
  //! Returns  the number  of  intervals for  continuity <br>
//!          <S>. May be one if Continuity(me) >= <S> <br>
  Standard_EXPORT     Standard_Integer NbIntervals(const GeomAbs_Shape S) ;
  //! Stores in <T> the  parameters bounding the intervals <br>
//!          of continuity <S>. <br>
//! <br>
//!          The array must provide  enough room to  accomodate <br>
//!          for the parameters. i.e. T.Length() > NbIntervals() <br>
  Standard_EXPORT     void Intervals(TColStd_Array1OfReal& T,const GeomAbs_Shape S) ;
  //! Returns    a  curve equivalent   of  <me>  between <br>
//!          parameters <First>  and <Last>. <Tol>  is used  to <br>
//!          test for 3d points confusion. <br>//! If <First> >= <Last> <br>
  Standard_EXPORT     Handle_Adaptor3d_HCurve Trim(const Standard_Real First,const Standard_Real Last,const Standard_Real Tol) const;
  
  Standard_EXPORT     Standard_Boolean IsClosed() const;
  
  Standard_EXPORT     Standard_Boolean IsPeriodic() const;
  
  Standard_EXPORT     Standard_Real Period() const;
  //! Computes the point of parameter U on the curve <br>
  Standard_EXPORT     gp_Pnt Value(const Standard_Real U) const;
  //! Computes the point of parameter U. <br>
  Standard_EXPORT     void D0(const Standard_Real U,gp_Pnt& P) const;
  //! Computes the point of parameter U on the curve <br>
//!  with its first derivative. <br>//! Raised if the continuity of the current interval <br>
//!  is not C1. <br>
  Standard_EXPORT     void D1(const Standard_Real U,gp_Pnt& P,gp_Vec& V) const;
  
//!  Returns the point P of parameter U, the first and second <br>
//!  derivatives V1 and V2. <br>//! Raised if the continuity of the current interval <br>
//!  is not C2. <br>
  Standard_EXPORT     void D2(const Standard_Real U,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2) const;
  
//!  Returns the point P of parameter U, the first, the second <br>
//!  and the third derivative. <br>//! Raised if the continuity of the current interval <br>
//!  is not C3. <br>
  Standard_EXPORT     void D3(const Standard_Real U,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2,gp_Vec& V3) const;
  
//!  The returned vector gives the value of the derivative for the <br>
//!  order of derivation N. <br>//! Raised if the continuity of the current interval <br>
//!  is not CN. <br>//! Raised if N < 1. <br>
  Standard_EXPORT     gp_Vec DN(const Standard_Real U,const Standard_Integer N) const;
  //! returns the parametric resolution <br>
  Standard_EXPORT     Standard_Real Resolution(const Standard_Real R3d) const;
  
  Standard_EXPORT     GeomAbs_CurveType GetType() const;
  
  Standard_EXPORT     gp_Lin Line() const;
  
  Standard_EXPORT     gp_Circ Circle() const;
  
  Standard_EXPORT     gp_Elips Ellipse() const;
  
  Standard_EXPORT     gp_Hypr Hyperbola() const;
  
  Standard_EXPORT     gp_Parab Parabola() const;
  
  Standard_EXPORT     Standard_Integer Degree() const;
  
  Standard_EXPORT     Standard_Boolean IsRational() const;
  
  Standard_EXPORT     Standard_Integer NbPoles() const;
  
  Standard_EXPORT     Standard_Integer NbKnots() const;
  
//!  Warning : <br>
//!         This  will    make a copy of the Bezier Curve <br>
//!         since it applies to it myTsrf . Be carefull when <br>
//!         using this method <br>
  Standard_EXPORT     Handle_Geom_BezierCurve Bezier() const;
  
//!  Warning : <br>
//!         This will   make a copy of the BSpline Curve <br>
//!         since it applies to it myTsrf . Be carefull when <br>
//!         using this method <br>
  Standard_EXPORT     Handle_Geom_BSplineCurve BSpline() const;





protected:





private:



gp_Trsf myTrsf;
GeomAdaptor_Curve myCurve;
Handle_Adaptor3d_HCurveOnSurface myConSurf;
TopoDS_Edge myEdge;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
