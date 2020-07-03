// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _OSD_SystemFont_HeaderFile
#define _OSD_SystemFont_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_OSD_SystemFont_HeaderFile
#include <Handle_OSD_SystemFont.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _OSD_FontAspect_HeaderFile
#include <OSD_FontAspect.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class TCollection_HAsciiString;


//! Structure for store of Font System Information <br>
class OSD_SystemFont : public MMgt_TShared {

public:

  //! Creates empty font object <br>
  Standard_EXPORT   OSD_SystemFont();
  //! Creates Font object initialized with <FontName> as name <br>
//!         <FontAspect>.... TODO <br>
  Standard_EXPORT   OSD_SystemFont(const Handle(TCollection_HAsciiString)& FontName,const OSD_FontAspect Aspect,const Handle(TCollection_HAsciiString)& FilePath);
  //! TODO <br>
  Standard_EXPORT   OSD_SystemFont(const Handle(TCollection_HAsciiString)& XLFD,const Handle(TCollection_HAsciiString)& FilePath);
  //! Returns font family name <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString FontName() const;
  //! Returns font file path <br>
//! Level: Public <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString FontPath() const;
  //! Returns font aspect <br>
//! Level: Public <br>
  Standard_EXPORT     OSD_FontAspect FontAspect() const;
  //! Returns font height <br>
//! If returned value is equal -1 it means that font is resizable <br>
//! Level: Public <br>
  Standard_EXPORT     Standard_Integer FontHeight() const;
  
  Standard_EXPORT     Standard_Boolean IsValid() const;




  DEFINE_STANDARD_RTTI(OSD_SystemFont)

protected:




private: 


Handle_TCollection_HAsciiString MyFontName;
OSD_FontAspect MyFontAspect;
Standard_Integer MyFaceSize;
Handle_TCollection_HAsciiString MyFilePath;
Standard_Boolean MyVerification;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
