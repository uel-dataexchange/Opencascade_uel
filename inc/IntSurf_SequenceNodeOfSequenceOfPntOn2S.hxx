// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntSurf_SequenceNodeOfSequenceOfPntOn2S_HeaderFile
#define _IntSurf_SequenceNodeOfSequenceOfPntOn2S_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IntSurf_SequenceNodeOfSequenceOfPntOn2S_HeaderFile
#include <Handle_IntSurf_SequenceNodeOfSequenceOfPntOn2S.hxx>
#endif

#ifndef _IntSurf_PntOn2S_HeaderFile
#include <IntSurf_PntOn2S.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class IntSurf_PntOn2S;
class IntSurf_SequenceOfPntOn2S;



class IntSurf_SequenceNodeOfSequenceOfPntOn2S : public TCollection_SeqNode {

public:

  
      IntSurf_SequenceNodeOfSequenceOfPntOn2S(const IntSurf_PntOn2S& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        IntSurf_PntOn2S& Value() const;




  DEFINE_STANDARD_RTTI(IntSurf_SequenceNodeOfSequenceOfPntOn2S)

protected:




private: 


IntSurf_PntOn2S myValue;


};

#define SeqItem IntSurf_PntOn2S
#define SeqItem_hxx <IntSurf_PntOn2S.hxx>
#define TCollection_SequenceNode IntSurf_SequenceNodeOfSequenceOfPntOn2S
#define TCollection_SequenceNode_hxx <IntSurf_SequenceNodeOfSequenceOfPntOn2S.hxx>
#define Handle_TCollection_SequenceNode Handle_IntSurf_SequenceNodeOfSequenceOfPntOn2S
#define TCollection_SequenceNode_Type_() IntSurf_SequenceNodeOfSequenceOfPntOn2S_Type_()
#define TCollection_Sequence IntSurf_SequenceOfPntOn2S
#define TCollection_Sequence_hxx <IntSurf_SequenceOfPntOn2S.hxx>

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
