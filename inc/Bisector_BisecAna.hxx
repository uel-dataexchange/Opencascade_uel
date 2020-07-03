// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Bisector_BisecAna_HeaderFile
#define _Bisector_BisecAna_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Bisector_BisecAna_HeaderFile
#include <Handle_Bisector_BisecAna.hxx>
#endif

#ifndef _Handle_Geom2d_TrimmedCurve_HeaderFile
#include <Handle_Geom2d_TrimmedCurve.hxx>
#endif
#ifndef _Bisector_Curve_HeaderFile
#include <Bisector_Curve.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Geom2d_Point_HeaderFile
#include <Handle_Geom2d_Point.hxx>
#endif
#ifndef _Handle_GccInt_Bisec_HeaderFile
#include <Handle_GccInt_Bisec.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Geom2d_Geometry_HeaderFile
#include <Handle_Geom2d_Geometry.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
class Geom2d_TrimmedCurve;
class Standard_DomainError;
class Standard_RangeError;
class Geom2d_Curve;
class gp_Pnt2d;
class gp_Vec2d;
class Geom2d_Point;
class GccInt_Bisec;
class Geom2d_Geometry;
class gp_Trsf2d;



class Bisector_BisecAna : public Bisector_Curve {

public:

  
  Standard_EXPORT   Bisector_BisecAna();
  //! Performs  the bisecting line  between the  curves <br>
//!            <Cu1> and <Cu2>. <br>
//!            <oncurve> is True if the point <P> is common to <Cu1> <br>
//!            and <Cu2>. <br>
  Standard_EXPORT     void Perform(const Handle(Geom2d_Curve)& Cu1,const Handle(Geom2d_Curve)& Cu2,const gp_Pnt2d& P,const gp_Vec2d& V1,const gp_Vec2d& V2,const Standard_Real Sense,const Standard_Real Tolerance,const Standard_Boolean oncurve = Standard_True) ;
  //! Performs  the bisecting line  between the  curve <br>
//!            <Cu1> and the point <Pnt>. <br>
//!            <oncurve> is True if the point <P> is the point <Pnt>. <br>
  Standard_EXPORT     void Perform(const Handle(Geom2d_Curve)& Cu,const Handle(Geom2d_Point)& Pnt,const gp_Pnt2d& P,const gp_Vec2d& V1,const gp_Vec2d& V2,const Standard_Real Sense,const Standard_Real Tolerance,const Standard_Boolean oncurve = Standard_True) ;
  //! Performs  the bisecting line  between the  curve <br>
//!            <Cu> and the point <Pnt>. <br>
//!            <oncurve> is True if the point <P> is the point <Pnt>. <br>
  Standard_EXPORT     void Perform(const Handle(Geom2d_Point)& Pnt,const Handle(Geom2d_Curve)& Cu,const gp_Pnt2d& P,const gp_Vec2d& V1,const gp_Vec2d& V2,const Standard_Real Sense,const Standard_Real Tolerance,const Standard_Boolean oncurve = Standard_True) ;
  //! Performs  the bisecting line  between the two points <br>
//!            <Pnt1>  and <Pnt2>. <br>
  Standard_EXPORT     void Perform(const Handle(Geom2d_Point)& Pnt1,const Handle(Geom2d_Point)& Pnt2,const gp_Pnt2d& P,const gp_Vec2d& V1,const gp_Vec2d& V2,const Standard_Real Sense,const Standard_Real Tolerance = 0.0,const Standard_Boolean oncurve = Standard_True) ;
  
  Standard_EXPORT     void Init(const Handle(Geom2d_TrimmedCurve)& bisector) ;
  
  Standard_EXPORT     Standard_Boolean IsExtendAtStart() const;
  
  Standard_EXPORT     Standard_Boolean IsExtendAtEnd() const;
  //! Trim <me> by a domain defined by the curve <Cu>. <br>
//!            This domain is the set of the points which are <br>
//!            nearest from <Cu> than the extremitis of <Cu>. <br>
  Standard_EXPORT     void SetTrim(const Handle(Geom2d_Curve)& Cu) ;
  //! Trim <me> by a domain defined by uf  and  ul <br>
  Standard_EXPORT     void SetTrim(const Standard_Real uf,const Standard_Real ul) ;
  
  Standard_EXPORT     void Reverse() ;
  
  Standard_EXPORT     Standard_Real ReversedParameter(const Standard_Real U) const;
  //! Returns the order of continuity of the curve. <br>//! Raised if N < 0. <br>
  Standard_EXPORT     Standard_Boolean IsCN(const Standard_Integer N) const;
  
  Standard_EXPORT     Handle_Geom2d_Geometry Copy() const;
  
  Standard_EXPORT     void Transform(const gp_Trsf2d& T) ;
  
  Standard_EXPORT     Standard_Real FirstParameter() const;
  
  Standard_EXPORT     Standard_Real LastParameter() const;
  
  Standard_EXPORT     Standard_Boolean IsClosed() const;
  
  Standard_EXPORT     Standard_Boolean IsPeriodic() const;
  
  Standard_EXPORT     GeomAbs_Shape Continuity() const;
  
  Standard_EXPORT     void D0(const Standard_Real U,gp_Pnt2d& P) const;
  
  Standard_EXPORT     void D1(const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& V1) const;
  
  Standard_EXPORT     void D2(const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2) const;
  
  Standard_EXPORT     void D3(const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2,gp_Vec2d& V3) const;
  
  Standard_EXPORT     gp_Vec2d DN(const Standard_Real U,const Standard_Integer N) const;
  
  Standard_EXPORT     Handle_Geom2d_Curve Geom2dCurve() const;
  
  Standard_EXPORT     Standard_Real Parameter(const gp_Pnt2d& P) const;
  
  Standard_EXPORT     Standard_Real ParameterOfStartPoint() const;
  
  Standard_EXPORT     Standard_Real ParameterOfEndPoint() const;
  //! If necessary,  breaks the  curve in  intervals  of <br>
//!          continuity  <C1>.    And  returns   the number   of <br>
//!          intervals. <br>
  Standard_EXPORT     Standard_Integer NbIntervals() const;
  //! Returns  the  first  parameter    of  the  current <br>
//!          interval. <br>
  Standard_EXPORT     Standard_Real IntervalFirst(const Standard_Integer Index) const;
  //! Returns  the  last  parameter    of  the  current <br>
//!          interval. <br>
  Standard_EXPORT     Standard_Real IntervalLast(const Standard_Integer Index) const;
  
  Standard_EXPORT     void Dump(const Standard_Integer Deep = 0,const Standard_Integer Offset = 0) const;




  DEFINE_STANDARD_RTTI(Bisector_BisecAna)

protected:




private: 

  //! Returns the distance between the point <P> and <br>
//!            the bisecting <Bis>. <br>
  Standard_EXPORT     Standard_Real Distance(const gp_Pnt2d& P,const Handle(GccInt_Bisec)& Bis,const gp_Vec2d& V1,const gp_Vec2d& V2,const Standard_Real Sense,Standard_Real& U,Standard_Boolean& sense,Standard_Boolean& ok) ;

Handle_Geom2d_TrimmedCurve thebisector;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
