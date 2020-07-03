// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_IndexedDataMapOfTransientAddress_HeaderFile
#define _IntTools_IndexedDataMapOfTransientAddress_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_IntTools_IndexedDataMapNodeOfIndexedDataMapOfTransientAddress_HeaderFile
#include <Handle_IntTools_IndexedDataMapNodeOfIndexedDataMapOfTransientAddress.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_OutOfRange;
class Standard_NoSuchObject;
class Standard_Transient;
class TColStd_MapTransientHasher;
class IntTools_IndexedDataMapNodeOfIndexedDataMapOfTransientAddress;



class IntTools_IndexedDataMapOfTransientAddress  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   IntTools_IndexedDataMapOfTransientAddress(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     IntTools_IndexedDataMapOfTransientAddress& Assign(const IntTools_IndexedDataMapOfTransientAddress& Other) ;
    IntTools_IndexedDataMapOfTransientAddress& operator =(const IntTools_IndexedDataMapOfTransientAddress& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~IntTools_IndexedDataMapOfTransientAddress()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Integer Add(const Handle(Standard_Transient)& K,const Standard_Address& I) ;
  
  Standard_EXPORT     void Substitute(const Standard_Integer I,const Handle(Standard_Transient)& K,const Standard_Address& T) ;
  
  Standard_EXPORT     void RemoveLast() ;
  
  Standard_EXPORT     Standard_Boolean Contains(const Handle(Standard_Transient)& K) const;
  
  Standard_EXPORT    const Handle_Standard_Transient& FindKey(const Standard_Integer I) const;
  
  Standard_EXPORT    const Standard_Address& FindFromIndex(const Standard_Integer I) const;
   const Standard_Address& operator ()(const Standard_Integer I) const
{
  return FindFromIndex(I);
}
  
  Standard_EXPORT     Standard_Address& ChangeFromIndex(const Standard_Integer I) ;
    Standard_Address& operator ()(const Standard_Integer I) 
{
  return ChangeFromIndex(I);
}
  
  Standard_EXPORT     Standard_Integer FindIndex(const Handle(Standard_Transient)& K) const;
  
  Standard_EXPORT    const Standard_Address& FindFromKey(const Handle(Standard_Transient)& K) const;
  
  Standard_EXPORT     Standard_Address& ChangeFromKey(const Handle(Standard_Transient)& K) ;





protected:





private:

  
  Standard_EXPORT   IntTools_IndexedDataMapOfTransientAddress(const IntTools_IndexedDataMapOfTransientAddress& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
