// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepBlend_RstRstEvolRad_HeaderFile
#define _BRepBlend_RstRstEvolRad_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Adaptor3d_HSurface_HeaderFile
#include <Handle_Adaptor3d_HSurface.hxx>
#endif
#ifndef _Handle_Adaptor2d_HCurve2d_HeaderFile
#include <Handle_Adaptor2d_HCurve2d.hxx>
#endif
#ifndef _Adaptor3d_CurveOnSurface_HeaderFile
#include <Adaptor3d_CurveOnSurface.hxx>
#endif
#ifndef _Handle_Adaptor3d_HCurve_HeaderFile
#include <Handle_Adaptor3d_HCurve.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _gp_Pnt2d_HeaderFile
#include <gp_Pnt2d.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _gp_Vec_HeaderFile
#include <gp_Vec.hxx>
#endif
#ifndef _gp_Vec2d_HeaderFile
#include <gp_Vec2d.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _BlendFunc_SectionShape_HeaderFile
#include <BlendFunc_SectionShape.hxx>
#endif
#ifndef _Convert_ParameterisationType_HeaderFile
#include <Convert_ParameterisationType.hxx>
#endif
#ifndef _Handle_Law_Function_HeaderFile
#include <Handle_Law_Function.hxx>
#endif
#ifndef _Blend_RstRstFunction_HeaderFile
#include <Blend_RstRstFunction.hxx>
#endif
#ifndef _Blend_DecrochStatus_HeaderFile
#include <Blend_DecrochStatus.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
class Adaptor3d_HSurface;
class Adaptor2d_HCurve2d;
class Adaptor3d_HCurve;
class Law_Function;
class math_Vector;
class math_Matrix;
class gp_Pnt;
class gp_Pnt2d;
class gp_Vec;
class gp_Vec2d;
class gp_Circ;
class TColStd_Array1OfReal;
class TColStd_Array1OfInteger;
class Blend_Point;
class TColgp_Array1OfPnt;
class TColgp_Array1OfVec;
class TColgp_Array1OfPnt2d;
class TColgp_Array1OfVec2d;



class BRepBlend_RstRstEvolRad  : public Blend_RstRstFunction {
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

  
  Standard_EXPORT   BRepBlend_RstRstEvolRad(const Handle(Adaptor3d_HSurface)& Surf1,const Handle(Adaptor2d_HCurve2d)& Rst1,const Handle(Adaptor3d_HSurface)& Surf2,const Handle(Adaptor2d_HCurve2d)& Rst2,const Handle(Adaptor3d_HCurve)& CGuide,const Handle(Law_Function)& Evol);
  //! Returns 2. <br>
  Standard_EXPORT     Standard_Integer NbVariables() const;
  //! Returns 2. <br>
  Standard_EXPORT     Standard_Integer NbEquations() const;
  //! computes the values <F> of the Functions for the <br>
//!          variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
  Standard_EXPORT     Standard_Boolean Value(const math_Vector& X,math_Vector& F) ;
  //! returns the values <D> of the derivatives for the <br>
//!          variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
  Standard_EXPORT     Standard_Boolean Derivatives(const math_Vector& X,math_Matrix& D) ;
  //! returns the values <F> of the functions and the derivatives <br>
//!          <D> for the variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
  Standard_EXPORT     Standard_Boolean Values(const math_Vector& X,math_Vector& F,math_Matrix& D) ;
  
  Standard_EXPORT     void Set(const Handle(Adaptor3d_HSurface)& SurfRef1,const Handle(Adaptor2d_HCurve2d)& RstRef1,const Handle(Adaptor3d_HSurface)& SurfRef2,const Handle(Adaptor2d_HCurve2d)& RstRef2) ;
  
  Standard_EXPORT     void Set(const Standard_Real Param) ;
  //! Sets the bounds of the parametric interval on <br>
//!          the guide line. <br>
//!          This determines the derivatives in these values if the <br>
//!          function is not Cn. <br>
  Standard_EXPORT     void Set(const Standard_Real First,const Standard_Real Last) ;
  
  Standard_EXPORT     void GetTolerance(math_Vector& Tolerance,const Standard_Real Tol) const;
  
  Standard_EXPORT     void GetBounds(math_Vector& InfBound,math_Vector& SupBound) const;
  
  Standard_EXPORT     Standard_Boolean IsSolution(const math_Vector& Sol,const Standard_Real Tol) ;
  //! Returns   the    minimal  Distance  beetween   two <br>
//!          extremitys of calculed sections. <br>
  Standard_EXPORT   virtual  Standard_Real GetMinimalDistance() const;
  
  Standard_EXPORT    const gp_Pnt& PointOnRst1() const;
  
  Standard_EXPORT    const gp_Pnt& PointOnRst2() const;
  //! Returns U,V coordinates of the point on the surface. <br>
  Standard_EXPORT    const gp_Pnt2d& Pnt2dOnRst1() const;
  //! Returns  U,V coordinates of the point  on the curve on <br>
//!          surface. <br>
  Standard_EXPORT    const gp_Pnt2d& Pnt2dOnRst2() const;
  //! Returns parameter of the point on the curve. <br>
  Standard_EXPORT     Standard_Real ParameterOnRst1() const;
  //! Returns parameter of the point on the curve. <br>
  Standard_EXPORT     Standard_Real ParameterOnRst2() const;
  
  Standard_EXPORT     Standard_Boolean IsTangencyPoint() const;
  
  Standard_EXPORT    const gp_Vec& TangentOnRst1() const;
  
  Standard_EXPORT    const gp_Vec2d& Tangent2dOnRst1() const;
  
  Standard_EXPORT    const gp_Vec& TangentOnRst2() const;
  
  Standard_EXPORT    const gp_Vec2d& Tangent2dOnRst2() const;
  //! Enables  implementation of a criterion  of  decrochage <br>
//!          specific to the function. <br>
  Standard_EXPORT     Blend_DecrochStatus Decroch(const math_Vector& Sol,gp_Vec& NRst1,gp_Vec& TgRst1,gp_Vec& NRst2,gp_Vec& TgRst2) const;
  
  Standard_EXPORT     void Set(const Standard_Integer Choix) ;
  //! Sets  the  type  of   section generation   for the <br>
//!          approximations. <br>
  Standard_EXPORT     void Set(const BlendFunc_SectionShape TypeSection) ;
  //! Gives the center of circle defined   by PtRst1, PtRst2 and <br>
//!          radius ray. <br>
  Standard_EXPORT     Standard_Boolean CenterCircleRst1Rst2(const gp_Pnt& PtRst1,const gp_Pnt& PtRst2,const gp_Vec& np,gp_Pnt& Center,gp_Vec& VdMed) const;
  
  Standard_EXPORT     void Section(const Standard_Real Param,const Standard_Real U,const Standard_Real V,Standard_Real& Pdeb,Standard_Real& Pfin,gp_Circ& C) ;
  //! Returns  if the section is rationnal <br>
  Standard_EXPORT     Standard_Boolean IsRational() const;
  //!  Returns the length of the maximum section <br>
  Standard_EXPORT     Standard_Real GetSectionSize() const;
  //! Compute the minimal value of weight for each poles <br>
//!          of all sections. <br>
  Standard_EXPORT     void GetMinimalWeight(TColStd_Array1OfReal& Weigths) const;
  //! Returns  the number  of  intervals for  continuity <br>
//!          <S>. May be one if Continuity(me) >= <S> <br>
  Standard_EXPORT     Standard_Integer NbIntervals(const GeomAbs_Shape S) const;
  //! Stores in <T> the  parameters bounding the intervals <br>
//!          of continuity <S>. <br>
//!          The array must provide  enough room to  accomodate <br>
//!          for the parameters. i.e. T.Length() > NbIntervals() <br>
  Standard_EXPORT     void Intervals(TColStd_Array1OfReal& T,const GeomAbs_Shape S) const;
  
  Standard_EXPORT     void GetShape(Standard_Integer& NbPoles,Standard_Integer& NbKnots,Standard_Integer& Degree,Standard_Integer& NbPoles2d) ;
  //! Returns the tolerance to reach in approximation <br>
//!          to respecte <br>
//!          BoundTol error at the Boundary <br>
//!          AngleTol tangent error at the Boundary <br>
//!          SurfTol error inside the surface. <br>
  Standard_EXPORT     void GetTolerance(const Standard_Real BoundTol,const Standard_Real SurfTol,const Standard_Real AngleTol,math_Vector& Tol3d,math_Vector& Tol1D) const;
  
  Standard_EXPORT     void Knots(TColStd_Array1OfReal& TKnots) ;
  
  Standard_EXPORT     void Mults(TColStd_Array1OfInteger& TMults) ;
  //! Used for the first and last section <br>
  Standard_EXPORT     Standard_Boolean Section(const Blend_Point& P,TColgp_Array1OfPnt& Poles,TColgp_Array1OfVec& DPoles,TColgp_Array1OfPnt2d& Poles2d,TColgp_Array1OfVec2d& DPoles2d,TColStd_Array1OfReal& Weigths,TColStd_Array1OfReal& DWeigths) ;
  
  Standard_EXPORT     void Section(const Blend_Point& P,TColgp_Array1OfPnt& Poles,TColgp_Array1OfPnt2d& Poles2d,TColStd_Array1OfReal& Weigths) ;
  //! Used for the first and last section <br>
//!          The method returns Standard_True if the derivatives <br>
//!          are computed, otherwise it returns Standard_False. <br>
  Standard_EXPORT     Standard_Boolean Section(const Blend_Point& P,TColgp_Array1OfPnt& Poles,TColgp_Array1OfVec& DPoles,TColgp_Array1OfVec& D2Poles,TColgp_Array1OfPnt2d& Poles2d,TColgp_Array1OfVec2d& DPoles2d,TColgp_Array1OfVec2d& D2Poles2d,TColStd_Array1OfReal& Weigths,TColStd_Array1OfReal& DWeigths,TColStd_Array1OfReal& D2Weigths) ;
  
  Standard_EXPORT     void Resolution(const Standard_Integer IC2d,const Standard_Real Tol,Standard_Real& TolU,Standard_Real& TolV) const;





protected:





private:



Handle_Adaptor3d_HSurface surf1;
Handle_Adaptor3d_HSurface surf2;
Handle_Adaptor2d_HCurve2d rst1;
Handle_Adaptor2d_HCurve2d rst2;
Adaptor3d_CurveOnSurface cons1;
Adaptor3d_CurveOnSurface cons2;
Handle_Adaptor3d_HCurve guide;
Handle_Adaptor3d_HCurve tguide;
gp_Pnt ptrst1;
gp_Pnt ptrst2;
gp_Pnt2d pt2drst1;
gp_Pnt2d pt2drst2;
Standard_Real prmrst1;
Standard_Real prmrst2;
Standard_Boolean istangent;
gp_Vec tgrst1;
gp_Vec2d tg2drst1;
gp_Vec tgrst2;
gp_Vec2d tg2drst2;
Standard_Real ray;
Standard_Real dray;
Standard_Integer choix;
gp_Pnt ptgui;
gp_Vec d1gui;
gp_Vec d2gui;
gp_Vec nplan;
Standard_Real normtg;
Standard_Real theD;
Handle_Adaptor3d_HSurface surfref1;
Handle_Adaptor2d_HCurve2d rstref1;
Handle_Adaptor3d_HSurface surfref2;
Handle_Adaptor2d_HCurve2d rstref2;
Standard_Real maxang;
Standard_Real minang;
Standard_Real distmin;
BlendFunc_SectionShape mySShape;
Convert_ParameterisationType myTConv;
Handle_Law_Function tevol;
Handle_Law_Function fevol;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
