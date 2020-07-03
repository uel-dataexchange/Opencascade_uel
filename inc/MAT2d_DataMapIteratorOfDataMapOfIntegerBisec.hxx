// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT2d_DataMapIteratorOfDataMapOfIntegerBisec_HeaderFile
#define _MAT2d_DataMapIteratorOfDataMapOfIntegerBisec_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_MAT2d_DataMapNodeOfDataMapOfIntegerBisec_HeaderFile
#include <Handle_MAT2d_DataMapNodeOfDataMapOfIntegerBisec.hxx>
#endif
class Standard_NoSuchObject;
class Bisector_Bisec;
class TColStd_MapIntegerHasher;
class MAT2d_DataMapOfIntegerBisec;
class MAT2d_DataMapNodeOfDataMapOfIntegerBisec;



class MAT2d_DataMapIteratorOfDataMapOfIntegerBisec  : public TCollection_BasicMapIterator {
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

  
  Standard_EXPORT   MAT2d_DataMapIteratorOfDataMapOfIntegerBisec();
  
  Standard_EXPORT   MAT2d_DataMapIteratorOfDataMapOfIntegerBisec(const MAT2d_DataMapOfIntegerBisec& aMap);
  
  Standard_EXPORT     void Initialize(const MAT2d_DataMapOfIntegerBisec& aMap) ;
  
  Standard_EXPORT    const Standard_Integer& Key() const;
  
  Standard_EXPORT    const Bisector_Bisec& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
