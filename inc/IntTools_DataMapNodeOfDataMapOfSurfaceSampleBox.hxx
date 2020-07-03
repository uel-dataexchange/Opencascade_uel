// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_DataMapNodeOfDataMapOfSurfaceSampleBox_HeaderFile
#define _IntTools_DataMapNodeOfDataMapOfSurfaceSampleBox_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IntTools_DataMapNodeOfDataMapOfSurfaceSampleBox_HeaderFile
#include <Handle_IntTools_DataMapNodeOfDataMapOfSurfaceSampleBox.hxx>
#endif

#ifndef _IntTools_SurfaceRangeSample_HeaderFile
#include <IntTools_SurfaceRangeSample.hxx>
#endif
#ifndef _Bnd_Box_HeaderFile
#include <Bnd_Box.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class IntTools_SurfaceRangeSample;
class Bnd_Box;
class IntTools_SurfaceRangeSampleMapHasher;
class IntTools_DataMapOfSurfaceSampleBox;
class IntTools_DataMapIteratorOfDataMapOfSurfaceSampleBox;



class IntTools_DataMapNodeOfDataMapOfSurfaceSampleBox : public TCollection_MapNode {

public:

  
      IntTools_DataMapNodeOfDataMapOfSurfaceSampleBox(const IntTools_SurfaceRangeSample& K,const Bnd_Box& I,const TCollection_MapNodePtr& n);
  
        IntTools_SurfaceRangeSample& Key() const;
  
        Bnd_Box& Value() const;




  DEFINE_STANDARD_RTTI(IntTools_DataMapNodeOfDataMapOfSurfaceSampleBox)

protected:




private: 


IntTools_SurfaceRangeSample myKey;
Bnd_Box myValue;


};

#define TheKey IntTools_SurfaceRangeSample
#define TheKey_hxx <IntTools_SurfaceRangeSample.hxx>
#define TheItem Bnd_Box
#define TheItem_hxx <Bnd_Box.hxx>
#define Hasher IntTools_SurfaceRangeSampleMapHasher
#define Hasher_hxx <IntTools_SurfaceRangeSampleMapHasher.hxx>
#define TCollection_DataMapNode IntTools_DataMapNodeOfDataMapOfSurfaceSampleBox
#define TCollection_DataMapNode_hxx <IntTools_DataMapNodeOfDataMapOfSurfaceSampleBox.hxx>
#define TCollection_DataMapIterator IntTools_DataMapIteratorOfDataMapOfSurfaceSampleBox
#define TCollection_DataMapIterator_hxx <IntTools_DataMapIteratorOfDataMapOfSurfaceSampleBox.hxx>
#define Handle_TCollection_DataMapNode Handle_IntTools_DataMapNodeOfDataMapOfSurfaceSampleBox
#define TCollection_DataMapNode_Type_() IntTools_DataMapNodeOfDataMapOfSurfaceSampleBox_Type_()
#define TCollection_DataMap IntTools_DataMapOfSurfaceSampleBox
#define TCollection_DataMap_hxx <IntTools_DataMapOfSurfaceSampleBox.hxx>

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
