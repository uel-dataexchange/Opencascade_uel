// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom_SequenceNodeOfSequenceOfSurface_HeaderFile
#define _Geom_SequenceNodeOfSequenceOfSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Geom_SequenceNodeOfSequenceOfSurface_HeaderFile
#include <Handle_Geom_SequenceNodeOfSequenceOfSurface.hxx>
#endif

#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class Geom_Surface;
class Geom_SequenceOfSurface;



class Geom_SequenceNodeOfSequenceOfSurface : public TCollection_SeqNode {

public:

  
      Geom_SequenceNodeOfSequenceOfSurface(const Handle(Geom_Surface)& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        Handle_Geom_Surface& Value() const;




  DEFINE_STANDARD_RTTI(Geom_SequenceNodeOfSequenceOfSurface)

protected:




private: 


Handle_Geom_Surface myValue;


};

#define SeqItem Handle_Geom_Surface
#define SeqItem_hxx <Geom_Surface.hxx>
#define TCollection_SequenceNode Geom_SequenceNodeOfSequenceOfSurface
#define TCollection_SequenceNode_hxx <Geom_SequenceNodeOfSequenceOfSurface.hxx>
#define Handle_TCollection_SequenceNode Handle_Geom_SequenceNodeOfSequenceOfSurface
#define TCollection_SequenceNode_Type_() Geom_SequenceNodeOfSequenceOfSurface_Type_()
#define TCollection_Sequence Geom_SequenceOfSurface
#define TCollection_Sequence_hxx <Geom_SequenceOfSurface.hxx>

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
