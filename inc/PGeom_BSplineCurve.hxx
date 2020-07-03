// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom_BSplineCurve_HeaderFile
#define _PGeom_BSplineCurve_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PGeom_BSplineCurve_HeaderFile
#include <Handle_PGeom_BSplineCurve.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_PColgp_HArray1OfPnt_HeaderFile
#include <Handle_PColgp_HArray1OfPnt.hxx>
#endif
#ifndef _Handle_PColStd_HArray1OfReal_HeaderFile
#include <Handle_PColStd_HArray1OfReal.hxx>
#endif
#ifndef _Handle_PColStd_HArray1OfInteger_HeaderFile
#include <Handle_PColStd_HArray1OfInteger.hxx>
#endif
#ifndef _PGeom_BoundedCurve_HeaderFile
#include <PGeom_BoundedCurve.hxx>
#endif
class PColgp_HArray1OfPnt;
class PColStd_HArray1OfReal;
class PColStd_HArray1OfInteger;


class PGeom_BSplineCurve : public PGeom_BoundedCurve {

public:

  //! Creates a BSplineCurve with default values. <br>
  Standard_EXPORT   PGeom_BSplineCurve();
  //! Creates a BSplineCurve with these field values. <br>
  Standard_EXPORT   PGeom_BSplineCurve(const Standard_Boolean aRational,const Standard_Boolean aPeriodic,const Standard_Integer aSpineDegree,const Handle(PColgp_HArray1OfPnt)& aPoles,const Handle(PColStd_HArray1OfReal)& aWeights,const Handle(PColStd_HArray1OfReal)& aKnots,const Handle(PColStd_HArray1OfInteger)& aMultiplicities);
  //!Set the field periodic with <aPeriodic>. <br>
  Standard_EXPORT     void Periodic(const Standard_Boolean aPeriodic) ;
  //!Returns the value of the field periodic. <br>
  Standard_EXPORT     Standard_Boolean Periodic() const;
  //!Set  the   value  of  the    field rational   with <br>
//!         <aRational>. <br>
  Standard_EXPORT     void Rational(const Standard_Boolean aRational) ;
  //!Returns the value of the field rational. <br>
  Standard_EXPORT     Standard_Boolean Rational() const;
  //! Set the value of the field spineDegree with <aSpineDegree>. <br>
  Standard_EXPORT     void SpineDegree(const Standard_Integer aSpineDegree) ;
  //! Returns the value of the field spineDegree. <br>
  Standard_EXPORT     Standard_Integer SpineDegree() const;
  //! Set the value of the field poles with <aPoles>. <br>
  Standard_EXPORT     void Poles(const Handle(PColgp_HArray1OfPnt)& aPoles) ;
  //! Returns the value of the field poles. <br>
  Standard_EXPORT     Handle_PColgp_HArray1OfPnt Poles() const;
  //! Set the value of the field weights with <aWeights>. <br>
  Standard_EXPORT     void Weights(const Handle(PColStd_HArray1OfReal)& aWeights) ;
  //! Returns the the value of the field weights. <br>
  Standard_EXPORT     Handle_PColStd_HArray1OfReal Weights() const;
  //!  Set the field knots with <aKnots>. <br>
//!  The multiplicity of the knots are not modified. <br>
  Standard_EXPORT     void Knots(const Handle(PColStd_HArray1OfReal)& aKnots) ;
  //! returns the value of the field knots. <br>
  Standard_EXPORT     Handle_PColStd_HArray1OfReal Knots() const;
  //!  Set the field multiplicities with <aMultiplicities>. <br>
  Standard_EXPORT     void Multiplicities(const Handle(PColStd_HArray1OfInteger)& aMultiplicities) ;
  //! returns the value of the field multiplicities. <br>
  Standard_EXPORT     Handle_PColStd_HArray1OfInteger Multiplicities() const;

PGeom_BSplineCurve(const Storage_stCONSTclCOM& a) : PGeom_BoundedCurve(a)
{
  
}
    Standard_Boolean _CSFDB_GetPGeom_BSplineCurverational() const { return rational; }
    void _CSFDB_SetPGeom_BSplineCurverational(const Standard_Boolean p) { rational = p; }
    Standard_Boolean _CSFDB_GetPGeom_BSplineCurveperiodic() const { return periodic; }
    void _CSFDB_SetPGeom_BSplineCurveperiodic(const Standard_Boolean p) { periodic = p; }
    Standard_Integer _CSFDB_GetPGeom_BSplineCurvespineDegree() const { return spineDegree; }
    void _CSFDB_SetPGeom_BSplineCurvespineDegree(const Standard_Integer p) { spineDegree = p; }
    Handle(PColgp_HArray1OfPnt) _CSFDB_GetPGeom_BSplineCurvepoles() const { return poles; }
    void _CSFDB_SetPGeom_BSplineCurvepoles(const Handle(PColgp_HArray1OfPnt)& p) { poles = p; }
    Handle(PColStd_HArray1OfReal) _CSFDB_GetPGeom_BSplineCurveweights() const { return weights; }
    void _CSFDB_SetPGeom_BSplineCurveweights(const Handle(PColStd_HArray1OfReal)& p) { weights = p; }
    Handle(PColStd_HArray1OfReal) _CSFDB_GetPGeom_BSplineCurveknots() const { return knots; }
    void _CSFDB_SetPGeom_BSplineCurveknots(const Handle(PColStd_HArray1OfReal)& p) { knots = p; }
    Handle(PColStd_HArray1OfInteger) _CSFDB_GetPGeom_BSplineCurvemultiplicities() const { return multiplicities; }
    void _CSFDB_SetPGeom_BSplineCurvemultiplicities(const Handle(PColStd_HArray1OfInteger)& p) { multiplicities = p; }



  DEFINE_STANDARD_RTTI(PGeom_BSplineCurve)

protected:




private: 


Standard_Boolean rational;
Standard_Boolean periodic;
Standard_Integer spineDegree;
Handle_PColgp_HArray1OfPnt poles;
Handle_PColStd_HArray1OfReal weights;
Handle_PColStd_HArray1OfReal knots;
Handle_PColStd_HArray1OfInteger multiplicities;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
