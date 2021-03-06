// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_ListNodeOfAttributeList_HeaderFile
#define _TDF_ListNodeOfAttributeList_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TDF_ListNodeOfAttributeList_HeaderFile
#include <Handle_TDF_ListNodeOfAttributeList.hxx>
#endif

#ifndef _Handle_TDF_Attribute_HeaderFile
#include <Handle_TDF_Attribute.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class TDF_Attribute;
class TDF_AttributeList;
class TDF_ListIteratorOfAttributeList;



class TDF_ListNodeOfAttributeList : public TCollection_MapNode {

public:

  
      TDF_ListNodeOfAttributeList(const Handle(TDF_Attribute)& I,const TCollection_MapNodePtr& n);
  
        Handle_TDF_Attribute& Value() const;




  DEFINE_STANDARD_RTTI(TDF_ListNodeOfAttributeList)

protected:




private: 


Handle_TDF_Attribute myValue;


};

#define Item Handle_TDF_Attribute
#define Item_hxx <TDF_Attribute.hxx>
#define TCollection_ListNode TDF_ListNodeOfAttributeList
#define TCollection_ListNode_hxx <TDF_ListNodeOfAttributeList.hxx>
#define TCollection_ListIterator TDF_ListIteratorOfAttributeList
#define TCollection_ListIterator_hxx <TDF_ListIteratorOfAttributeList.hxx>
#define Handle_TCollection_ListNode Handle_TDF_ListNodeOfAttributeList
#define TCollection_ListNode_Type_() TDF_ListNodeOfAttributeList_Type_()
#define TCollection_List TDF_AttributeList
#define TCollection_List_hxx <TDF_AttributeList.hxx>

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
