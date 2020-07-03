// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTools_IndexedMapNodeOfIMapOfPaveBlock_HeaderFile
#define _BOPTools_IndexedMapNodeOfIMapOfPaveBlock_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BOPTools_IndexedMapNodeOfIMapOfPaveBlock_HeaderFile
#include <Handle_BOPTools_IndexedMapNodeOfIMapOfPaveBlock.hxx>
#endif

#ifndef _BOPTools_PaveBlock_HeaderFile
#include <BOPTools_PaveBlock.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
class BOPTools_PaveBlock;
class BOPTools_PaveBlockMapHasher;
class BOPTools_IMapOfPaveBlock;



class BOPTools_IndexedMapNodeOfIMapOfPaveBlock : public TCollection_MapNode {

public:

  
      BOPTools_IndexedMapNodeOfIMapOfPaveBlock(const BOPTools_PaveBlock& K1,const Standard_Integer K2,const TCollection_MapNodePtr& n1,const TCollection_MapNodePtr& n2);
  
        BOPTools_PaveBlock& Key1() const;
  
        Standard_Integer& Key2() const;
  
        TCollection_MapNodePtr& Next2() const;




  DEFINE_STANDARD_RTTI(BOPTools_IndexedMapNodeOfIMapOfPaveBlock)

protected:




private: 


BOPTools_PaveBlock myKey1;
Standard_Integer myKey2;
TCollection_MapNodePtr myNext2;


};

#define TheKey BOPTools_PaveBlock
#define TheKey_hxx <BOPTools_PaveBlock.hxx>
#define Hasher BOPTools_PaveBlockMapHasher
#define Hasher_hxx <BOPTools_PaveBlockMapHasher.hxx>
#define TCollection_IndexedMapNode BOPTools_IndexedMapNodeOfIMapOfPaveBlock
#define TCollection_IndexedMapNode_hxx <BOPTools_IndexedMapNodeOfIMapOfPaveBlock.hxx>
#define Handle_TCollection_IndexedMapNode Handle_BOPTools_IndexedMapNodeOfIMapOfPaveBlock
#define TCollection_IndexedMapNode_Type_() BOPTools_IndexedMapNodeOfIMapOfPaveBlock_Type_()
#define TCollection_IndexedMap BOPTools_IMapOfPaveBlock
#define TCollection_IndexedMap_hxx <BOPTools_IMapOfPaveBlock.hxx>

#include <TCollection_IndexedMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_IndexedMapNode
#undef TCollection_IndexedMapNode_hxx
#undef Handle_TCollection_IndexedMapNode
#undef TCollection_IndexedMapNode_Type_
#undef TCollection_IndexedMap
#undef TCollection_IndexedMap_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
