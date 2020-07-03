// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_DataMapOfIntegerInteger_HeaderFile
#define _TColStd_DataMapOfIntegerInteger_HeaderFile

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
#ifndef _Handle_TColStd_DataMapNodeOfDataMapOfIntegerInteger_HeaderFile
#include <Handle_TColStd_DataMapNodeOfDataMapOfIntegerInteger.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class TColStd_MapIntegerHasher;
class TColStd_DataMapNodeOfDataMapOfIntegerInteger;
class TColStd_DataMapIteratorOfDataMapOfIntegerInteger;



class TColStd_DataMapOfIntegerInteger  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   TColStd_DataMapOfIntegerInteger(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     TColStd_DataMapOfIntegerInteger& Assign(const TColStd_DataMapOfIntegerInteger& Other) ;
    TColStd_DataMapOfIntegerInteger& operator =(const TColStd_DataMapOfIntegerInteger& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~TColStd_DataMapOfIntegerInteger()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const Standard_Integer& K,const Standard_Integer& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const Standard_Integer& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const Standard_Integer& K) ;
  
  Standard_EXPORT    const Standard_Integer& Find(const Standard_Integer& K) const;
   const Standard_Integer& operator()(const Standard_Integer& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     Standard_Integer& ChangeFind(const Standard_Integer& K) ;
    Standard_Integer& operator()(const Standard_Integer& K) 
{
  return ChangeFind(K);
}





protected:





private:

  
  Standard_EXPORT   TColStd_DataMapOfIntegerInteger(const TColStd_DataMapOfIntegerInteger& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
