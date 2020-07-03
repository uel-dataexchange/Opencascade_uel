// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepMesh_HeaderFile
#define _BRepMesh_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class TopoDS_Shape;
class BRepMesh_Vertex;
class BRepMesh_Edge;
class BRepMesh_Triangle;
class BRepMesh_ShapeTool;
class BRepMesh_Circ;
class BRepMesh_DiscretRoot;
class BRepMesh_DiscretFactory;
class BRepMesh_ComparatorOfVertexOfDelaun;
class BRepMesh_ComparatorOfIndexedVertexOfDelaun;
class BRepMesh_SelectorOfDataStructureOfDelaun;
class BRepMesh_Delaun;
class BRepMesh_DataStructureOfDelaun;
class BRepMesh_CircleTool;
class BRepMesh_Array1OfVertexOfDelaun;
class BRepMesh_HArray1OfVertexOfDelaun;
class BRepMesh_HeapSortVertexOfDelaun;
class BRepMesh_HeapSortIndexedVertexOfDelaun;
class BRepMesh_NodeHasherOfDataStructureOfDelaun;
class BRepMesh_LinkHasherOfDataStructureOfDelaun;
class BRepMesh_ElemHasherOfDataStructureOfDelaun;
class BRepMesh_IDMapOfNodeOfDataStructureOfDelaun;
class BRepMesh_IDMapOfLinkOfDataStructureOfDelaun;
class BRepMesh_IMapOfElementOfDataStructureOfDelaun;
class BRepMesh_DataMapOfVertexInteger;
class BRepMesh_ListOfVertex;
class BRepMesh_ListOfXY;
class BRepMesh_DataMapOfIntegerListOfXY;
class BRepMesh_VertexHasher;
class BRepMesh_IndexedMapOfVertex;
class BRepMesh_DataMapOfShapeReal;
class BRepMesh_BiPoint;
class BRepMesh_Array1OfBiPoint;
class BRepMesh_FastDiscretFace;
class BRepMesh_FastDiscret;
class BRepMesh_FaceAttribute;
class BRepMesh_DataMapOfFaceAttribute;
class BRepMesh_Classifier;
class BRepMesh_IncrementalMesh;
class BRepMesh_GeomTool;
class BRepMesh_DataMapOfIntegerPnt;
class BRepMesh_PairOfPolygon;
class BRepMesh_DataMapOfShapePairOfPolygon;
class BRepMesh_IndexedDataMapNodeOfIDMapOfNodeOfDataStructureOfDelaun;
class BRepMesh_IndexedDataMapNodeOfIDMapOfLinkOfDataStructureOfDelaun;
class BRepMesh_IndexedMapNodeOfIMapOfElementOfDataStructureOfDelaun;
class BRepMesh_DataMapNodeOfDataMapOfVertexInteger;
class BRepMesh_DataMapIteratorOfDataMapOfVertexInteger;
class BRepMesh_ListNodeOfListOfVertex;
class BRepMesh_ListIteratorOfListOfVertex;
class BRepMesh_ListNodeOfListOfXY;
class BRepMesh_ListIteratorOfListOfXY;
class BRepMesh_DataMapNodeOfDataMapOfIntegerListOfXY;
class BRepMesh_DataMapIteratorOfDataMapOfIntegerListOfXY;
class BRepMesh_IndexedMapNodeOfIndexedMapOfVertex;
class BRepMesh_DataMapNodeOfDataMapOfShapeReal;
class BRepMesh_DataMapIteratorOfDataMapOfShapeReal;
class BRepMesh_DataMapNodeOfDataMapOfFaceAttribute;
class BRepMesh_DataMapIteratorOfDataMapOfFaceAttribute;
class BRepMesh_DataMapNodeOfDataMapOfIntegerPnt;
class BRepMesh_DataMapIteratorOfDataMapOfIntegerPnt;
class BRepMesh_DataMapNodeOfDataMapOfShapePairOfPolygon;
class BRepMesh_DataMapIteratorOfDataMapOfShapePairOfPolygon;


//! Instantiated   package for the   class of packages <br>
class BRepMesh  {
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

  //! call to incremental mesh. <br>
  Standard_EXPORT   static  void Mesh(const TopoDS_Shape& S,const Standard_Real d) ;





protected:





private:




friend class BRepMesh_Vertex;
friend class BRepMesh_Edge;
friend class BRepMesh_Triangle;
friend class BRepMesh_ShapeTool;
friend class BRepMesh_Circ;
friend class BRepMesh_DiscretRoot;
friend class BRepMesh_DiscretFactory;
friend class BRepMesh_ComparatorOfVertexOfDelaun;
friend class BRepMesh_ComparatorOfIndexedVertexOfDelaun;
friend class BRepMesh_SelectorOfDataStructureOfDelaun;
friend class BRepMesh_Delaun;
friend class BRepMesh_DataStructureOfDelaun;
friend class BRepMesh_CircleTool;
friend class BRepMesh_Array1OfVertexOfDelaun;
friend class BRepMesh_HArray1OfVertexOfDelaun;
friend class BRepMesh_HeapSortVertexOfDelaun;
friend class BRepMesh_HeapSortIndexedVertexOfDelaun;
friend class BRepMesh_NodeHasherOfDataStructureOfDelaun;
friend class BRepMesh_LinkHasherOfDataStructureOfDelaun;
friend class BRepMesh_ElemHasherOfDataStructureOfDelaun;
friend class BRepMesh_IDMapOfNodeOfDataStructureOfDelaun;
friend class BRepMesh_IDMapOfLinkOfDataStructureOfDelaun;
friend class BRepMesh_IMapOfElementOfDataStructureOfDelaun;
friend class BRepMesh_DataMapOfVertexInteger;
friend class BRepMesh_ListOfVertex;
friend class BRepMesh_ListOfXY;
friend class BRepMesh_DataMapOfIntegerListOfXY;
friend class BRepMesh_VertexHasher;
friend class BRepMesh_IndexedMapOfVertex;
friend class BRepMesh_DataMapOfShapeReal;
friend class BRepMesh_BiPoint;
friend class BRepMesh_Array1OfBiPoint;
friend class BRepMesh_FastDiscretFace;
friend class BRepMesh_FastDiscret;
friend class BRepMesh_FaceAttribute;
friend class BRepMesh_DataMapOfFaceAttribute;
friend class BRepMesh_Classifier;
friend class BRepMesh_IncrementalMesh;
friend class BRepMesh_GeomTool;
friend class BRepMesh_DataMapOfIntegerPnt;
friend class BRepMesh_PairOfPolygon;
friend class BRepMesh_DataMapOfShapePairOfPolygon;
friend class BRepMesh_IndexedDataMapNodeOfIDMapOfNodeOfDataStructureOfDelaun;
friend class BRepMesh_IndexedDataMapNodeOfIDMapOfLinkOfDataStructureOfDelaun;
friend class BRepMesh_IndexedMapNodeOfIMapOfElementOfDataStructureOfDelaun;
friend class BRepMesh_DataMapNodeOfDataMapOfVertexInteger;
friend class BRepMesh_DataMapIteratorOfDataMapOfVertexInteger;
friend class BRepMesh_ListNodeOfListOfVertex;
friend class BRepMesh_ListIteratorOfListOfVertex;
friend class BRepMesh_ListNodeOfListOfXY;
friend class BRepMesh_ListIteratorOfListOfXY;
friend class BRepMesh_DataMapNodeOfDataMapOfIntegerListOfXY;
friend class BRepMesh_DataMapIteratorOfDataMapOfIntegerListOfXY;
friend class BRepMesh_IndexedMapNodeOfIndexedMapOfVertex;
friend class BRepMesh_DataMapNodeOfDataMapOfShapeReal;
friend class BRepMesh_DataMapIteratorOfDataMapOfShapeReal;
friend class BRepMesh_DataMapNodeOfDataMapOfFaceAttribute;
friend class BRepMesh_DataMapIteratorOfDataMapOfFaceAttribute;
friend class BRepMesh_DataMapNodeOfDataMapOfIntegerPnt;
friend class BRepMesh_DataMapIteratorOfDataMapOfIntegerPnt;
friend class BRepMesh_DataMapNodeOfDataMapOfShapePairOfPolygon;
friend class BRepMesh_DataMapIteratorOfDataMapOfShapePairOfPolygon;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
