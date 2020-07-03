// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomAdaptor_HeaderFile
#define _GeomAdaptor_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
class Geom_Curve;
class Adaptor3d_Curve;
class Geom_Surface;
class Adaptor3d_Surface;
class GeomAdaptor_Curve;
class GeomAdaptor_Surface;
class GeomAdaptor_GHSurface;
class GeomAdaptor_HSurface;
class GeomAdaptor_GHCurve;
class GeomAdaptor_HCurve;


//! this package contains the  geometric definition of <br>
//!          curve and surface necessary to use algorithmes. <br>
class GeomAdaptor  {
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

  
  Standard_EXPORT   static  Handle_Geom_Curve MakeCurve(const Adaptor3d_Curve& C) ;
  
  Standard_EXPORT   static  Handle_Geom_Surface MakeSurface(const Adaptor3d_Surface& S) ;





protected:





private:




friend class GeomAdaptor_Curve;
friend class GeomAdaptor_Surface;
friend class GeomAdaptor_GHSurface;
friend class GeomAdaptor_HSurface;
friend class GeomAdaptor_GHCurve;
friend class GeomAdaptor_HCurve;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
