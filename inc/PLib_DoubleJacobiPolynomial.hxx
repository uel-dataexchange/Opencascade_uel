// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PLib_DoubleJacobiPolynomial_HeaderFile
#define _PLib_DoubleJacobiPolynomial_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_PLib_JacobiPolynomial_HeaderFile
#include <Handle_PLib_JacobiPolynomial.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class PLib_JacobiPolynomial;
class TColStd_HArray1OfReal;
class TColStd_Array1OfReal;



class PLib_DoubleJacobiPolynomial  {
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

  
  Standard_EXPORT   PLib_DoubleJacobiPolynomial();
  
  Standard_EXPORT   PLib_DoubleJacobiPolynomial(const Handle(PLib_JacobiPolynomial)& JacPolU,const Handle(PLib_JacobiPolynomial)& JacPolV);
  
  Standard_EXPORT     Standard_Real MaxErrorU(const Standard_Integer Dimension,const Standard_Integer DegreeU,const Standard_Integer DegreeV,const Standard_Integer dJacCoeff,const TColStd_Array1OfReal& JacCoeff) const;
  
  Standard_EXPORT     Standard_Real MaxErrorV(const Standard_Integer Dimension,const Standard_Integer DegreeU,const Standard_Integer DegreeV,const Standard_Integer dJacCoeff,const TColStd_Array1OfReal& JacCoeff) const;
  
  Standard_EXPORT     Standard_Real MaxError(const Standard_Integer Dimension,const Standard_Integer MinDegreeU,const Standard_Integer MaxDegreeU,const Standard_Integer MinDegreeV,const Standard_Integer MaxDegreeV,const Standard_Integer dJacCoeff,const TColStd_Array1OfReal& JacCoeff,const Standard_Real Error) const;
  
  Standard_EXPORT     void ReduceDegree(const Standard_Integer Dimension,const Standard_Integer MinDegreeU,const Standard_Integer MaxDegreeU,const Standard_Integer MinDegreeV,const Standard_Integer MaxDegreeV,const Standard_Integer dJacCoeff,const TColStd_Array1OfReal& JacCoeff,const Standard_Real EpmsCut,Standard_Real& MaxError,Standard_Integer& NewDegreeU,Standard_Integer& NewDegreeV) const;
  
  Standard_EXPORT     Standard_Real AverageError(const Standard_Integer Dimension,const Standard_Integer DegreeU,const Standard_Integer DegreeV,const Standard_Integer dJacCoeff,const TColStd_Array1OfReal& JacCoeff) const;
  
  Standard_EXPORT     void WDoubleJacobiToCoefficients(const Standard_Integer Dimension,const Standard_Integer DegreeU,const Standard_Integer DegreeV,const TColStd_Array1OfReal& JacCoeff,TColStd_Array1OfReal& Coefficients) const;
  //! returns myJacPolU; <br>
        Handle_PLib_JacobiPolynomial U() const;
  //! returns myJacPolV; <br>
        Handle_PLib_JacobiPolynomial V() const;
  //! returns myTabMaxU; <br>
        Handle_TColStd_HArray1OfReal TabMaxU() const;
  //! returns myTabMaxV; <br>
        Handle_TColStd_HArray1OfReal TabMaxV() const;





protected:





private:



Handle_PLib_JacobiPolynomial myJacPolU;
Handle_PLib_JacobiPolynomial myJacPolV;
Handle_TColStd_HArray1OfReal myTabMaxU;
Handle_TColStd_HArray1OfReal myTabMaxV;


};


#include <PLib_DoubleJacobiPolynomial.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
