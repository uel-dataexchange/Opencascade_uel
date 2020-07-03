// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TransferBRep_SequenceNodeOfSequenceOfTransferResultInfo_HeaderFile
#define _TransferBRep_SequenceNodeOfSequenceOfTransferResultInfo_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TransferBRep_SequenceNodeOfSequenceOfTransferResultInfo_HeaderFile
#include <Handle_TransferBRep_SequenceNodeOfSequenceOfTransferResultInfo.hxx>
#endif

#ifndef _Handle_TransferBRep_TransferResultInfo_HeaderFile
#include <Handle_TransferBRep_TransferResultInfo.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class TransferBRep_TransferResultInfo;
class TransferBRep_SequenceOfTransferResultInfo;



class TransferBRep_SequenceNodeOfSequenceOfTransferResultInfo : public TCollection_SeqNode {

public:

  
      TransferBRep_SequenceNodeOfSequenceOfTransferResultInfo(const Handle(TransferBRep_TransferResultInfo)& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        Handle_TransferBRep_TransferResultInfo& Value() const;




  DEFINE_STANDARD_RTTI(TransferBRep_SequenceNodeOfSequenceOfTransferResultInfo)

protected:




private: 


Handle_TransferBRep_TransferResultInfo myValue;


};

#define SeqItem Handle_TransferBRep_TransferResultInfo
#define SeqItem_hxx <TransferBRep_TransferResultInfo.hxx>
#define TCollection_SequenceNode TransferBRep_SequenceNodeOfSequenceOfTransferResultInfo
#define TCollection_SequenceNode_hxx <TransferBRep_SequenceNodeOfSequenceOfTransferResultInfo.hxx>
#define Handle_TCollection_SequenceNode Handle_TransferBRep_SequenceNodeOfSequenceOfTransferResultInfo
#define TCollection_SequenceNode_Type_() TransferBRep_SequenceNodeOfSequenceOfTransferResultInfo_Type_()
#define TCollection_Sequence TransferBRep_SequenceOfTransferResultInfo
#define TCollection_Sequence_hxx <TransferBRep_SequenceOfTransferResultInfo.hxx>

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
