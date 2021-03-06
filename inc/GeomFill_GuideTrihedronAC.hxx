// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_GuideTrihedronAC_HeaderFile
#define _GeomFill_GuideTrihedronAC_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_GeomFill_GuideTrihedronAC_HeaderFile
#include <Handle_GeomFill_GuideTrihedronAC.hxx>
#endif

#ifndef _Handle_Approx_CurvlinFunc_HeaderFile
#include <Handle_Approx_CurvlinFunc.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Adaptor3d_HCurve_HeaderFile
#include <Handle_Adaptor3d_HCurve.hxx>
#endif
#ifndef _GeomFill_TrihedronWithGuide_HeaderFile
#include <GeomFill_TrihedronWithGuide.hxx>
#endif
#ifndef _Handle_GeomFill_TrihedronLaw_HeaderFile
#include <Handle_GeomFill_TrihedronLaw.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
class Approx_CurvlinFunc;
class Adaptor3d_HCurve;
class Standard_OutOfRange;
class Standard_ConstructionError;
class GeomFill_TrihedronLaw;
class gp_Vec;
class TColStd_Array1OfReal;


//!   Trihedron in  the  case of a sweeping along a guide  curve. <br>
//!            defined by curviline  absciss <br>
class GeomFill_GuideTrihedronAC : public GeomFill_TrihedronWithGuide {

public:

  
  Standard_EXPORT   GeomFill_GuideTrihedronAC(const Handle(Adaptor3d_HCurve)& guide);
  
  Standard_EXPORT   virtual  void SetCurve(const Handle(Adaptor3d_HCurve)& C) ;
  
  Standard_EXPORT   virtual  Handle_GeomFill_TrihedronLaw Copy() const;
  
  Standard_EXPORT   virtual  Handle_Adaptor3d_HCurve Guide() const;
  
  Standard_EXPORT   virtual  Standard_Boolean D0(const Standard_Real Param,gp_Vec& Tangent,gp_Vec& Normal,gp_Vec& BiNormal) ;
  
  Standard_EXPORT   virtual  Standard_Boolean D1(const Standard_Real Param,gp_Vec& Tangent,gp_Vec& DTangent,gp_Vec& Normal,gp_Vec& DNormal,gp_Vec& BiNormal,gp_Vec& DBiNormal) ;
  
  Standard_EXPORT   virtual  Standard_Boolean D2(const Standard_Real Param,gp_Vec& Tangent,gp_Vec& DTangent,gp_Vec& D2Tangent,gp_Vec& Normal,gp_Vec& DNormal,gp_Vec& D2Normal,gp_Vec& BiNormal,gp_Vec& DBiNormal,gp_Vec& D2BiNormal) ;
  //! Returns  the number  of  intervals for  continuity <br>
//!          <S>. <br>
//!          May be one if Continuity(me) >= <S> <br>
  Standard_EXPORT   virtual  Standard_Integer NbIntervals(const GeomAbs_Shape S) const;
  //! Stores in <T> the  parameters bounding the intervals <br>
//!          of continuity <S>. <br>
//! <br>
//!          The array must provide  enough room to  accomodate <br>
//!          for the parameters. i.e. T.Length() > NbIntervals() <br>
  Standard_EXPORT   virtual  void Intervals(TColStd_Array1OfReal& T,const GeomAbs_Shape S) const;
  //! Sets the bounds of the parametric interval on <br>
//!          the function <br>
//!          This determines the derivatives in these values if the <br>
//!          function is not Cn. <br>
  Standard_EXPORT   virtual  void SetInterval(const Standard_Real First,const Standard_Real Last) ;
  //! Get average value of M(t) and V(t) it is usfull to <br>
//!          make fast approximation of rational  surfaces. <br>
  Standard_EXPORT   virtual  void GetAverageLaw(gp_Vec& ATangent,gp_Vec& ANormal,gp_Vec& ABiNormal) ;
  //! Say if the law is Constant <br>
  Standard_EXPORT   virtual  Standard_Boolean IsConstant() const;
  //! Say if the law is defined, only by the 3d Geometry of <br>
//!          the setted Curve <br>
//!          Return False by Default. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsOnlyBy3dCurve() const;
  
  Standard_EXPORT   virtual  void Origine(const Standard_Real OrACR1,const Standard_Real OrACR2) ;




  DEFINE_STANDARD_RTTI(GeomFill_GuideTrihedronAC)

protected:




private: 


Handle_Approx_CurvlinFunc myGuideAC;
Standard_Real Lguide;
Handle_Approx_CurvlinFunc myCurveAC;
Standard_Real L;
Handle_Adaptor3d_HCurve myCurve;
Standard_Real UTol;
Standard_Real STol;
Standard_Real Orig1;
Standard_Real Orig2;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
