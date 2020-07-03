// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_DataMapNodeOfLabelDataMap_HeaderFile
#define _TDF_DataMapNodeOfLabelDataMap_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TDF_DataMapNodeOfLabelDataMap_HeaderFile
#include <Handle_TDF_DataMapNodeOfLabelDataMap.hxx>
#endif

#ifndef _TDF_Label_HeaderFile
#include <TDF_Label.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class TDF_Label;
class TDF_LabelMapHasher;
class TDF_LabelDataMap;
class TDF_DataMapIteratorOfLabelDataMap;



class TDF_DataMapNodeOfLabelDataMap : public TCollection_MapNode {

public:

  
      TDF_DataMapNodeOfLabelDataMap(const TDF_Label& K,const TDF_Label& I,const TCollection_MapNodePtr& n);
  
        TDF_Label& Key() const;
  
        TDF_Label& Value() const;




  DEFINE_STANDARD_RTTI(TDF_DataMapNodeOfLabelDataMap)

protected:




private: 


TDF_Label myKey;
TDF_Label myValue;


};

#define TheKey TDF_Label
#define TheKey_hxx <TDF_Label.hxx>
#define TheItem TDF_Label
#define TheItem_hxx <TDF_Label.hxx>
#define Hasher TDF_LabelMapHasher
#define Hasher_hxx <TDF_LabelMapHasher.hxx>
#define TCollection_DataMapNode TDF_DataMapNodeOfLabelDataMap
#define TCollection_DataMapNode_hxx <TDF_DataMapNodeOfLabelDataMap.hxx>
#define TCollection_DataMapIterator TDF_DataMapIteratorOfLabelDataMap
#define TCollection_DataMapIterator_hxx <TDF_DataMapIteratorOfLabelDataMap.hxx>
#define Handle_TCollection_DataMapNode Handle_TDF_DataMapNodeOfLabelDataMap
#define TCollection_DataMapNode_Type_() TDF_DataMapNodeOfLabelDataMap_Type_()
#define TCollection_DataMap TDF_LabelDataMap
#define TCollection_DataMap_hxx <TDF_LabelDataMap.hxx>

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
