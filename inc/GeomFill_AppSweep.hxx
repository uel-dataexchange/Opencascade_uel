// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_AppSweep_HeaderFile
#define _GeomFill_AppSweep_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_TColgp_HArray2OfPnt_HeaderFile
#include <Handle_TColgp_HArray2OfPnt.hxx>
#endif
#ifndef _Handle_TColStd_HArray2OfReal_HeaderFile
#include <Handle_TColStd_HArray2OfReal.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfInteger_HeaderFile
#include <Handle_TColStd_HArray1OfInteger.hxx>
#endif
#ifndef _TColgp_SequenceOfArray1OfPnt2d_HeaderFile
#include <TColgp_SequenceOfArray1OfPnt2d.hxx>
#endif
#ifndef _Approx_ParametrizationType_HeaderFile
#include <Approx_ParametrizationType.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
#ifndef _AppBlend_Approx_HeaderFile
#include <AppBlend_Approx.hxx>
#endif
#ifndef _Handle_GeomFill_Line_HeaderFile
#include <Handle_GeomFill_Line.hxx>
#endif
class TColgp_HArray2OfPnt;
class TColStd_HArray2OfReal;
class TColStd_HArray1OfReal;
class TColStd_HArray1OfInteger;
class StdFail_NotDone;
class Standard_DomainError;
class Standard_OutOfRange;
class GeomFill_SweepSectionGenerator;
class GeomFill_Line;
class TColgp_Array2OfPnt;
class TColStd_Array2OfReal;
class TColStd_Array1OfReal;
class TColStd_Array1OfInteger;
class TColgp_Array1OfPnt2d;



class GeomFill_AppSweep  : public AppBlend_Approx {
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

  
  Standard_EXPORT   GeomFill_AppSweep();
  
  Standard_EXPORT   GeomFill_AppSweep(const Standard_Integer Degmin,const Standard_Integer Degmax,const Standard_Real Tol3d,const Standard_Real Tol2d,const Standard_Integer NbIt,const Standard_Boolean KnownParameters = Standard_False);
  
  Standard_EXPORT     void Init(const Standard_Integer Degmin,const Standard_Integer Degmax,const Standard_Real Tol3d,const Standard_Real Tol2d,const Standard_Integer NbIt,const Standard_Boolean KnownParameters = Standard_False) ;
  
  Standard_EXPORT     void SetParType(const Approx_ParametrizationType ParType) ;
  
  Standard_EXPORT     void SetContinuity(const GeomAbs_Shape C) ;
  
  Standard_EXPORT     void SetCriteriumWeight(const Standard_Real W1,const Standard_Real W2,const Standard_Real W3) ;
  
  Standard_EXPORT     Approx_ParametrizationType ParType() const;
  
  Standard_EXPORT     GeomAbs_Shape Continuity() const;
  
  Standard_EXPORT     void CriteriumWeight(Standard_Real& W1,Standard_Real& W2,Standard_Real& W3) const;
  
  Standard_EXPORT     void Perform(const Handle(GeomFill_Line)& Lin,GeomFill_SweepSectionGenerator& SecGen,const Standard_Boolean SpApprox = Standard_False) ;
  
  Standard_EXPORT     void PerformSmoothing(const Handle(GeomFill_Line)& Lin,GeomFill_SweepSectionGenerator& SecGen) ;
  
  Standard_EXPORT     void Perform(const Handle(GeomFill_Line)& Lin,GeomFill_SweepSectionGenerator& SecGen,const Standard_Integer NbMaxP) ;
  
        Standard_Boolean IsDone() const;
  
  Standard_EXPORT     void SurfShape(Standard_Integer& UDegree,Standard_Integer& VDegree,Standard_Integer& NbUPoles,Standard_Integer& NbVPoles,Standard_Integer& NbUKnots,Standard_Integer& NbVKnots) const;
  
  Standard_EXPORT     void Surface(TColgp_Array2OfPnt& TPoles,TColStd_Array2OfReal& TWeights,TColStd_Array1OfReal& TUKnots,TColStd_Array1OfReal& TVKnots,TColStd_Array1OfInteger& TUMults,TColStd_Array1OfInteger& TVMults) const;
  
        Standard_Integer UDegree() const;
  
        Standard_Integer VDegree() const;
  
       const TColgp_Array2OfPnt& SurfPoles() const;
  
       const TColStd_Array2OfReal& SurfWeights() const;
  
       const TColStd_Array1OfReal& SurfUKnots() const;
  
       const TColStd_Array1OfReal& SurfVKnots() const;
  
       const TColStd_Array1OfInteger& SurfUMults() const;
  
       const TColStd_Array1OfInteger& SurfVMults() const;
  
        Standard_Integer NbCurves2d() const;
  
  Standard_EXPORT     void Curves2dShape(Standard_Integer& Degree,Standard_Integer& NbPoles,Standard_Integer& NbKnots) const;
  
  Standard_EXPORT     void Curve2d(const Standard_Integer Index,TColgp_Array1OfPnt2d& TPoles,TColStd_Array1OfReal& TKnots,TColStd_Array1OfInteger& TMults) const;
  
        Standard_Integer Curves2dDegree() const;
  
       const TColgp_Array1OfPnt2d& Curve2dPoles(const Standard_Integer Index) const;
  
       const TColStd_Array1OfReal& Curves2dKnots() const;
  
       const TColStd_Array1OfInteger& Curves2dMults() const;
  
        void TolReached(Standard_Real& Tol3d,Standard_Real& Tol2d) const;
  
  Standard_EXPORT     Standard_Real TolCurveOnSurf(const Standard_Integer Index) const;





protected:





private:

  
  Standard_EXPORT     void InternalPerform(const Handle(GeomFill_Line)& Lin,GeomFill_SweepSectionGenerator& SecGen,const Standard_Boolean SpApprox,const Standard_Boolean UseVariational) ;


Standard_Boolean done;
Standard_Integer dmin;
Standard_Integer dmax;
Standard_Real tol3d;
Standard_Real tol2d;
Standard_Integer nbit;
Standard_Integer udeg;
Standard_Integer vdeg;
Standard_Boolean knownp;
Handle_TColgp_HArray2OfPnt tabPoles;
Handle_TColStd_HArray2OfReal tabWeights;
Handle_TColStd_HArray1OfReal tabUKnots;
Handle_TColStd_HArray1OfReal tabVKnots;
Handle_TColStd_HArray1OfInteger tabUMults;
Handle_TColStd_HArray1OfInteger tabVMults;
TColgp_SequenceOfArray1OfPnt2d seqPoles2d;
Standard_Real tol3dreached;
Standard_Real tol2dreached;
Approx_ParametrizationType paramtype;
GeomAbs_Shape continuity;
Standard_Real critweights[3];


};

#define TheSectionGenerator GeomFill_SweepSectionGenerator
#define TheSectionGenerator_hxx <GeomFill_SweepSectionGenerator.hxx>
#define Handle_TheLine Handle_GeomFill_Line
#define TheLine GeomFill_Line
#define TheLine_hxx <GeomFill_Line.hxx>
#define AppBlend_AppSurf GeomFill_AppSweep
#define AppBlend_AppSurf_hxx <GeomFill_AppSweep.hxx>

#include <AppBlend_AppSurf.lxx>

#undef TheSectionGenerator
#undef TheSectionGenerator_hxx
#undef Handle_TheLine
#undef TheLine
#undef TheLine_hxx
#undef AppBlend_AppSurf
#undef AppBlend_AppSurf_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
