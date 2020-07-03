// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StlMesh_SequenceNodeOfSequenceOfMeshTriangle_HeaderFile
#define _StlMesh_SequenceNodeOfSequenceOfMeshTriangle_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StlMesh_SequenceNodeOfSequenceOfMeshTriangle_HeaderFile
#include <Handle_StlMesh_SequenceNodeOfSequenceOfMeshTriangle.hxx>
#endif

#ifndef _Handle_StlMesh_MeshTriangle_HeaderFile
#include <Handle_StlMesh_MeshTriangle.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class StlMesh_MeshTriangle;
class StlMesh_SequenceOfMeshTriangle;



class StlMesh_SequenceNodeOfSequenceOfMeshTriangle : public TCollection_SeqNode {

public:

  
      StlMesh_SequenceNodeOfSequenceOfMeshTriangle(const Handle(StlMesh_MeshTriangle)& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        Handle_StlMesh_MeshTriangle& Value() const;




  DEFINE_STANDARD_RTTI(StlMesh_SequenceNodeOfSequenceOfMeshTriangle)

protected:




private: 


Handle_StlMesh_MeshTriangle myValue;


};

#define SeqItem Handle_StlMesh_MeshTriangle
#define SeqItem_hxx <StlMesh_MeshTriangle.hxx>
#define TCollection_SequenceNode StlMesh_SequenceNodeOfSequenceOfMeshTriangle
#define TCollection_SequenceNode_hxx <StlMesh_SequenceNodeOfSequenceOfMeshTriangle.hxx>
#define Handle_TCollection_SequenceNode Handle_StlMesh_SequenceNodeOfSequenceOfMeshTriangle
#define TCollection_SequenceNode_Type_() StlMesh_SequenceNodeOfSequenceOfMeshTriangle_Type_()
#define TCollection_Sequence StlMesh_SequenceOfMeshTriangle
#define TCollection_Sequence_hxx <StlMesh_SequenceOfMeshTriangle.hxx>

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
