// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_IndexedDataMapOfShapeWithState_HeaderFile
#define _TopOpeBRepDS_IndexedDataMapOfShapeWithState_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_TopOpeBRepDS_IndexedDataMapNodeOfIndexedDataMapOfShapeWithState_HeaderFile
#include <Handle_TopOpeBRepDS_IndexedDataMapNodeOfIndexedDataMapOfShapeWithState.hxx>
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
class TopoDS_Shape;
class TopOpeBRepDS_ShapeWithState;
class TopTools_ShapeMapHasher;
class TopOpeBRepDS_IndexedDataMapNodeOfIndexedDataMapOfShapeWithState;



class TopOpeBRepDS_IndexedDataMapOfShapeWithState  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   TopOpeBRepDS_IndexedDataMapOfShapeWithState(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     TopOpeBRepDS_IndexedDataMapOfShapeWithState& Assign(const TopOpeBRepDS_IndexedDataMapOfShapeWithState& Other) ;
    TopOpeBRepDS_IndexedDataMapOfShapeWithState& operator =(const TopOpeBRepDS_IndexedDataMapOfShapeWithState& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~TopOpeBRepDS_IndexedDataMapOfShapeWithState()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Integer Add(const TopoDS_Shape& K,const TopOpeBRepDS_ShapeWithState& I) ;
  
  Standard_EXPORT     void Substitute(const Standard_Integer I,const TopoDS_Shape& K,const TopOpeBRepDS_ShapeWithState& T) ;
  
  Standard_EXPORT     void RemoveLast() ;
  
  Standard_EXPORT     Standard_Boolean Contains(const TopoDS_Shape& K) const;
  
  Standard_EXPORT    const TopoDS_Shape& FindKey(const Standard_Integer I) const;
  
  Standard_EXPORT    const TopOpeBRepDS_ShapeWithState& FindFromIndex(const Standard_Integer I) const;
   const TopOpeBRepDS_ShapeWithState& operator ()(const Standard_Integer I) const
{
  return FindFromIndex(I);
}
  
  Standard_EXPORT     TopOpeBRepDS_ShapeWithState& ChangeFromIndex(const Standard_Integer I) ;
    TopOpeBRepDS_ShapeWithState& operator ()(const Standard_Integer I) 
{
  return ChangeFromIndex(I);
}
  
  Standard_EXPORT     Standard_Integer FindIndex(const TopoDS_Shape& K) const;
  
  Standard_EXPORT    const TopOpeBRepDS_ShapeWithState& FindFromKey(const TopoDS_Shape& K) const;
  
  Standard_EXPORT     TopOpeBRepDS_ShapeWithState& ChangeFromKey(const TopoDS_Shape& K) ;





protected:





private:

  
  Standard_EXPORT   TopOpeBRepDS_IndexedDataMapOfShapeWithState(const TopOpeBRepDS_IndexedDataMapOfShapeWithState& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
