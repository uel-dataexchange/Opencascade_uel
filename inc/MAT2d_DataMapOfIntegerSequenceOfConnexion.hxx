// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT2d_DataMapOfIntegerSequenceOfConnexion_HeaderFile
#define _MAT2d_DataMapOfIntegerSequenceOfConnexion_HeaderFile

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
#ifndef _Handle_MAT2d_DataMapNodeOfDataMapOfIntegerSequenceOfConnexion_HeaderFile
#include <Handle_MAT2d_DataMapNodeOfDataMapOfIntegerSequenceOfConnexion.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class MAT2d_SequenceOfConnexion;
class TColStd_MapIntegerHasher;
class MAT2d_DataMapNodeOfDataMapOfIntegerSequenceOfConnexion;
class MAT2d_DataMapIteratorOfDataMapOfIntegerSequenceOfConnexion;



class MAT2d_DataMapOfIntegerSequenceOfConnexion  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   MAT2d_DataMapOfIntegerSequenceOfConnexion(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     MAT2d_DataMapOfIntegerSequenceOfConnexion& Assign(const MAT2d_DataMapOfIntegerSequenceOfConnexion& Other) ;
    MAT2d_DataMapOfIntegerSequenceOfConnexion& operator =(const MAT2d_DataMapOfIntegerSequenceOfConnexion& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~MAT2d_DataMapOfIntegerSequenceOfConnexion()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const Standard_Integer& K,const MAT2d_SequenceOfConnexion& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const Standard_Integer& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const Standard_Integer& K) ;
  
  Standard_EXPORT    const MAT2d_SequenceOfConnexion& Find(const Standard_Integer& K) const;
   const MAT2d_SequenceOfConnexion& operator()(const Standard_Integer& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     MAT2d_SequenceOfConnexion& ChangeFind(const Standard_Integer& K) ;
    MAT2d_SequenceOfConnexion& operator()(const Standard_Integer& K) 
{
  return ChangeFind(K);
}





protected:





private:

  
  Standard_EXPORT   MAT2d_DataMapOfIntegerSequenceOfConnexion(const MAT2d_DataMapOfIntegerSequenceOfConnexion& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
