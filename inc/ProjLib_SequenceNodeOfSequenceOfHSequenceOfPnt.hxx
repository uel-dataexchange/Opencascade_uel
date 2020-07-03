// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ProjLib_SequenceNodeOfSequenceOfHSequenceOfPnt_HeaderFile
#define _ProjLib_SequenceNodeOfSequenceOfHSequenceOfPnt_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_ProjLib_SequenceNodeOfSequenceOfHSequenceOfPnt_HeaderFile
#include <Handle_ProjLib_SequenceNodeOfSequenceOfHSequenceOfPnt.hxx>
#endif

#ifndef _Handle_TColgp_HSequenceOfPnt_HeaderFile
#include <Handle_TColgp_HSequenceOfPnt.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class TColgp_HSequenceOfPnt;
class ProjLib_SequenceOfHSequenceOfPnt;



class ProjLib_SequenceNodeOfSequenceOfHSequenceOfPnt : public TCollection_SeqNode {

public:

  
      ProjLib_SequenceNodeOfSequenceOfHSequenceOfPnt(const Handle(TColgp_HSequenceOfPnt)& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        Handle_TColgp_HSequenceOfPnt& Value() const;




  DEFINE_STANDARD_RTTI(ProjLib_SequenceNodeOfSequenceOfHSequenceOfPnt)

protected:




private: 


Handle_TColgp_HSequenceOfPnt myValue;


};

#define SeqItem Handle_TColgp_HSequenceOfPnt
#define SeqItem_hxx <TColgp_HSequenceOfPnt.hxx>
#define TCollection_SequenceNode ProjLib_SequenceNodeOfSequenceOfHSequenceOfPnt
#define TCollection_SequenceNode_hxx <ProjLib_SequenceNodeOfSequenceOfHSequenceOfPnt.hxx>
#define Handle_TCollection_SequenceNode Handle_ProjLib_SequenceNodeOfSequenceOfHSequenceOfPnt
#define TCollection_SequenceNode_Type_() ProjLib_SequenceNodeOfSequenceOfHSequenceOfPnt_Type_()
#define TCollection_Sequence ProjLib_SequenceOfHSequenceOfPnt
#define TCollection_Sequence_hxx <ProjLib_SequenceOfHSequenceOfPnt.hxx>

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
