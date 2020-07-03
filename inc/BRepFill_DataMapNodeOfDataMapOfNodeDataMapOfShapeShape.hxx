// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_DataMapNodeOfDataMapOfNodeDataMapOfShapeShape_HeaderFile
#define _BRepFill_DataMapNodeOfDataMapOfNodeDataMapOfShapeShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BRepFill_DataMapNodeOfDataMapOfNodeDataMapOfShapeShape_HeaderFile
#include <Handle_BRepFill_DataMapNodeOfDataMapOfNodeDataMapOfShapeShape.hxx>
#endif

#ifndef _Handle_MAT_Node_HeaderFile
#include <Handle_MAT_Node.hxx>
#endif
#ifndef _TopTools_DataMapOfShapeShape_HeaderFile
#include <TopTools_DataMapOfShapeShape.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class MAT_Node;
class TopTools_DataMapOfShapeShape;
class TColStd_MapTransientHasher;
class BRepFill_DataMapOfNodeDataMapOfShapeShape;
class BRepFill_DataMapIteratorOfDataMapOfNodeDataMapOfShapeShape;



class BRepFill_DataMapNodeOfDataMapOfNodeDataMapOfShapeShape : public TCollection_MapNode {

public:

  
      BRepFill_DataMapNodeOfDataMapOfNodeDataMapOfShapeShape(const Handle(MAT_Node)& K,const TopTools_DataMapOfShapeShape& I,const TCollection_MapNodePtr& n);
  
        Handle_MAT_Node& Key() const;
  
        TopTools_DataMapOfShapeShape& Value() const;




  DEFINE_STANDARD_RTTI(BRepFill_DataMapNodeOfDataMapOfNodeDataMapOfShapeShape)

protected:




private: 


Handle_MAT_Node myKey;
TopTools_DataMapOfShapeShape myValue;


};

#define TheKey Handle_MAT_Node
#define TheKey_hxx <MAT_Node.hxx>
#define TheItem TopTools_DataMapOfShapeShape
#define TheItem_hxx <TopTools_DataMapOfShapeShape.hxx>
#define Hasher TColStd_MapTransientHasher
#define Hasher_hxx <TColStd_MapTransientHasher.hxx>
#define TCollection_DataMapNode BRepFill_DataMapNodeOfDataMapOfNodeDataMapOfShapeShape
#define TCollection_DataMapNode_hxx <BRepFill_DataMapNodeOfDataMapOfNodeDataMapOfShapeShape.hxx>
#define TCollection_DataMapIterator BRepFill_DataMapIteratorOfDataMapOfNodeDataMapOfShapeShape
#define TCollection_DataMapIterator_hxx <BRepFill_DataMapIteratorOfDataMapOfNodeDataMapOfShapeShape.hxx>
#define Handle_TCollection_DataMapNode Handle_BRepFill_DataMapNodeOfDataMapOfNodeDataMapOfShapeShape
#define TCollection_DataMapNode_Type_() BRepFill_DataMapNodeOfDataMapOfNodeDataMapOfShapeShape_Type_()
#define TCollection_DataMap BRepFill_DataMapOfNodeDataMapOfShapeShape
#define TCollection_DataMap_hxx <BRepFill_DataMapOfNodeDataMapOfShapeShape.hxx>

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
