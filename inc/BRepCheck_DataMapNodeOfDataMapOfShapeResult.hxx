// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepCheck_DataMapNodeOfDataMapOfShapeResult_HeaderFile
#define _BRepCheck_DataMapNodeOfDataMapOfShapeResult_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BRepCheck_DataMapNodeOfDataMapOfShapeResult_HeaderFile
#include <Handle_BRepCheck_DataMapNodeOfDataMapOfShapeResult.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _Handle_BRepCheck_Result_HeaderFile
#include <Handle_BRepCheck_Result.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class BRepCheck_Result;
class TopoDS_Shape;
class TopTools_OrientedShapeMapHasher;
class BRepCheck_DataMapOfShapeResult;
class BRepCheck_DataMapIteratorOfDataMapOfShapeResult;



class BRepCheck_DataMapNodeOfDataMapOfShapeResult : public TCollection_MapNode {

public:

  
      BRepCheck_DataMapNodeOfDataMapOfShapeResult(const TopoDS_Shape& K,const Handle(BRepCheck_Result)& I,const TCollection_MapNodePtr& n);
  
        TopoDS_Shape& Key() const;
  
        Handle_BRepCheck_Result& Value() const;




  DEFINE_STANDARD_RTTI(BRepCheck_DataMapNodeOfDataMapOfShapeResult)

protected:




private: 


TopoDS_Shape myKey;
Handle_BRepCheck_Result myValue;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define TheItem Handle_BRepCheck_Result
#define TheItem_hxx <BRepCheck_Result.hxx>
#define Hasher TopTools_OrientedShapeMapHasher
#define Hasher_hxx <TopTools_OrientedShapeMapHasher.hxx>
#define TCollection_DataMapNode BRepCheck_DataMapNodeOfDataMapOfShapeResult
#define TCollection_DataMapNode_hxx <BRepCheck_DataMapNodeOfDataMapOfShapeResult.hxx>
#define TCollection_DataMapIterator BRepCheck_DataMapIteratorOfDataMapOfShapeResult
#define TCollection_DataMapIterator_hxx <BRepCheck_DataMapIteratorOfDataMapOfShapeResult.hxx>
#define Handle_TCollection_DataMapNode Handle_BRepCheck_DataMapNodeOfDataMapOfShapeResult
#define TCollection_DataMapNode_Type_() BRepCheck_DataMapNodeOfDataMapOfShapeResult_Type_()
#define TCollection_DataMap BRepCheck_DataMapOfShapeResult
#define TCollection_DataMap_hxx <BRepCheck_DataMapOfShapeResult.hxx>

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
