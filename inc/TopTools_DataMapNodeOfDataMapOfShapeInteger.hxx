// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_DataMapNodeOfDataMapOfShapeInteger_HeaderFile
#define _TopTools_DataMapNodeOfDataMapOfShapeInteger_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TopTools_DataMapNodeOfDataMapOfShapeInteger_HeaderFile
#include <Handle_TopTools_DataMapNodeOfDataMapOfShapeInteger.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
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
class TopoDS_Shape;
class TopTools_ShapeMapHasher;
class TopTools_DataMapOfShapeInteger;
class TopTools_DataMapIteratorOfDataMapOfShapeInteger;



class TopTools_DataMapNodeOfDataMapOfShapeInteger : public TCollection_MapNode {

public:

  
      TopTools_DataMapNodeOfDataMapOfShapeInteger(const TopoDS_Shape& K,const Standard_Integer& I,const TCollection_MapNodePtr& n);
  
        TopoDS_Shape& Key() const;
  
        Standard_Integer& Value() const;




  DEFINE_STANDARD_RTTI(TopTools_DataMapNodeOfDataMapOfShapeInteger)

protected:




private: 


TopoDS_Shape myKey;
Standard_Integer myValue;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define TheItem Standard_Integer
#define TheItem_hxx <Standard_Integer.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode TopTools_DataMapNodeOfDataMapOfShapeInteger
#define TCollection_DataMapNode_hxx <TopTools_DataMapNodeOfDataMapOfShapeInteger.hxx>
#define TCollection_DataMapIterator TopTools_DataMapIteratorOfDataMapOfShapeInteger
#define TCollection_DataMapIterator_hxx <TopTools_DataMapIteratorOfDataMapOfShapeInteger.hxx>
#define Handle_TCollection_DataMapNode Handle_TopTools_DataMapNodeOfDataMapOfShapeInteger
#define TCollection_DataMapNode_Type_() TopTools_DataMapNodeOfDataMapOfShapeInteger_Type_()
#define TCollection_DataMap TopTools_DataMapOfShapeInteger
#define TCollection_DataMap_hxx <TopTools_DataMapOfShapeInteger.hxx>

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
