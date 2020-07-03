// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_Strips_HeaderFile
#define _Graphic3d_Strips_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class TColStd_Array1OfInteger;
class TColStd_SequenceOfInteger;



class Graphic3d_Strips  {
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

  
  Standard_EXPORT   static  void STRIPT_INIT(const Standard_Integer NBVERTICES,const TColStd_Array1OfInteger& TABTRIANGLES) ;
  
  Standard_EXPORT   static  void STRIPT_GET_STRIP(Standard_Integer& NBTRIANGLES,Standard_Integer& V1,Standard_Integer& V2) ;
  
  Standard_EXPORT   static  void STRIPT_GET_VERTEX(Standard_Integer& VERTEX,Standard_Integer& TRIANGLE) ;
  
  Standard_EXPORT   static  void STRIPQ_INIT(const Standard_Integer NBVERTICES,const Standard_Integer NBQUADRANG,const TColStd_SequenceOfInteger& TABQUADRANGLES) ;
  
  Standard_EXPORT   static  void STRIPQ_GET_STRIP(Standard_Integer& NBQUAD,Standard_Integer& V1,Standard_Integer& V2) ;
  
  Standard_EXPORT   static  void STRIPQ_GET_NEXT(Standard_Integer& VERTEX1,Standard_Integer& VERTEX2,Standard_Integer& QUADRANGLE) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
