// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Vrml_OrthographicCamera_HeaderFile
#define _Vrml_OrthographicCamera_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_Vec_HeaderFile
#include <gp_Vec.hxx>
#endif
#ifndef _Vrml_SFRotation_HeaderFile
#include <Vrml_SFRotation.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class gp_Vec;
class Vrml_SFRotation;


//! specifies a OrthographicCamera node of VRML specifying properties of cameras. <br>
//!  An orthographic camera defines a parallel projection from a viewpoint. This camera does <br>
//!  not diminish objects with distance, as a PerspectiveCamera does. The viewing volume for <br>
//!  an orthographic camera is a rectangular parallelepiped (a box). <br>
class Vrml_OrthographicCamera  {
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

  
  Standard_EXPORT   Vrml_OrthographicCamera();
  
  Standard_EXPORT   Vrml_OrthographicCamera(const gp_Vec& aPosition,const Vrml_SFRotation& aOrientation,const Standard_Real aFocalDistance,const Standard_Real aHeight);
  
  Standard_EXPORT     void SetPosition(const gp_Vec& aPosition) ;
  
  Standard_EXPORT     gp_Vec Position() const;
  
  Standard_EXPORT     void SetOrientation(const Vrml_SFRotation& aOrientation) ;
  
  Standard_EXPORT     Vrml_SFRotation Orientation() const;
  
  Standard_EXPORT     void SetFocalDistance(const Standard_Real aFocalDistance) ;
  
  Standard_EXPORT     Standard_Real FocalDistance() const;
  
  Standard_EXPORT     void SetHeight(const Standard_Real aHeight) ;
  
  Standard_EXPORT     Standard_Real Height() const;
  
  Standard_EXPORT     Standard_OStream& Print(Standard_OStream& anOStream) const;





protected:





private:



gp_Vec myPosition;
Vrml_SFRotation myOrientation;
Standard_Real myFocalDistance;
Standard_Real myHeight;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
