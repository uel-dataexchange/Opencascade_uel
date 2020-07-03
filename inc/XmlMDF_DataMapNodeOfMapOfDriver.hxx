// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlMDF_DataMapNodeOfMapOfDriver_HeaderFile
#define _XmlMDF_DataMapNodeOfMapOfDriver_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_XmlMDF_DataMapNodeOfMapOfDriver_HeaderFile
#include <Handle_XmlMDF_DataMapNodeOfMapOfDriver.hxx>
#endif

#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _Handle_XmlMDF_ADriver_HeaderFile
#include <Handle_XmlMDF_ADriver.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class XmlMDF_ADriver;
class TCollection_AsciiString;
class XmlMDF_MapOfDriver;
class XmlMDF_DataMapIteratorOfMapOfDriver;



class XmlMDF_DataMapNodeOfMapOfDriver : public TCollection_MapNode {

public:

  
      XmlMDF_DataMapNodeOfMapOfDriver(const TCollection_AsciiString& K,const Handle(XmlMDF_ADriver)& I,const TCollection_MapNodePtr& n);
  
        TCollection_AsciiString& Key() const;
  
        Handle_XmlMDF_ADriver& Value() const;




  DEFINE_STANDARD_RTTI(XmlMDF_DataMapNodeOfMapOfDriver)

protected:




private: 


TCollection_AsciiString myKey;
Handle_XmlMDF_ADriver myValue;


};

#define TheKey TCollection_AsciiString
#define TheKey_hxx <TCollection_AsciiString.hxx>
#define TheItem Handle_XmlMDF_ADriver
#define TheItem_hxx <XmlMDF_ADriver.hxx>
#define Hasher TCollection_AsciiString
#define Hasher_hxx <TCollection_AsciiString.hxx>
#define TCollection_DataMapNode XmlMDF_DataMapNodeOfMapOfDriver
#define TCollection_DataMapNode_hxx <XmlMDF_DataMapNodeOfMapOfDriver.hxx>
#define TCollection_DataMapIterator XmlMDF_DataMapIteratorOfMapOfDriver
#define TCollection_DataMapIterator_hxx <XmlMDF_DataMapIteratorOfMapOfDriver.hxx>
#define Handle_TCollection_DataMapNode Handle_XmlMDF_DataMapNodeOfMapOfDriver
#define TCollection_DataMapNode_Type_() XmlMDF_DataMapNodeOfMapOfDriver_Type_()
#define TCollection_DataMap XmlMDF_MapOfDriver
#define TCollection_DataMap_hxx <XmlMDF_MapOfDriver.hxx>

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
