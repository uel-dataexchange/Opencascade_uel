// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PLib_HeaderFile
#define _PLib_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
class TColStd_Array1OfReal;
class TColStd_Array2OfReal;
class TColgp_Array1OfPnt;
class TColgp_Array1OfPnt2d;
class math_Matrix;
class TColgp_Array2OfPnt;
class PLib_Base;
class PLib_JacobiPolynomial;
class PLib_HermitJacobi;
class PLib_DoubleJacobiPolynomial;


//! PLib means Polynomial  functions library.  This pk <br>
//!          provides  basic       computation    functions for <br>
//!          polynomial functions. <br>
//! <br>
class PLib  {
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

  //! Used as argument for a non rational functions <br>
//! <br>
      static  TColStd_Array1OfReal& NoWeights() ;
  //! Used as argument for a non rational functions <br>
//! <br>
      static  TColStd_Array2OfReal& NoWeights2() ;
  //! Copy in FP the coordinates of the poles. <br>
  Standard_EXPORT   static  void SetPoles(const TColgp_Array1OfPnt& Poles,TColStd_Array1OfReal& FP) ;
  //! Copy in FP the coordinates of the poles. <br>
  Standard_EXPORT   static  void SetPoles(const TColgp_Array1OfPnt& Poles,const TColStd_Array1OfReal& Weights,TColStd_Array1OfReal& FP) ;
  //! Get from FP the coordinates of the poles. <br>
  Standard_EXPORT   static  void GetPoles(const TColStd_Array1OfReal& FP,TColgp_Array1OfPnt& Poles) ;
  //! Get from FP the coordinates of the poles. <br>
  Standard_EXPORT   static  void GetPoles(const TColStd_Array1OfReal& FP,TColgp_Array1OfPnt& Poles,TColStd_Array1OfReal& Weights) ;
  //! Copy in FP the coordinates of the poles. <br>
  Standard_EXPORT   static  void SetPoles(const TColgp_Array1OfPnt2d& Poles,TColStd_Array1OfReal& FP) ;
  //! Copy in FP the coordinates of the poles. <br>
  Standard_EXPORT   static  void SetPoles(const TColgp_Array1OfPnt2d& Poles,const TColStd_Array1OfReal& Weights,TColStd_Array1OfReal& FP) ;
  //! Get from FP the coordinates of the poles. <br>
  Standard_EXPORT   static  void GetPoles(const TColStd_Array1OfReal& FP,TColgp_Array1OfPnt2d& Poles) ;
  //! Get from FP the coordinates of the poles. <br>
  Standard_EXPORT   static  void GetPoles(const TColStd_Array1OfReal& FP,TColgp_Array1OfPnt2d& Poles,TColStd_Array1OfReal& Weights) ;
  //! Returns the Binomial Cnp , without testing anything. <br>
      static  Standard_Real Bin(const Standard_Integer N,const Standard_Integer P) ;
  //!  test on N >  maxbinom and build the PASCAL triangle <br>
//!          on size N if necessary. <br>
      static  void Binomial(const Standard_Integer N) ;
  //! only called by Binomial(N,P) <br>
  Standard_EXPORT   static  void InternalBinomial(const Standard_Integer N,Standard_Integer& maxbinom,Standard_Address& binom) ;
  //! Computes the derivatives of a ratio at order <br>
//!          <N> in dimension <Dimension>. <br>
//! <br>
//!          <Ders> is an  array containing the  values  of the <br>
//!          input   derivatives from  0 to  Min(<N>,<Degree>). <br>
//!          For   orders   higher  than <Degree>    the  inputcd /s2d1/BMDL/ <br>
//!          derivatives   are assumed to be  0. <br>
//! <br>
//!          Content of <Ders> : <br>
//! <br>
//!          x(1),x(2),...,x(Dimension),w <br>
//!          x'(1),x'(2),...,x'(Dimension),w' <br>
//!          x''(1),x''(2),...,x''(Dimension),w'' <br>
//! <br>
//!          If  <All> is false, only the   derivative at order <br>
//!          <N> is computed.  <RDers>  is an array   of length <br>
//!          Dimension which will contain the result : <br>
//! <br>
//!          x(1)/w , x(2)/w ,  ... derivated <N> times <br>
//! <br>
//!          If <All> is  true all the  derivatives up to order <br>
//!          <N> are computed.   <RDers> is an array of  length <br>
//!          Dimension * (N+1) which will contains : <br>
//! <br>
//!          x(1)/w , x(2)/w ,  ... <br>
//!          x(1)/w , x(2)/w ,  ... derivated <1> times <br>
//!          x(1)/w , x(2)/w ,  ... derivated <2> times <br>
//!          ... <br>
//!          x(1)/w , x(2)/w ,  ... derivated <N> times <br>
//! <br>
//!  Warning: <RDers> must be dimensionned properly. <br>
  Standard_EXPORT   static  void RationalDerivative(const Standard_Integer Degree,const Standard_Integer N,const Standard_Integer Dimension,Standard_Real& Ders,Standard_Real& RDers,const Standard_Boolean All = Standard_True) ;
  //! Computes DerivativesRequest derivatives of a ratio at <br>
//!          of a BSpline function of degree <Degree> <br>
//!          dimension <Dimension>. <br>
//! <br>
//!          <PolesDerivatives> is an  array containing the  values <br>
//!          of the input   derivatives from  0 to  <DerivativeRequest> <br>
//!          For   orders   higher  than <Degree>    the  input <br>
//!          derivatives   are assumed to be  0. <br>
//! <br>
//!          Content of <PoleasDerivatives> : <br>
//! <br>
//!          x(1),x(2),...,x(Dimension) <br>
//!          x'(1),x'(2),...,x'(Dimension) <br>
//!          x''(1),x''(2),...,x''(Dimension) <br>
//! <br>
//! <br>
//!          WeightsDerivatives is an array that contains derivatives <br>
//!          from 0 to  <DerivativeRequest> <br>
//!          After returning from the routine the array <br>
//!          RationalDerivatives contains the following <br>
//!          x(1)/w , x(2)/w ,  ... <br>
//!          x(1)/w , x(2)/w ,  ...   derivated once <br>
//!          x(1)/w , x(2)/w ,  ...   twice <br>
//!          x(1)/w , x(2)/w ,  ... derivated <DerivativeRequest> times <br>
//! <br>
//!          The array RationalDerivatives and PolesDerivatives <br>
//!          can be same since the overwrite is non destructive within <br>
//!          the algorithm <br>
//! <br>
//!  Warning: <RationalDerivates> must be dimensionned properly. <br>
  Standard_EXPORT   static  void RationalDerivatives(const Standard_Integer DerivativesRequest,const Standard_Integer Dimension,Standard_Real& PolesDerivatives,Standard_Real& WeightsDerivatives,Standard_Real& RationalDerivates) ;
  //! Performs Horner method with synthethic division <br>
//!          for derivatives <br>
//!          parameter <U>, with <Degree> and <Dimension>. <br>
//!          PolynomialCoeff are stored in the following fashion <br>
//!          c0(1)      c0(2) ....       c0(Dimension) <br>
//!          c1(1)      c1(2) ....       c1(Dimension) <br>
//! <br>
//! <br>
//!          cDegree(1) cDegree(2) ....  cDegree(Dimension) <br>
//!          where the polynomial is defined as : <br>
//! <br>
//!                          2                     Degree <br>
//!          c0 + c1 X + c2 X  +  ....   cDegree X <br>
//! <br>
//!          Results stores the result in the following format <br>
//! <br>
//!          f(1)             f(2)  ....     f(Dimension) <br>
//!           (1)           (1)              (1) <br>
//!          f  (1)        f   (2) ....     f   (Dimension) <br>
//! <br>
//!           (DerivativeRequest)            (DerivativeRequest) <br>
//!          f  (1)                         f   (Dimension) <br>
//! <br>
//!          this just evaluates the point at parameter U <br>
//! <br>
//!  Warning: <Results> and <PolynomialCoeff> must be dimensioned properly <br>
//! <br>
//! <br>
  Standard_EXPORT   static  void EvalPolynomial(const Standard_Real U,const Standard_Integer DerivativeOrder,const Standard_Integer Degree,const Standard_Integer Dimension,Standard_Real& PolynomialCoeff,Standard_Real& Results) ;
  //! Same as above with DerivativeOrder = 0; <br>
  Standard_EXPORT   static  void NoDerivativeEvalPolynomial(const Standard_Real U,const Standard_Integer Degree,const Standard_Integer Dimension,const Standard_Integer DegreeDimension,Standard_Real& PolynomialCoeff,Standard_Real& Results) ;
  //! Applies EvalPolynomial twice to evaluate the derivative <br>
//!          of orders UDerivativeOrder in U, VDerivativeOrder in V <br>
//!          at parameters U,V <br>
//! <br>
//! <br>
//!          PolynomialCoeff are stored in the following fashion <br>
//!          c00(1)  ....       c00(Dimension) <br>
//!          c10(1)  ....       c10(Dimension) <br>
//!          .... <br>
//!          cm0(1)  ....       cm0(Dimension) <br>
//!          .... <br>
//!          c01(1)  ....       c01(Dimension) <br>
//!          c11(1)  ....       c11(Dimension) <br>
//!          .... <br>
//!          cm1(1)  ....       cm1(Dimension) <br>
//!          .... <br>
//!          c0n(1)  ....       c0n(Dimension) <br>
//!          c1n(1)  ....       c1n(Dimension) <br>
//!          .... <br>
//!          cmn(1)  ....       cmn(Dimension) <br>
//! <br>
//! <br>
//!          where the polynomial is defined as : <br>
//!                             2                 m <br>
//!          c00 + c10 U + c20 U  +  ....  + cm0 U <br>
//!                                  2                   m <br>
//!          + c01 V + c11 UV + c21 U V  +  ....  + cm1 U  V <br>
//!                         n               m n <br>
//!          + .... + c0n V +  ....  + cmn U V <br>
//! <br>
//!          with m = UDegree and n = VDegree <br>
//! <br>
//!          Results stores the result in the following format <br>
//! <br>
//!          f(1)             f(2)  ....     f(Dimension) <br>
//! <br>
//!  Warning: <Results> and <PolynomialCoeff> must be dimensioned properly <br>
//! <br>
//! <br>
  Standard_EXPORT   static  void EvalPoly2Var(const Standard_Real U,const Standard_Real V,const Standard_Integer UDerivativeOrder,const Standard_Integer VDerivativeOrder,const Standard_Integer UDegree,const Standard_Integer VDegree,const Standard_Integer Dimension,Standard_Real& PolynomialCoeff,Standard_Real& Results) ;
  //! Performs the Lagrange Interpolation of <br>
//!          given series of points with given parameters <br>
//!          with the requested derivative order <br>
//!          Results will store things in the following format <br>
//!          with d = DerivativeOrder <br>
//! <br>
//! [0],             [Dimension-1]              : value <br>
//! [Dimension],     [Dimension  + Dimension-1] : first derivative <br>
//! <br>
//! [d *Dimension],  [d*Dimension + Dimension-1]: dth   derivative <br>
  Standard_EXPORT   static  Standard_Integer EvalLagrange(const Standard_Real U,const Standard_Integer DerivativeOrder,const Standard_Integer Degree,const Standard_Integer Dimension,Standard_Real& ValueArray,Standard_Real& ParameterArray,Standard_Real& Results) ;
  //! Performs the Cubic Hermite Interpolation of <br>
//!          given series of points with given parameters <br>
//!          with the requested derivative order. <br>
//!          ValueArray stores the value at the first and <br>
//!          last parameter. It has the following format : <br>
//! [0],             [Dimension-1]              : value at first param <br>
//! [Dimension],     [Dimension  + Dimension-1] : value at last param <br>
//!           Derivative array stores the value of the derivatives <br>
//!           at the first parameter and at the last parameter <br>
//!           in the following format <br>
//! [0],             [Dimension-1]              : derivative at <br>
//!                                               first param <br>
//! [Dimension],     [Dimension  + Dimension-1] : derivative at <br>
//!                                               last param <br>
//! <br>
//!          ParameterArray  stores the first and last parameter <br>
//!          in the following format : <br>
//!          [0] : first parameter <br>
//!          [1] : last  parameter <br>
//! <br>
//!          Results will store things in the following format <br>
//!          with d = DerivativeOrder <br>
//! <br>
//! [0],             [Dimension-1]              : value <br>
//! [Dimension],     [Dimension  + Dimension-1] : first derivative <br>
//! <br>
//! [d *Dimension],  [d*Dimension + Dimension-1]: dth   derivative <br>
  Standard_EXPORT   static  Standard_Integer EvalCubicHermite(const Standard_Real U,const Standard_Integer DerivativeOrder,const Standard_Integer Dimension,Standard_Real& ValueArray,Standard_Real& DerivativeArray,Standard_Real& ParameterArray,Standard_Real& Results) ;
  
  Standard_EXPORT   static  Standard_Boolean HermiteCoefficients(const Standard_Real FirstParameter,const Standard_Real LastParameter,const Standard_Integer FirstOrder,const Standard_Integer LastOrder,math_Matrix& MatrixCoefs) ;
  
  Standard_EXPORT   static  void CoefficientsPoles(const TColgp_Array1OfPnt& Coefs,const TColStd_Array1OfReal& WCoefs,TColgp_Array1OfPnt& Poles,TColStd_Array1OfReal& WPoles) ;
  
  Standard_EXPORT   static  void CoefficientsPoles(const TColgp_Array1OfPnt2d& Coefs,const TColStd_Array1OfReal& WCoefs,TColgp_Array1OfPnt2d& Poles,TColStd_Array1OfReal& WPoles) ;
  
  Standard_EXPORT   static  void CoefficientsPoles(const TColStd_Array1OfReal& Coefs,const TColStd_Array1OfReal& WCoefs,TColStd_Array1OfReal& Poles,TColStd_Array1OfReal& WPoles) ;
  
  Standard_EXPORT   static  void CoefficientsPoles(const Standard_Integer dim,const TColStd_Array1OfReal& Coefs,const TColStd_Array1OfReal& WCoefs,TColStd_Array1OfReal& Poles,TColStd_Array1OfReal& WPoles) ;
  
  Standard_EXPORT   static  void Trimming(const Standard_Real U1,const Standard_Real U2,TColgp_Array1OfPnt& Coeffs,TColStd_Array1OfReal& WCoeffs) ;
  
  Standard_EXPORT   static  void Trimming(const Standard_Real U1,const Standard_Real U2,TColgp_Array1OfPnt2d& Coeffs,TColStd_Array1OfReal& WCoeffs) ;
  
  Standard_EXPORT   static  void Trimming(const Standard_Real U1,const Standard_Real U2,TColStd_Array1OfReal& Coeffs,TColStd_Array1OfReal& WCoeffs) ;
  
  Standard_EXPORT   static  void Trimming(const Standard_Real U1,const Standard_Real U2,const Standard_Integer dim,TColStd_Array1OfReal& Coeffs,TColStd_Array1OfReal& WCoeffs) ;
  
  Standard_EXPORT   static  void CoefficientsPoles(const TColgp_Array2OfPnt& Coefs,const TColStd_Array2OfReal& WCoefs,TColgp_Array2OfPnt& Poles,TColStd_Array2OfReal& WPoles) ;
  
  Standard_EXPORT   static  void UTrimming(const Standard_Real U1,const Standard_Real U2,TColgp_Array2OfPnt& Coeffs,TColStd_Array2OfReal& WCoeffs) ;
  
  Standard_EXPORT   static  void VTrimming(const Standard_Real V1,const Standard_Real V2,TColgp_Array2OfPnt& Coeffs,TColStd_Array2OfReal& WCoeffs) ;
  //! Compute the coefficients in the canonical base of the <br>
//!         polynomial satisfying the given constraints <br>
//!         at the given parameters <br>
//!         The array FirstContr(i,j) i=1,Dimension j=0,FirstOrder <br>
//!         contains the values of the constraint at parameter FirstParameter <br>
//!         idem for LastConstr <br>
  Standard_EXPORT   static  Standard_Boolean HermiteInterpolate(const Standard_Integer Dimension,const Standard_Real FirstParameter,const Standard_Real LastParameter,const Standard_Integer FirstOrder,const Standard_Integer LastOrder,const TColStd_Array2OfReal& FirstConstr,const TColStd_Array2OfReal& LastConstr,TColStd_Array1OfReal& Coefficients) ;
  
  Standard_EXPORT   static  void JacobiParameters(const GeomAbs_Shape ConstraintOrder,const Standard_Integer MaxDegree,const Standard_Integer Code,Standard_Integer& NbGaussPoints,Standard_Integer& WorkDegree) ;
  
  Standard_EXPORT   static  Standard_Integer NivConstr(const GeomAbs_Shape ConstraintOrder) ;
  
  Standard_EXPORT   static  GeomAbs_Shape ConstraintOrder(const Standard_Integer NivConstr) ;
  
  Standard_EXPORT   static  void EvalLength(const Standard_Integer Degree,const Standard_Integer Dimension,Standard_Real& PolynomialCoeff,const Standard_Real U1,const Standard_Real U2,Standard_Real& Length) ;
  
  Standard_EXPORT   static  void EvalLength(const Standard_Integer Degree,const Standard_Integer Dimension,Standard_Real& PolynomialCoeff,const Standard_Real U1,const Standard_Real U2,const Standard_Real Tol,Standard_Real& Length,Standard_Real& Error) ;





protected:





private:




friend class PLib_Base;
friend class PLib_JacobiPolynomial;
friend class PLib_HermitJacobi;
friend class PLib_DoubleJacobiPolynomial;

};


#include <PLib.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
