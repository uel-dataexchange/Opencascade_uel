// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WNT_Image_HeaderFile
#define _WNT_Image_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_WNT_Image_HeaderFile
#include <Handle_WNT_Image.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Aspect_Handle_HeaderFile
#include <Aspect_Handle.hxx>
#endif
class WNT_ImageManager;


//! Internal class for image management <br>
class WNT_Image : public MMgt_TShared {

public:

  //! Creates a class. <br>
  Standard_EXPORT   WNT_Image(const Aspect_Handle aBitmap,const Standard_Integer aHashCode);
  //! Destroys all ressources attached to the Image <br>
  Standard_EXPORT   virtual  void Destroy() ;
~WNT_Image()
{
  Destroy();
}
  //! Returns bitmap handle <br>
        Aspect_Handle HBITMAP() const;
  //! Returns pointer to internal structure <br>
        Standard_Address Image() const;

friend class WNT_ImageManager;


  DEFINE_STANDARD_RTTI(WNT_Image)

protected:


Standard_Address myImage;
Standard_Integer myHashCode;


private: 




};


#include <WNT_Image.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
