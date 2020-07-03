// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SelectMgr_DataMapNodeOfDataMapOfObjectSelectors_HeaderFile
#define _SelectMgr_DataMapNodeOfDataMapOfObjectSelectors_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_SelectMgr_DataMapNodeOfDataMapOfObjectSelectors_HeaderFile
#include <Handle_SelectMgr_DataMapNodeOfDataMapOfObjectSelectors.hxx>
#endif

#ifndef _Handle_SelectMgr_SelectableObject_HeaderFile
#include <Handle_SelectMgr_SelectableObject.hxx>
#endif
#ifndef _SelectMgr_SequenceOfSelector_HeaderFile
#include <SelectMgr_SequenceOfSelector.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class SelectMgr_SelectableObject;
class SelectMgr_SequenceOfSelector;
class TColStd_MapTransientHasher;
class SelectMgr_DataMapOfObjectSelectors;
class SelectMgr_DataMapIteratorOfDataMapOfObjectSelectors;



class SelectMgr_DataMapNodeOfDataMapOfObjectSelectors : public TCollection_MapNode {

public:

  
      SelectMgr_DataMapNodeOfDataMapOfObjectSelectors(const Handle(SelectMgr_SelectableObject)& K,const SelectMgr_SequenceOfSelector& I,const TCollection_MapNodePtr& n);
  
        Handle_SelectMgr_SelectableObject& Key() const;
  
        SelectMgr_SequenceOfSelector& Value() const;




  DEFINE_STANDARD_RTTI(SelectMgr_DataMapNodeOfDataMapOfObjectSelectors)

protected:




private: 


Handle_SelectMgr_SelectableObject myKey;
SelectMgr_SequenceOfSelector myValue;


};

#define TheKey Handle_SelectMgr_SelectableObject
#define TheKey_hxx <SelectMgr_SelectableObject.hxx>
#define TheItem SelectMgr_SequenceOfSelector
#define TheItem_hxx <SelectMgr_SequenceOfSelector.hxx>
#define Hasher TColStd_MapTransientHasher
#define Hasher_hxx <TColStd_MapTransientHasher.hxx>
#define TCollection_DataMapNode SelectMgr_DataMapNodeOfDataMapOfObjectSelectors
#define TCollection_DataMapNode_hxx <SelectMgr_DataMapNodeOfDataMapOfObjectSelectors.hxx>
#define TCollection_DataMapIterator SelectMgr_DataMapIteratorOfDataMapOfObjectSelectors
#define TCollection_DataMapIterator_hxx <SelectMgr_DataMapIteratorOfDataMapOfObjectSelectors.hxx>
#define Handle_TCollection_DataMapNode Handle_SelectMgr_DataMapNodeOfDataMapOfObjectSelectors
#define TCollection_DataMapNode_Type_() SelectMgr_DataMapNodeOfDataMapOfObjectSelectors_Type_()
#define TCollection_DataMap SelectMgr_DataMapOfObjectSelectors
#define TCollection_DataMap_hxx <SelectMgr_DataMapOfObjectSelectors.hxx>

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
