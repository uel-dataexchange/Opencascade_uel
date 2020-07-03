// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AlienImage_BMPAlienImage_HeaderFile
#define _AlienImage_BMPAlienImage_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AlienImage_BMPAlienImage_HeaderFile
#include <Handle_AlienImage_BMPAlienImage.hxx>
#endif

#ifndef _Handle_AlienImage_BMPAlienData_HeaderFile
#include <Handle_AlienImage_BMPAlienData.hxx>
#endif
#ifndef _AlienImage_AlienUserImage_HeaderFile
#include <AlienImage_AlienUserImage.hxx>
#endif
#ifndef _Handle_Image_Image_HeaderFile
#include <Handle_Image_Image.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class AlienImage_BMPAlienData;
class TCollection_AsciiString;
class Image_Image;
class OSD_File;



class AlienImage_BMPAlienImage : public AlienImage_AlienUserImage {

public:

  
  Standard_EXPORT   AlienImage_BMPAlienImage();
  //! Frees memory allocated by BMPAlienImage <br>
  Standard_EXPORT     void Clear() ;
~AlienImage_BMPAlienImage()
{
  Clear();
}
  //! Set Image name . <br>
  Standard_EXPORT     void SetName(const TCollection_AsciiString& aName) ;
  //! get Image name . <br>
  Standard_EXPORT    const TCollection_AsciiString& Name() const;
  //! convert a BMPAlienImage object to a Image object. <br>
  Standard_EXPORT     Handle_Image_Image ToImage() const;
  //! convert a Image object to a BMPAlienImage object. <br>
  Standard_EXPORT     void FromImage(const Handle(Image_Image)& anImage) ;
  //! Read content of a  BMPAlienImage object from a file . <br>
//!          Returns True if file is a BMP file . <br>
  Standard_EXPORT     Standard_Boolean Read(OSD_File& afile) ;
  //! Write content of a  BMPAlienImage object to a file . <br>
  Standard_EXPORT     Standard_Boolean Write(OSD_File& afile) const;



  DEFINE_STANDARD_RTTI(AlienImage_BMPAlienImage)

protected:




private: 


Handle_AlienImage_BMPAlienData myData;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
