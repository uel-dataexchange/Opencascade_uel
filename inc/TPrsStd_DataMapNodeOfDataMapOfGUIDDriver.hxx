// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TPrsStd_DataMapNodeOfDataMapOfGUIDDriver_HeaderFile
#define _TPrsStd_DataMapNodeOfDataMapOfGUIDDriver_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TPrsStd_DataMapNodeOfDataMapOfGUIDDriver_HeaderFile
#include <Handle_TPrsStd_DataMapNodeOfDataMapOfGUIDDriver.hxx>
#endif

#ifndef _Standard_GUID_HeaderFile
#include <Standard_GUID.hxx>
#endif
#ifndef _Handle_TPrsStd_Driver_HeaderFile
#include <Handle_TPrsStd_Driver.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class TPrsStd_Driver;
class Standard_GUID;
class TPrsStd_DataMapOfGUIDDriver;
class TPrsStd_DataMapIteratorOfDataMapOfGUIDDriver;



class TPrsStd_DataMapNodeOfDataMapOfGUIDDriver : public TCollection_MapNode {

public:

  
      TPrsStd_DataMapNodeOfDataMapOfGUIDDriver(const Standard_GUID& K,const Handle(TPrsStd_Driver)& I,const TCollection_MapNodePtr& n);
  
        Standard_GUID& Key() const;
  
        Handle_TPrsStd_Driver& Value() const;




  DEFINE_STANDARD_RTTI(TPrsStd_DataMapNodeOfDataMapOfGUIDDriver)

protected:




private: 


Standard_GUID myKey;
Handle_TPrsStd_Driver myValue;


};

#define TheKey Standard_GUID
#define TheKey_hxx <Standard_GUID.hxx>
#define TheItem Handle_TPrsStd_Driver
#define TheItem_hxx <TPrsStd_Driver.hxx>
#define Hasher Standard_GUID
#define Hasher_hxx <Standard_GUID.hxx>
#define TCollection_DataMapNode TPrsStd_DataMapNodeOfDataMapOfGUIDDriver
#define TCollection_DataMapNode_hxx <TPrsStd_DataMapNodeOfDataMapOfGUIDDriver.hxx>
#define TCollection_DataMapIterator TPrsStd_DataMapIteratorOfDataMapOfGUIDDriver
#define TCollection_DataMapIterator_hxx <TPrsStd_DataMapIteratorOfDataMapOfGUIDDriver.hxx>
#define Handle_TCollection_DataMapNode Handle_TPrsStd_DataMapNodeOfDataMapOfGUIDDriver
#define TCollection_DataMapNode_Type_() TPrsStd_DataMapNodeOfDataMapOfGUIDDriver_Type_()
#define TCollection_DataMap TPrsStd_DataMapOfGUIDDriver
#define TCollection_DataMap_hxx <TPrsStd_DataMapOfGUIDDriver.hxx>

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
