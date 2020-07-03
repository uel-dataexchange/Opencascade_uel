// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_PntOn2Faces_HeaderFile
#define _IntTools_PntOn2Faces_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _IntTools_PntOnFace_HeaderFile
#include <IntTools_PntOnFace.hxx>
#endif
class IntTools_PntOnFace;


//! Contains two points PntOnFace from IntTools and a flag <br>
class IntTools_PntOn2Faces  {
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

  
//! Empty constructor <br>
  Standard_EXPORT   IntTools_PntOn2Faces();
  
//! Initializes me by two points aP1 and aP2 <br>
  Standard_EXPORT   IntTools_PntOn2Faces(const IntTools_PntOnFace& aP1,const IntTools_PntOnFace& aP2);
  
//! Modifier <br>
  Standard_EXPORT     void SetP1(const IntTools_PntOnFace& aP1) ;
  
//! Modifier <br>
  Standard_EXPORT     void SetP2(const IntTools_PntOnFace& aP2) ;
  
//! Modifier <br>
  Standard_EXPORT     void SetValid(const Standard_Boolean bF) ;
  
//! Selector <br>
  Standard_EXPORT    const IntTools_PntOnFace& P1() const;
  
//! Selector <br>
  Standard_EXPORT    const IntTools_PntOnFace& P2() const;
  
//! Selector <br>
  Standard_EXPORT     Standard_Boolean IsValid() const;





protected:





private:



Standard_Boolean myIsValid;
IntTools_PntOnFace myPnt1;
IntTools_PntOnFace myPnt2;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
