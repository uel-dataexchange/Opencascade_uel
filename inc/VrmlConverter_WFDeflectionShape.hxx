// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _VrmlConverter_WFDeflectionShape_HeaderFile
#define _VrmlConverter_WFDeflectionShape_HeaderFile

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
class TopoDS_Shape;
class VrmlConverter_Drawer;


//! WFDeflectionShape -   computes    the    wireframe <br>
//!          presentation of compound set  of faces,  edges and <br>
//!          vertices by displaying a  given number of U and/or <br>
//!          V isoparametric  curves,   converts this  one into  VRML <br>
//!          objects and writes (adds) them into anOStream. <br>
//!          All requested properties of the representation are <br>
//!          specify in aDrawer. <br>
//!          This kind of the presentation  is  converted  into <br>
//!          IndexedLineSet and PointSet ( VRML ). <br>
class VrmlConverter_WFDeflectionShape  {
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

  
  Standard_EXPORT   static  void Add(Standard_OStream& anOStream,const TopoDS_Shape& aShape,const Handle(VrmlConverter_Drawer)& aDrawer) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
