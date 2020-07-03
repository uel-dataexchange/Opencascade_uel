// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <BiTgte_DataMapNodeOfDataMapOfShapeBox.hxx>

#ifndef _Standard_Type_HeaderFile
#include <Standard_Type.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _Bnd_Box_HeaderFile
#include <Bnd_Box.hxx>
#endif
#ifndef _TopTools_ShapeMapHasher_HeaderFile
#include <TopTools_ShapeMapHasher.hxx>
#endif
#ifndef _BiTgte_DataMapOfShapeBox_HeaderFile
#include <BiTgte_DataMapOfShapeBox.hxx>
#endif
#ifndef _BiTgte_DataMapIteratorOfDataMapOfShapeBox_HeaderFile
#include <BiTgte_DataMapIteratorOfDataMapOfShapeBox.hxx>
#endif

 


IMPLEMENT_STANDARD_TYPE(BiTgte_DataMapNodeOfDataMapOfShapeBox)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(BiTgte_DataMapNodeOfDataMapOfShapeBox)


IMPLEMENT_DOWNCAST(BiTgte_DataMapNodeOfDataMapOfShapeBox,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(BiTgte_DataMapNodeOfDataMapOfShapeBox)


#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define TheItem Bnd_Box
#define TheItem_hxx <Bnd_Box.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode BiTgte_DataMapNodeOfDataMapOfShapeBox
#define TCollection_DataMapNode_hxx <BiTgte_DataMapNodeOfDataMapOfShapeBox.hxx>
#define TCollection_DataMapIterator BiTgte_DataMapIteratorOfDataMapOfShapeBox
#define TCollection_DataMapIterator_hxx <BiTgte_DataMapIteratorOfDataMapOfShapeBox.hxx>
#define Handle_TCollection_DataMapNode Handle_BiTgte_DataMapNodeOfDataMapOfShapeBox
#define TCollection_DataMapNode_Type_() BiTgte_DataMapNodeOfDataMapOfShapeBox_Type_()
#define TCollection_DataMap BiTgte_DataMapOfShapeBox
#define TCollection_DataMap_hxx <BiTgte_DataMapOfShapeBox.hxx>
#include <TCollection_DataMapNode.gxx>

