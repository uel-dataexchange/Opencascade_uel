// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT_DataMapOfIntegerNode_HeaderFile
#define _MAT_DataMapOfIntegerNode_HeaderFile

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
#ifndef _Handle_MAT_Node_HeaderFile
#include <Handle_MAT_Node.hxx>
#endif
#ifndef _Handle_MAT_DataMapNodeOfDataMapOfIntegerNode_HeaderFile
#include <Handle_MAT_DataMapNodeOfDataMapOfIntegerNode.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class MAT_Node;
class TColStd_MapIntegerHasher;
class MAT_DataMapNodeOfDataMapOfIntegerNode;
class MAT_DataMapIteratorOfDataMapOfIntegerNode;



class MAT_DataMapOfIntegerNode  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   MAT_DataMapOfIntegerNode(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     MAT_DataMapOfIntegerNode& Assign(const MAT_DataMapOfIntegerNode& Other) ;
    MAT_DataMapOfIntegerNode& operator =(const MAT_DataMapOfIntegerNode& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~MAT_DataMapOfIntegerNode()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const Standard_Integer& K,const Handle(MAT_Node)& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const Standard_Integer& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const Standard_Integer& K) ;
  
  Standard_EXPORT    const Handle_MAT_Node& Find(const Standard_Integer& K) const;
   const Handle_MAT_Node& operator()(const Standard_Integer& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     Handle_MAT_Node& ChangeFind(const Standard_Integer& K) ;
    Handle_MAT_Node& operator()(const Standard_Integer& K) 
{
  return ChangeFind(K);
}





protected:





private:

  
  Standard_EXPORT   MAT_DataMapOfIntegerNode(const MAT_DataMapOfIntegerNode& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
