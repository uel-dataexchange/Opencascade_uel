// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntSurf_ListNodeOfListOfPntOn2S_HeaderFile
#define _IntSurf_ListNodeOfListOfPntOn2S_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IntSurf_ListNodeOfListOfPntOn2S_HeaderFile
#include <Handle_IntSurf_ListNodeOfListOfPntOn2S.hxx>
#endif

#ifndef _IntSurf_PntOn2S_HeaderFile
#include <IntSurf_PntOn2S.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class IntSurf_PntOn2S;
class IntSurf_ListOfPntOn2S;
class IntSurf_ListIteratorOfListOfPntOn2S;



class IntSurf_ListNodeOfListOfPntOn2S : public TCollection_MapNode {

public:

  
      IntSurf_ListNodeOfListOfPntOn2S(const IntSurf_PntOn2S& I,const TCollection_MapNodePtr& n);
  
        IntSurf_PntOn2S& Value() const;




  DEFINE_STANDARD_RTTI(IntSurf_ListNodeOfListOfPntOn2S)

protected:




private: 


IntSurf_PntOn2S myValue;


};

#define Item IntSurf_PntOn2S
#define Item_hxx <IntSurf_PntOn2S.hxx>
#define TCollection_ListNode IntSurf_ListNodeOfListOfPntOn2S
#define TCollection_ListNode_hxx <IntSurf_ListNodeOfListOfPntOn2S.hxx>
#define TCollection_ListIterator IntSurf_ListIteratorOfListOfPntOn2S
#define TCollection_ListIterator_hxx <IntSurf_ListIteratorOfListOfPntOn2S.hxx>
#define Handle_TCollection_ListNode Handle_IntSurf_ListNodeOfListOfPntOn2S
#define TCollection_ListNode_Type_() IntSurf_ListNodeOfListOfPntOn2S_Type_()
#define TCollection_List IntSurf_ListOfPntOn2S
#define TCollection_List_hxx <IntSurf_ListOfPntOn2S.hxx>

#include <TCollection_ListNode.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
