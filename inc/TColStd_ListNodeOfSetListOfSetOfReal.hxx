// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_ListNodeOfSetListOfSetOfReal_HeaderFile
#define _TColStd_ListNodeOfSetListOfSetOfReal_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TColStd_ListNodeOfSetListOfSetOfReal_HeaderFile
#include <Handle_TColStd_ListNodeOfSetListOfSetOfReal.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class TColStd_SetListOfSetOfReal;
class TColStd_ListIteratorOfSetListOfSetOfReal;



class TColStd_ListNodeOfSetListOfSetOfReal : public TCollection_MapNode {

public:

  
      TColStd_ListNodeOfSetListOfSetOfReal(const Standard_Real& I,const TCollection_MapNodePtr& n);
  
        Standard_Real& Value() const;




  DEFINE_STANDARD_RTTI(TColStd_ListNodeOfSetListOfSetOfReal)

protected:




private: 


Standard_Real myValue;


};

#define Item Standard_Real
#define Item_hxx <Standard_Real.hxx>
#define TCollection_ListNode TColStd_ListNodeOfSetListOfSetOfReal
#define TCollection_ListNode_hxx <TColStd_ListNodeOfSetListOfSetOfReal.hxx>
#define TCollection_ListIterator TColStd_ListIteratorOfSetListOfSetOfReal
#define TCollection_ListIterator_hxx <TColStd_ListIteratorOfSetListOfSetOfReal.hxx>
#define Handle_TCollection_ListNode Handle_TColStd_ListNodeOfSetListOfSetOfReal
#define TCollection_ListNode_Type_() TColStd_ListNodeOfSetListOfSetOfReal_Type_()
#define TCollection_List TColStd_SetListOfSetOfReal
#define TCollection_List_hxx <TColStd_SetListOfSetOfReal.hxx>

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
