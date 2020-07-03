// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TestTopOpeDraw_DrawableP3D_HeaderFile
#define _TestTopOpeDraw_DrawableP3D_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TestTopOpeDraw_DrawableP3D_HeaderFile
#include <Handle_TestTopOpeDraw_DrawableP3D.hxx>
#endif

#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Draw_Color_HeaderFile
#include <Draw_Color.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Draw_Text3D_HeaderFile
#include <Handle_Draw_Text3D.hxx>
#endif
#ifndef _Draw_Marker3D_HeaderFile
#include <Draw_Marker3D.hxx>
#endif
#ifndef _Draw_MarkerShape_HeaderFile
#include <Draw_MarkerShape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Draw_Text3D;
class gp_Pnt;
class Draw_Color;
class Draw_Display;



class TestTopOpeDraw_DrawableP3D : public Draw_Marker3D {

public:

  
  Standard_EXPORT   TestTopOpeDraw_DrawableP3D(const gp_Pnt& P,const Draw_Color& PColor,const Standard_Real moveX = 0.0,const Standard_Real moveY = 0.0);
  
  Standard_EXPORT   TestTopOpeDraw_DrawableP3D(const gp_Pnt& P,const Draw_Color& PColor,const Standard_CString Text,const Draw_Color& TextColor,const Standard_Real moveX = 0.0,const Standard_Real moveY = 0.0);
  
  Standard_EXPORT   TestTopOpeDraw_DrawableP3D(const gp_Pnt& P,const Draw_MarkerShape T,const Draw_Color& PColor,const Standard_CString Text,const Draw_Color& TextColor,const Standard_Integer Size = 2,const Standard_Real moveX = 0.0,const Standard_Real moveY = 0.0);
  
  Standard_EXPORT   TestTopOpeDraw_DrawableP3D(const gp_Pnt& P,const Draw_MarkerShape T,const Draw_Color& PColor,const Standard_CString Text,const Draw_Color& TextColor,const Standard_Real Tol,const Standard_Real moveX = 0.0,const Standard_Real moveY = 0.0);
  
  Standard_EXPORT     void ChangePnt(const gp_Pnt& P) ;
  
  Standard_EXPORT   virtual  void DrawOn(Draw_Display& dis) const;




  DEFINE_STANDARD_RTTI(TestTopOpeDraw_DrawableP3D)

protected:




private: 


gp_Pnt myPnt;
Standard_CString myText;
Draw_Color myTextColor;
Standard_Real myMoveX;
Standard_Real myMoveY;
Handle_Draw_Text3D myText3D;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
