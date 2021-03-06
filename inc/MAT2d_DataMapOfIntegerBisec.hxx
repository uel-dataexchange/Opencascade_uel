// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT2d_DataMapOfIntegerBisec_HeaderFile
#define _MAT2d_DataMapOfIntegerBisec_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_MAT2d_DataMapNodeOfDataMapOfIntegerBisec_HeaderFile
#include <Handle_MAT2d_DataMapNodeOfDataMapOfIntegerBisec.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class Bisector_Bisec;
class TColStd_MapIntegerHasher;
class MAT2d_DataMapNodeOfDataMapOfIntegerBisec;
class MAT2d_DataMapIteratorOfDataMapOfIntegerBisec;



class MAT2d_DataMapOfIntegerBisec  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   MAT2d_DataMapOfIntegerBisec(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     MAT2d_DataMapOfIntegerBisec& Assign(const MAT2d_DataMapOfIntegerBisec& Other) ;
    MAT2d_DataMapOfIntegerBisec& operator =(const MAT2d_DataMapOfIntegerBisec& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~MAT2d_DataMapOfIntegerBisec()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const Standard_Integer& K,const Bisector_Bisec& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const Standard_Integer& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const Standard_Integer& K) ;
  
  Standard_EXPORT    const Bisector_Bisec& Find(const Standard_Integer& K) const;
   const Bisector_Bisec& operator()(const Standard_Integer& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     Bisector_Bisec& ChangeFind(const Standard_Integer& K) ;
    Bisector_Bisec& operator()(const Standard_Integer& K) 
{
  return ChangeFind(K);
}





protected:





private:

  
  Standard_EXPORT   MAT2d_DataMapOfIntegerBisec(const MAT2d_DataMapOfIntegerBisec& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
