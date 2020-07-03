// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS2D_SequenceNodeOfSequenceOfIO_HeaderFile
#define _AIS2D_SequenceNodeOfSequenceOfIO_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AIS2D_SequenceNodeOfSequenceOfIO_HeaderFile
#include <Handle_AIS2D_SequenceNodeOfSequenceOfIO.hxx>
#endif

#ifndef _Handle_AIS2D_InteractiveObject_HeaderFile
#include <Handle_AIS2D_InteractiveObject.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class AIS2D_InteractiveObject;
class AIS2D_SequenceOfIO;



class AIS2D_SequenceNodeOfSequenceOfIO : public TCollection_SeqNode {

public:

  
      AIS2D_SequenceNodeOfSequenceOfIO(const Handle(AIS2D_InteractiveObject)& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        Handle_AIS2D_InteractiveObject& Value() const;




  DEFINE_STANDARD_RTTI(AIS2D_SequenceNodeOfSequenceOfIO)

protected:




private: 


Handle_AIS2D_InteractiveObject myValue;


};

#define SeqItem Handle_AIS2D_InteractiveObject
#define SeqItem_hxx <AIS2D_InteractiveObject.hxx>
#define TCollection_SequenceNode AIS2D_SequenceNodeOfSequenceOfIO
#define TCollection_SequenceNode_hxx <AIS2D_SequenceNodeOfSequenceOfIO.hxx>
#define Handle_TCollection_SequenceNode Handle_AIS2D_SequenceNodeOfSequenceOfIO
#define TCollection_SequenceNode_Type_() AIS2D_SequenceNodeOfSequenceOfIO_Type_()
#define TCollection_Sequence AIS2D_SequenceOfIO
#define TCollection_Sequence_hxx <AIS2D_SequenceOfIO.hxx>

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
