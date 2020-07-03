// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntRes2d_SequenceNodeOfSequenceOfIntersectionPoint_HeaderFile
#define _IntRes2d_SequenceNodeOfSequenceOfIntersectionPoint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IntRes2d_SequenceNodeOfSequenceOfIntersectionPoint_HeaderFile
#include <Handle_IntRes2d_SequenceNodeOfSequenceOfIntersectionPoint.hxx>
#endif

#ifndef _IntRes2d_IntersectionPoint_HeaderFile
#include <IntRes2d_IntersectionPoint.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class IntRes2d_IntersectionPoint;
class IntRes2d_SequenceOfIntersectionPoint;



class IntRes2d_SequenceNodeOfSequenceOfIntersectionPoint : public TCollection_SeqNode {

public:

  
      IntRes2d_SequenceNodeOfSequenceOfIntersectionPoint(const IntRes2d_IntersectionPoint& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        IntRes2d_IntersectionPoint& Value() const;




  DEFINE_STANDARD_RTTI(IntRes2d_SequenceNodeOfSequenceOfIntersectionPoint)

protected:




private: 


IntRes2d_IntersectionPoint myValue;


};

#define SeqItem IntRes2d_IntersectionPoint
#define SeqItem_hxx <IntRes2d_IntersectionPoint.hxx>
#define TCollection_SequenceNode IntRes2d_SequenceNodeOfSequenceOfIntersectionPoint
#define TCollection_SequenceNode_hxx <IntRes2d_SequenceNodeOfSequenceOfIntersectionPoint.hxx>
#define Handle_TCollection_SequenceNode Handle_IntRes2d_SequenceNodeOfSequenceOfIntersectionPoint
#define TCollection_SequenceNode_Type_() IntRes2d_SequenceNodeOfSequenceOfIntersectionPoint_Type_()
#define TCollection_Sequence IntRes2d_SequenceOfIntersectionPoint
#define TCollection_Sequence_hxx <IntRes2d_SequenceOfIntersectionPoint.hxx>

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
