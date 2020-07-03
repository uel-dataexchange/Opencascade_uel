// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTColStd_ShapeWithRankHasher_HeaderFile
#define _BOPTColStd_ShapeWithRankHasher_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class BOPTColStd_ShapeWithRank;



//!  The auxiliary class provides hash code for mapping <br>
//!  ShapeWithRank objects <br>
class BOPTColStd_ShapeWithRankHasher  {
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

  //! Returns a HasCode value  for  the  Key <K>  in the <br>
//!          range 0..Upper. <br>
//! <br>
  Standard_EXPORT   static  Standard_Integer HashCode(const BOPTColStd_ShapeWithRank& SR,const Standard_Integer Upper) ;
  //! Returns True  when the two  keys are the same. Two <br>
//!          same  keys  must   have  the  same  hashcode,  the <br>
//!          contrary is not necessary. <br>
  Standard_EXPORT   static  Standard_Boolean IsEqual(const BOPTColStd_ShapeWithRank& SR1,const BOPTColStd_ShapeWithRank& SR2) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
