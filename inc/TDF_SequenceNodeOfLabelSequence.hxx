// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_SequenceNodeOfLabelSequence_HeaderFile
#define _TDF_SequenceNodeOfLabelSequence_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TDF_SequenceNodeOfLabelSequence_HeaderFile
#include <Handle_TDF_SequenceNodeOfLabelSequence.hxx>
#endif

#ifndef _TDF_Label_HeaderFile
#include <TDF_Label.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class TDF_Label;
class TDF_LabelSequence;



class TDF_SequenceNodeOfLabelSequence : public TCollection_SeqNode {

public:

  
      TDF_SequenceNodeOfLabelSequence(const TDF_Label& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        TDF_Label& Value() const;




  DEFINE_STANDARD_RTTI(TDF_SequenceNodeOfLabelSequence)

protected:




private: 


TDF_Label myValue;


};

#define SeqItem TDF_Label
#define SeqItem_hxx <TDF_Label.hxx>
#define TCollection_SequenceNode TDF_SequenceNodeOfLabelSequence
#define TCollection_SequenceNode_hxx <TDF_SequenceNodeOfLabelSequence.hxx>
#define Handle_TCollection_SequenceNode Handle_TDF_SequenceNodeOfLabelSequence
#define TCollection_SequenceNode_Type_() TDF_SequenceNodeOfLabelSequence_Type_()
#define TCollection_Sequence TDF_LabelSequence
#define TCollection_Sequence_hxx <TDF_LabelSequence.hxx>

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
