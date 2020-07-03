// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDF_TypeDriverListMapOfARDriverTable_HeaderFile
#define _MDF_TypeDriverListMapOfARDriverTable_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_Standard_Type_HeaderFile
#include <Handle_Standard_Type.hxx>
#endif
#ifndef _Handle_MDF_DataMapNodeOfTypeDriverListMapOfARDriverTable_HeaderFile
#include <Handle_MDF_DataMapNodeOfTypeDriverListMapOfARDriverTable.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class Standard_Type;
class MDF_DriverListOfARDriverTable;
class TColStd_MapTransientHasher;
class MDF_DataMapNodeOfTypeDriverListMapOfARDriverTable;
class MDF_DataMapIteratorOfTypeDriverListMapOfARDriverTable;



class MDF_TypeDriverListMapOfARDriverTable  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   MDF_TypeDriverListMapOfARDriverTable(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     MDF_TypeDriverListMapOfARDriverTable& Assign(const MDF_TypeDriverListMapOfARDriverTable& Other) ;
    MDF_TypeDriverListMapOfARDriverTable& operator =(const MDF_TypeDriverListMapOfARDriverTable& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~MDF_TypeDriverListMapOfARDriverTable()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const Handle(Standard_Type)& K,const MDF_DriverListOfARDriverTable& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const Handle(Standard_Type)& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const Handle(Standard_Type)& K) ;
  
  Standard_EXPORT    const MDF_DriverListOfARDriverTable& Find(const Handle(Standard_Type)& K) const;
   const MDF_DriverListOfARDriverTable& operator()(const Handle(Standard_Type)& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     MDF_DriverListOfARDriverTable& ChangeFind(const Handle(Standard_Type)& K) ;
    MDF_DriverListOfARDriverTable& operator()(const Handle(Standard_Type)& K) 
{
  return ChangeFind(K);
}





protected:





private:

  
  Standard_EXPORT   MDF_TypeDriverListMapOfARDriverTable(const MDF_TypeDriverListMapOfARDriverTable& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
