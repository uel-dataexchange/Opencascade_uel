// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTools_ListNodeOfListOfShapeEnum_HeaderFile
#define _BOPTools_ListNodeOfListOfShapeEnum_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BOPTools_ListNodeOfListOfShapeEnum_HeaderFile
#include <Handle_BOPTools_ListNodeOfListOfShapeEnum.hxx>
#endif

#ifndef _TopAbs_ShapeEnum_HeaderFile
#include <TopAbs_ShapeEnum.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class BOPTools_ListOfShapeEnum;
class BOPTools_ListIteratorOfListOfShapeEnum;



class BOPTools_ListNodeOfListOfShapeEnum : public TCollection_MapNode {

public:

  
      BOPTools_ListNodeOfListOfShapeEnum(const TopAbs_ShapeEnum& I,const TCollection_MapNodePtr& n);
  
        TopAbs_ShapeEnum& Value() const;




  DEFINE_STANDARD_RTTI(BOPTools_ListNodeOfListOfShapeEnum)

protected:




private: 


TopAbs_ShapeEnum myValue;


};

#define Item TopAbs_ShapeEnum
#define Item_hxx <TopAbs_ShapeEnum.hxx>
#define TCollection_ListNode BOPTools_ListNodeOfListOfShapeEnum
#define TCollection_ListNode_hxx <BOPTools_ListNodeOfListOfShapeEnum.hxx>
#define TCollection_ListIterator BOPTools_ListIteratorOfListOfShapeEnum
#define TCollection_ListIterator_hxx <BOPTools_ListIteratorOfListOfShapeEnum.hxx>
#define Handle_TCollection_ListNode Handle_BOPTools_ListNodeOfListOfShapeEnum
#define TCollection_ListNode_Type_() BOPTools_ListNodeOfListOfShapeEnum_Type_()
#define TCollection_List BOPTools_ListOfShapeEnum
#define TCollection_List_hxx <BOPTools_ListOfShapeEnum.hxx>

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
