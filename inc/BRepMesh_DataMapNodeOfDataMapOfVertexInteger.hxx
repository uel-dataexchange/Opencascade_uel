// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepMesh_DataMapNodeOfDataMapOfVertexInteger_HeaderFile
#define _BRepMesh_DataMapNodeOfDataMapOfVertexInteger_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BRepMesh_DataMapNodeOfDataMapOfVertexInteger_HeaderFile
#include <Handle_BRepMesh_DataMapNodeOfDataMapOfVertexInteger.hxx>
#endif

#ifndef _TopoDS_Vertex_HeaderFile
#include <TopoDS_Vertex.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class TopoDS_Vertex;
class TopTools_ShapeMapHasher;
class BRepMesh_DataMapOfVertexInteger;
class BRepMesh_DataMapIteratorOfDataMapOfVertexInteger;



class BRepMesh_DataMapNodeOfDataMapOfVertexInteger : public TCollection_MapNode {

public:

  
      BRepMesh_DataMapNodeOfDataMapOfVertexInteger(const TopoDS_Vertex& K,const Standard_Integer& I,const TCollection_MapNodePtr& n);
  
        TopoDS_Vertex& Key() const;
  
        Standard_Integer& Value() const;




  DEFINE_STANDARD_RTTI(BRepMesh_DataMapNodeOfDataMapOfVertexInteger)

protected:




private: 


TopoDS_Vertex myKey;
Standard_Integer myValue;


};

#define TheKey TopoDS_Vertex
#define TheKey_hxx <TopoDS_Vertex.hxx>
#define TheItem Standard_Integer
#define TheItem_hxx <Standard_Integer.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode BRepMesh_DataMapNodeOfDataMapOfVertexInteger
#define TCollection_DataMapNode_hxx <BRepMesh_DataMapNodeOfDataMapOfVertexInteger.hxx>
#define TCollection_DataMapIterator BRepMesh_DataMapIteratorOfDataMapOfVertexInteger
#define TCollection_DataMapIterator_hxx <BRepMesh_DataMapIteratorOfDataMapOfVertexInteger.hxx>
#define Handle_TCollection_DataMapNode Handle_BRepMesh_DataMapNodeOfDataMapOfVertexInteger
#define TCollection_DataMapNode_Type_() BRepMesh_DataMapNodeOfDataMapOfVertexInteger_Type_()
#define TCollection_DataMap BRepMesh_DataMapOfVertexInteger
#define TCollection_DataMap_hxx <BRepMesh_DataMapOfVertexInteger.hxx>

#include <TCollection_DataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_DataMapNode
#undef TCollection_DataMapNode_hxx
#undef TCollection_DataMapIterator
#undef TCollection_DataMapIterator_hxx
#undef Handle_TCollection_DataMapNode
#undef TCollection_DataMapNode_Type_
#undef TCollection_DataMap
#undef TCollection_DataMap_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
