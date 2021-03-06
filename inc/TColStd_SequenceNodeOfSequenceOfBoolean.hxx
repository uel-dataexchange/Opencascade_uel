// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_SequenceNodeOfSequenceOfBoolean_HeaderFile
#define _TColStd_SequenceNodeOfSequenceOfBoolean_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TColStd_SequenceNodeOfSequenceOfBoolean_HeaderFile
#include <Handle_TColStd_SequenceNodeOfSequenceOfBoolean.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class TColStd_SequenceOfBoolean;



class TColStd_SequenceNodeOfSequenceOfBoolean : public TCollection_SeqNode {

public:

  
      TColStd_SequenceNodeOfSequenceOfBoolean(const Standard_Boolean& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        Standard_Boolean& Value() const;




  DEFINE_STANDARD_RTTI(TColStd_SequenceNodeOfSequenceOfBoolean)

protected:




private: 


Standard_Boolean myValue;


};

#define SeqItem Standard_Boolean
#define SeqItem_hxx <Standard_Boolean.hxx>
#define TCollection_SequenceNode TColStd_SequenceNodeOfSequenceOfBoolean
#define TCollection_SequenceNode_hxx <TColStd_SequenceNodeOfSequenceOfBoolean.hxx>
#define Handle_TCollection_SequenceNode Handle_TColStd_SequenceNodeOfSequenceOfBoolean
#define TCollection_SequenceNode_Type_() TColStd_SequenceNodeOfSequenceOfBoolean_Type_()
#define TCollection_Sequence TColStd_SequenceOfBoolean
#define TCollection_Sequence_hxx <TColStd_SequenceOfBoolean.hxx>

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
