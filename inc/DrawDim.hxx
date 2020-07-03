// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DrawDim_HeaderFile
#define _DrawDim_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class TopoDS_Shape;
class Draw_Interpretor;
class gp_Pnt;
class TopoDS_Edge;
class gp_Lin;
class gp_Circ;
class TopoDS_Face;
class gp_Pln;
class DrawDim_Dimension;
class DrawDim_Angle;
class DrawDim_Distance;
class DrawDim_Radius;
class DrawDim_PlanarDimension;
class DrawDim_PlanarAngle;
class DrawDim_PlanarDistance;
class DrawDim_PlanarRadius;
class DrawDim_PlanarDiameter;


//! This package provides Drawable Dimensions. <br>
//! <br>
//!          The classes PlanarDimension and subclasses provide <br>
//!            services  to  build  drawable dimensions between <br>
//!          point line and circle in a given 3d plane. <br>
//! <br>
//!           The   classes  Dimension and   subclasses provide <br>
//!            services  to build  drawable  dimensions between <br>
//!          plane and cylindrical surfaces. <br>
class DrawDim  {
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

  
  Standard_EXPORT   static  void DrawShapeName(const TopoDS_Shape& ashape,const Standard_CString aname) ;
  
  Standard_EXPORT   static  void AllCommands(Draw_Interpretor& I) ;
  //! tools <br>
//!          ===== <br>
  Standard_EXPORT   static  void PlanarDimensionCommands(Draw_Interpretor& I) ;
  
  Standard_EXPORT   static  gp_Pnt Nearest(const TopoDS_Shape& aShape,const gp_Pnt& apoint) ;
  
  Standard_EXPORT   static  Standard_Boolean Lin(const TopoDS_Edge& e,gp_Lin& l,Standard_Boolean& infinite,Standard_Real& first,Standard_Real& last) ;
  
  Standard_EXPORT   static  Standard_Boolean Circ(const TopoDS_Edge& e,gp_Circ& l,Standard_Real& first,Standard_Real& last) ;
  
  Standard_EXPORT   static  Standard_Boolean Pln(const TopoDS_Face& f,gp_Pln& p) ;





protected:





private:




friend class DrawDim_Dimension;
friend class DrawDim_Angle;
friend class DrawDim_Distance;
friend class DrawDim_Radius;
friend class DrawDim_PlanarDimension;
friend class DrawDim_PlanarAngle;
friend class DrawDim_PlanarDistance;
friend class DrawDim_PlanarRadius;
friend class DrawDim_PlanarDiameter;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
