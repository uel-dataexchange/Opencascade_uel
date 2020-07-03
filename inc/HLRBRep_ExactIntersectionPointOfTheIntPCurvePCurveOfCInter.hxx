// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_ExactIntersectionPointOfTheIntPCurvePCurveOfCInter_HeaderFile
#define _HLRBRep_ExactIntersectionPointOfTheIntPCurvePCurveOfCInter_HeaderFile

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
#ifndef _HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter_HeaderFile
#include <HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter.hxx>
#endif
#ifndef _math_Vector_HeaderFile
#include <math_Vector.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class HLRBRep_CurveTool;
class HLRBRep_TheProjPCurOfCInter;
class HLRBRep_TheIntPCurvePCurveOfCInter;
class HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter;
class HLRBRep_ThePolygon2dToolOfTheIntPCurvePCurveOfCInter;
class HLRBRep_InterferencePoly2dOfTheIntPCurvePCurveOfCInter;
class HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter;



class HLRBRep_ExactIntersectionPointOfTheIntPCurvePCurveOfCInter  {
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

  
  Standard_EXPORT   HLRBRep_ExactIntersectionPointOfTheIntPCurvePCurveOfCInter(const Standard_Address& C1,const Standard_Address& C2,const Standard_Real Tol);
  
  Standard_EXPORT     void Perform(const HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter& Poly1,const HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter& Poly2,Standard_Integer& NumSegOn1,Standard_Integer& NumSegOn2,Standard_Real& ParamOnSeg1,Standard_Real& ParamOnSeg2) ;
  
  Standard_EXPORT     void Perform(const Standard_Real Uo,const Standard_Real Vo,const Standard_Real UInf,const Standard_Real VInf,const Standard_Real USup,const Standard_Real VSup) ;
  
  Standard_EXPORT     Standard_Integer NbRoots() const;
  
  Standard_EXPORT     void Roots(Standard_Real& U,Standard_Real& V) ;
  
  Standard_EXPORT     Standard_Boolean AnErrorOccurred() const;





protected:





private:

  
  Standard_EXPORT     void MathPerform() ;


Standard_Boolean done;
Standard_Integer nbroots;
Standard_Real myTol;
HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter FctDist;
math_Vector ToleranceVector;
math_Vector BInfVector;
math_Vector BSupVector;
math_Vector StartingPoint;
math_Vector Root;
Standard_Boolean anErrorOccurred;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
