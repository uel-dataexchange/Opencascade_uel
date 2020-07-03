// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepElement_SequenceNodeOfSequenceOfCurveElementPurposeMember_HeaderFile
#define _StepElement_SequenceNodeOfSequenceOfCurveElementPurposeMember_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepElement_SequenceNodeOfSequenceOfCurveElementPurposeMember_HeaderFile
#include <Handle_StepElement_SequenceNodeOfSequenceOfCurveElementPurposeMember.hxx>
#endif

#ifndef _Handle_StepElement_CurveElementPurposeMember_HeaderFile
#include <Handle_StepElement_CurveElementPurposeMember.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class StepElement_CurveElementPurposeMember;
class StepElement_SequenceOfCurveElementPurposeMember;



class StepElement_SequenceNodeOfSequenceOfCurveElementPurposeMember : public TCollection_SeqNode {

public:

  
      StepElement_SequenceNodeOfSequenceOfCurveElementPurposeMember(const Handle(StepElement_CurveElementPurposeMember)& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        Handle_StepElement_CurveElementPurposeMember& Value() const;




  DEFINE_STANDARD_RTTI(StepElement_SequenceNodeOfSequenceOfCurveElementPurposeMember)

protected:




private: 


Handle_StepElement_CurveElementPurposeMember myValue;


};

#define SeqItem Handle_StepElement_CurveElementPurposeMember
#define SeqItem_hxx <StepElement_CurveElementPurposeMember.hxx>
#define TCollection_SequenceNode StepElement_SequenceNodeOfSequenceOfCurveElementPurposeMember
#define TCollection_SequenceNode_hxx <StepElement_SequenceNodeOfSequenceOfCurveElementPurposeMember.hxx>
#define Handle_TCollection_SequenceNode Handle_StepElement_SequenceNodeOfSequenceOfCurveElementPurposeMember
#define TCollection_SequenceNode_Type_() StepElement_SequenceNodeOfSequenceOfCurveElementPurposeMember_Type_()
#define TCollection_Sequence StepElement_SequenceOfCurveElementPurposeMember
#define TCollection_Sequence_hxx <StepElement_SequenceOfCurveElementPurposeMember.hxx>

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
