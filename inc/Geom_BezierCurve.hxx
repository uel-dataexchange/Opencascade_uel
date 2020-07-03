// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom_BezierCurve_HeaderFile
#define _Geom_BezierCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Geom_BezierCurve_HeaderFile
#include <Handle_Geom_BezierCurve.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TColgp_HArray1OfPnt_HeaderFile
#include <Handle_TColgp_HArray1OfPnt.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Geom_BoundedCurve_HeaderFile
#include <Geom_BoundedCurve.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
#ifndef _Handle_Geom_Geometry_HeaderFile
#include <Handle_Geom_Geometry.hxx>
#endif
class TColgp_HArray1OfPnt;
class TColStd_HArray1OfReal;
class Standard_ConstructionError;
class Standard_DimensionError;
class Standard_RangeError;
class Standard_OutOfRange;
class TColgp_Array1OfPnt;
class TColStd_Array1OfReal;
class gp_Pnt;
class gp_Vec;
class gp_Trsf;
class Geom_Geometry;


//! Describes a rational or non-rational Bezier curve <br>
//! - a non-rational Bezier curve is defined by a table of <br>
//!   poles (also called control points), <br>
//! - a rational Bezier curve is defined by a table of <br>
//!   poles with varying weights. <br>
//!  These data are manipulated by two parallel arrays: <br>
//! - the poles table, which is an array of gp_Pnt points, and <br>
//! - the weights table, which is an array of reals. <br>
//! The bounds of these arrays are 1 and "the number of "poles" of the curve. <br>
//! The poles of the curve are "control points" used to deform the curve. <br>
//! The first pole is the start point of the curve, and the <br>
//! last pole is the end point of the curve. The segment <br>
//! that joins the first pole to the second pole is the <br>
//! tangent to the curve at its start point, and the <br>
//! segment that joins the last pole to the <br>
//! second-from-last pole is the tangent to the curve at its end point. <br>
//! It is more difficult to give a geometric signification to <br>
//! the weights but they are useful for providing the exact <br>
//! representations of arcs of a circle or ellipse. <br>
//! Moreover, if the weights of all poles are equal, the <br>
//! curve is polynomial; it is therefore a non-rational <br>
//! curve. The non-rational curve is a special and <br>
//! frequently used case. The weights are defined and <br>
//! used only in the case of a rational curve. <br>
//! The degree of a Bezier curve is equal to the number <br>
//! of poles, minus 1. It must be greater than or equal to <br>
//! 1. However, the degree of a Geom_BezierCurve <br>
//! curve is limited to a value (25) which is defined and <br>
//! controlled by the system. This value is returned by the function MaxDegree. <br>
//! The parameter range for a Bezier curve is [ 0, 1 ]. <br>
//! If the first and last control points of the Bezier curve <br>
//! are the same point then the curve is closed. For <br>
//! example, to create a closed Bezier curve with four <br>
//! control points, you have to give the set of control <br>
//! points P1, P2, P3 and P1. <br>
//! The continuity of a Bezier curve is infinite. <br>
//! It is not possible to build a Bezier curve with negative <br>
//! weights. We consider that a weight value is zero if it <br>
//! is less than or equal to gp::Resolution(). We <br>
//! also consider that two weight values W1 and W2 are equal if: <br>
//! |W2 - W1| <= gp::Resolution(). <br>
//!   Warning <br>
//! - When considering the continuity of a closed Bezier <br>
//!   curve at the junction point, remember that a curve <br>
//!   of this type is never periodic. This means that the <br>
//!   derivatives for the parameter u = 0 have no <br>
//!   reason to be the same as the derivatives for the <br>
//!   parameter u = 1 even if the curve is closed. <br>
//! - The length of a Bezier curve can be null. <br>
class Geom_BezierCurve : public Geom_BoundedCurve {

public:

  //!  Creates a non rational Bezier curve with a set of poles <br>
//!         CurvePoles.  The weights are defaulted to all being 1. <br>
//!         Raises ConstructionError if the number of poles is greater than MaxDegree + 1 <br>
//!         or lower than 2. <br>
  Standard_EXPORT   Geom_BezierCurve(const TColgp_Array1OfPnt& CurvePoles);
  //!  Creates a rational Bezier curve with the set of poles <br>
//!  CurvePoles and the set of weights  PoleWeights . <br>
//!  If all the weights are identical the curve is considered <br>
//!  as non rational. Raises ConstructionError if <br>
//!  the number of poles is greater than  MaxDegree + 1 or lower <br>
//!  than 2 or CurvePoles and CurveWeights have not the same length <br>
//!  or one weight value is lower or equal to Resolution from package gp. <br>
  Standard_EXPORT   Geom_BezierCurve(const TColgp_Array1OfPnt& CurvePoles,const TColStd_Array1OfReal& PoleWeights);
  //!  Increases the degree of a bezier curve. Degree is the new <br>
//!  degree of <me>. Raises ConstructionError <br>
//!    if Degree is greater than MaxDegree or lower than 2 <br>
//!  or lower than the initial degree of <me>. <br>
  Standard_EXPORT     void Increase(const Standard_Integer Degree) ;
  //!  Inserts a pole P after the pole of range Index. <br>
//!  If the curve <me> is rational the weight value for the new <br>
//!  pole of range Index is 1.0. <br>//! raised if Index is not in the range [1, NbPoles] <br>
//!  raised if the resulting number of poles is greater than <br>
//!  MaxDegree + 1. <br>
  Standard_EXPORT     void InsertPoleAfter(const Standard_Integer Index,const gp_Pnt& P) ;
  
//!  Inserts a pole with its weight in the set of poles after the <br>
//!  pole of range Index. If the curve was non rational it can <br>
//!  become rational if all the weights are not identical. <br>//! Raised if Index is not in the range [1, NbPoles] <br>
//!  Raised if the resulting number of poles is greater than <br>
//!  MaxDegree + 1. <br>
//!  Raised if Weight is lower or equal to Resolution from package gp. <br>
  Standard_EXPORT     void InsertPoleAfter(const Standard_Integer Index,const gp_Pnt& P,const Standard_Real Weight) ;
  //!  Inserts a pole P before the pole of range Index. <br>
//!  If the curve <me> is rational the weight value for the new <br>
//!  pole of range Index is 1.0. <br>//! Raised if Index is not in the range [1, NbPoles] <br>
//!  Raised if the resulting number of poles is greater than <br>
//!  MaxDegree + 1. <br>
  Standard_EXPORT     void InsertPoleBefore(const Standard_Integer Index,const gp_Pnt& P) ;
  
//!  Inserts a pole with its weight in the set of poles after <br>
//!  the pole of range Index. If the curve was non rational it <br>
//!  can become rational if all the weights are not identical. <br>//! Raised if Index is not in the range [1, NbPoles] <br>
//!  Raised if the resulting number of poles is greater than <br>
//!  MaxDegree + 1. <br>
//!  Raised if Weight is lower or equal to Resolution from <br>
//!  package gp. <br>
  Standard_EXPORT     void InsertPoleBefore(const Standard_Integer Index,const gp_Pnt& P,const Standard_Real Weight) ;
  //! Removes the pole of range Index. <br>
//!  If the curve was rational it can become non rational. <br>//! Raised if Index is not in the range [1, NbPoles] <br>//! Raised if Degree is lower than 2. <br>
  Standard_EXPORT     void RemovePole(const Standard_Integer Index) ;
  
//!  Reverses the direction of parametrization of <me> <br>
//!  Value (NewU) =  Value (1 - OldU) <br>
  Standard_EXPORT     void Reverse() ;
  //! Returns the  parameter on the  reversed  curve for <br>
//!          the point of parameter U on <me>. <br>
//! <br>
//!          returns 1-U <br>
  Standard_EXPORT     Standard_Real ReversedParameter(const Standard_Real U) const;
  
//!  Segments the curve between U1 and U2 which can be out <br>
//!  of the bounds of the curve. The curve is oriented from U1 <br>
//!  to U2. <br>
//!  The control points are modified, the first and the last point <br>
//!  are not the same but the parametrization range is [0, 1] <br>
//!  else it could not be a Bezier curve. <br>
//!  Warnings : <br>
//!  Even if <me> is not closed it can become closed after the <br>
//!  segmentation for example if U1 or U2 are out of the bounds <br>
//!  of the curve <me> or if the curve makes loop. <br>
//!  After the segmentation the length of a curve can be null. <br>
  Standard_EXPORT     void Segment(const Standard_Real U1,const Standard_Real U2) ;
  
//!  Substitutes the pole of range index with P. <br>
//!  If the curve <me> is rational the weight of range Index <br>
//!  is not modified. <br>//! raiseD if Index is not in the range [1, NbPoles] <br>
  Standard_EXPORT     void SetPole(const Standard_Integer Index,const gp_Pnt& P) ;
  
//!  Substitutes the pole and the weights of range Index. <br>
//!  If the curve <me> is not rational it can become rational <br>
//!  if all the weights are not identical. <br>
//!  If the curve was rational it can become non rational if <br>
//!  all the weights are identical. <br>//! Raised if Index is not in the range [1, NbPoles] <br>//! Raised if Weight <= Resolution from package gp <br>
  Standard_EXPORT     void SetPole(const Standard_Integer Index,const gp_Pnt& P,const Standard_Real Weight) ;
  
//!  Changes the weight of the pole of range Index. <br>
//!  If the curve <me> is not rational it can become rational <br>
//!  if all the weights are not identical. <br>
//!  If the curve was rational it can become non rational if <br>
//!  all the weights are identical. <br>//! Raised if Index is not in the range [1, NbPoles] <br>//! Raised if Weight <= Resolution from package gp <br>
  Standard_EXPORT     void SetWeight(const Standard_Integer Index,const Standard_Real Weight) ;
  
//!  Returns True if the distance between the first point <br>
//!  and the last point of the curve is lower or equal to <br>
//!  the Resolution from package gp. <br>
  Standard_EXPORT     Standard_Boolean IsClosed() const;
  //! Continuity of the curve, returns True. <br>
  Standard_EXPORT     Standard_Boolean IsCN(const Standard_Integer N) const;
  
//!  Returns True if the parametrization of a curve is periodic. <br>
//!  (P(u) = P(u + T) T = constante) <br>
  Standard_EXPORT     Standard_Boolean IsPeriodic() const;
  
//!  Returns false if all the weights are identical. The tolerance <br>
//!  criterion is Resolution from package gp. <br>
  Standard_EXPORT     Standard_Boolean IsRational() const;
  //!  a Bezier curve is CN <br>
  Standard_EXPORT     GeomAbs_Shape Continuity() const;
  //! Returns the polynomial degree of the curve. <br>
//!  it is the number of poles - 1 <br>//! point P and derivatives (V1, V2, V3) computation <br>
//!  The Bezier Curve has a Polynomial representation so the <br>
//!  parameter U can be out of the bounds of the curve. <br>
  Standard_EXPORT     Standard_Integer Degree() const;
  
  Standard_EXPORT     void D0(const Standard_Real U,gp_Pnt& P) const;
  
  Standard_EXPORT     void D1(const Standard_Real U,gp_Pnt& P,gp_Vec& V1) const;
  
  Standard_EXPORT     void D2(const Standard_Real U,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2) const;
  //! For this Bezier curve, computes <br>
//! - the point P of parameter U, or <br>
//! - the point P and one or more of the following values: <br>
//!   - V1, the first derivative vector, <br>
//!   - V2, the second derivative vector, <br>
//!   - V3, the third derivative vector. <br>
//! Note: the parameter U can be outside the bounds of the curve. <br>
  Standard_EXPORT     void D3(const Standard_Real U,gp_Pnt& P,gp_Vec& V1,gp_Vec& V2,gp_Vec& V3) const;
  //! For the point of parameter U of this Bezier curve, <br>
//! computes the vector corresponding to the Nth derivative. <br>
//! Note: the parameter U can be outside the bounds of the curve. <br>
//! Exceptions Standard_RangeError if N is less than 1. <br>
  Standard_EXPORT     gp_Vec DN(const Standard_Real U,const Standard_Integer N) const;
  //! Returns Value (U=0.), it is the first control point of the curve. <br>
  Standard_EXPORT     gp_Pnt StartPoint() const;
  //! Returns Value (U=1.), it is the last control point of the Bezier curve. <br>
  Standard_EXPORT     gp_Pnt EndPoint() const;
  //! Returns the value of the first  parameter of this <br>
//! Bezier curve. This is 0.0, which gives the start point of this Bezier curve <br>
  Standard_EXPORT     Standard_Real FirstParameter() const;
  //! Returns the value of the last parameter of this <br>
//! Bezier curve. This is  1.0, which gives the end point of this Bezier curve. <br>
  Standard_EXPORT     Standard_Real LastParameter() const;
  //! Returns the number of poles of this Bezier curve. <br>
  Standard_EXPORT     Standard_Integer NbPoles() const;
  //! Returns the pole of range Index. <br>//! Raised if Index is not in the range [1, NbPoles] <br>
  Standard_EXPORT     gp_Pnt Pole(const Standard_Integer Index) const;
  //! Returns all the poles of the curve. <br>
//!  Raised if the length of P is not equal to the number of poles. <br>
  Standard_EXPORT     void Poles(TColgp_Array1OfPnt& P) const;
  //! Returns the weight of range Index. <br>//! Raised if Index is not in the range [1, NbPoles] <br>
  Standard_EXPORT     Standard_Real Weight(const Standard_Integer Index) const;
  //! Returns all the weights of the curve. <br>
//!  Raised if the length of W is not equal to the number of poles. <br>
  Standard_EXPORT     void Weights(TColStd_Array1OfReal& W) const;
  //! Applies the transformation T to this Bezier curve. <br>
  Standard_EXPORT     void Transform(const gp_Trsf& T) ;
  
//!  Returns the value of the maximum polynomial degree <br>
//! of any Geom_BezierCurve curve. This value is 25. <br>
  Standard_EXPORT   static  Standard_Integer MaxDegree() ;
  //!  Computes for this Bezier curve the parametric <br>
//! tolerance UTolerance for a given 3D tolerance Tolerance3D. <br>
//! If f(t) is the equation of this Bezier curve, <br>
//! UTolerance ensures that: <br>
//! |t1-t0| < UTolerance ===> |f(t1)-f(t0)| < Tolerance3D <br>
  Standard_EXPORT     void Resolution(const Standard_Real Tolerance3D,Standard_Real& UTolerance) ;
  //! Creates a new object which is a copy of this Bezier curve. <br>
  Standard_EXPORT     Handle_Geom_Geometry Copy() const;




  DEFINE_STANDARD_RTTI(Geom_BezierCurve)

protected:




private: 

  //! Set  poles  to  Poles,  weights to  Weights  (not <br>
//!         copied). If Weights is   null  the  curve is    non <br>
//!         rational. Create the arrays of coefficients.  Poles <br>
//!         and    Weights  are   assumed   to  have the  first <br>
//!         coefficient 1. <br>
//!         Update rational and closed. <br>
//! <br>
//! if nbpoles < 2 or nbboles > MaDegree + 1 <br>
  Standard_EXPORT     void Init(const Handle(TColgp_HArray1OfPnt)& Poles,const Handle(TColStd_HArray1OfReal)& Weights) ;
  //! returns true if the coefficients have been <br>
//!           computed with the right value of cacheparameter <br>
//!           for the given U value. <br>
//! <br>
  Standard_EXPORT     Standard_Boolean CoefficientsOK(const Standard_Real U) const;
  //! Recompute the coeficients. <br>
  Standard_EXPORT     void UpdateCoefficients(const Standard_Real U = 0.0) ;

Standard_Boolean rational;
Standard_Boolean closed;
Handle_TColgp_HArray1OfPnt poles;
Handle_TColStd_HArray1OfReal weights;
Handle_TColgp_HArray1OfPnt coeffs;
Handle_TColStd_HArray1OfReal wcoeffs;
Standard_Integer validcache;
Standard_Real parametercache;
Standard_Real spanlenghtcache;
Standard_Real maxderivinv;
Standard_Boolean maxderivinvok;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
