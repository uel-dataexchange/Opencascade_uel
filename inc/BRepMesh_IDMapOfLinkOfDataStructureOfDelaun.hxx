// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepMesh_IDMapOfLinkOfDataStructureOfDelaun_HeaderFile
#define _BRepMesh_IDMapOfLinkOfDataStructureOfDelaun_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _BRepMesh_PairOfIndex_HeaderFile
#include <BRepMesh_PairOfIndex.hxx>
#endif
#ifndef _Handle_BRepMesh_IndexedDataMapNodeOfIDMapOfLinkOfDataStructureOfDelaun_HeaderFile
#include <Handle_BRepMesh_IndexedDataMapNodeOfIDMapOfLinkOfDataStructureOfDelaun.hxx>
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
class BRepMesh_Edge;
class BRepMesh_LinkHasherOfDataStructureOfDelaun;
class BRepMesh_IndexedDataMapNodeOfIDMapOfLinkOfDataStructureOfDelaun;



class BRepMesh_IDMapOfLinkOfDataStructureOfDelaun  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   BRepMesh_IDMapOfLinkOfDataStructureOfDelaun(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     BRepMesh_IDMapOfLinkOfDataStructureOfDelaun& Assign(const BRepMesh_IDMapOfLinkOfDataStructureOfDelaun& Other) ;
    BRepMesh_IDMapOfLinkOfDataStructureOfDelaun& operator =(const BRepMesh_IDMapOfLinkOfDataStructureOfDelaun& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~BRepMesh_IDMapOfLinkOfDataStructureOfDelaun()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Integer Add(const BRepMesh_Edge& K,const BRepMesh_PairOfIndex& I) ;
  
  Standard_EXPORT     void Substitute(const Standard_Integer I,const BRepMesh_Edge& K,const BRepMesh_PairOfIndex& T) ;
  
  Standard_EXPORT     void RemoveLast() ;
  
  Standard_EXPORT     Standard_Boolean Contains(const BRepMesh_Edge& K) const;
  
  Standard_EXPORT    const BRepMesh_Edge& FindKey(const Standard_Integer I) const;
  
  Standard_EXPORT    const BRepMesh_PairOfIndex& FindFromIndex(const Standard_Integer I) const;
   const BRepMesh_PairOfIndex& operator ()(const Standard_Integer I) const
{
  return FindFromIndex(I);
}
  
  Standard_EXPORT     BRepMesh_PairOfIndex& ChangeFromIndex(const Standard_Integer I) ;
    BRepMesh_PairOfIndex& operator ()(const Standard_Integer I) 
{
  return ChangeFromIndex(I);
}
  
  Standard_EXPORT     Standard_Integer FindIndex(const BRepMesh_Edge& K) const;
  
  Standard_EXPORT    const BRepMesh_PairOfIndex& FindFromKey(const BRepMesh_Edge& K) const;
  
  Standard_EXPORT     BRepMesh_PairOfIndex& ChangeFromKey(const BRepMesh_Edge& K) ;





protected:





private:

  
  Standard_EXPORT   BRepMesh_IDMapOfLinkOfDataStructureOfDelaun(const BRepMesh_IDMapOfLinkOfDataStructureOfDelaun& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
