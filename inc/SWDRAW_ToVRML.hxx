// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SWDRAW_ToVRML_HeaderFile
#define _SWDRAW_ToVRML_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
class TCollection_AsciiString;
class TopoDS_Shape;


//! Writes a Shape to a File in VRML Format <br>
class SWDRAW_ToVRML  {
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

  
  Standard_EXPORT   SWDRAW_ToVRML();
  
  Standard_EXPORT     Standard_Real& EmissiveColorRed() ;
  
  Standard_EXPORT     Standard_Real& EmissiveColorGreen() ;
  
  Standard_EXPORT     Standard_Real& EmissiveColorBlue() ;
  
  Standard_EXPORT     Standard_Real& DiffuseColorRed() ;
  
  Standard_EXPORT     Standard_Real& DiffuseColorGreen() ;
  
  Standard_EXPORT     Standard_Real& DiffuseColorBlue() ;
  
  Standard_EXPORT     Standard_Real& Transparency() ;
  
  Standard_EXPORT     Standard_Real& AmbientIntensity() ;
  
  Standard_EXPORT     Standard_Real& SpecularColorRed() ;
  
  Standard_EXPORT     Standard_Real& SpecularColorGreen() ;
  
  Standard_EXPORT     Standard_Real& SpecularColorBlue() ;
  
  Standard_EXPORT     Standard_Real& Shininess() ;
  
  Standard_EXPORT     TCollection_AsciiString& Texture() ;
  
  Standard_EXPORT     Standard_Real& CreaseAngle() ;
  
  Standard_EXPORT     Standard_Real& Deflection() ;
  //! conversion of a Shape into VRML format for 3d visualisation <br>
  Standard_EXPORT     Standard_Boolean Write(const TopoDS_Shape& shape,const Standard_CString filename) const;





protected:





private:



Standard_Real myEmissiveColorRed;
Standard_Real myEmissiveColorGreen;
Standard_Real myEmissiveColorBlue;
Standard_Real myDiffuseColorRed;
Standard_Real myDiffuseColorGreen;
Standard_Real myDiffuseColorBlue;
Standard_Real myTransparency;
Standard_Real myAmbientIntensity;
Standard_Real mySpecularColorRed;
Standard_Real mySpecularColorGreen;
Standard_Real mySpecularColorBlue;
Standard_Real myShininess;
TCollection_AsciiString myTexture;
Standard_Real myCreaseAngle;
Standard_Real myDeflection;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
