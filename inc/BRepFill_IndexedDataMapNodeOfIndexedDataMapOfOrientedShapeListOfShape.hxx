// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_IndexedDataMapNodeOfIndexedDataMapOfOrientedShapeListOfShape_HeaderFile
#define _BRepFill_IndexedDataMapNodeOfIndexedDataMapOfOrientedShapeListOfShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BRepFill_IndexedDataMapNodeOfIndexedDataMapOfOrientedShapeListOfShape_HeaderFile
#include <Handle_BRepFill_IndexedDataMapNodeOfIndexedDataMapOfOrientedShapeListOfShape.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TopTools_ListOfShape_HeaderFile
#include <TopTools_ListOfShape.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
class TopoDS_Shape;
class TopTools_ListOfShape;
class TopTools_OrientedShapeMapHasher;
class BRepFill_IndexedDataMapOfOrientedShapeListOfShape;



class BRepFill_IndexedDataMapNodeOfIndexedDataMapOfOrientedShapeListOfShape : public TCollection_MapNode {

public:

  
      BRepFill_IndexedDataMapNodeOfIndexedDataMapOfOrientedShapeListOfShape(const TopoDS_Shape& K1,const Standard_Integer K2,const TopTools_ListOfShape& I,const TCollection_MapNodePtr& n1,const TCollection_MapNodePtr& n2);
  
        TopoDS_Shape& Key1() const;
  
        Standard_Integer& Key2() const;
  
        TCollection_MapNodePtr& Next2() const;
  
        TopTools_ListOfShape& Value() const;




  DEFINE_STANDARD_RTTI(BRepFill_IndexedDataMapNodeOfIndexedDataMapOfOrientedShapeListOfShape)

protected:




private: 


TopoDS_Shape myKey1;
Standard_Integer myKey2;
TopTools_ListOfShape myValue;
TCollection_MapNodePtr myNext2;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define TheItem TopTools_ListOfShape
#define TheItem_hxx <TopTools_ListOfShape.hxx>
#define Hasher TopTools_OrientedShapeMapHasher
#define Hasher_hxx <TopTools_OrientedShapeMapHasher.hxx>
#define TCollection_IndexedDataMapNode BRepFill_IndexedDataMapNodeOfIndexedDataMapOfOrientedShapeListOfShape
#define TCollection_IndexedDataMapNode_hxx <BRepFill_IndexedDataMapNodeOfIndexedDataMapOfOrientedShapeListOfShape.hxx>
#define Handle_TCollection_IndexedDataMapNode Handle_BRepFill_IndexedDataMapNodeOfIndexedDataMapOfOrientedShapeListOfShape
#define TCollection_IndexedDataMapNode_Type_() BRepFill_IndexedDataMapNodeOfIndexedDataMapOfOrientedShapeListOfShape_Type_()
#define TCollection_IndexedDataMap BRepFill_IndexedDataMapOfOrientedShapeListOfShape
#define TCollection_IndexedDataMap_hxx <BRepFill_IndexedDataMapOfOrientedShapeListOfShape.hxx>

#include <TCollection_IndexedDataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_IndexedDataMapNode
#undef TCollection_IndexedDataMapNode_hxx
#undef Handle_TCollection_IndexedDataMapNode
#undef TCollection_IndexedDataMapNode_Type_
#undef TCollection_IndexedDataMap
#undef TCollection_IndexedDataMap_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
