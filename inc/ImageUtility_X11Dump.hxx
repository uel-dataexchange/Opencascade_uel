// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ImageUtility_X11Dump_HeaderFile
#define _ImageUtility_X11Dump_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _ImageUtility_X11Display_HeaderFile
#include <ImageUtility_X11Display.hxx>
#endif
#ifndef _ImageUtility_X11Window_HeaderFile
#include <ImageUtility_X11Window.hxx>
#endif
#ifndef _ImageUtility_X11XImage_HeaderFile
#include <ImageUtility_X11XImage.hxx>
#endif
#ifndef _ImageUtility_X11GC_HeaderFile
#include <ImageUtility_X11GC.hxx>
#endif
#ifndef _Handle_Image_Image_HeaderFile
#include <Handle_Image_Image.hxx>
#endif
class Image_Image;
class Standard_TypeMismatch;
class TCollection_AsciiString;



class ImageUtility_X11Dump  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Create a new X11 Display,Window,Colormap,GC,XImage suitable <br>
//!		for aImage . <br>
  Standard_EXPORT   ImageUtility_X11Dump(const TCollection_AsciiString& DisplayName,const Handle(Image_Image)& aImage);
  //! Create a new X11 XImage and share Display,Window,Colormap, <br>
//!	     GC with a previous aX11Dump ; <br>
  Standard_EXPORT   ImageUtility_X11Dump(const ImageUtility_X11Dump& aX11Dump,const Handle(Image_Image)& aImage);
  
  Standard_EXPORT     ImageUtility_X11GC X11GC() const;
  
  Standard_EXPORT     ImageUtility_X11Window X11Window() const;
  
  Standard_EXPORT     ImageUtility_X11Display X11Display() const;
  
  Standard_EXPORT     ImageUtility_X11XImage X11XImage() const;
  
  Standard_EXPORT     void UpdateX11Colormap() const;
  
  Standard_EXPORT     void UpdateX11XImage() ;
  
  Standard_EXPORT     void DisplayX11XImage() const;





protected:





private:



ImageUtility_X11Display myDisplay;
ImageUtility_X11Window myWindow;
ImageUtility_X11XImage myXImage;
ImageUtility_X11GC myGC;
Handle_Image_Image myImage;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
