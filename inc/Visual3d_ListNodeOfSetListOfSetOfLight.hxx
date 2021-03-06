// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Visual3d_ListNodeOfSetListOfSetOfLight_HeaderFile
#define _Visual3d_ListNodeOfSetListOfSetOfLight_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Visual3d_ListNodeOfSetListOfSetOfLight_HeaderFile
#include <Handle_Visual3d_ListNodeOfSetListOfSetOfLight.hxx>
#endif

#ifndef _Handle_Visual3d_Light_HeaderFile
#include <Handle_Visual3d_Light.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class Visual3d_Light;
class Visual3d_SetListOfSetOfLight;
class Visual3d_ListIteratorOfSetListOfSetOfLight;



class Visual3d_ListNodeOfSetListOfSetOfLight : public TCollection_MapNode {

public:

  
      Visual3d_ListNodeOfSetListOfSetOfLight(const Handle(Visual3d_Light)& I,const TCollection_MapNodePtr& n);
  
        Handle_Visual3d_Light& Value() const;




  DEFINE_STANDARD_RTTI(Visual3d_ListNodeOfSetListOfSetOfLight)

protected:




private: 


Handle_Visual3d_Light myValue;


};

#define Item Handle_Visual3d_Light
#define Item_hxx <Visual3d_Light.hxx>
#define TCollection_ListNode Visual3d_ListNodeOfSetListOfSetOfLight
#define TCollection_ListNode_hxx <Visual3d_ListNodeOfSetListOfSetOfLight.hxx>
#define TCollection_ListIterator Visual3d_ListIteratorOfSetListOfSetOfLight
#define TCollection_ListIterator_hxx <Visual3d_ListIteratorOfSetListOfSetOfLight.hxx>
#define Handle_TCollection_ListNode Handle_Visual3d_ListNodeOfSetListOfSetOfLight
#define TCollection_ListNode_Type_() Visual3d_ListNodeOfSetListOfSetOfLight_Type_()
#define TCollection_List Visual3d_SetListOfSetOfLight
#define TCollection_List_hxx <Visual3d_SetListOfSetOfLight.hxx>

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
