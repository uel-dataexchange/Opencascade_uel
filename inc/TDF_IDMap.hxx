// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_IDMap_HeaderFile
#define _TDF_IDMap_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_TDF_StdMapNodeOfIDMap_HeaderFile
#include <Handle_TDF_StdMapNodeOfIDMap.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_GUID;
class TDF_StdMapNodeOfIDMap;
class TDF_MapIteratorOfIDMap;



class TDF_IDMap  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   TDF_IDMap(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     TDF_IDMap& Assign(const TDF_IDMap& Other) ;
    TDF_IDMap& operator =(const TDF_IDMap& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~TDF_IDMap()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Add(const Standard_GUID& aKey) ;
  
  Standard_EXPORT     Standard_Boolean Contains(const Standard_GUID& aKey) const;
  
  Standard_EXPORT     Standard_Boolean Remove(const Standard_GUID& aKey) ;





protected:





private:

  
  Standard_EXPORT   TDF_IDMap(const TDF_IDMap& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
