// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox_HeaderFile
#define _BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox_HeaderFile

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
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _gp_Vec_HeaderFile
#include <gp_Vec.hxx>
#endif
#ifndef _gp_Dir2d_HeaderFile
#include <gp_Dir2d.hxx>
#endif
#ifndef _math_FunctionSetWithDerivatives_HeaderFile
#include <math_FunctionSetWithDerivatives.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class StdFail_UndefinedDerivative;
class BRepAdaptor_Surface;
class BRepApprox_SurfaceTool;
class IntSurf_Quadric;
class IntSurf_QuadricTool;
class math_Vector;
class math_Matrix;
class gp_Pnt;
class gp_Vec;
class gp_Dir2d;



class BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox  : public math_FunctionSetWithDerivatives {
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

  
  Standard_EXPORT   BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox();
  
  Standard_EXPORT   BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox(const BRepAdaptor_Surface& PS,const IntSurf_Quadric& IS);
  
  Standard_EXPORT   BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox(const IntSurf_Quadric& IS);
  
        void Set(const BRepAdaptor_Surface& PS) ;
  
        void SetImplicitSurface(const IntSurf_Quadric& IS) ;
  
        void Set(const Standard_Real Tolerance) ;
  
  Standard_EXPORT     Standard_Integer NbVariables() const;
  
  Standard_EXPORT     Standard_Integer NbEquations() const;
  
  Standard_EXPORT     Standard_Boolean Value(const math_Vector& X,math_Vector& F) ;
  
  Standard_EXPORT     Standard_Boolean Derivatives(const math_Vector& X,math_Matrix& D) ;
  
  Standard_EXPORT     Standard_Boolean Values(const math_Vector& X,math_Vector& F,math_Matrix& D) ;
  
        Standard_Real Root() const;
  
        Standard_Real Tolerance() const;
  
       const gp_Pnt& Point() const;
  
  Standard_EXPORT     Standard_Boolean IsTangent() ;
  
       const gp_Vec& Direction3d() ;
  
       const gp_Dir2d& Direction2d() ;
  
       const BRepAdaptor_Surface& PSurface() const;
  
       const IntSurf_Quadric& ISurface() const;





protected:





private:



Standard_Address surf;
Standard_Address func;
Standard_Real u;
Standard_Real v;
Standard_Real tol;
gp_Pnt pntsol;
Standard_Real valf;
Standard_Boolean computed;
Standard_Boolean tangent;
Standard_Real tgdu;
Standard_Real tgdv;
gp_Vec gradient;
Standard_Boolean derived;
gp_Vec d1u;
gp_Vec d1v;
gp_Vec d3d;
gp_Dir2d d2d;


};

#define ThePSurface BRepAdaptor_Surface
#define ThePSurface_hxx <BRepAdaptor_Surface.hxx>
#define ThePSurfaceTool BRepApprox_SurfaceTool
#define ThePSurfaceTool_hxx <BRepApprox_SurfaceTool.hxx>
#define TheISurface IntSurf_Quadric
#define TheISurface_hxx <IntSurf_Quadric.hxx>
#define TheISurfaceTool IntSurf_QuadricTool
#define TheISurfaceTool_hxx <IntSurf_QuadricTool.hxx>
#define IntImp_ZerImpFunc BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox
#define IntImp_ZerImpFunc_hxx <BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox.hxx>

#include <IntImp_ZerImpFunc.lxx>

#undef ThePSurface
#undef ThePSurface_hxx
#undef ThePSurfaceTool
#undef ThePSurfaceTool_hxx
#undef TheISurface
#undef TheISurface_hxx
#undef TheISurfaceTool
#undef TheISurfaceTool_hxx
#undef IntImp_ZerImpFunc
#undef IntImp_ZerImpFunc_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
