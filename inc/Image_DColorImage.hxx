// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Image_DColorImage_HeaderFile
#define _Image_DColorImage_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Image_DColorImage_HeaderFile
#include <Handle_Image_DColorImage.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Aspect_ColorPixel_HeaderFile
#include <Aspect_ColorPixel.hxx>
#endif
#ifndef _Image_Image_HeaderFile
#include <Image_Image.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Quantity_PlaneAngle_HeaderFile
#include <Quantity_PlaneAngle.hxx>
#endif
#ifndef _Handle_Image_Image_HeaderFile
#include <Handle_Image_Image.hxx>
#endif
#ifndef _Image_TypeOfImage_HeaderFile
#include <Image_TypeOfImage.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Image_PixelAddress_HeaderFile
#include <Image_PixelAddress.hxx>
#endif
#ifndef _Image_FlipType_HeaderFile
#include <Image_FlipType.hxx>
#endif
class Aspect_ColorPixel;
class Image_PixelRowOfDColorImage;
class Image_PixelFieldOfDColorImage;
class Image_PixelInterpolation;
class gp_GTrsf2d;
class gp_Trsf;
class Image_Image;
class Aspect_Pixel;



class Image_DColorImage : public Image_Image {

public:

  
  Standard_EXPORT   virtual  void Destroy() ;
~Image_DColorImage()
{
  Destroy();
}
  
  Standard_EXPORT     void SetBackgroundPixel(const Aspect_ColorPixel& aPixel) ;
  
  Standard_EXPORT    const Aspect_ColorPixel& BackgroundPixel() const;
  
  Standard_EXPORT    const Aspect_ColorPixel& Pixel(const Standard_Integer X,const Standard_Integer Y) const;
   const Aspect_ColorPixel& operator()(const Standard_Integer X,const Standard_Integer Y) const
{
  return Pixel(X,Y);
}
  
  Standard_EXPORT     void SetPixel(const Standard_Integer X,const Standard_Integer Y,const Aspect_ColorPixel& aPixel) ;
  
  Standard_EXPORT     Aspect_ColorPixel& MutPixel(const Standard_Integer X,const Standard_Integer Y) ;
    Aspect_ColorPixel& operator()(const Standard_Integer X,const Standard_Integer Y) 
{
  return MutPixel(X,Y);
}
  
  Standard_EXPORT     void SetRow(const Standard_Integer X,const Standard_Integer Y,const Image_PixelRowOfDColorImage& aRow) ;
  
  Standard_EXPORT     void Row(const Standard_Integer X,const Standard_Integer Y,Image_PixelRowOfDColorImage& aRow) const;
  
  Standard_EXPORT     void SwapRow(const Standard_Integer I,const Standard_Integer J) ;
  
  Standard_EXPORT     void SwapCol(const Standard_Integer I,const Standard_Integer J) ;
  
  Standard_EXPORT     void Zoom(const Image_PixelInterpolation& anInterpolation,const Standard_Real aCoefX,const Standard_Real aCoefY) ;
  
  Standard_EXPORT     void Rotate(const Image_PixelInterpolation& anInterpolation,const Quantity_PlaneAngle aAngle) ;
  
  Standard_EXPORT     void Translate(const Image_PixelInterpolation& anInterpolation,const Standard_Real DX,const Standard_Real DY) ;
  
  Standard_EXPORT     void Affine(const Image_PixelInterpolation& anInterpolation,const gp_GTrsf2d& Trsf) ;
  
  Standard_EXPORT     void Affine(const Image_PixelInterpolation& anInterpolation,const gp_Trsf& Trsf) ;
  
  Standard_EXPORT   virtual  void InternalDup(const Handle(Image_Image)& anImage) ;
  
  Standard_EXPORT     void SetOrigin(const Standard_Integer x,const Standard_Integer y) ;
  
  Standard_EXPORT     Standard_Integer LowerX() const;
  
  Standard_EXPORT     Standard_Integer UpperX() const;
  
  Standard_EXPORT     Standard_Integer Width() const;
  
  Standard_EXPORT     Standard_Integer LowerY() const;
  
  Standard_EXPORT     Standard_Integer UpperY() const;
  
  Standard_EXPORT     Standard_Integer Height() const;
  
  Standard_EXPORT     void Resize(const Standard_Real XOffset,const Standard_Real XScale,const Standard_Real YOffset,const Standard_Real YScale) ;
  
  Standard_EXPORT   virtual  Image_TypeOfImage Type() const = 0;
  
  Standard_EXPORT     Standard_Boolean isSamePixel(const Standard_Integer X,const Standard_Integer Y,const Handle(Image_Image)& anotherImage,const Standard_Integer anotherX,const Standard_Integer anotherY) const;
  
  Standard_EXPORT     void Pixel(const Standard_Integer X,const Standard_Integer Y,Aspect_Pixel& aPixel) const;
  
  Standard_EXPORT     void SetPixel(const Standard_Integer X,const Standard_Integer Y,const Aspect_Pixel& aPixel) ;
  
  Standard_EXPORT     void Pixel(const Standard_Integer X,const Standard_Integer Y,Image_PixelAddress& aPixel) const;
  
  Standard_EXPORT     void SetPixel(const Standard_Integer X,const Standard_Integer Y,const Image_PixelAddress& aPixel) ;
  
  Standard_EXPORT     void Transpose(const Image_FlipType aType) ;
  
  Standard_EXPORT     void Clip(const Standard_Integer X,const Standard_Integer Y,const Standard_Integer Width,const Standard_Integer Height) ;
  
  Standard_EXPORT     void Shift(const Standard_Integer XShifth,const Standard_Integer YShift) ;
  
  Standard_EXPORT     void Fill(const Handle(Image_Image)& SrcImage) ;
  
  Standard_EXPORT     void Fill(const Handle(Image_Image)& SrcImage,const Standard_Integer SrcX,const Standard_Integer SrcY,const Standard_Integer SrcWidth,const Standard_Integer SrcHeight,const Standard_Integer X,const Standard_Integer Y) ;
  
  Standard_EXPORT     void FillRect(const Aspect_ColorPixel& aPixel,const Standard_Integer X,const Standard_Integer Y,const Standard_Integer Width,const Standard_Integer Height) ;
  
  Standard_EXPORT     void DrawRect(const Aspect_ColorPixel& aPixel,const Standard_Integer X,const Standard_Integer Y,const Standard_Integer Width,const Standard_Integer Height) ;
  
  Standard_EXPORT     void DrawLine(const Aspect_ColorPixel& aPixel,const Standard_Integer X1,const Standard_Integer Y1,const Standard_Integer X2,const Standard_Integer Y2) ;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     void Dump() const;



  DEFINE_STANDARD_RTTI(Image_DColorImage)

protected:

  
  Standard_EXPORT   Image_DColorImage(const Standard_Integer x,const Standard_Integer y,const Standard_Integer dx,const Standard_Integer dy,const Aspect_ColorPixel& BackPixel);



private: 

  
  Standard_EXPORT     void FlipHorizontal() ;
  
  Standard_EXPORT     void FlipVertical() ;
  
  Standard_EXPORT     void FlipMainDiagonal() ;
  
  Standard_EXPORT     void FlipAntiDiagonal() ;
  
  Standard_EXPORT     void Rotate90() ;
  
  Standard_EXPORT     void Rotate180() ;
  
  Standard_EXPORT     void Rotate270() ;
  
  Standard_EXPORT    const Image_PixelFieldOfDColorImage& PixelField() const;
  
  Standard_EXPORT     void PixelFieldCopyTo(Image_PixelFieldOfDColorImage& Dst,const Standard_Integer LowR,const Standard_Integer LowC,const Standard_Integer UpR,const Standard_Integer UpC,const Standard_Integer DstLowR,const Standard_Integer DstLowC) const;
  
  Standard_EXPORT     void PixelFieldCopyFrom(const Image_PixelFieldOfDColorImage& Dst,const Standard_Integer LowR,const Standard_Integer LowC,const Standard_Integer UpR,const Standard_Integer UpC,const Standard_Integer DstLowR,const Standard_Integer DstLowC) ;
  
  Standard_EXPORT     void PixelFieldDestroy() ;
  
  Standard_EXPORT     void CirclePixels(const Aspect_ColorPixel& Pixel,const Standard_Integer XCenter,const Standard_Integer YCenter,const Standard_Integer x,const Standard_Integer y,const Standard_Integer LowX,const Standard_Integer LowY,const Standard_Integer UpX,const Standard_Integer UpY) ;

Standard_Integer myX;
Standard_Integer myY;
Standard_Address myPixelField;
Aspect_ColorPixel myBackgroundPixel;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
