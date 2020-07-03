// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DrawDim_PlanarDiameter_HeaderFile
#define _DrawDim_PlanarDiameter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_DrawDim_PlanarDiameter_HeaderFile
#include <Handle_DrawDim_PlanarDiameter.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _DrawDim_PlanarDimension_HeaderFile
#include <DrawDim_PlanarDimension.hxx>
#endif
class TopoDS_Face;
class TopoDS_Shape;
class Draw_Display;



class DrawDim_PlanarDiameter : public DrawDim_PlanarDimension {

public:

  
  Standard_EXPORT   DrawDim_PlanarDiameter(const TopoDS_Face& plane,const TopoDS_Shape& circle);
  
  Standard_EXPORT   DrawDim_PlanarDiameter(const TopoDS_Shape& circle);
  
  Standard_EXPORT     void DrawOn(Draw_Display& dis) const;




  DEFINE_STANDARD_RTTI(DrawDim_PlanarDiameter)

protected:




private: 


TopoDS_Shape myCircle;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
