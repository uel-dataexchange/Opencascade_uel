// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Xw_ColorMap_HeaderFile
#define _Xw_ColorMap_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Xw_ColorMap_HeaderFile
#include <Handle_Xw_ColorMap.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Xw_TypeOfMapping_HeaderFile
#include <Xw_TypeOfMapping.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Xw_TypeOfVisual_HeaderFile
#include <Xw_TypeOfVisual.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Aspect_ColorMap_HeaderFile
#include <Handle_Aspect_ColorMap.hxx>
#endif
#ifndef _Aspect_Handle_HeaderFile
#include <Aspect_Handle.hxx>
#endif
class Aspect_ColorMapDefinitionError;
class Aspect_BadAccess;
class Xw_GraphicDevice;
class Xw_Window;
class Aspect_ColorMapEntry;
class Aspect_ColorMap;
class Quantity_Color;


//! This class defines a GenericColorMap object. <br>
class Xw_ColorMap : public MMgt_TShared {

public:

  //! Creates a generic ColorMap with a maximum of <br>
//!	    unallocated ColorMapEntry. <br>
//!	    Sets this colormap with the best colorcube in <br>
//!	    the Default HardWare Colormap. <br>
  Standard_EXPORT   Xw_ColorMap(const Standard_CString Connexion,const Xw_TypeOfVisual Visual = Xw_TOV_PREFERRED_PSEUDOCOLOR,const Xw_TypeOfMapping Mapping = Xw_TOM_COLORCUBE,const Standard_Integer Ncolors = 0,const Standard_Boolean UseDefault = Standard_True);
  //! Modifies an entry in the color map <me>. <br>//!  Warning if Index is < 0 or >= MaxColors() <br>
//!	   or ColorMap is not defined properly <br>
  Standard_EXPORT   virtual  void SetEntry(const Standard_Integer Index,const Standard_Real Red,const Standard_Real Green,const Standard_Real Blue) ;
  //! Modifies an entry in the color map <me>. <br>//!  Warning if ColorMap size is exceeded. <br>
//!	   or ColorMap is not defined properly <br>
//!         or ColorMapEntry Index is out of range according <br>
//!         to the supported hardware, <br>
//!	   or the Mapping type of this colormap is READ_ONLY. <br>
  Standard_EXPORT   virtual  void SetEntry(const Aspect_ColorMapEntry& Entry) ;
  //! Modifies all Entries from the new colormap <br>//!  Warning if ColorMap size is exceeded. <br>
//!	   or ColorMap is not defined properly <br>
//!         or One of the new ColorMapEntry Index is out of range <br>
//!	   according to the supported hardware <br>
  Standard_EXPORT   virtual  void SetEntries(const Handle(Aspect_ColorMap)& Colormap) ;
  //! Sets the Highlight Color for all Windows <br>
//!	    which use it . <br>
//!  Error if Colormap is not defined properly <br>
  Standard_EXPORT   virtual  void SetHighlightColor(const Quantity_Color& aColor) ;
  //! Destroies the Colormap <br>
  Standard_EXPORT   virtual  void Destroy() ;
~Xw_ColorMap()
{
  Destroy();
}
  //! Returns the highlight color . <br>
  Standard_EXPORT   virtual  Quantity_Color HighlightColor() const;
  //! Returns a pixel value of an RGB color given as <br>
//!	    Quantity_Color, depending of the HardWare and <br>
//!	    Visual class. <br>
  Standard_EXPORT   virtual  Standard_Integer PixelOfColor(const Quantity_Color& aColor) const;
  //! Returns an allocated pixel of color <br>
//!	    writable by using the method SetColorOfPixel(..) <br>
//!	    or -1 if no more pixel must be allocated. <br>
//!  Warning: this call take has an effect in PseudoColor model only. <br>
  Standard_EXPORT   virtual  Standard_Integer AllocatesPixelOfColor() const;
  //! Free an allocated pixel of color <br>
//!  Warning: this call take has an effect in PseudoColor model only. <br>
  Standard_EXPORT     void FreePixelOfColor(const Standard_Integer aPixel) const;
  //! Returns TRUE if the allocated pixel <aPixel> <br>
//!	    has been updated correctly with the color <aColor> <br>
  Standard_EXPORT   virtual  Standard_Boolean SetColorOfPixel(const Standard_Integer aPixel,const Quantity_Color& aColor) const;
  //! Returns a pixel value and the components of the <br>
//!	    corresponding  color index. <br>
  Standard_EXPORT   virtual  Standard_Integer Entry(const Standard_Integer Index,Standard_Real& Red,Standard_Real& Green,Standard_Real& Blue) const;
  //! Returns the current HighLight pixel value , <br>
//!	    depending of the HardWare and Visual class <br>
  Standard_EXPORT   virtual  Standard_Integer HighlightPixel() const;
  //! Returns the number of available colors in the colormap. <br>
//! 	   or 0 if the colormap is not enabled. <br>
  Standard_EXPORT     Standard_Integer MaxColors() const;
  //! Returns the number of available colors in the associated <br>
//!	   overlay colormap if any. <br>
//! 	   or 0 if the overlay colormap is not enabled. <br>
  Standard_EXPORT     Standard_Integer MaxOverlayColors() const;
  //! Returns the Colormap XId of the Colormap <br>
//!	    depending of the HardWare and Visual class <br>
  Standard_EXPORT     Aspect_Handle XColorMap() const;
  //! Returns TRUE and the color-cube definition of the colormap <br>
//!	    depending of the HardWare and Visual class <br>
//! or returns FALSE if the colormap dont't have a color-cube defined. <br>
//! Color computation from the colorcube : <br>
//! colorindex = BasePixel + <br>
//!	r*RedMax*RedMult + g*GreenMax*GreenMult + b*BlueMax*BlueMult <br>
//!  where r,g,b are the red,green,blue components of the color in the <br>
//!  range [0.,1.] <br>
  Standard_EXPORT     Standard_Boolean XColorCube(Aspect_Handle& ColormapID,Standard_Integer& VisualID,Standard_Integer& BasePixel,Standard_Integer& RedMax,Standard_Integer& RedMult,Standard_Integer& GreenMax,Standard_Integer& GreenMult,Standard_Integer& BlueMax,Standard_Integer& BlueMult) const;
  //! Returns TRUE and the gray-ramp definition of the colormap <br>
//!	    depending of the HardWare and Visual class <br>
//! or returns FALSE if the colormap dont't have a gray-ramp defined. <br>
//! Color computation from the grayramp : <br>
//! colorindex = BasePixel + g*GrayMax*GrayMult <br>
//!  where g is the gray intensity of the color in the <br>
//!  range [0.,1.] <br>
  Standard_EXPORT     Standard_Boolean XGrayRamp(Aspect_Handle& ColormapID,Standard_Integer& VisualID,Standard_Integer& BasePixel,Standard_Integer& GrayMax,Standard_Integer& GrayMult) const;
  //! Returns the Colormap XId of the associated Overlay Colormap <br>
//!	    depending of the HardWare and Visual class <br>
  Standard_EXPORT     Aspect_Handle XOverlayColorMap() const;
  //! Returns the Visual address of the Colormap <br>
//!	    depending of the HardWare <br>
  Standard_EXPORT     Standard_Address XVisual() const;
  //! Returns the Visual address of the associated Overlay Colormap <br>
//!	    depending of the HardWare <br>
  Standard_EXPORT     Standard_Address XOverlayVisual() const;
  //! Returns the Visual Class of the Colormap <br>
//!	    depending of the HardWare <br>
  Standard_EXPORT     Xw_TypeOfVisual VisualClass() const;
  //! Returns the Visual Class of the associated Overlay Colormap <br>
//!	    depending of the HardWare <br>
  Standard_EXPORT     Xw_TypeOfVisual OverlayVisualClass() const;
  //! Returns the Visual ID of the Colormap <br>
//!	    depending of the HardWare <br>
  Standard_EXPORT     Standard_Integer VisualID() const;
  //! Returns the Visual ID of the associated Overlay Colormap <br>
//!	    depending of the HardWare <br>
  Standard_EXPORT     Standard_Integer OverlayVisualID() const;

friend class Xw_GraphicDevice;
friend class Xw_Window;


  DEFINE_STANDARD_RTTI(Xw_ColorMap)

protected:

  
  Standard_EXPORT   Xw_ColorMap();
  //! Returns extended data colormap structure pointer. <br>
  Standard_EXPORT     Standard_Address ExtendedColorMap() const;
  //! Returns extended data overlay colormap structure pointer. <br>
  Standard_EXPORT     Standard_Address ExtendedOverlayColorMap() const;
  //! Print last error or raise depending of the error gravity. <br>
  Standard_EXPORT   static  void PrintError() ;



private: 


Standard_Address MyExtendedDisplay;
Standard_Address MyExtendedColorMap;
Standard_Address MyExtendedOverlayColorMap;
Xw_TypeOfMapping MyMapping;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
