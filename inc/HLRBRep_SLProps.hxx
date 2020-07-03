// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_SLProps_HeaderFile
#define _HLRBRep_SLProps_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _gp_Vec_HeaderFile
#include <gp_Vec.hxx>
#endif
#ifndef _gp_Dir_HeaderFile
#include <gp_Dir.hxx>
#endif
#ifndef _LProp_Status_HeaderFile
#include <LProp_Status.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class LProp_BadContinuity;
class Standard_DomainError;
class Standard_OutOfRange;
class LProp_NotDefined;
class HLRBRep_SLPropsATool;
class gp_Pnt;
class gp_Vec;
class gp_Dir;



class HLRBRep_SLProps  {
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

  
  Standard_EXPORT   HLRBRep_SLProps(const Standard_Address& S,const Standard_Real U,const Standard_Real V,const Standard_Integer N,const Standard_Real Resolution);
  
  Standard_EXPORT   HLRBRep_SLProps(const Standard_Address& S,const Standard_Integer N,const Standard_Real Resolution);
  
  Standard_EXPORT   HLRBRep_SLProps(const Standard_Integer N,const Standard_Real Resolution);
  
  Standard_EXPORT     void SetSurface(const Standard_Address& S) ;
  
  Standard_EXPORT     void SetParameters(const Standard_Real U,const Standard_Real V) ;
  
  Standard_EXPORT    const gp_Pnt& Value() const;
  
  Standard_EXPORT    const gp_Vec& D1U() ;
  
  Standard_EXPORT    const gp_Vec& D1V() ;
  
  Standard_EXPORT    const gp_Vec& D2U() ;
  
  Standard_EXPORT    const gp_Vec& D2V() ;
  
  Standard_EXPORT    const gp_Vec& DUV() ;
  
  Standard_EXPORT     Standard_Boolean IsTangentUDefined() ;
  
  Standard_EXPORT     void TangentU(gp_Dir& D) ;
  
  Standard_EXPORT     Standard_Boolean IsTangentVDefined() ;
  
  Standard_EXPORT     void TangentV(gp_Dir& D) ;
  
  Standard_EXPORT     Standard_Boolean IsNormalDefined() ;
  
  Standard_EXPORT    const gp_Dir& Normal() ;
  
  Standard_EXPORT     Standard_Boolean IsCurvatureDefined() ;
  
  Standard_EXPORT     Standard_Boolean IsUmbilic() ;
  
  Standard_EXPORT     Standard_Real MaxCurvature() ;
  
  Standard_EXPORT     Standard_Real MinCurvature() ;
  
  Standard_EXPORT     void CurvatureDirections(gp_Dir& MaxD,gp_Dir& MinD) ;
  
  Standard_EXPORT     Standard_Real MeanCurvature() ;
  
  Standard_EXPORT     Standard_Real GaussianCurvature() ;





protected:





private:



Standard_Address surf;
Standard_Real u;
Standard_Real v;
Standard_Integer level;
Standard_Integer cn;
Standard_Real linTol;
gp_Pnt pnt;
gp_Vec d1U;
gp_Vec d1V;
gp_Vec d2U;
gp_Vec d2V;
gp_Vec dUV;
gp_Dir normal;
Standard_Real minCurv;
Standard_Real maxCurv;
gp_Dir dirMinCurv;
gp_Dir dirMaxCurv;
Standard_Real meanCurv;
Standard_Real gausCurv;
Standard_Integer significantFirstUDerivativeOrder;
Standard_Integer significantFirstVDerivativeOrder;
LProp_Status uTangentStatus;
LProp_Status vTangentStatus;
LProp_Status normalStatus;
LProp_Status curvatureStatus;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
