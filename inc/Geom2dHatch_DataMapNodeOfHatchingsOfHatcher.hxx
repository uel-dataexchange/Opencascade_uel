// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dHatch_DataMapNodeOfHatchingsOfHatcher_HeaderFile
#define _Geom2dHatch_DataMapNodeOfHatchingsOfHatcher_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Geom2dHatch_DataMapNodeOfHatchingsOfHatcher_HeaderFile
#include <Handle_Geom2dHatch_DataMapNodeOfHatchingsOfHatcher.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Geom2dHatch_HatchingOfHatcher_HeaderFile
#include <Geom2dHatch_HatchingOfHatcher.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class Geom2dHatch_HatchingOfHatcher;
class TColStd_MapIntegerHasher;
class Geom2dHatch_HatchingsOfHatcher;
class Geom2dHatch_DataMapIteratorOfHatchingsOfHatcher;



class Geom2dHatch_DataMapNodeOfHatchingsOfHatcher : public TCollection_MapNode {

public:

  
      Geom2dHatch_DataMapNodeOfHatchingsOfHatcher(const Standard_Integer& K,const Geom2dHatch_HatchingOfHatcher& I,const TCollection_MapNodePtr& n);
  
        Standard_Integer& Key() const;
  
        Geom2dHatch_HatchingOfHatcher& Value() const;




  DEFINE_STANDARD_RTTI(Geom2dHatch_DataMapNodeOfHatchingsOfHatcher)

protected:




private: 


Standard_Integer myKey;
Geom2dHatch_HatchingOfHatcher myValue;


};

#define TheKey Standard_Integer
#define TheKey_hxx <Standard_Integer.hxx>
#define TheItem Geom2dHatch_HatchingOfHatcher
#define TheItem_hxx <Geom2dHatch_HatchingOfHatcher.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <TColStd_MapIntegerHasher.hxx>
#define TCollection_DataMapNode Geom2dHatch_DataMapNodeOfHatchingsOfHatcher
#define TCollection_DataMapNode_hxx <Geom2dHatch_DataMapNodeOfHatchingsOfHatcher.hxx>
#define TCollection_DataMapIterator Geom2dHatch_DataMapIteratorOfHatchingsOfHatcher
#define TCollection_DataMapIterator_hxx <Geom2dHatch_DataMapIteratorOfHatchingsOfHatcher.hxx>
#define Handle_TCollection_DataMapNode Handle_Geom2dHatch_DataMapNodeOfHatchingsOfHatcher
#define TCollection_DataMapNode_Type_() Geom2dHatch_DataMapNodeOfHatchingsOfHatcher_Type_()
#define TCollection_DataMap Geom2dHatch_HatchingsOfHatcher
#define TCollection_DataMap_hxx <Geom2dHatch_HatchingsOfHatcher.hxx>

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
