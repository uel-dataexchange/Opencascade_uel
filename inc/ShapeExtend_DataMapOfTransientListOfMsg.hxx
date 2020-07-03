// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeExtend_DataMapOfTransientListOfMsg_HeaderFile
#define _ShapeExtend_DataMapOfTransientListOfMsg_HeaderFile

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
#ifndef _Handle_ShapeExtend_DataMapNodeOfDataMapOfTransientListOfMsg_HeaderFile
#include <Handle_ShapeExtend_DataMapNodeOfDataMapOfTransientListOfMsg.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class Standard_Transient;
class Message_ListOfMsg;
class TColStd_MapTransientHasher;
class ShapeExtend_DataMapNodeOfDataMapOfTransientListOfMsg;
class ShapeExtend_DataMapIteratorOfDataMapOfTransientListOfMsg;



class ShapeExtend_DataMapOfTransientListOfMsg  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   ShapeExtend_DataMapOfTransientListOfMsg(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     ShapeExtend_DataMapOfTransientListOfMsg& Assign(const ShapeExtend_DataMapOfTransientListOfMsg& Other) ;
    ShapeExtend_DataMapOfTransientListOfMsg& operator =(const ShapeExtend_DataMapOfTransientListOfMsg& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~ShapeExtend_DataMapOfTransientListOfMsg()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const Handle(Standard_Transient)& K,const Message_ListOfMsg& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const Handle(Standard_Transient)& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const Handle(Standard_Transient)& K) ;
  
  Standard_EXPORT    const Message_ListOfMsg& Find(const Handle(Standard_Transient)& K) const;
   const Message_ListOfMsg& operator()(const Handle(Standard_Transient)& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     Message_ListOfMsg& ChangeFind(const Handle(Standard_Transient)& K) ;
    Message_ListOfMsg& operator()(const Handle(Standard_Transient)& K) 
{
  return ChangeFind(K);
}





protected:





private:

  
  Standard_EXPORT   ShapeExtend_DataMapOfTransientListOfMsg(const ShapeExtend_DataMapOfTransientListOfMsg& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
