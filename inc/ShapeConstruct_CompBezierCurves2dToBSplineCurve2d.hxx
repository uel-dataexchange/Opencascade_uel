// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeConstruct_CompBezierCurves2dToBSplineCurve2d_HeaderFile
#define _ShapeConstruct_CompBezierCurves2dToBSplineCurve2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Convert_SequenceOfArray1OfPoles2d_HeaderFile
#include <Convert_SequenceOfArray1OfPoles2d.hxx>
#endif
#ifndef _TColgp_SequenceOfPnt2d_HeaderFile
#include <TColgp_SequenceOfPnt2d.hxx>
#endif
#ifndef _TColStd_SequenceOfReal_HeaderFile
#include <TColStd_SequenceOfReal.hxx>
#endif
#ifndef _TColStd_SequenceOfInteger_HeaderFile
#include <TColStd_SequenceOfInteger.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_ConstructionError;
class TColgp_Array1OfPnt2d;
class TColStd_Array1OfReal;
class TColStd_Array1OfInteger;


//! Converts a list  of connecting Bezier Curves 2d to  a <br>
//!          BSplineCurve 2d. <br>
//!          if possible, the continuity of the BSpline will be <br>
//!          increased to more than C0. <br>
class ShapeConstruct_CompBezierCurves2dToBSplineCurve2d  {
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

  
  Standard_EXPORT   ShapeConstruct_CompBezierCurves2dToBSplineCurve2d(const Standard_Real AngularTolerance = 1.0e-4);
  
  Standard_EXPORT     void AddCurve(const TColgp_Array1OfPnt2d& Poles) ;
  //! Computes the algorithm. <br>
  Standard_EXPORT     void Perform() ;
  
  Standard_EXPORT     Standard_Integer Degree() const;
  
  Standard_EXPORT     Standard_Integer NbPoles() const;
  
  Standard_EXPORT     void Poles(TColgp_Array1OfPnt2d& Poles) const;
  
  Standard_EXPORT     Standard_Integer NbKnots() const;
  
  Standard_EXPORT     void KnotsAndMults(TColStd_Array1OfReal& Knots,TColStd_Array1OfInteger& Mults) const;





protected:





private:



Convert_SequenceOfArray1OfPoles2d mySequence;
TColgp_SequenceOfPnt2d CurvePoles;
TColStd_SequenceOfReal CurveKnots;
TColStd_SequenceOfInteger KnotsMultiplicities;
Standard_Integer myDegree;
Standard_Real myAngular;
Standard_Boolean myDone;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
