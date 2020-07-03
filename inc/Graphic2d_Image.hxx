// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic2d_Image_HeaderFile
#define _Graphic2d_Image_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Graphic2d_Image_HeaderFile
#include <Handle_Graphic2d_Image.hxx>
#endif

#ifndef _Handle_Image_Image_HeaderFile
#include <Handle_Image_Image.hxx>
#endif
#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif
#ifndef _Aspect_CardinalPoints_HeaderFile
#include <Aspect_CardinalPoints.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Graphic2d_Primitive_HeaderFile
#include <Graphic2d_Primitive.hxx>
#endif
#ifndef _Handle_Graphic2d_GraphicObject_HeaderFile
#include <Handle_Graphic2d_GraphicObject.hxx>
#endif
#ifndef _Quantity_Length_HeaderFile
#include <Quantity_Length.hxx>
#endif
#ifndef _Handle_Graphic2d_Drawer_HeaderFile
#include <Handle_Graphic2d_Drawer.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Aspect_FStream_HeaderFile
#include <Aspect_FStream.hxx>
#endif
class Image_Image;
class Graphic2d_GraphicObject;
class Graphic2d_Drawer;


//! This class defines the primitive Image <br>
class Graphic2d_Image : public Graphic2d_Primitive {

public:

  //! Defines an image with its center location; <br>
//!	    <X>, <Y> defines the position in the space model. <br>
//!	    <adx>, <ady> defines an offset in the device space. <br>
//!	    The image will be placed at this offset <br>
//!	    according to the type of placement. <br>
  Standard_EXPORT   Graphic2d_Image(const Handle(Graphic2d_GraphicObject)& aGraphicObject,const Handle(Image_Image)& anImage,const Quantity_Length X,const Quantity_Length Y,const Quantity_Length adx = 0.0,const Quantity_Length ady = 0.0,const Aspect_CardinalPoints aTypeOfPlacement = Aspect_CP_Center);
  //! Modifies the center location of the image <me>. <br>
  Standard_EXPORT     void SetCenter(const Quantity_Length X,const Quantity_Length Y) ;
  //! Modifies the offset of the image <me>. <br>
  Standard_EXPORT     void SetOffset(const Quantity_Length dx,const Quantity_Length dy) ;
  //! Modifies the type of placement of the image <me>. <br>
  Standard_EXPORT     void SetPlacement(const Aspect_CardinalPoints aPlacement) ;
  //! Modifies the center location of the image <me> <br>
//!          by translating it. <br>
  Standard_EXPORT     void Translate(const Quantity_Length DX,const Quantity_Length DY) ;
  //! Clear the reference to this image if something <br>
//! 	   inside have changed,Forced the reload of this at Draw() <br>
//!	   time. <br>
  Standard_EXPORT     void Clear() ;
  //! Defines the limit between a large image and a <br>
//!	    small image. <br>
//!  Warning: A small image have Height*Width <= SmallSize (). <br>
//!	    Default 4096 = 64*64 <br>
  Standard_EXPORT   static  void SetSmallSize(const Standard_Integer aSize) ;
  //! Returns the limit between a large image and a <br>
//!	    small image. <br>
//!  Warning: A small image have Height*Width <= SmallSize (). <br>
  Standard_EXPORT   static  Standard_Integer SmallSize() ;
  //! returns the position in the space model <br>
  Standard_EXPORT     void Position(Quantity_Length& X,Quantity_Length& Y) const;
  //! returns the offset in the device space <br>
  Standard_EXPORT     void Offset(Quantity_Length& aX,Quantity_Length& aY) const;
  //! returns the type of placement <br>
  Standard_EXPORT     Aspect_CardinalPoints Placement() const;
  //! returns the image <br>
  Standard_EXPORT     Handle_Image_Image Image() const;
  
  Standard_EXPORT   virtual  void Save(Aspect_FStream& aFStream) const;




  DEFINE_STANDARD_RTTI(Graphic2d_Image)

protected:

  //! Draws the image at the required center location <br>
//!	    defined by the SetCenter method. <br>
  Standard_EXPORT     void Draw(const Handle(Graphic2d_Drawer)& aDrawer) ;
  //! Returns Standard_True if the image <me> is picked, <br>
//!          Standard_False if not. <br>
  Standard_EXPORT     Standard_Boolean Pick(const Standard_ShortReal X,const Standard_ShortReal Y,const Standard_ShortReal aPrecision,const Handle(Graphic2d_Drawer)& aDrawer) ;



private: 

  //! Fills the image <me> in the drawer <aDrawer>. <br>
  Standard_EXPORT     void FillAndDraw(const Handle(Graphic2d_Drawer)& aDrawer) const;
  //! Evaluates the center of the image in the device space. <br>
//!	    Called by the methods Graphic2d_Image::Draw, <br>
//!	    Graphic2d_Image::Pick and Graphic2d_Image::FillAndDraw. <br>
  Standard_EXPORT     void ComputeCenter(const Handle(Graphic2d_Drawer)& aDrawer,Standard_ShortReal& cx,Standard_ShortReal& cy) const;

Handle_Image_Image myImage;
Standard_ShortReal myX;
Standard_ShortReal myY;
Standard_ShortReal mydx;
Standard_ShortReal mydy;
Aspect_CardinalPoints myPlacement;
Standard_Boolean myIsModified;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
