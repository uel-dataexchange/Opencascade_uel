// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepTools_DataMapNodeOfMapOfVertexPnt2d_HeaderFile
#define _BRepTools_DataMapNodeOfMapOfVertexPnt2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BRepTools_DataMapNodeOfMapOfVertexPnt2d_HeaderFile
#include <Handle_BRepTools_DataMapNodeOfMapOfVertexPnt2d.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _TColgp_SequenceOfPnt2d_HeaderFile
#include <TColgp_SequenceOfPnt2d.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class TopoDS_Shape;
class TColgp_SequenceOfPnt2d;
class TopTools_ShapeMapHasher;
class BRepTools_MapOfVertexPnt2d;
class BRepTools_DataMapIteratorOfMapOfVertexPnt2d;



class BRepTools_DataMapNodeOfMapOfVertexPnt2d : public TCollection_MapNode {

public:

  
      BRepTools_DataMapNodeOfMapOfVertexPnt2d(const TopoDS_Shape& K,const TColgp_SequenceOfPnt2d& I,const TCollection_MapNodePtr& n);
  
        TopoDS_Shape& Key() const;
  
        TColgp_SequenceOfPnt2d& Value() const;




  DEFINE_STANDARD_RTTI(BRepTools_DataMapNodeOfMapOfVertexPnt2d)

protected:




private: 


TopoDS_Shape myKey;
TColgp_SequenceOfPnt2d myValue;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define TheItem TColgp_SequenceOfPnt2d
#define TheItem_hxx <TColgp_SequenceOfPnt2d.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode BRepTools_DataMapNodeOfMapOfVertexPnt2d
#define TCollection_DataMapNode_hxx <BRepTools_DataMapNodeOfMapOfVertexPnt2d.hxx>
#define TCollection_DataMapIterator BRepTools_DataMapIteratorOfMapOfVertexPnt2d
#define TCollection_DataMapIterator_hxx <BRepTools_DataMapIteratorOfMapOfVertexPnt2d.hxx>
#define Handle_TCollection_DataMapNode Handle_BRepTools_DataMapNodeOfMapOfVertexPnt2d
#define TCollection_DataMapNode_Type_() BRepTools_DataMapNodeOfMapOfVertexPnt2d_Type_()
#define TCollection_DataMap BRepTools_MapOfVertexPnt2d
#define TCollection_DataMap_hxx <BRepTools_MapOfVertexPnt2d.hxx>

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
