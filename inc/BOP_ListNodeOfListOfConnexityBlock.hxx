// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOP_ListNodeOfListOfConnexityBlock_HeaderFile
#define _BOP_ListNodeOfListOfConnexityBlock_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BOP_ListNodeOfListOfConnexityBlock_HeaderFile
#include <Handle_BOP_ListNodeOfListOfConnexityBlock.hxx>
#endif

#ifndef _BOP_ConnexityBlock_HeaderFile
#include <BOP_ConnexityBlock.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class BOP_ConnexityBlock;
class BOP_ListOfConnexityBlock;
class BOP_ListIteratorOfListOfConnexityBlock;



class BOP_ListNodeOfListOfConnexityBlock : public TCollection_MapNode {

public:

  
      BOP_ListNodeOfListOfConnexityBlock(const BOP_ConnexityBlock& I,const TCollection_MapNodePtr& n);
  
        BOP_ConnexityBlock& Value() const;




  DEFINE_STANDARD_RTTI(BOP_ListNodeOfListOfConnexityBlock)

protected:




private: 


BOP_ConnexityBlock myValue;


};

#define Item BOP_ConnexityBlock
#define Item_hxx <BOP_ConnexityBlock.hxx>
#define TCollection_ListNode BOP_ListNodeOfListOfConnexityBlock
#define TCollection_ListNode_hxx <BOP_ListNodeOfListOfConnexityBlock.hxx>
#define TCollection_ListIterator BOP_ListIteratorOfListOfConnexityBlock
#define TCollection_ListIterator_hxx <BOP_ListIteratorOfListOfConnexityBlock.hxx>
#define Handle_TCollection_ListNode Handle_BOP_ListNodeOfListOfConnexityBlock
#define TCollection_ListNode_Type_() BOP_ListNodeOfListOfConnexityBlock_Type_()
#define TCollection_List BOP_ListOfConnexityBlock
#define TCollection_List_hxx <BOP_ListOfConnexityBlock.hxx>

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
