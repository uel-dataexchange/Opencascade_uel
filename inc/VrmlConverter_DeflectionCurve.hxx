// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _VrmlConverter_DeflectionCurve_HeaderFile
#define _VrmlConverter_DeflectionCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
#ifndef _Handle_VrmlConverter_Drawer_HeaderFile
#include <Handle_VrmlConverter_Drawer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Adaptor3d_Curve;
class VrmlConverter_Drawer;


//! DeflectionCurve    -  computes the presentation of <br>
//!          objects to be seen as  curves,   converts this  one into <br>
//!          VRML    objects    and    writes (adds)  into <br>
//!          anOStream.     All  requested properties  of   the <br>
//!          representation  are specify in  aDrawer. <br>
//!          This  kind of the presentation <br>
//!          is converted into IndexedLineSet ( VRML ). <br>
//!          The computation will be made according to a maximal <br>
//!          chordial deviation. <br>
class VrmlConverter_DeflectionCurve  {
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

  //! adds to the OStream the drawing of the curve aCurve with <br>
//!          respect to the maximal chordial deviation defined <br>
//!          by the drawer aDrawer. <br>
//!          The aspect is defined by LineAspect in aDrawer. <br>
//! <br>
  Standard_EXPORT   static  void Add(Standard_OStream& anOStream,Adaptor3d_Curve& aCurve,const Handle(VrmlConverter_Drawer)& aDrawer) ;
  //! adds to the OStream the drawing of the curve aCurve with <br>
//!          respect to the maximal chordial deviation defined <br>
//!          by the drawer aDrawer. <br>
//!          The aspect is defined by LineAspect in aDrawer. <br>
//!          The drawing will be limited between the points of parameter <br>
//!          U1 and U2. <br>
  Standard_EXPORT   static  void Add(Standard_OStream& anOStream,Adaptor3d_Curve& aCurve,const Standard_Real U1,const Standard_Real U2,const Handle(VrmlConverter_Drawer)& aDrawer) ;
  //! adds to the OStream the drawing of the curve aCurve with <br>
//!          respect to the maximal chordial deviation aDeflection. <br>
//!          The aspect is the current aspect <br>
  Standard_EXPORT   static  void Add(Standard_OStream& anOStream,Adaptor3d_Curve& aCurve,const Standard_Real aDeflection,const Standard_Real aLimit) ;
  //! adds to the OStream the drawing of the curve aCurve with <br>
//!          respect to the maximal chordial deviation aDeflection. <br>
//!          The aspect is the current aspect <br>
  Standard_EXPORT   static  void Add(Standard_OStream& anOStream,Adaptor3d_Curve& aCurve,const Standard_Real aDeflection,const Handle(VrmlConverter_Drawer)& aDrawer) ;
  //! adds to the OStream the drawing of the curve aCurve with <br>
//!          respect to the maximal chordial deviation aDeflection. <br>
//!          The aspect is the current aspect <br>
//!          The drawing will be limited between the points of parameter <br>
//!          U1 and U2. <br>
  Standard_EXPORT   static  void Add(Standard_OStream& anOStream,Adaptor3d_Curve& aCurve,const Standard_Real U1,const Standard_Real U2,const Standard_Real aDeflection) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
