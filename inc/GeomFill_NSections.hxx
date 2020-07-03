// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_NSections_HeaderFile
#define _GeomFill_NSections_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_GeomFill_NSections_HeaderFile
#include <Handle_GeomFill_NSections.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _TColGeom_SequenceOfCurve_HeaderFile
#include <TColGeom_SequenceOfCurve.hxx>
#endif
#ifndef _GeomFill_SequenceOfTrsf_HeaderFile
#include <GeomFill_SequenceOfTrsf.hxx>
#endif
#ifndef _TColStd_SequenceOfReal_HeaderFile
#include <TColStd_SequenceOfReal.hxx>
#endif
#ifndef _Handle_Geom_BSplineSurface_HeaderFile
#include <Handle_Geom_BSplineSurface.hxx>
#endif
#ifndef _GeomFill_SectionLaw_HeaderFile
#include <GeomFill_SectionLaw.hxx>
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
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
class Geom_BSplineSurface;
class Standard_OutOfRange;
class TColGeom_SequenceOfCurve;
class TColStd_SequenceOfReal;
class GeomFill_SequenceOfTrsf;
class TColgp_Array1OfPnt;
class TColStd_Array1OfReal;
class TColgp_Array1OfVec;
class TColStd_Array1OfInteger;
class gp_Pnt;
class Geom_Curve;


//! Define a Section Law by N Sections <br>
class GeomFill_NSections : public GeomFill_SectionLaw {

public:

  //! Make a SectionLaw with N Curves. <br>
  Standard_EXPORT   GeomFill_NSections(const TColGeom_SequenceOfCurve& NC);
  //! Make a SectionLaw with N Curves and N associated parameters. <br>
  Standard_EXPORT   GeomFill_NSections(const TColGeom_SequenceOfCurve& NC,const TColStd_SequenceOfReal& NP);
  //! Make a SectionLaw with N Curves and N associated parameters. <br>
//!          UF and UL are the parametric bounds of the NSections <br>
  Standard_EXPORT   GeomFill_NSections(const TColGeom_SequenceOfCurve& NC,const TColStd_SequenceOfReal& NP,const Standard_Real UF,const Standard_Real UL);
  //! Make a SectionLaw with N Curves and N associated parameters. <br>
//!          UF and UL are the parametric bounds of the NSections <br>
//!          VF and VL are the parametric bounds of the path <br>
  Standard_EXPORT   GeomFill_NSections(const TColGeom_SequenceOfCurve& NC,const TColStd_SequenceOfReal& NP,const Standard_Real UF,const Standard_Real UL,const Standard_Real VF,const Standard_Real VL);
  //! Make a SectionLaw with N Curves and N associated parameters. <br>
//!          UF and UL are the parametric bounds of the NSections <br>
//!          VF and VL are the parametric bounds of the path <br>
//!          UF and UL are the parametric bounds of the NSections <br>
//!          Surf is a reference surface used by BRepFill_NSections <br>
  Standard_EXPORT   GeomFill_NSections(const TColGeom_SequenceOfCurve& NC,const GeomFill_SequenceOfTrsf& Trsfs,const TColStd_SequenceOfReal& NP,const Standard_Real UF,const Standard_Real UL,const Standard_Real VF,const Standard_Real VL,const Handle(Geom_BSplineSurface)& Surf);
  //! compute the section for v = param <br>
  Standard_EXPORT   virtual  Standard_Boolean D0(const Standard_Real Param,TColgp_Array1OfPnt& Poles,TColStd_Array1OfReal& Weigths) ;
  //! compute the first  derivative in v direction  of the <br>
//!           section for v =  param <br>
//!  Warning : It used only for C1 or C2 aproximation <br>
  Standard_EXPORT   virtual  Standard_Boolean D1(const Standard_Real Param,TColgp_Array1OfPnt& Poles,TColgp_Array1OfVec& DPoles,TColStd_Array1OfReal& Weigths,TColStd_Array1OfReal& DWeigths) ;
  //! compute the second derivative  in v direction of the <br>
//!          section  for v = param <br>
//!  Warning : It used only for C2 aproximation <br>
  Standard_EXPORT   virtual  Standard_Boolean D2(const Standard_Real Param,TColgp_Array1OfPnt& Poles,TColgp_Array1OfVec& DPoles,TColgp_Array1OfVec& D2Poles,TColStd_Array1OfReal& Weigths,TColStd_Array1OfReal& DWeigths,TColStd_Array1OfReal& D2Weigths) ;
  //! Sets the reference surface <br>
//! <br>
  Standard_EXPORT     void SetSurface(const Handle(Geom_BSplineSurface)& RefSurf) ;
  //! Computes the surface <br>
//! <br>
  Standard_EXPORT     void ComputeSurface() ;
  //! give if possible an bspline Surface, like iso-v are the <br>
//!          section.  If it is  not possible  this methode have  to <br>
//!          get an Null Surface.  Is it the default implementation. <br>
  Standard_EXPORT   virtual  Handle_Geom_BSplineSurface BSplineSurface() const;
  //! get the format of an  section <br>
  Standard_EXPORT   virtual  void SectionShape(Standard_Integer& NbPoles,Standard_Integer& NbKnots,Standard_Integer& Degree) const;
  //! get the Knots of the section <br>
  Standard_EXPORT   virtual  void Knots(TColStd_Array1OfReal& TKnots) const;
  //! get the Multplicities of the section <br>
  Standard_EXPORT   virtual  void Mults(TColStd_Array1OfInteger& TMults) const;
  //! Returns if the sections are rationnal or not <br>
  Standard_EXPORT   virtual  Standard_Boolean IsRational() const;
  //! Returns if the sections are periodic or not <br>
  Standard_EXPORT   virtual  Standard_Boolean IsUPeriodic() const;
  //! Returns if the law  isperiodic or not <br>
  Standard_EXPORT   virtual  Standard_Boolean IsVPeriodic() const;
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
  //! Gets the bounds of the parametric interval on <br>
//!          the function <br>
  Standard_EXPORT   virtual  void GetInterval(Standard_Real& First,Standard_Real& Last) const;
  //! Gets the bounds of the function parametric domain. <br>
//!  Warning: This domain it is  not modified by the <br>
//!          SetValue method <br>
  Standard_EXPORT   virtual  void GetDomain(Standard_Real& First,Standard_Real& Last) const;
  //! Returns the tolerances associated at each poles to <br>
//!          reach  in approximation, to satisfy: BoundTol error <br>
//!          at the   Boundary  AngleTol tangent error  at  the <br>
//!          Boundary  (in radian)  SurfTol   error inside the <br>
//!          surface. <br>
  Standard_EXPORT   virtual  void GetTolerance(const Standard_Real BoundTol,const Standard_Real SurfTol,const Standard_Real AngleTol,TColStd_Array1OfReal& Tol3d) const;
  //!  Get the barycentre of Surface. <br>
//!          An   very  poor estimation is sufficent. <br>
//!          This information is usefull to perform well <br>
//!          conditioned rational approximation. <br>
//!  Warning: Used only if <me> IsRational <br>
  Standard_EXPORT   virtual  gp_Pnt BarycentreOfSurf() const;
  //! Returns the   length of the greater section. This <br>
//!          information is usefull to G1's control. <br>
//!  Warning: With an little value, approximation can be slower. <br>
  Standard_EXPORT   virtual  Standard_Real MaximalSection() const;
  //! Compute the minimal value of weight for each poles <br>
//!          in all  sections. <br>
//!          This information is  usefull to control error <br>
//!          in rational approximation. <br>
//!  Warning: Used only if <me> IsRational <br>
  Standard_EXPORT   virtual  void GetMinimalWeight(TColStd_Array1OfReal& Weigths) const;
  //! return True If the Law isConstant <br>
  Standard_EXPORT   virtual  Standard_Boolean IsConstant(Standard_Real& Error) const;
  //! Return the constant Section if <me>  IsConstant. <br>
//! <br>
  Standard_EXPORT   virtual  Handle_Geom_Curve ConstantSection() const;
  //!  Returns True if all section  are circle, with same <br>
//!          plane,same center and  linear  radius  evolution <br>
//!          Return False by Default. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsConicalLaw(Standard_Real& Error) const;
  //!  Return the circle section  at parameter <Param>, if <br>
//!          <me> a  IsConicalLaw <br>
  Standard_EXPORT   virtual  Handle_Geom_Curve CirclSection(const Standard_Real Param) const;




  DEFINE_STANDARD_RTTI(GeomFill_NSections)

protected:




private: 


Standard_Real UFirst;
Standard_Real ULast;
Standard_Real VFirst;
Standard_Real VLast;
TColGeom_SequenceOfCurve mySections;
GeomFill_SequenceOfTrsf myTrsfs;
TColStd_SequenceOfReal myParams;
Handle_Geom_BSplineSurface mySurface;
Handle_Geom_BSplineSurface myRefSurf;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
