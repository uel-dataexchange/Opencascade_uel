// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Plugin_DataMapNodeOfMapOfFunctions_HeaderFile
#define _Plugin_DataMapNodeOfMapOfFunctions_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Plugin_DataMapNodeOfMapOfFunctions_HeaderFile
#include <Handle_Plugin_DataMapNodeOfMapOfFunctions.hxx>
#endif

#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _OSD_Function_HeaderFile
#include <OSD_Function.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class TCollection_AsciiString;
class Plugin_MapOfFunctions;
class Plugin_DataMapIteratorOfMapOfFunctions;



class Plugin_DataMapNodeOfMapOfFunctions : public TCollection_MapNode {

public:

  
      Plugin_DataMapNodeOfMapOfFunctions(const TCollection_AsciiString& K,const OSD_Function& I,const TCollection_MapNodePtr& n);
  
        TCollection_AsciiString& Key() const;
  
        OSD_Function& Value() const;




  DEFINE_STANDARD_RTTI(Plugin_DataMapNodeOfMapOfFunctions)

protected:




private: 


TCollection_AsciiString myKey;
OSD_Function myValue;


};

#define TheKey TCollection_AsciiString
#define TheKey_hxx <TCollection_AsciiString.hxx>
#define TheItem OSD_Function
#define TheItem_hxx <OSD_Function.hxx>
#define Hasher TCollection_AsciiString
#define Hasher_hxx <TCollection_AsciiString.hxx>
#define TCollection_DataMapNode Plugin_DataMapNodeOfMapOfFunctions
#define TCollection_DataMapNode_hxx <Plugin_DataMapNodeOfMapOfFunctions.hxx>
#define TCollection_DataMapIterator Plugin_DataMapIteratorOfMapOfFunctions
#define TCollection_DataMapIterator_hxx <Plugin_DataMapIteratorOfMapOfFunctions.hxx>
#define Handle_TCollection_DataMapNode Handle_Plugin_DataMapNodeOfMapOfFunctions
#define TCollection_DataMapNode_Type_() Plugin_DataMapNodeOfMapOfFunctions_Type_()
#define TCollection_DataMap Plugin_MapOfFunctions
#define TCollection_DataMap_hxx <Plugin_MapOfFunctions.hxx>

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
