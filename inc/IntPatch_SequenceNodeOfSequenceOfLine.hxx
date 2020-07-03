// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPatch_SequenceNodeOfSequenceOfLine_HeaderFile
#define _IntPatch_SequenceNodeOfSequenceOfLine_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IntPatch_SequenceNodeOfSequenceOfLine_HeaderFile
#include <Handle_IntPatch_SequenceNodeOfSequenceOfLine.hxx>
#endif

#ifndef _Handle_IntPatch_Line_HeaderFile
#include <Handle_IntPatch_Line.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class IntPatch_Line;
class IntPatch_SequenceOfLine;



class IntPatch_SequenceNodeOfSequenceOfLine : public TCollection_SeqNode {

public:

  
      IntPatch_SequenceNodeOfSequenceOfLine(const Handle(IntPatch_Line)& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        Handle_IntPatch_Line& Value() const;




  DEFINE_STANDARD_RTTI(IntPatch_SequenceNodeOfSequenceOfLine)

protected:




private: 


Handle_IntPatch_Line myValue;


};

#define SeqItem Handle_IntPatch_Line
#define SeqItem_hxx <IntPatch_Line.hxx>
#define TCollection_SequenceNode IntPatch_SequenceNodeOfSequenceOfLine
#define TCollection_SequenceNode_hxx <IntPatch_SequenceNodeOfSequenceOfLine.hxx>
#define Handle_TCollection_SequenceNode Handle_IntPatch_SequenceNodeOfSequenceOfLine
#define TCollection_SequenceNode_Type_() IntPatch_SequenceNodeOfSequenceOfLine_Type_()
#define TCollection_Sequence IntPatch_SequenceOfLine
#define TCollection_Sequence_hxx <IntPatch_SequenceOfLine.hxx>

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
