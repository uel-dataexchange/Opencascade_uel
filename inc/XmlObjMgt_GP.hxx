// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlObjMgt_GP_HeaderFile
#define _XmlObjMgt_GP_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _XmlObjMgt_DOMString_HeaderFile
#include <XmlObjMgt_DOMString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class gp_Trsf;
class gp_Mat;
class gp_XYZ;


//! Translation of gp (simple geometry) objects <br>
class XmlObjMgt_GP  {
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

  
  Standard_EXPORT   static  XmlObjMgt_DOMString Translate(const gp_Trsf& aTrsf) ;
  
  Standard_EXPORT   static  XmlObjMgt_DOMString Translate(const gp_Mat& aMat) ;
  
  Standard_EXPORT   static  XmlObjMgt_DOMString Translate(const gp_XYZ& anXYZ) ;
  
  Standard_EXPORT   static  Standard_Boolean Translate(const XmlObjMgt_DOMString& aStr,gp_Trsf& T) ;
  
  Standard_EXPORT   static  Standard_Boolean Translate(const XmlObjMgt_DOMString& aStr,gp_Mat& T) ;
  
  Standard_EXPORT   static  Standard_Boolean Translate(const XmlObjMgt_DOMString& aStr,gp_XYZ& T) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
