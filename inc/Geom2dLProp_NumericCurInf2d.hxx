// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dLProp_NumericCurInf2d_HeaderFile
#define _Geom2dLProp_NumericCurInf2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Geom2d_Curve;
class gp_Vec2d;
class gp_Pnt2d;
class gp_Dir2d;
class Geom2dLProp_Curve2dTool;
class Geom2dLProp_FCurExtOfNumericCurInf2d;
class Geom2dLProp_FCurNulOfNumericCurInf2d;
class LProp_CurAndInf;



class Geom2dLProp_NumericCurInf2d  {
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

  
  Standard_EXPORT   Geom2dLProp_NumericCurInf2d();
  
  Standard_EXPORT     void PerformCurExt(const Handle(Geom2d_Curve)& C,LProp_CurAndInf& Result) ;
  
  Standard_EXPORT     void PerformInf(const Handle(Geom2d_Curve)& C,LProp_CurAndInf& Result) ;
  
  Standard_EXPORT     void PerformCurExt(const Handle(Geom2d_Curve)& C,const Standard_Real UMin,const Standard_Real UMax,LProp_CurAndInf& Result) ;
  
  Standard_EXPORT     void PerformInf(const Handle(Geom2d_Curve)& C,const Standard_Real UMin,const Standard_Real UMax,LProp_CurAndInf& Result) ;
  
  Standard_EXPORT     Standard_Boolean IsDone() const;





protected:





private:



Standard_Boolean isDone;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
