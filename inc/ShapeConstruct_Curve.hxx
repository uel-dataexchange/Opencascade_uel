// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeConstruct_Curve_HeaderFile
#define _ShapeConstruct_Curve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
#ifndef _Handle_Geom_BSplineCurve_HeaderFile
#include <Handle_Geom_BSplineCurve.hxx>
#endif
#ifndef _Handle_Geom2d_BSplineCurve_HeaderFile
#include <Handle_Geom2d_BSplineCurve.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
class Geom_Curve;
class gp_Pnt;
class Geom2d_Curve;
class gp_Pnt2d;
class Geom_BSplineCurve;
class Geom2d_BSplineCurve;
class TColStd_HArray1OfReal;
class TColStd_Array1OfReal;


//! Adjusts curve to have start and end points at the given <br>
//!          points (currently works on lines and B-Splines only) <br>
class ShapeConstruct_Curve  {
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

  //! Modifies a curve in order to make its bounds confused with <br>
//!           given points. <br>
//!           Works only on lines and B-Splines, returns True in this case, <br>
//!           else returns False. <br>
//!           For line considers both bounding points, for B-Splines only <br>
//!           specified. <br>
//! <br>
//!  Warning : Does not check if curve should be reversed <br>
  Standard_EXPORT     Standard_Boolean AdjustCurve(const Handle(Geom_Curve)& C3D,const gp_Pnt& P1,const gp_Pnt& P2,const Standard_Boolean take1 = Standard_True,const Standard_Boolean take2 = Standard_True) const;
  //! Modifies a curve in order to make its bounds confused with <br>
//!           given points. <br>
//!           Works only on lines and B-Splines. <br>
  Standard_EXPORT     Standard_Boolean AdjustCurveSegment(const Handle(Geom_Curve)& C3D,const gp_Pnt& P1,const gp_Pnt& P2,const Standard_Real U1,const Standard_Real U2) const;
  //! Modifies a curve in order to make its bounds confused with <br>
//!           given points. <br>
//!           Works only on lines and B-Splines, returns True in this case, <br>
//!           else returns False. <br>
//! <br>
//!           For line considers both bounding points, for B-Splines only <br>
//!           specified. <br>
//! <br>
//!  Warning : Does not check if curve should be reversed <br>
  Standard_EXPORT     Standard_Boolean AdjustCurve2d(const Handle(Geom2d_Curve)& C2D,const gp_Pnt2d& P1,const gp_Pnt2d& P2,const Standard_Boolean take1 = Standard_True,const Standard_Boolean take2 = Standard_True) const;
  //! Converts a curve of any type (only part from first to last) <br>
//!          to bspline. The method of conversion depends on the type <br>
//!          of original curve: <br>
//!          BSpline -> C.Segment(first,last) <br>
//!          Bezier and Line -> GeomConvert::CurveToBSplineCurve(C).Segment(first,last) <br>
//!          Conic and Other -> Approx_Curve3d(C[first,last],prec,C1,9,1000) <br>
  Standard_EXPORT     Handle_Geom_BSplineCurve ConvertToBSpline(const Handle(Geom_Curve)& C,const Standard_Real first,const Standard_Real last,const Standard_Real prec) const;
  //! Converts a curve of any type (only part from first to last) <br>
//!          to bspline. The method of conversion depends on the type <br>
//!          of original curve: <br>
//!          BSpline -> C.Segment(first,last) <br>
//!          Bezier and Line -> GeomConvert::CurveToBSplineCurve(C).Segment(first,last) <br>
//!          Conic and Other -> Approx_Curve2d(C[first,last],prec,C1,9,1000) <br>
  Standard_EXPORT     Handle_Geom2d_BSplineCurve ConvertToBSpline(const Handle(Geom2d_Curve)& C,const Standard_Real first,const Standard_Real last,const Standard_Real prec) const;
  
  Standard_EXPORT   static  Standard_Boolean FixKnots(Handle(TColStd_HArray1OfReal)& knots) ;
  //! Fix bspline knots to ensure that there is enough <br>
//!          gap between neighbouring values <br>
//!          Returns True if something fixed (by shifting knot) <br>
  Standard_EXPORT   static  Standard_Boolean FixKnots(TColStd_Array1OfReal& knots) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
