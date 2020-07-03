// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic2d_HidingText_HeaderFile
#define _Graphic2d_HidingText_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Graphic2d_HidingText_HeaderFile
#include <Handle_Graphic2d_HidingText.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif
#ifndef _Graphic2d_Text_HeaderFile
#include <Graphic2d_Text.hxx>
#endif
#ifndef _Handle_Graphic2d_GraphicObject_HeaderFile
#include <Handle_Graphic2d_GraphicObject.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Quantity_PlaneAngle_HeaderFile
#include <Quantity_PlaneAngle.hxx>
#endif
#ifndef _Quantity_Ratio_HeaderFile
#include <Quantity_Ratio.hxx>
#endif
#ifndef _Aspect_TypeOfText_HeaderFile
#include <Aspect_TypeOfText.hxx>
#endif
#ifndef _Quantity_Factor_HeaderFile
#include <Quantity_Factor.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Quantity_Length_HeaderFile
#include <Quantity_Length.hxx>
#endif
#ifndef _Handle_Graphic2d_Drawer_HeaderFile
#include <Handle_Graphic2d_Drawer.hxx>
#endif
#ifndef _Aspect_FStream_HeaderFile
#include <Aspect_FStream.hxx>
#endif
class Graphic2d_GraphicObject;
class TCollection_ExtendedString;
class Graphic2d_Drawer;


//! The primitive HidingText <br>
//!	    is a Text above a surounded hiding polygon. <br>
//!	    The text foreground color depends of the <br>
//!	    SetColorIndex() method. <br>
//!	    The polygon background color of the <br>
//!	    SetHidingColorIndex() method. <br>
//!	    The outline frame foreground color and width depends <br>
//!	    of the SetFrameColorIndex() & SetFrameWidthIndex() methods. <br>
class Graphic2d_HidingText : public Graphic2d_Text {

public:

  //! Creates a text in a graphic object <aGraphicObject> <br>
//!	    The text is <aText>. <br>
//!	    The reference point is <X>, <Y>. <br>
//!	    The orientation angle is <anAngle>. <br>
//!	    The margin ratio is <aMargin>,defines the proportional <br>
//!	    margin between the text height and the outline frame. <br>
//!	    The type of text is <aType> and must be one of : <br>
//!		Aspect_TOT_SOLID, <br>
//!		Aspect_TOT_OUTLINE <br>
//!          The scale factor apply to the original font size, <br>
//!	    Angles are measured counterclockwise with 0 radian <br>
//!	    at 3 o'clock. <br>
//!  Warning: a text can be orientable,slantable,zoomable or outlinable <br>
//! only when this options are enable regardless of the graphic driver. <br>
//! i.e: Xw driver does not,but Xdps or PS driver does. <br>
  Standard_EXPORT   Graphic2d_HidingText(const Handle(Graphic2d_GraphicObject)& aGraphicObject,const TCollection_ExtendedString& aText,const Standard_Real X,const Standard_Real Y,const Quantity_PlaneAngle anAngle = 0.0,const Quantity_Ratio aMargin = 0.1,const Aspect_TypeOfText aType = Aspect_TOT_SOLID,const Quantity_Factor aScale = 1.0);
  //! Sets the color index for the frame of the hiding text <me>. <br>
//!	    default color is 0 (no out line frame is drawn). <br>
  Standard_EXPORT     void SetFrameColorIndex(const Standard_Integer anIndex = 0) ;
  //! Sets the width index for the frame of the hiding text <me>. <br>
//!	    default width is 0 (1 pixel out line frame is drawn). <br>
  Standard_EXPORT     void SetFrameWidthIndex(const Standard_Integer anIndex = 0) ;
  //! Sets the interior color index for the frame of the hiding text <me>. <br>
//!	    default color is 0 (the current view background color). <br>
  Standard_EXPORT     void SetHidingColorIndex(const Standard_Integer anIndex = 0) ;
  //! Compute text size depending of a required bounding box, <br>
//!          Adjust the text position depending of the text origine <br>
//!          and base line if Adjust is TRUE, <br>
//!          Expand the text when the Width is smaller that the <br>
//!          Fit Width if "Expand" is TRUE. <br>
//!          and returns Standard_True if the current Driver used is <br>
//!          enable to fit the text size. <br>
//!  Warning: The fit computation is apply only if the corresponding <br>
//! dimension is > 0. <br>
  Standard_EXPORT   virtual  Standard_Boolean Fit(const Quantity_Length aWidth,const Quantity_Length aHeight,const Standard_Boolean Adjust = Standard_True,const Standard_Boolean Expand = Standard_True) ;
  //! Trunc the text when the Width of the text is greater <br>
//!          that the defined Width Max, <br>
//!          and returns Standard_True if the current Driver used is <br>
//!          enable to trunc the text size. <br>
  Standard_EXPORT   virtual  Standard_Boolean Trunc(const Quantity_Length aWidth) ;
  //! Returns Standard_True if the current Driver used is enabled <br>
//!         to get the right size and hiding text offsets in the <br>
//!         world size parameter <aWidth>,<aHeight>,<anXoffset>,<anYoffset> <br>
//!         depending of the attributes of the text and the current scale <br>
//!         of the view. <br>
//!          NOTE that the text offsets defines the relative position of the <br>
//!         of the text string origin from the lower left corner of the hiding text <br>
//!         boundary limits. <br>
  Standard_EXPORT   virtual  Standard_Boolean TextSize(Quantity_Length& aWidth,Quantity_Length& aHeight,Quantity_Length& anXoffset,Quantity_Length& anYoffset) const;
  //! Returns the text margin. <br>
  Standard_EXPORT     Quantity_Ratio Margin() const;
  //! Returns the text hiding color index. <br>
  Standard_EXPORT     Standard_Integer HidingColorIndex() const;
  //! Returns the text frame color index. <br>
  Standard_EXPORT     Standard_Integer FrameColorIndex() const;
  //! Returns the text frame width index. <br>
  Standard_EXPORT     Standard_Integer FrameWidthIndex() const;
  
  Standard_EXPORT   virtual  void Save(Aspect_FStream& aFStream) const;




  DEFINE_STANDARD_RTTI(Graphic2d_HidingText)

protected:

  //! Draws the text <me>. <br>
  Standard_EXPORT   virtual  void Draw(const Handle(Graphic2d_Drawer)& aDrawer) ;
  //! Returns Standard_True if the text <me> is picked, <br>
//!	    Standard_False if not. <br>
  Standard_EXPORT   virtual  Standard_Boolean Pick(const Standard_ShortReal X,const Standard_ShortReal Y,const Standard_ShortReal aPrecision,const Handle(Graphic2d_Drawer)& aDrawer) ;



private: 

  //! Computes the MinMax of the text if possible. <br>
  Standard_EXPORT   virtual  Standard_Boolean ComputeMinMax() ;

Standard_Integer myHidingColorIndex;
Standard_Integer myFrameColorIndex;
Standard_Integer myFrameWidthIndex;
Standard_ShortReal myMargin;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
