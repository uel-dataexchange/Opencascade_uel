// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_StdMapNodeOfMapOfOrientedShape_HeaderFile
#define _TopTools_StdMapNodeOfMapOfOrientedShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TopTools_StdMapNodeOfMapOfOrientedShape_HeaderFile
#include <Handle_TopTools_StdMapNodeOfMapOfOrientedShape.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class TopoDS_Shape;
class TopTools_OrientedShapeMapHasher;
class TopTools_MapOfOrientedShape;
class TopTools_MapIteratorOfMapOfOrientedShape;



class TopTools_StdMapNodeOfMapOfOrientedShape : public TCollection_MapNode {

public:

  
      TopTools_StdMapNodeOfMapOfOrientedShape(const TopoDS_Shape& K,const TCollection_MapNodePtr& n);
  
        TopoDS_Shape& Key() const;




  DEFINE_STANDARD_RTTI(TopTools_StdMapNodeOfMapOfOrientedShape)

protected:




private: 


TopoDS_Shape myKey;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define Hasher TopTools_OrientedShapeMapHasher
#define Hasher_hxx <TopTools_OrientedShapeMapHasher.hxx>
#define TCollection_StdMapNode TopTools_StdMapNodeOfMapOfOrientedShape
#define TCollection_StdMapNode_hxx <TopTools_StdMapNodeOfMapOfOrientedShape.hxx>
#define TCollection_MapIterator TopTools_MapIteratorOfMapOfOrientedShape
#define TCollection_MapIterator_hxx <TopTools_MapIteratorOfMapOfOrientedShape.hxx>
#define Handle_TCollection_StdMapNode Handle_TopTools_StdMapNodeOfMapOfOrientedShape
#define TCollection_StdMapNode_Type_() TopTools_StdMapNodeOfMapOfOrientedShape_Type_()
#define TCollection_Map TopTools_MapOfOrientedShape
#define TCollection_Map_hxx <TopTools_MapOfOrientedShape.hxx>

#include <TCollection_StdMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_StdMapNode
#undef TCollection_StdMapNode_hxx
#undef TCollection_MapIterator
#undef TCollection_MapIterator_hxx
#undef Handle_TCollection_StdMapNode
#undef TCollection_StdMapNode_Type_
#undef TCollection_Map
#undef TCollection_Map_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
