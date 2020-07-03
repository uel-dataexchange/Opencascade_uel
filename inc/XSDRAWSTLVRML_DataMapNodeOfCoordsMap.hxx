// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XSDRAWSTLVRML_DataMapNodeOfCoordsMap_HeaderFile
#define _XSDRAWSTLVRML_DataMapNodeOfCoordsMap_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_XSDRAWSTLVRML_DataMapNodeOfCoordsMap_HeaderFile
#include <Handle_XSDRAWSTLVRML_DataMapNodeOfCoordsMap.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TColStd_DataMapOfIntegerReal_HeaderFile
#include <TColStd_DataMapOfIntegerReal.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class TColStd_DataMapOfIntegerReal;
class TColStd_MapIntegerHasher;
class XSDRAWSTLVRML_CoordsMap;
class XSDRAWSTLVRML_DataMapIteratorOfCoordsMap;



class XSDRAWSTLVRML_DataMapNodeOfCoordsMap : public TCollection_MapNode {

public:

  
      XSDRAWSTLVRML_DataMapNodeOfCoordsMap(const Standard_Integer& K,const TColStd_DataMapOfIntegerReal& I,const TCollection_MapNodePtr& n);
  
        Standard_Integer& Key() const;
  
        TColStd_DataMapOfIntegerReal& Value() const;




  DEFINE_STANDARD_RTTI(XSDRAWSTLVRML_DataMapNodeOfCoordsMap)

protected:




private: 


Standard_Integer myKey;
TColStd_DataMapOfIntegerReal myValue;


};

#define TheKey Standard_Integer
#define TheKey_hxx <Standard_Integer.hxx>
#define TheItem TColStd_DataMapOfIntegerReal
#define TheItem_hxx <TColStd_DataMapOfIntegerReal.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <TColStd_MapIntegerHasher.hxx>
#define TCollection_DataMapNode XSDRAWSTLVRML_DataMapNodeOfCoordsMap
#define TCollection_DataMapNode_hxx <XSDRAWSTLVRML_DataMapNodeOfCoordsMap.hxx>
#define TCollection_DataMapIterator XSDRAWSTLVRML_DataMapIteratorOfCoordsMap
#define TCollection_DataMapIterator_hxx <XSDRAWSTLVRML_DataMapIteratorOfCoordsMap.hxx>
#define Handle_TCollection_DataMapNode Handle_XSDRAWSTLVRML_DataMapNodeOfCoordsMap
#define TCollection_DataMapNode_Type_() XSDRAWSTLVRML_DataMapNodeOfCoordsMap_Type_()
#define TCollection_DataMap XSDRAWSTLVRML_CoordsMap
#define TCollection_DataMap_hxx <XSDRAWSTLVRML_CoordsMap.hxx>

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
