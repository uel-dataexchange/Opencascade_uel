// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_DataMapNodeOfDataMapOfIntegerTransient_HeaderFile
#define _TColStd_DataMapNodeOfDataMapOfIntegerTransient_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TColStd_DataMapNodeOfDataMapOfIntegerTransient_HeaderFile
#include <Handle_TColStd_DataMapNodeOfDataMapOfIntegerTransient.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class Standard_Transient;
class TColStd_MapIntegerHasher;
class TColStd_DataMapOfIntegerTransient;
class TColStd_DataMapIteratorOfDataMapOfIntegerTransient;



class TColStd_DataMapNodeOfDataMapOfIntegerTransient : public TCollection_MapNode {

public:

  
      TColStd_DataMapNodeOfDataMapOfIntegerTransient(const Standard_Integer& K,const Handle(Standard_Transient)& I,const TCollection_MapNodePtr& n);
  
        Standard_Integer& Key() const;
  
        Handle_Standard_Transient& Value() const;




  DEFINE_STANDARD_RTTI(TColStd_DataMapNodeOfDataMapOfIntegerTransient)

protected:




private: 


Standard_Integer myKey;
Handle_Standard_Transient myValue;


};

#define TheKey Standard_Integer
#define TheKey_hxx <Standard_Integer.hxx>
#define TheItem Handle_Standard_Transient
#define TheItem_hxx <Standard_Transient.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <TColStd_MapIntegerHasher.hxx>
#define TCollection_DataMapNode TColStd_DataMapNodeOfDataMapOfIntegerTransient
#define TCollection_DataMapNode_hxx <TColStd_DataMapNodeOfDataMapOfIntegerTransient.hxx>
#define TCollection_DataMapIterator TColStd_DataMapIteratorOfDataMapOfIntegerTransient
#define TCollection_DataMapIterator_hxx <TColStd_DataMapIteratorOfDataMapOfIntegerTransient.hxx>
#define Handle_TCollection_DataMapNode Handle_TColStd_DataMapNodeOfDataMapOfIntegerTransient
#define TCollection_DataMapNode_Type_() TColStd_DataMapNodeOfDataMapOfIntegerTransient_Type_()
#define TCollection_DataMap TColStd_DataMapOfIntegerTransient
#define TCollection_DataMap_hxx <TColStd_DataMapOfIntegerTransient.hxx>

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
