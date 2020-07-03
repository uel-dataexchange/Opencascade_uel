// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Prs2d_SymTotal_HeaderFile
#define _Prs2d_SymTotal_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Prs2d_SymTotal_HeaderFile
#include <Handle_Prs2d_SymTotal.hxx>
#endif

#ifndef _Prs2d_Tolerance_HeaderFile
#include <Prs2d_Tolerance.hxx>
#endif
#ifndef _Handle_Graphic2d_GraphicObject_HeaderFile
#include <Handle_Graphic2d_GraphicObject.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Graphic2d_Drawer_HeaderFile
#include <Handle_Graphic2d_Drawer.hxx>
#endif
#ifndef _Aspect_FStream_HeaderFile
#include <Aspect_FStream.hxx>
#endif
class Graphic2d_GraphicObject;
class Graphic2d_Drawer;



class Prs2d_SymTotal : public Prs2d_Tolerance {

public:

  //! Creates a tolerance SymTotal with the center at <aX>, <aY>; <br>
//!          length of this is <aLength>; <br>
//!          reference point is <aXPosition>, <aYPosition> <br>
  Standard_EXPORT   Prs2d_SymTotal(const Handle(Graphic2d_GraphicObject)& aGO,const Standard_Real aX,const Standard_Real aY,const Standard_Real aLength = 3.0,const Standard_Real anAngle = 0.0);
  
  Standard_EXPORT   virtual  void Save(Aspect_FStream& aFStream) const;




  DEFINE_STANDARD_RTTI(Prs2d_SymTotal)

protected:

  //! Draws the SymTotal <me>. <br>
  Standard_EXPORT     void Draw(const Handle(Graphic2d_Drawer)& aDrawer) ;



private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
