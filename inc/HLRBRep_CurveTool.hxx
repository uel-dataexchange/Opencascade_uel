// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_CurveTool_HeaderFile
#define _HLRBRep_CurveTool_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
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
class TColStd_Array1OfReal;
class gp_Pnt2d;
class gp_Vec2d;
class Geom2d_BezierCurve;
class Geom2d_BSplineCurve;



class HLRBRep_CurveTool  {
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

  
      static  Standard_Real FirstParameter(const Standard_Address C) ;
  
      static  Standard_Real LastParameter(const Standard_Address C) ;
  
      static  GeomAbs_Shape Continuity(const Standard_Address C) ;
  //! Returns  the number  of  intervals for  continuity <br>
//!          <S>. May be one if Continuity(myclass) >= <S> <br>
      static  Standard_Integer NbIntervals(const Standard_Address C) ;
  //! Stores in <T> the  parameters bounding the intervals <br>
//!          of continuity <S>. <br>
//! <br>
//!          The array must provide  enough room to  accomodate <br>
//!          for the parameters. i.e. T.Length() > NbIntervals() <br>
      static  void Intervals(const Standard_Address C,TColStd_Array1OfReal& T) ;
  //! output the bounds of interval of index <Index> <br>
//!           used if Type == Composite. <br>
      static  void GetInterval(const Standard_Address C,const Standard_Integer Index,const TColStd_Array1OfReal& Tab,Standard_Real& U1,Standard_Real& U2) ;
  
      static  Standard_Boolean IsClosed(const Standard_Address C) ;
  
      static  Standard_Boolean IsPeriodic(const Standard_Address C) ;
  
      static  Standard_Real Period(const Standard_Address C) ;
  //! Computes the point of parameter U on the curve. <br>
      static  gp_Pnt2d Value(const Standard_Address C,const Standard_Real U) ;
  //! Computes the point of parameter U on the curve. <br>
      static  void D0(const Standard_Address C,const Standard_Real U,gp_Pnt2d& P) ;
  //! Computes the point  of parameter U on the curve <br>
//!  with its first derivative. <br>//! Raised if the continuity of the current interval <br>
//!  is not C1. <br>
      static  void D1(const Standard_Address C,const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& V) ;
  
//!  Returns the point P of parameter U, the first and second <br>
//!  derivatives V1 and V2. <br>//! Raised if the continuity of the current interval <br>
//!  is not C2. <br>
      static  void D2(const Standard_Address C,const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2) ;
  
//!  Returns the point P of parameter U, the first, the second <br>
//!  and the third derivative. <br>//! Raised if the continuity of the current interval <br>
//!  is not C3. <br>
      static  void D3(const Standard_Address C,const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2,gp_Vec2d& V3) ;
  
//!  The returned vector gives the value of the derivative for the <br>
//!  order of derivation N. <br>//! Raised if the continuity of the current interval <br>
//!  is not CN. <br>//! Raised if N < 1. <br>
      static  gp_Vec2d DN(const Standard_Address C,const Standard_Real U,const Standard_Integer N) ;
  //!  Returns the parametric  resolution corresponding <br>
//!         to the real space resolution <R3d>. <br>
      static  Standard_Real Resolution(const Standard_Address C,const Standard_Real R3d) ;
  //! Returns  the  type of the   curve  in the  current <br>
//!          interval :   Line,   Circle,   Ellipse, Hyperbola, <br>
//!          Parabola, BezierCurve, BSplineCurve, OtherCurve. <br>
      static  GeomAbs_CurveType GetType(const Standard_Address C) ;
  //! Returns  the  type of the   curve  in the  current <br>
//!          interval :   Line,   Circle,   Ellipse, Hyperbola, <br>
//!          Parabola, BezierCurve, BSplineCurve, OtherCurve. <br>
      static  GeomAbs_CurveType TheType(const Standard_Address C) ;
  
      static  gp_Lin2d Line(const Standard_Address C) ;
  
      static  gp_Circ2d Circle(const Standard_Address C) ;
  
      static  gp_Elips2d Ellipse(const Standard_Address C) ;
  
      static  gp_Hypr2d Hyperbola(const Standard_Address C) ;
  
      static  gp_Parab2d Parabola(const Standard_Address C) ;
  
      static  Handle_Geom2d_BezierCurve Bezier(const Standard_Address C) ;
  
      static  Handle_Geom2d_BSplineCurve BSpline(const Standard_Address C) ;
  
      static  Standard_Real EpsX(const Standard_Address C) ;
  
  Standard_EXPORT   static  Standard_Integer NbSamples(const Standard_Address C,const Standard_Real U0,const Standard_Real U1) ;
  
  Standard_EXPORT   static  Standard_Integer NbSamples(const Standard_Address C) ;





protected:





private:





};


#include <HLRBRep_CurveTool.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
