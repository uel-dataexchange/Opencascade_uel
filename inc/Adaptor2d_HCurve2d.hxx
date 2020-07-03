// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Adaptor2d_HCurve2d_HeaderFile
#define _Adaptor2d_HCurve2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Adaptor2d_HCurve2d_HeaderFile
#include <Handle_Adaptor2d_HCurve2d.hxx>
#endif

#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
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
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _gp_Pnt2d_HeaderFile
#include <gp_Pnt2d.hxx>
#endif
#ifndef _gp_Vec2d_HeaderFile
#include <gp_Vec2d.hxx>
#endif
#ifndef _GeomAbs_CurveType_HeaderFile
#include <GeomAbs_CurveType.hxx>
#endif
#ifndef _gp_Lin2d_HeaderFile
#include <gp_Lin2d.hxx>
#endif
#ifndef _gp_Circ2d_HeaderFile
#include <gp_Circ2d.hxx>
#endif
#ifndef _gp_Elips2d_HeaderFile
#include <gp_Elips2d.hxx>
#endif
#ifndef _gp_Hypr2d_HeaderFile
#include <gp_Hypr2d.hxx>
#endif
#ifndef _gp_Parab2d_HeaderFile
#include <gp_Parab2d.hxx>
#endif
#ifndef _Handle_Geom2d_BezierCurve_HeaderFile
#include <Handle_Geom2d_BezierCurve.hxx>
#endif
#ifndef _Handle_Geom2d_BSplineCurve_HeaderFile
#include <Handle_Geom2d_BSplineCurve.hxx>
#endif
class Standard_OutOfRange;
class Standard_NoSuchObject;
class Standard_DomainError;
class Standard_NotImplemented;
class Adaptor2d_Curve2d;
class TColStd_Array1OfReal;
class gp_Pnt2d;
class gp_Vec2d;
class Geom2d_BezierCurve;
class Geom2d_BSplineCurve;


//! Root class for 2D curves manipulated by handles, on <br>
//! which geometric algorithms work. <br>
//! An adapted curve is an interface between the <br>
//! services provided by a curve, and those required of <br>
//! the curve by algorithms, which use it. <br>
//! A derived specific class is provided: <br>
//! Geom2dAdaptor_HCurve for a curve from the Geom2d package. <br>
class Adaptor2d_HCurve2d : public MMgt_TShared {

public:

  //! Returns a reference to the Curve2d inside the HCurve2d. <br>
//! <br>
  Standard_EXPORT   virtual const Adaptor2d_Curve2d& Curve2d() const = 0;
  
        Standard_Real FirstParameter() const;
  
        Standard_Real LastParameter() const;
  
        GeomAbs_Shape Continuity() const;
  
        Standard_Integer NbIntervals(const GeomAbs_Shape S) const;
  
        void Intervals(TColStd_Array1OfReal& T,const GeomAbs_Shape S) const;
  //! If <First> >= <Last> <br>
        Handle_Adaptor2d_HCurve2d Trim(const Standard_Real First,const Standard_Real Last,const Standard_Real Tol) const;
  
        Standard_Boolean IsClosed() const;
  
        Standard_Boolean IsPeriodic() const;
  
        Standard_Real Period() const;
  
        gp_Pnt2d Value(const Standard_Real U) const;
  
        void D0(const Standard_Real U,gp_Pnt2d& P) const;
  
        void D1(const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& V) const;
  
        void D2(const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2) const;
  
        void D3(const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2,gp_Vec2d& V3) const;
  
        gp_Vec2d DN(const Standard_Real U,const Standard_Integer N) const;
  
        Standard_Real Resolution(const Standard_Real R3d) const;
  
        GeomAbs_CurveType GetType() const;
  
        gp_Lin2d Line() const;
  
        gp_Circ2d Circle() const;
  
        gp_Elips2d Ellipse() const;
  
        gp_Hypr2d Hyperbola() const;
  
        gp_Parab2d Parabola() const;
  
        Standard_Integer Degree() const;
  
        Standard_Boolean IsRational() const;
  
        Standard_Integer NbPoles() const;
  
        Standard_Integer NbKnots() const;
  
        Handle_Geom2d_BezierCurve Bezier() const;
  
      virtual  Handle_Geom2d_BSplineCurve BSpline() const;




  DEFINE_STANDARD_RTTI(Adaptor2d_HCurve2d)

protected:




private: 




};


#include <Adaptor2d_HCurve2d.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
