// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TestTopOpeDraw_DrawableSUR_HeaderFile
#define _TestTopOpeDraw_DrawableSUR_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TestTopOpeDraw_DrawableSUR_HeaderFile
#include <Handle_TestTopOpeDraw_DrawableSUR.hxx>
#endif

#ifndef _Handle_Draw_Text3D_HeaderFile
#include <Handle_Draw_Text3D.hxx>
#endif
#ifndef _Draw_Color_HeaderFile
#include <Draw_Color.hxx>
#endif
#ifndef _DrawTrSurf_Surface_HeaderFile
#include <DrawTrSurf_Surface.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Draw_Text3D;
class Geom_Surface;
class Draw_Color;
class gp_Pnt;
class gp_Pnt2d;
class Draw_Display;



class TestTopOpeDraw_DrawableSUR : public DrawTrSurf_Surface {

public:

  
  Standard_EXPORT   TestTopOpeDraw_DrawableSUR(const Handle(Geom_Surface)& S,const Draw_Color& IsoColor);
  
  Standard_EXPORT   TestTopOpeDraw_DrawableSUR(const Handle(Geom_Surface)& S,const Draw_Color& IsoColor,const Standard_CString Text,const Draw_Color& TextColor);
  
  Standard_EXPORT   TestTopOpeDraw_DrawableSUR(const Handle(Geom_Surface)& S,const Draw_Color& IsoColor,const Draw_Color& BoundColor,const Draw_Color& NormalColor,const Standard_CString Text,const Draw_Color& TextColor,const Standard_Integer Nu,const Standard_Integer Nv,const Standard_Integer Discret,const Standard_Real Deflection,const Standard_Integer DrawMode,const Standard_Boolean DispOrigin = Standard_True);
  
  Standard_EXPORT     gp_Pnt Pnt() const;
  
  Standard_EXPORT     gp_Pnt2d Pnt2d() const;
  
  Standard_EXPORT   virtual  void DrawOn(Draw_Display& dis) const;
  
  Standard_EXPORT     void NormalColor(const Draw_Color& NormalColor) ;
  
  Standard_EXPORT     void DrawNormale(Draw_Display& dis) const;




  DEFINE_STANDARD_RTTI(TestTopOpeDraw_DrawableSUR)

protected:




private: 


Handle_Draw_Text3D myText;
Draw_Color myNormalColor;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
