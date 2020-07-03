// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SelectMgr_DataMapNodeOfDataMapOfIntegerSensitive_HeaderFile
#define _SelectMgr_DataMapNodeOfDataMapOfIntegerSensitive_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_SelectMgr_DataMapNodeOfDataMapOfIntegerSensitive_HeaderFile
#include <Handle_SelectMgr_DataMapNodeOfDataMapOfIntegerSensitive.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_SelectBasics_SensitiveEntity_HeaderFile
#include <Handle_SelectBasics_SensitiveEntity.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class SelectBasics_SensitiveEntity;
class TColStd_MapIntegerHasher;
class SelectMgr_DataMapOfIntegerSensitive;
class SelectMgr_DataMapIteratorOfDataMapOfIntegerSensitive;



class SelectMgr_DataMapNodeOfDataMapOfIntegerSensitive : public TCollection_MapNode {

public:

  
      SelectMgr_DataMapNodeOfDataMapOfIntegerSensitive(const Standard_Integer& K,const Handle(SelectBasics_SensitiveEntity)& I,const TCollection_MapNodePtr& n);
  
        Standard_Integer& Key() const;
  
        Handle_SelectBasics_SensitiveEntity& Value() const;




  DEFINE_STANDARD_RTTI(SelectMgr_DataMapNodeOfDataMapOfIntegerSensitive)

protected:




private: 


Standard_Integer myKey;
Handle_SelectBasics_SensitiveEntity myValue;


};

#define TheKey Standard_Integer
#define TheKey_hxx <Standard_Integer.hxx>
#define TheItem Handle_SelectBasics_SensitiveEntity
#define TheItem_hxx <SelectBasics_SensitiveEntity.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <TColStd_MapIntegerHasher.hxx>
#define TCollection_DataMapNode SelectMgr_DataMapNodeOfDataMapOfIntegerSensitive
#define TCollection_DataMapNode_hxx <SelectMgr_DataMapNodeOfDataMapOfIntegerSensitive.hxx>
#define TCollection_DataMapIterator SelectMgr_DataMapIteratorOfDataMapOfIntegerSensitive
#define TCollection_DataMapIterator_hxx <SelectMgr_DataMapIteratorOfDataMapOfIntegerSensitive.hxx>
#define Handle_TCollection_DataMapNode Handle_SelectMgr_DataMapNodeOfDataMapOfIntegerSensitive
#define TCollection_DataMapNode_Type_() SelectMgr_DataMapNodeOfDataMapOfIntegerSensitive_Type_()
#define TCollection_DataMap SelectMgr_DataMapOfIntegerSensitive
#define TCollection_DataMap_hxx <SelectMgr_DataMapOfIntegerSensitive.hxx>

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
