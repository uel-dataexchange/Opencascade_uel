// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomInt_SequenceNodeOfSequenceOfParameterAndOrientation_HeaderFile
#define _GeomInt_SequenceNodeOfSequenceOfParameterAndOrientation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_GeomInt_SequenceNodeOfSequenceOfParameterAndOrientation_HeaderFile
#include <Handle_GeomInt_SequenceNodeOfSequenceOfParameterAndOrientation.hxx>
#endif

#ifndef _GeomInt_ParameterAndOrientation_HeaderFile
#include <GeomInt_ParameterAndOrientation.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class GeomInt_ParameterAndOrientation;
class GeomInt_SequenceOfParameterAndOrientation;



class GeomInt_SequenceNodeOfSequenceOfParameterAndOrientation : public TCollection_SeqNode {

public:

  
      GeomInt_SequenceNodeOfSequenceOfParameterAndOrientation(const GeomInt_ParameterAndOrientation& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        GeomInt_ParameterAndOrientation& Value() const;




  DEFINE_STANDARD_RTTI(GeomInt_SequenceNodeOfSequenceOfParameterAndOrientation)

protected:




private: 


GeomInt_ParameterAndOrientation myValue;


};

#define SeqItem GeomInt_ParameterAndOrientation
#define SeqItem_hxx <GeomInt_ParameterAndOrientation.hxx>
#define TCollection_SequenceNode GeomInt_SequenceNodeOfSequenceOfParameterAndOrientation
#define TCollection_SequenceNode_hxx <GeomInt_SequenceNodeOfSequenceOfParameterAndOrientation.hxx>
#define Handle_TCollection_SequenceNode Handle_GeomInt_SequenceNodeOfSequenceOfParameterAndOrientation
#define TCollection_SequenceNode_Type_() GeomInt_SequenceNodeOfSequenceOfParameterAndOrientation_Type_()
#define TCollection_Sequence GeomInt_SequenceOfParameterAndOrientation
#define TCollection_Sequence_hxx <GeomInt_SequenceOfParameterAndOrientation.hxx>

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
