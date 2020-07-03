// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_IndexedDataMapNodeOfIndexedDataMapOfTransientAddress_HeaderFile
#define _IntTools_IndexedDataMapNodeOfIndexedDataMapOfTransientAddress_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IntTools_IndexedDataMapNodeOfIndexedDataMapOfTransientAddress_HeaderFile
#include <Handle_IntTools_IndexedDataMapNodeOfIndexedDataMapOfTransientAddress.hxx>
#endif

#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
class Standard_Transient;
class TColStd_MapTransientHasher;
class IntTools_IndexedDataMapOfTransientAddress;



class IntTools_IndexedDataMapNodeOfIndexedDataMapOfTransientAddress : public TCollection_MapNode {

public:

  
      IntTools_IndexedDataMapNodeOfIndexedDataMapOfTransientAddress(const Handle(Standard_Transient)& K1,const Standard_Integer K2,const Standard_Address& I,const TCollection_MapNodePtr& n1,const TCollection_MapNodePtr& n2);
  
        Handle_Standard_Transient& Key1() const;
  
        Standard_Integer& Key2() const;
  
        TCollection_MapNodePtr& Next2() const;
  
        Standard_Address& Value() const;




  DEFINE_STANDARD_RTTI(IntTools_IndexedDataMapNodeOfIndexedDataMapOfTransientAddress)

protected:




private: 


Handle_Standard_Transient myKey1;
Standard_Integer myKey2;
Standard_Address myValue;
TCollection_MapNodePtr myNext2;


};

#define TheKey Handle_Standard_Transient
#define TheKey_hxx <Standard_Transient.hxx>
#define TheItem Standard_Address
#define TheItem_hxx <Standard_Address.hxx>
#define Hasher TColStd_MapTransientHasher
#define Hasher_hxx <TColStd_MapTransientHasher.hxx>
#define TCollection_IndexedDataMapNode IntTools_IndexedDataMapNodeOfIndexedDataMapOfTransientAddress
#define TCollection_IndexedDataMapNode_hxx <IntTools_IndexedDataMapNodeOfIndexedDataMapOfTransientAddress.hxx>
#define Handle_TCollection_IndexedDataMapNode Handle_IntTools_IndexedDataMapNodeOfIndexedDataMapOfTransientAddress
#define TCollection_IndexedDataMapNode_Type_() IntTools_IndexedDataMapNodeOfIndexedDataMapOfTransientAddress_Type_()
#define TCollection_IndexedDataMap IntTools_IndexedDataMapOfTransientAddress
#define TCollection_IndexedDataMap_hxx <IntTools_IndexedDataMapOfTransientAddress.hxx>

#include <TCollection_IndexedDataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_IndexedDataMapNode
#undef TCollection_IndexedDataMapNode_hxx
#undef Handle_TCollection_IndexedDataMapNode
#undef TCollection_IndexedDataMapNode_Type_
#undef TCollection_IndexedDataMap
#undef TCollection_IndexedDataMap_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
