// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_ECC2dOfExtCC2d_HeaderFile
#define _Extrema_ECC2dOfExtCC2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Extrema_CCFOfECC2dOfExtCC2d_HeaderFile
#include <Extrema_CCFOfECC2dOfExtCC2d.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Extrema_CCache2dOfExtCC2d_HeaderFile
#include <Handle_Extrema_CCache2dOfExtCC2d.hxx>
#endif
#ifndef _Handle_TColgp_HArray1OfPnt2d_HeaderFile
#include <Handle_TColgp_HArray1OfPnt2d.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Extrema_CCache2dOfExtCC2d;
class StdFail_InfiniteSolutions;
class StdFail_NotDone;
class Standard_OutOfRange;
class Adaptor2d_Curve2d;
class Extrema_Curve2dTool;
class TColgp_HArray1OfPnt2d;
class Extrema_POnCurv2d;
class gp_Pnt2d;
class gp_Vec2d;
class Extrema_CCFOfECC2dOfExtCC2d;
class Extrema_SeqPOnCOfCCFOfECC2dOfExtCC2d;



class Extrema_ECC2dOfExtCC2d  {
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

  
  Standard_EXPORT   Extrema_ECC2dOfExtCC2d();
  
  Standard_EXPORT   Extrema_ECC2dOfExtCC2d(const Adaptor2d_Curve2d& C1,const Adaptor2d_Curve2d& C2,const Standard_Integer NbU,const Standard_Integer NbV,const Standard_Real TolU,const Standard_Real TolV);
  
  Standard_EXPORT   Extrema_ECC2dOfExtCC2d(const Adaptor2d_Curve2d& C1,const Adaptor2d_Curve2d& C2,const Standard_Real Uinf,const Standard_Real Usup,const Standard_Real Vinf,const Standard_Real Vsup,const Standard_Integer NbU,const Standard_Integer NbV,const Standard_Real TolU,const Standard_Real TolV);
  
  Standard_EXPORT     void SetCurveCache(const Standard_Integer theRank,const Handle(Extrema_CCache2dOfExtCC2d)& theCache) ;
  
  Standard_EXPORT     void SetTolerance(const Standard_Real Tol) ;
  
  Standard_EXPORT     void Perform() ;
  
  Standard_EXPORT     Standard_Boolean IsDone() const;
  
  Standard_EXPORT     Standard_Integer NbExt() const;
  
  Standard_EXPORT     Standard_Real SquareDistance(const Standard_Integer N = 1) const;
  
  Standard_EXPORT     void Points(const Standard_Integer N,Extrema_POnCurv2d& P1,Extrema_POnCurv2d& P2) const;





protected:





private:



Extrema_CCFOfECC2dOfExtCC2d myF;
Standard_Boolean myDone;
Handle_Extrema_CCache2dOfExtCC2d myCache[2];


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
