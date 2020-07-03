// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LProp3d_CLProps_HeaderFile
#define _LProp3d_CLProps_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Adaptor3d_HCurve_HeaderFile
#include <Handle_Adaptor3d_HCurve.hxx>
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
class Adaptor3d_HCurve;
class LProp_BadContinuity;
class Standard_DomainError;
class Standard_OutOfRange;
class LProp_NotDefined;
class gp_Vec;
class gp_Pnt;
class gp_Dir;
class LProp3d_CurveTool;



class LProp3d_CLProps  {
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

  
  Standard_EXPORT   LProp3d_CLProps(const Handle(Adaptor3d_HCurve)& C,const Standard_Integer N,const Standard_Real Resolution);
  
  Standard_EXPORT   LProp3d_CLProps(const Handle(Adaptor3d_HCurve)& C,const Standard_Real U,const Standard_Integer N,const Standard_Real Resolution);
  
  Standard_EXPORT   LProp3d_CLProps(const Standard_Integer N,const Standard_Real Resolution);
  
  Standard_EXPORT     void SetParameter(const Standard_Real U) ;
  
  Standard_EXPORT     void SetCurve(const Handle(Adaptor3d_HCurve)& C) ;
  
  Standard_EXPORT    const gp_Pnt& Value() const;
  
  Standard_EXPORT    const gp_Vec& D1() ;
  
  Standard_EXPORT    const gp_Vec& D2() ;
  
  Standard_EXPORT    const gp_Vec& D3() ;
  
  Standard_EXPORT     Standard_Boolean IsTangentDefined() ;
  
  Standard_EXPORT     void Tangent(gp_Dir& D) ;
  
  Standard_EXPORT     Standard_Real Curvature() ;
  
  Standard_EXPORT     void Normal(gp_Dir& N) ;
  
  Standard_EXPORT     void CentreOfCurvature(gp_Pnt& P) ;





protected:





private:



Handle_Adaptor3d_HCurve myCurve;
Standard_Real u;
Standard_Integer level;
Standard_Real cn;
Standard_Real linTol;
gp_Pnt pnt;
gp_Vec d[3];
gp_Dir tangent;
Standard_Real curvature;
LProp_Status tangentStatus;
Standard_Integer significantFirstDerivativeOrder;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
