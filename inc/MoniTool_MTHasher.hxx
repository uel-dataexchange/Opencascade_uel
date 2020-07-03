// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MoniTool_MTHasher_HeaderFile
#define _MoniTool_MTHasher_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif



//! The auxiliary class provides hash code for mapping objects <br>
class MoniTool_MTHasher  {
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

  //! Returns a HasCode value for the CString <Str>  in the <br>
//! range 0..Upper. <br>
//! Default ::HashCode(Str,Upper) <br>
      static  Standard_Integer HashCode(const Standard_CString Str,const Standard_Integer Upper) ;
  //! Returns True  when the two CString are the same. Two <br>
//! same strings must have the same hashcode, the <br>
//! contrary is not necessary. <br>
//! Default Str1 == Str2 <br>
      static  Standard_Boolean IsEqual(const Standard_CString Str1,const Standard_CString Str2) ;





protected:





private:





};


#include <MoniTool_MTHasher.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
