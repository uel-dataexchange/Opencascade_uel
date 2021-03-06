// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_SequenceNodeOfSequenceOfVec_HeaderFile
#define _TColgp_SequenceNodeOfSequenceOfVec_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TColgp_SequenceNodeOfSequenceOfVec_HeaderFile
#include <Handle_TColgp_SequenceNodeOfSequenceOfVec.hxx>
#endif

#ifndef _gp_Vec_HeaderFile
#include <gp_Vec.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class gp_Vec;
class TColgp_SequenceOfVec;



class TColgp_SequenceNodeOfSequenceOfVec : public TCollection_SeqNode {

public:

  
      TColgp_SequenceNodeOfSequenceOfVec(const gp_Vec& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        gp_Vec& Value() const;




  DEFINE_STANDARD_RTTI(TColgp_SequenceNodeOfSequenceOfVec)

protected:




private: 


gp_Vec myValue;


};

#define SeqItem gp_Vec
#define SeqItem_hxx <gp_Vec.hxx>
#define TCollection_SequenceNode TColgp_SequenceNodeOfSequenceOfVec
#define TCollection_SequenceNode_hxx <TColgp_SequenceNodeOfSequenceOfVec.hxx>
#define Handle_TCollection_SequenceNode Handle_TColgp_SequenceNodeOfSequenceOfVec
#define TCollection_SequenceNode_Type_() TColgp_SequenceNodeOfSequenceOfVec_Type_()
#define TCollection_Sequence TColgp_SequenceOfVec
#define TCollection_Sequence_hxx <TColgp_SequenceOfVec.hxx>

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
