// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DrawDim_Radius_HeaderFile
#define _DrawDim_Radius_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_DrawDim_Radius_HeaderFile
#include <Handle_DrawDim_Radius.hxx>
#endif

#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
#ifndef _DrawDim_Dimension_HeaderFile
#include <DrawDim_Dimension.hxx>
#endif
class TopoDS_Face;
class Draw_Display;



class DrawDim_Radius : public DrawDim_Dimension {

public:

  
  Standard_EXPORT   DrawDim_Radius(const TopoDS_Face& cylinder);
  
  Standard_EXPORT    const TopoDS_Face& Cylinder() const;
  
  Standard_EXPORT     void Cylinder(const TopoDS_Face& face) ;
  
  Standard_EXPORT     void DrawOn(Draw_Display& dis) const;




  DEFINE_STANDARD_RTTI(DrawDim_Radius)

protected:




private: 


TopoDS_Face myCylinder;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
