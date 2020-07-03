// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Select3D_SequenceNodeOfSensitiveEntitySequence_HeaderFile
#define _Select3D_SequenceNodeOfSensitiveEntitySequence_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Select3D_SequenceNodeOfSensitiveEntitySequence_HeaderFile
#include <Handle_Select3D_SequenceNodeOfSensitiveEntitySequence.hxx>
#endif

#ifndef _Handle_Select3D_SensitiveEntity_HeaderFile
#include <Handle_Select3D_SensitiveEntity.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class Select3D_SensitiveEntity;
class Select3D_SensitiveEntitySequence;



class Select3D_SequenceNodeOfSensitiveEntitySequence : public TCollection_SeqNode {

public:

  
      Select3D_SequenceNodeOfSensitiveEntitySequence(const Handle(Select3D_SensitiveEntity)& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        Handle_Select3D_SensitiveEntity& Value() const;




  DEFINE_STANDARD_RTTI(Select3D_SequenceNodeOfSensitiveEntitySequence)

protected:




private: 


Handle_Select3D_SensitiveEntity myValue;


};

#define SeqItem Handle_Select3D_SensitiveEntity
#define SeqItem_hxx <Select3D_SensitiveEntity.hxx>
#define TCollection_SequenceNode Select3D_SequenceNodeOfSensitiveEntitySequence
#define TCollection_SequenceNode_hxx <Select3D_SequenceNodeOfSensitiveEntitySequence.hxx>
#define Handle_TCollection_SequenceNode Handle_Select3D_SequenceNodeOfSensitiveEntitySequence
#define TCollection_SequenceNode_Type_() Select3D_SequenceNodeOfSensitiveEntitySequence_Type_()
#define TCollection_Sequence Select3D_SensitiveEntitySequence
#define TCollection_Sequence_hxx <Select3D_SensitiveEntitySequence.hxx>

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
