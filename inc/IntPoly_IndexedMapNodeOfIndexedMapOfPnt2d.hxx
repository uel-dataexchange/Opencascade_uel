// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPoly_IndexedMapNodeOfIndexedMapOfPnt2d_HeaderFile
#define _IntPoly_IndexedMapNodeOfIndexedMapOfPnt2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IntPoly_IndexedMapNodeOfIndexedMapOfPnt2d_HeaderFile
#include <Handle_IntPoly_IndexedMapNodeOfIndexedMapOfPnt2d.hxx>
#endif

#ifndef _gp_Pnt2d_HeaderFile
#include <gp_Pnt2d.hxx>
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
class gp_Pnt2d;
class IntPoly_Pnt2dHasher;
class IntPoly_IndexedMapOfPnt2d;



class IntPoly_IndexedMapNodeOfIndexedMapOfPnt2d : public TCollection_MapNode {

public:

  
      IntPoly_IndexedMapNodeOfIndexedMapOfPnt2d(const gp_Pnt2d& K1,const Standard_Integer K2,const TCollection_MapNodePtr& n1,const TCollection_MapNodePtr& n2);
  
        gp_Pnt2d& Key1() const;
  
        Standard_Integer& Key2() const;
  
        TCollection_MapNodePtr& Next2() const;




  DEFINE_STANDARD_RTTI(IntPoly_IndexedMapNodeOfIndexedMapOfPnt2d)

protected:




private: 


gp_Pnt2d myKey1;
Standard_Integer myKey2;
TCollection_MapNodePtr myNext2;


};

#define TheKey gp_Pnt2d
#define TheKey_hxx <gp_Pnt2d.hxx>
#define Hasher IntPoly_Pnt2dHasher
#define Hasher_hxx <IntPoly_Pnt2dHasher.hxx>
#define TCollection_IndexedMapNode IntPoly_IndexedMapNodeOfIndexedMapOfPnt2d
#define TCollection_IndexedMapNode_hxx <IntPoly_IndexedMapNodeOfIndexedMapOfPnt2d.hxx>
#define Handle_TCollection_IndexedMapNode Handle_IntPoly_IndexedMapNodeOfIndexedMapOfPnt2d
#define TCollection_IndexedMapNode_Type_() IntPoly_IndexedMapNodeOfIndexedMapOfPnt2d_Type_()
#define TCollection_IndexedMap IntPoly_IndexedMapOfPnt2d
#define TCollection_IndexedMap_hxx <IntPoly_IndexedMapOfPnt2d.hxx>

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
