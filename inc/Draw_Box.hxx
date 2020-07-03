// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Draw_Box_HeaderFile
#define _Draw_Box_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Draw_Box_HeaderFile
#include <Handle_Draw_Box.hxx>
#endif

#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _Draw_Color_HeaderFile
#include <Draw_Color.hxx>
#endif
#ifndef _Draw_Drawable3D_HeaderFile
#include <Draw_Drawable3D.hxx>
#endif
class gp_Pnt;
class Draw_Color;
class Draw_Display;



class Draw_Box : public Draw_Drawable3D {

public:

  
  Standard_EXPORT   Draw_Box(const gp_Pnt& p1,const gp_Pnt& p2,const Draw_Color& col);
  
  Standard_EXPORT     void DrawOn(Draw_Display& dis) const;
  
  Standard_EXPORT    const gp_Pnt& First() const;
  
  Standard_EXPORT     void First(const gp_Pnt& P) ;
  
  Standard_EXPORT    const gp_Pnt& Last() const;
  
  Standard_EXPORT     void Last(const gp_Pnt& P) ;




  DEFINE_STANDARD_RTTI(Draw_Box)

protected:




private: 


gp_Pnt myFirst;
gp_Pnt myLast;
Draw_Color myColor;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
