// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_SequenceNodeOfSequenceOfCurves_HeaderFile
#define _IntTools_SequenceNodeOfSequenceOfCurves_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IntTools_SequenceNodeOfSequenceOfCurves_HeaderFile
#include <Handle_IntTools_SequenceNodeOfSequenceOfCurves.hxx>
#endif

#ifndef _IntTools_Curve_HeaderFile
#include <IntTools_Curve.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class IntTools_Curve;
class IntTools_SequenceOfCurves;



class IntTools_SequenceNodeOfSequenceOfCurves : public TCollection_SeqNode {

public:

  
      IntTools_SequenceNodeOfSequenceOfCurves(const IntTools_Curve& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        IntTools_Curve& Value() const;




  DEFINE_STANDARD_RTTI(IntTools_SequenceNodeOfSequenceOfCurves)

protected:




private: 


IntTools_Curve myValue;


};

#define SeqItem IntTools_Curve
#define SeqItem_hxx <IntTools_Curve.hxx>
#define TCollection_SequenceNode IntTools_SequenceNodeOfSequenceOfCurves
#define TCollection_SequenceNode_hxx <IntTools_SequenceNodeOfSequenceOfCurves.hxx>
#define Handle_TCollection_SequenceNode Handle_IntTools_SequenceNodeOfSequenceOfCurves
#define TCollection_SequenceNode_Type_() IntTools_SequenceNodeOfSequenceOfCurves_Type_()
#define TCollection_Sequence IntTools_SequenceOfCurves
#define TCollection_Sequence_hxx <IntTools_SequenceOfCurves.hxx>

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
