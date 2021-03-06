// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_DataMapOfShapeShape_HeaderFile
#define _TopTools_DataMapOfShapeShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_TopTools_DataMapNodeOfDataMapOfShapeShape_HeaderFile
#include <Handle_TopTools_DataMapNodeOfDataMapOfShapeShape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class TopoDS_Shape;
class TopTools_ShapeMapHasher;
class TopTools_DataMapNodeOfDataMapOfShapeShape;
class TopTools_DataMapIteratorOfDataMapOfShapeShape;



class TopTools_DataMapOfShapeShape  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   TopTools_DataMapOfShapeShape(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     TopTools_DataMapOfShapeShape& Assign(const TopTools_DataMapOfShapeShape& Other) ;
    TopTools_DataMapOfShapeShape& operator =(const TopTools_DataMapOfShapeShape& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~TopTools_DataMapOfShapeShape()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const TopoDS_Shape& K,const TopoDS_Shape& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const TopoDS_Shape& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const TopoDS_Shape& K) ;
  
  Standard_EXPORT    const TopoDS_Shape& Find(const TopoDS_Shape& K) const;
   const TopoDS_Shape& operator()(const TopoDS_Shape& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     TopoDS_Shape& ChangeFind(const TopoDS_Shape& K) ;
    TopoDS_Shape& operator()(const TopoDS_Shape& K) 
{
  return ChangeFind(K);
}





protected:





private:

  
  Standard_EXPORT   TopTools_DataMapOfShapeShape(const TopTools_DataMapOfShapeShape& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
