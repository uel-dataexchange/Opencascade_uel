// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LocOpe_DataMapNodeOfDataMapOfShapePnt_HeaderFile
#define _LocOpe_DataMapNodeOfDataMapOfShapePnt_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_LocOpe_DataMapNodeOfDataMapOfShapePnt_HeaderFile
#include <Handle_LocOpe_DataMapNodeOfDataMapOfShapePnt.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class TopoDS_Shape;
class gp_Pnt;
class TopTools_ShapeMapHasher;
class LocOpe_DataMapOfShapePnt;
class LocOpe_DataMapIteratorOfDataMapOfShapePnt;



class LocOpe_DataMapNodeOfDataMapOfShapePnt : public TCollection_MapNode {

public:

  
      LocOpe_DataMapNodeOfDataMapOfShapePnt(const TopoDS_Shape& K,const gp_Pnt& I,const TCollection_MapNodePtr& n);
  
        TopoDS_Shape& Key() const;
  
        gp_Pnt& Value() const;




  DEFINE_STANDARD_RTTI(LocOpe_DataMapNodeOfDataMapOfShapePnt)

protected:




private: 


TopoDS_Shape myKey;
gp_Pnt myValue;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define TheItem gp_Pnt
#define TheItem_hxx <gp_Pnt.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode LocOpe_DataMapNodeOfDataMapOfShapePnt
#define TCollection_DataMapNode_hxx <LocOpe_DataMapNodeOfDataMapOfShapePnt.hxx>
#define TCollection_DataMapIterator LocOpe_DataMapIteratorOfDataMapOfShapePnt
#define TCollection_DataMapIterator_hxx <LocOpe_DataMapIteratorOfDataMapOfShapePnt.hxx>
#define Handle_TCollection_DataMapNode Handle_LocOpe_DataMapNodeOfDataMapOfShapePnt
#define TCollection_DataMapNode_Type_() LocOpe_DataMapNodeOfDataMapOfShapePnt_Type_()
#define TCollection_DataMap LocOpe_DataMapOfShapePnt
#define TCollection_DataMap_hxx <LocOpe_DataMapOfShapePnt.hxx>

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
