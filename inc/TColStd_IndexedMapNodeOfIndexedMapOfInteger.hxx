// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_IndexedMapNodeOfIndexedMapOfInteger_HeaderFile
#define _TColStd_IndexedMapNodeOfIndexedMapOfInteger_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TColStd_IndexedMapNodeOfIndexedMapOfInteger_HeaderFile
#include <Handle_TColStd_IndexedMapNodeOfIndexedMapOfInteger.hxx>
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
class TColStd_MapIntegerHasher;
class TColStd_IndexedMapOfInteger;



class TColStd_IndexedMapNodeOfIndexedMapOfInteger : public TCollection_MapNode {

public:

  
      TColStd_IndexedMapNodeOfIndexedMapOfInteger(const Standard_Integer& K1,const Standard_Integer K2,const TCollection_MapNodePtr& n1,const TCollection_MapNodePtr& n2);
  
        Standard_Integer& Key1() const;
  
        Standard_Integer& Key2() const;
  
        TCollection_MapNodePtr& Next2() const;




  DEFINE_STANDARD_RTTI(TColStd_IndexedMapNodeOfIndexedMapOfInteger)

protected:




private: 


Standard_Integer myKey1;
Standard_Integer myKey2;
TCollection_MapNodePtr myNext2;


};

#define TheKey Standard_Integer
#define TheKey_hxx <Standard_Integer.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <TColStd_MapIntegerHasher.hxx>
#define TCollection_IndexedMapNode TColStd_IndexedMapNodeOfIndexedMapOfInteger
#define TCollection_IndexedMapNode_hxx <TColStd_IndexedMapNodeOfIndexedMapOfInteger.hxx>
#define Handle_TCollection_IndexedMapNode Handle_TColStd_IndexedMapNodeOfIndexedMapOfInteger
#define TCollection_IndexedMapNode_Type_() TColStd_IndexedMapNodeOfIndexedMapOfInteger_Type_()
#define TCollection_IndexedMap TColStd_IndexedMapOfInteger
#define TCollection_IndexedMap_hxx <TColStd_IndexedMapOfInteger.hxx>

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
