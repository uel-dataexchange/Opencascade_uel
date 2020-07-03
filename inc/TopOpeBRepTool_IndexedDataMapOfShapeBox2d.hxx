// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepTool_IndexedDataMapOfShapeBox2d_HeaderFile
#define _TopOpeBRepTool_IndexedDataMapOfShapeBox2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeBox2d_HeaderFile
#include <Handle_TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeBox2d.hxx>
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
class Bnd_Box2d;
class TopTools_OrientedShapeMapHasher;
class TopOpeBRepTool_IndexedDataMapNodeOfIndexedDataMapOfShapeBox2d;



class TopOpeBRepTool_IndexedDataMapOfShapeBox2d  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   TopOpeBRepTool_IndexedDataMapOfShapeBox2d(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     TopOpeBRepTool_IndexedDataMapOfShapeBox2d& Assign(const TopOpeBRepTool_IndexedDataMapOfShapeBox2d& Other) ;
    TopOpeBRepTool_IndexedDataMapOfShapeBox2d& operator =(const TopOpeBRepTool_IndexedDataMapOfShapeBox2d& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~TopOpeBRepTool_IndexedDataMapOfShapeBox2d()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Integer Add(const TopoDS_Shape& K,const Bnd_Box2d& I) ;
  
  Standard_EXPORT     void Substitute(const Standard_Integer I,const TopoDS_Shape& K,const Bnd_Box2d& T) ;
  
  Standard_EXPORT     void RemoveLast() ;
  
  Standard_EXPORT     Standard_Boolean Contains(const TopoDS_Shape& K) const;
  
  Standard_EXPORT    const TopoDS_Shape& FindKey(const Standard_Integer I) const;
  
  Standard_EXPORT    const Bnd_Box2d& FindFromIndex(const Standard_Integer I) const;
   const Bnd_Box2d& operator ()(const Standard_Integer I) const
{
  return FindFromIndex(I);
}
  
  Standard_EXPORT     Bnd_Box2d& ChangeFromIndex(const Standard_Integer I) ;
    Bnd_Box2d& operator ()(const Standard_Integer I) 
{
  return ChangeFromIndex(I);
}
  
  Standard_EXPORT     Standard_Integer FindIndex(const TopoDS_Shape& K) const;
  
  Standard_EXPORT    const Bnd_Box2d& FindFromKey(const TopoDS_Shape& K) const;
  
  Standard_EXPORT     Bnd_Box2d& ChangeFromKey(const TopoDS_Shape& K) ;





protected:





private:

  
  Standard_EXPORT   TopOpeBRepTool_IndexedDataMapOfShapeBox2d(const TopOpeBRepTool_IndexedDataMapOfShapeBox2d& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
