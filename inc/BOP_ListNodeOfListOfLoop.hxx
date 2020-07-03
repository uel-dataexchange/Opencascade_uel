// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOP_ListNodeOfListOfLoop_HeaderFile
#define _BOP_ListNodeOfListOfLoop_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BOP_ListNodeOfListOfLoop_HeaderFile
#include <Handle_BOP_ListNodeOfListOfLoop.hxx>
#endif

#ifndef _Handle_BOP_Loop_HeaderFile
#include <Handle_BOP_Loop.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class BOP_Loop;
class BOP_ListOfLoop;
class BOP_ListIteratorOfListOfLoop;



class BOP_ListNodeOfListOfLoop : public TCollection_MapNode {

public:

  
      BOP_ListNodeOfListOfLoop(const Handle(BOP_Loop)& I,const TCollection_MapNodePtr& n);
  
        Handle_BOP_Loop& Value() const;




  DEFINE_STANDARD_RTTI(BOP_ListNodeOfListOfLoop)

protected:




private: 


Handle_BOP_Loop myValue;


};

#define Item Handle_BOP_Loop
#define Item_hxx <BOP_Loop.hxx>
#define TCollection_ListNode BOP_ListNodeOfListOfLoop
#define TCollection_ListNode_hxx <BOP_ListNodeOfListOfLoop.hxx>
#define TCollection_ListIterator BOP_ListIteratorOfListOfLoop
#define TCollection_ListIterator_hxx <BOP_ListIteratorOfListOfLoop.hxx>
#define Handle_TCollection_ListNode Handle_BOP_ListNodeOfListOfLoop
#define TCollection_ListNode_Type_() BOP_ListNodeOfListOfLoop_Type_()
#define TCollection_List BOP_ListOfLoop
#define TCollection_List_hxx <BOP_ListOfLoop.hxx>

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
