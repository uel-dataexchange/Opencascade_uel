// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_StdMapNodeOfMapOfCurveSample_HeaderFile
#define _IntTools_StdMapNodeOfMapOfCurveSample_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IntTools_StdMapNodeOfMapOfCurveSample_HeaderFile
#include <Handle_IntTools_StdMapNodeOfMapOfCurveSample.hxx>
#endif

#ifndef _IntTools_CurveRangeSample_HeaderFile
#include <IntTools_CurveRangeSample.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class IntTools_CurveRangeSample;
class IntTools_CurveRangeSampleMapHasher;
class IntTools_MapOfCurveSample;
class IntTools_MapIteratorOfMapOfCurveSample;



class IntTools_StdMapNodeOfMapOfCurveSample : public TCollection_MapNode {

public:

  
      IntTools_StdMapNodeOfMapOfCurveSample(const IntTools_CurveRangeSample& K,const TCollection_MapNodePtr& n);
  
        IntTools_CurveRangeSample& Key() const;




  DEFINE_STANDARD_RTTI(IntTools_StdMapNodeOfMapOfCurveSample)

protected:




private: 


IntTools_CurveRangeSample myKey;


};

#define TheKey IntTools_CurveRangeSample
#define TheKey_hxx <IntTools_CurveRangeSample.hxx>
#define Hasher IntTools_CurveRangeSampleMapHasher
#define Hasher_hxx <IntTools_CurveRangeSampleMapHasher.hxx>
#define TCollection_StdMapNode IntTools_StdMapNodeOfMapOfCurveSample
#define TCollection_StdMapNode_hxx <IntTools_StdMapNodeOfMapOfCurveSample.hxx>
#define TCollection_MapIterator IntTools_MapIteratorOfMapOfCurveSample
#define TCollection_MapIterator_hxx <IntTools_MapIteratorOfMapOfCurveSample.hxx>
#define Handle_TCollection_StdMapNode Handle_IntTools_StdMapNodeOfMapOfCurveSample
#define TCollection_StdMapNode_Type_() IntTools_StdMapNodeOfMapOfCurveSample_Type_()
#define TCollection_Map IntTools_MapOfCurveSample
#define TCollection_Map_hxx <IntTools_MapOfCurveSample.hxx>

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
