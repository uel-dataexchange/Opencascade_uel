// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MoniTool_SequenceNodeOfSequenceOfElement_HeaderFile
#define _MoniTool_SequenceNodeOfSequenceOfElement_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MoniTool_SequenceNodeOfSequenceOfElement_HeaderFile
#include <Handle_MoniTool_SequenceNodeOfSequenceOfElement.hxx>
#endif

#ifndef _Handle_MoniTool_Element_HeaderFile
#include <Handle_MoniTool_Element.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class MoniTool_Element;
class MoniTool_SequenceOfElement;



class MoniTool_SequenceNodeOfSequenceOfElement : public TCollection_SeqNode {

public:

  
      MoniTool_SequenceNodeOfSequenceOfElement(const Handle(MoniTool_Element)& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        Handle_MoniTool_Element& Value() const;




  DEFINE_STANDARD_RTTI(MoniTool_SequenceNodeOfSequenceOfElement)

protected:




private: 


Handle_MoniTool_Element myValue;


};

#define SeqItem Handle_MoniTool_Element
#define SeqItem_hxx <MoniTool_Element.hxx>
#define TCollection_SequenceNode MoniTool_SequenceNodeOfSequenceOfElement
#define TCollection_SequenceNode_hxx <MoniTool_SequenceNodeOfSequenceOfElement.hxx>
#define Handle_TCollection_SequenceNode Handle_MoniTool_SequenceNodeOfSequenceOfElement
#define TCollection_SequenceNode_Type_() MoniTool_SequenceNodeOfSequenceOfElement_Type_()
#define TCollection_Sequence MoniTool_SequenceOfElement
#define TCollection_Sequence_hxx <MoniTool_SequenceOfElement.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
