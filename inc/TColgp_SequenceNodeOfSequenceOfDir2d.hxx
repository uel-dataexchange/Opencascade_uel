// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_SequenceNodeOfSequenceOfDir2d_HeaderFile
#define _TColgp_SequenceNodeOfSequenceOfDir2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TColgp_SequenceNodeOfSequenceOfDir2d_HeaderFile
#include <Handle_TColgp_SequenceNodeOfSequenceOfDir2d.hxx>
#endif

#ifndef _gp_Dir2d_HeaderFile
#include <gp_Dir2d.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class gp_Dir2d;
class TColgp_SequenceOfDir2d;



class TColgp_SequenceNodeOfSequenceOfDir2d : public TCollection_SeqNode {

public:

  
      TColgp_SequenceNodeOfSequenceOfDir2d(const gp_Dir2d& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        gp_Dir2d& Value() const;




  DEFINE_STANDARD_RTTI(TColgp_SequenceNodeOfSequenceOfDir2d)

protected:




private: 


gp_Dir2d myValue;


};

#define SeqItem gp_Dir2d
#define SeqItem_hxx <gp_Dir2d.hxx>
#define TCollection_SequenceNode TColgp_SequenceNodeOfSequenceOfDir2d
#define TCollection_SequenceNode_hxx <TColgp_SequenceNodeOfSequenceOfDir2d.hxx>
#define Handle_TCollection_SequenceNode Handle_TColgp_SequenceNodeOfSequenceOfDir2d
#define TCollection_SequenceNode_Type_() TColgp_SequenceNodeOfSequenceOfDir2d_Type_()
#define TCollection_Sequence TColgp_SequenceOfDir2d
#define TCollection_Sequence_hxx <TColgp_SequenceOfDir2d.hxx>

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
