// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DrawTrSurf_BezierCurve2d_HeaderFile
#define _DrawTrSurf_BezierCurve2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_DrawTrSurf_BezierCurve2d_HeaderFile
#include <Handle_DrawTrSurf_BezierCurve2d.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Draw_Color_HeaderFile
#include <Draw_Color.hxx>
#endif
#ifndef _DrawTrSurf_Curve2d_HeaderFile
#include <DrawTrSurf_Curve2d.hxx>
#endif
#ifndef _Handle_Geom2d_BezierCurve_HeaderFile
#include <Handle_Geom2d_BezierCurve.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Draw_Drawable3D_HeaderFile
#include <Handle_Draw_Drawable3D.hxx>
#endif
class Geom2d_BezierCurve;
class Draw_Color;
class Draw_Display;
class Draw_Drawable3D;



class DrawTrSurf_BezierCurve2d : public DrawTrSurf_Curve2d {

public:

  
//!  creates a drawable Bezier curve from a Bezier curve of <br>
//!  package Geom2d. <br>
  Standard_EXPORT   DrawTrSurf_BezierCurve2d(const Handle(Geom2d_BezierCurve)& C);
  
  Standard_EXPORT   DrawTrSurf_BezierCurve2d(const Handle(Geom2d_BezierCurve)& C,const Draw_Color& CurvColor,const Draw_Color& PolesColor,const Standard_Boolean ShowPoles,const Standard_Integer Discret);
  
  Standard_EXPORT     void DrawOn(Draw_Display& dis) const;
  
  Standard_EXPORT     void ShowPoles() ;
  
  Standard_EXPORT     void ClearPoles() ;
  
//!  Returns in <Index> the index of the first pole  of the <br>
//!  curve projected by the Display <D> at a distance lower <br>
//!  than <Prec> from <X,Y>. If no pole  is found  index is <br>
//!  set to 0, else index is always  greater than the input <br>
//!  value of index. <br>
  Standard_EXPORT     void FindPole(const Standard_Real X,const Standard_Real Y,const Draw_Display& D,const Standard_Real Prec,Standard_Integer& Index) const;
  
        void SetPolesColor(const Draw_Color& aColor) ;
  
        Draw_Color PolesColor() const;
  //! For variable copy. <br>
  Standard_EXPORT   virtual  Handle_Draw_Drawable3D Copy() const;




  DEFINE_STANDARD_RTTI(DrawTrSurf_BezierCurve2d)

protected:




private: 


Standard_Boolean drawPoles;
Draw_Color polesLook;


};


#include <DrawTrSurf_BezierCurve2d.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
