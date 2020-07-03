// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Storage_DataMapNodeOfMapOfCallBack_HeaderFile
#define _Storage_DataMapNodeOfMapOfCallBack_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Storage_DataMapNodeOfMapOfCallBack_HeaderFile
#include <Handle_Storage_DataMapNodeOfMapOfCallBack.hxx>
#endif

#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _Handle_Storage_TypedCallBack_HeaderFile
#include <Handle_Storage_TypedCallBack.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class Storage_TypedCallBack;
class TCollection_AsciiString;
class Storage_MapOfCallBack;
class Storage_DataMapIteratorOfMapOfCallBack;



class Storage_DataMapNodeOfMapOfCallBack : public TCollection_MapNode {

public:

  
      Storage_DataMapNodeOfMapOfCallBack(const TCollection_AsciiString& K,const Handle(Storage_TypedCallBack)& I,const TCollection_MapNodePtr& n);
  
        TCollection_AsciiString& Key() const;
  
        Handle_Storage_TypedCallBack& Value() const;




  DEFINE_STANDARD_RTTI(Storage_DataMapNodeOfMapOfCallBack)

protected:




private: 


TCollection_AsciiString myKey;
Handle_Storage_TypedCallBack myValue;


};

#define TheKey TCollection_AsciiString
#define TheKey_hxx <TCollection_AsciiString.hxx>
#define TheItem Handle_Storage_TypedCallBack
#define TheItem_hxx <Storage_TypedCallBack.hxx>
#define Hasher TCollection_AsciiString
#define Hasher_hxx <TCollection_AsciiString.hxx>
#define TCollection_DataMapNode Storage_DataMapNodeOfMapOfCallBack
#define TCollection_DataMapNode_hxx <Storage_DataMapNodeOfMapOfCallBack.hxx>
#define TCollection_DataMapIterator Storage_DataMapIteratorOfMapOfCallBack
#define TCollection_DataMapIterator_hxx <Storage_DataMapIteratorOfMapOfCallBack.hxx>
#define Handle_TCollection_DataMapNode Handle_Storage_DataMapNodeOfMapOfCallBack
#define TCollection_DataMapNode_Type_() Storage_DataMapNodeOfMapOfCallBack_Type_()
#define TCollection_DataMap Storage_MapOfCallBack
#define TCollection_DataMap_hxx <Storage_MapOfCallBack.hxx>

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
