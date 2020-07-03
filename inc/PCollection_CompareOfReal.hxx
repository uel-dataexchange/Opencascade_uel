// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PCollection_CompareOfReal_HeaderFile
#define _PCollection_CompareOfReal_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _PCollection_PrivCompareOfReal_HeaderFile
#include <PCollection_PrivCompareOfReal.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(PCollection_CompareOfReal);


class PCollection_CompareOfReal  : public PCollection_PrivCompareOfReal {

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

  
  Standard_EXPORT   PCollection_CompareOfReal();
  //! Returns True if <Left> is lower than <Right>. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsLower(const Standard_Real& Left,const Standard_Real& Right) const;
  //! Returns True if <Left> is greater than <Right>. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsGreater(const Standard_Real& Left,const Standard_Real& Right) const;



protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
