// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomTools_HeaderFile
#define _GeomTools_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
#ifndef _Standard_IStream_HeaderFile
#include <Standard_IStream.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
#ifndef _Handle_GeomTools_UndefinedTypeHandler_HeaderFile
#include <Handle_GeomTools_UndefinedTypeHandler.hxx>
#endif
class Geom_Surface;
class Geom_Curve;
class Geom2d_Curve;
class GeomTools_UndefinedTypeHandler;
class GeomTools_UndefinedTypeHandler;
class GeomTools_SurfaceSet;
class GeomTools_CurveSet;
class GeomTools_Curve2dSet;


//! The GeomTools package provides  utilities for Geometry. <br>
//! <br>
//!          *  SurfaceSet,  CurveSet, Curve2dSet  : Tools used <br>
//!          for dumping, writing and reading. <br>
//! <br>
//!          * Methods to dump, write, read curves and surfaces. <br>
class GeomTools  {
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

  //! Dumps the surface on the stream. <br>
  Standard_EXPORT   static  void Dump(const Handle(Geom_Surface)& S,Standard_OStream& OS) ;
  //! Writes the surface on the stream. <br>
  Standard_EXPORT   static  void Write(const Handle(Geom_Surface)& S,Standard_OStream& OS) ;
  //! Reads the surface from the stream. <br>
  Standard_EXPORT   static  void Read(Handle(Geom_Surface)& S,Standard_IStream& IS) ;
  //! Dumps the Curve on the stream. <br>
  Standard_EXPORT   static  void Dump(const Handle(Geom_Curve)& C,Standard_OStream& OS) ;
  //! Writes the Curve on the stream. <br>
  Standard_EXPORT   static  void Write(const Handle(Geom_Curve)& C,Standard_OStream& OS) ;
  //! Reads the Curve from the stream. <br>
  Standard_EXPORT   static  void Read(Handle(Geom_Curve)& C,Standard_IStream& IS) ;
  //! Dumps the Curve on the stream. <br>
  Standard_EXPORT   static  void Dump(const Handle(Geom2d_Curve)& C,Standard_OStream& OS) ;
  //! Writes the Curve on the stream. <br>
  Standard_EXPORT   static  void Write(const Handle(Geom2d_Curve)& C,Standard_OStream& OS) ;
  //! Reads the Curve from the stream. <br>
  Standard_EXPORT   static  void Read(Handle(Geom2d_Curve)& C,Standard_IStream& IS) ;
  
  Standard_EXPORT   static  void SetUndefinedTypeHandler(const Handle(GeomTools_UndefinedTypeHandler)& aHandler) ;
  
  Standard_EXPORT   static  Handle_GeomTools_UndefinedTypeHandler GetUndefinedTypeHandler() ;





protected:





private:




friend class GeomTools_UndefinedTypeHandler;
friend class GeomTools_SurfaceSet;
friend class GeomTools_CurveSet;
friend class GeomTools_Curve2dSet;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
