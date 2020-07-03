// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LProp_AnalyticCurInf_HeaderFile
#define _LProp_AnalyticCurInf_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _GeomAbs_CurveType_HeaderFile
#include <GeomAbs_CurveType.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class LProp_CurAndInf;


//! Computes the locals extremas of curvature of a gp curve <br>
//!          Remark : a gp curve has not inflection. <br>
class LProp_AnalyticCurInf  {
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

  
  Standard_EXPORT   LProp_AnalyticCurInf();
  
  Standard_EXPORT     void Perform(const GeomAbs_CurveType T,const Standard_Real UFirst,const Standard_Real ULast,LProp_CurAndInf& Result) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
