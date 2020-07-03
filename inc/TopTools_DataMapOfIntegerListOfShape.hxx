// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_DataMapOfIntegerListOfShape_HeaderFile
#define _TopTools_DataMapOfIntegerListOfShape_HeaderFile

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
#ifndef _Handle_TopTools_DataMapNodeOfDataMapOfIntegerListOfShape_HeaderFile
#include <Handle_TopTools_DataMapNodeOfDataMapOfIntegerListOfShape.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class TopTools_ListOfShape;
class TColStd_MapIntegerHasher;
class TopTools_DataMapNodeOfDataMapOfIntegerListOfShape;
class TopTools_DataMapIteratorOfDataMapOfIntegerListOfShape;



class TopTools_DataMapOfIntegerListOfShape  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   TopTools_DataMapOfIntegerListOfShape(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     TopTools_DataMapOfIntegerListOfShape& Assign(const TopTools_DataMapOfIntegerListOfShape& Other) ;
    TopTools_DataMapOfIntegerListOfShape& operator =(const TopTools_DataMapOfIntegerListOfShape& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~TopTools_DataMapOfIntegerListOfShape()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const Standard_Integer& K,const TopTools_ListOfShape& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const Standard_Integer& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const Standard_Integer& K) ;
  
  Standard_EXPORT    const TopTools_ListOfShape& Find(const Standard_Integer& K) const;
   const TopTools_ListOfShape& operator()(const Standard_Integer& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     TopTools_ListOfShape& ChangeFind(const Standard_Integer& K) ;
    TopTools_ListOfShape& operator()(const Standard_Integer& K) 
{
  return ChangeFind(K);
}





protected:





private:

  
  Standard_EXPORT   TopTools_DataMapOfIntegerListOfShape(const TopTools_DataMapOfIntegerListOfShape& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
