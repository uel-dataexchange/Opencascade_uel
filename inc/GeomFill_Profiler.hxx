// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_Profiler_HeaderFile
#define _GeomFill_Profiler_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TColGeom_SequenceOfCurve_HeaderFile
#include <TColGeom_SequenceOfCurve.hxx>
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
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class StdFail_NotDone;
class Standard_DomainError;
class Geom_Curve;
class TColgp_Array1OfPnt;
class TColStd_Array1OfReal;
class TColStd_Array1OfInteger;


//! Evaluation of the common BSplineProfile of a group <br>
//!          of curves  from Geom. All the curves will have the <br>
//!          same  degree,  the same knot-vector, so  the  same <br>
//!          number of poles. <br>
class GeomFill_Profiler  {
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

  
  Standard_EXPORT   GeomFill_Profiler();
  
  Standard_EXPORT   virtual  void Delete() ;
Standard_EXPORT virtual ~GeomFill_Profiler(){Delete() ; }
  
  Standard_EXPORT     void AddCurve(const Handle(Geom_Curve)& Curve) ;
  //! Converts all curves to BSplineCurves. <br>
//!          Set them to the common profile. <br>
//!          <PTol> is used to compare 2 knots. <br>
  Standard_EXPORT   virtual  void Perform(const Standard_Real PTol) ;
  //! Raises if not yet perform <br>
  Standard_EXPORT     Standard_Integer Degree() const;
  
        Standard_Boolean IsPeriodic() const;
  //! Raises if not yet perform <br>
  Standard_EXPORT     Standard_Integer NbPoles() const;
  //! returns in <Poles> the  poles  of the BSplineCurve <br>
//!          from index <Index> adjusting to the current profile. <br>//! Raises if not yet perform <br>//! Raises if <Index> not in the range [1,NbCurves] <br>
//!          if  the  length  of  <Poles>  is  not  equal  to <br>
//!          NbPoles(). <br>
  Standard_EXPORT     void Poles(const Standard_Integer Index,TColgp_Array1OfPnt& Poles) const;
  //! returns in <Weights> the weights of the BSplineCurve <br>
//!          from index <Index> adjusting to the current profile. <br>//! Raises if not yet perform <br>//! Raises if <Index> not in the range [1,NbCurves] or <br>
//!          if  the  length  of  <Weights>  is  not  equal  to <br>
//!          NbPoles(). <br>
  Standard_EXPORT     void Weights(const Standard_Integer Index,TColStd_Array1OfReal& Weights) const;
  //! Raises if not yet perform <br>
  Standard_EXPORT     Standard_Integer NbKnots() const;
  //! Raises if not yet perform <br>//! Raises if  the lengthes of <Knots> and <Mults> are <br>
//!          not equal to NbKnots(). <br>
  Standard_EXPORT     void KnotsAndMults(TColStd_Array1OfReal& Knots,TColStd_Array1OfInteger& Mults) const;
  
       const Handle_Geom_Curve& Curve(const Standard_Integer Index) const;





protected:



TColGeom_SequenceOfCurve mySequence;
Standard_Boolean myIsDone;
Standard_Boolean myIsPeriodic;


private:





};


#include <GeomFill_Profiler.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
