// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _math_RealRandom_HeaderFile
#define _math_RealRandom_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif



//! This class implements a real random generator. <br>
class math_RealRandom  {
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

  
//! creates a real random generator between the values Lower and Upper. <br>
  Standard_EXPORT   math_RealRandom(const Standard_Real Lower,const Standard_Real Upper);
  //! reinitializes the random generator <br>
  Standard_EXPORT     void Reset() ;
  //! returns the next random number. <br>
  Standard_EXPORT     Standard_Real Next() ;





protected:





private:



Standard_Integer Dummy;
Standard_Real Low;
Standard_Real Up;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
