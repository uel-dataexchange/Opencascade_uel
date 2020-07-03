// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_DataMapNodeOfMapOfCurve_HeaderFile
#define _TopOpeBRepDS_DataMapNodeOfMapOfCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TopOpeBRepDS_DataMapNodeOfMapOfCurve_HeaderFile
#include <Handle_TopOpeBRepDS_DataMapNodeOfMapOfCurve.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TopOpeBRepDS_CurveData_HeaderFile
#include <TopOpeBRepDS_CurveData.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class TopOpeBRepDS_CurveData;
class TColStd_MapIntegerHasher;
class TopOpeBRepDS_MapOfCurve;
class TopOpeBRepDS_DataMapIteratorOfMapOfCurve;



class TopOpeBRepDS_DataMapNodeOfMapOfCurve : public TCollection_MapNode {

public:

  
      TopOpeBRepDS_DataMapNodeOfMapOfCurve(const Standard_Integer& K,const TopOpeBRepDS_CurveData& I,const TCollection_MapNodePtr& n);
  
        Standard_Integer& Key() const;
  
        TopOpeBRepDS_CurveData& Value() const;




  DEFINE_STANDARD_RTTI(TopOpeBRepDS_DataMapNodeOfMapOfCurve)

protected:




private: 


Standard_Integer myKey;
TopOpeBRepDS_CurveData myValue;


};

#define TheKey Standard_Integer
#define TheKey_hxx <Standard_Integer.hxx>
#define TheItem TopOpeBRepDS_CurveData
#define TheItem_hxx <TopOpeBRepDS_CurveData.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <TColStd_MapIntegerHasher.hxx>
#define TCollection_DataMapNode TopOpeBRepDS_DataMapNodeOfMapOfCurve
#define TCollection_DataMapNode_hxx <TopOpeBRepDS_DataMapNodeOfMapOfCurve.hxx>
#define TCollection_DataMapIterator TopOpeBRepDS_DataMapIteratorOfMapOfCurve
#define TCollection_DataMapIterator_hxx <TopOpeBRepDS_DataMapIteratorOfMapOfCurve.hxx>
#define Handle_TCollection_DataMapNode Handle_TopOpeBRepDS_DataMapNodeOfMapOfCurve
#define TCollection_DataMapNode_Type_() TopOpeBRepDS_DataMapNodeOfMapOfCurve_Type_()
#define TCollection_DataMap TopOpeBRepDS_MapOfCurve
#define TCollection_DataMap_hxx <TopOpeBRepDS_MapOfCurve.hxx>

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
