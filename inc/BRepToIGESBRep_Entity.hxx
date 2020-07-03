// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepToIGESBRep_Entity_HeaderFile
#define _BRepToIGESBRep_Entity_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopTools_IndexedMapOfShape_HeaderFile
#include <TopTools_IndexedMapOfShape.hxx>
#endif
#ifndef _TColStd_IndexedMapOfTransient_HeaderFile
#include <TColStd_IndexedMapOfTransient.hxx>
#endif
#ifndef _Handle_IGESSolid_EdgeList_HeaderFile
#include <Handle_IGESSolid_EdgeList.hxx>
#endif
#ifndef _Handle_IGESSolid_VertexList_HeaderFile
#include <Handle_IGESSolid_VertexList.hxx>
#endif
#ifndef _BRepToIGES_BREntity_HeaderFile
#include <BRepToIGES_BREntity.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_IGESData_IGESEntity_HeaderFile
#include <Handle_IGESData_IGESEntity.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_IGESSolid_Loop_HeaderFile
#include <Handle_IGESSolid_Loop.hxx>
#endif
#ifndef _Handle_IGESSolid_Face_HeaderFile
#include <Handle_IGESSolid_Face.hxx>
#endif
#ifndef _Handle_IGESSolid_Shell_HeaderFile
#include <Handle_IGESSolid_Shell.hxx>
#endif
#ifndef _Handle_IGESSolid_ManifoldSolid_HeaderFile
#include <Handle_IGESSolid_ManifoldSolid.hxx>
#endif
class IGESSolid_EdgeList;
class IGESSolid_VertexList;
class TopoDS_Vertex;
class TopoDS_Edge;
class IGESData_IGESEntity;
class TopoDS_Shape;
class TopoDS_Face;
class IGESSolid_Loop;
class TopoDS_Wire;
class IGESSolid_Face;
class IGESSolid_Shell;
class TopoDS_Shell;
class IGESSolid_ManifoldSolid;
class TopoDS_Solid;
class TopoDS_CompSolid;
class TopoDS_Compound;


//! provides methods to transfer BRep entity from CASCADE to IGESBRep. <br>
class BRepToIGESBRep_Entity  : public BRepToIGES_BREntity {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Creates a tool Entity <br>
  Standard_EXPORT   BRepToIGESBRep_Entity();
  //! Clears the contents of the fields <br>
  Standard_EXPORT     void Clear() ;
  //!  Create the VertexList entity <br>
  Standard_EXPORT     void TransferVertexList() ;
  //! Returns the index of <myvertex> in "myVertices" <br>
  Standard_EXPORT     Standard_Integer IndexVertex(const TopoDS_Vertex& myvertex) const;
  //! Stores <myvertex> in "myVertices" <br>
//!          Returns the index of <myvertex>. <br>
  Standard_EXPORT     Standard_Integer AddVertex(const TopoDS_Vertex& myvertex) ;
  //!  Transfert an Edge entity from TopoDS to IGES <br>
  Standard_EXPORT     void TransferEdgeList() ;
  //! Returns the index of <myedge> in "myEdges" <br>
  Standard_EXPORT     Standard_Integer IndexEdge(const TopoDS_Edge& myedge) const;
  //! Stores <myedge> in "myEdges" and <mycurve3d> in "myCurves". <br>
//!           Returns the index of <myedge>. <br>
  Standard_EXPORT     Standard_Integer AddEdge(const TopoDS_Edge& myedge,const Handle(IGESData_IGESEntity)& mycurve3d) ;
  //! Returns the result of the transfert of any Shape <br>
//!           If  the transfer has  failed, this member return a NullEntity. <br>
  Standard_EXPORT   virtual  Handle_IGESData_IGESEntity TransferShape(const TopoDS_Shape& start) ;
  //!  Transfert an Edge entity from TopoDS to IGES <br>
//!            If this Entity could not be converted, this member returns a NullEntity. <br>
  Standard_EXPORT     Handle_IGESData_IGESEntity TransferEdge(const TopoDS_Edge& myedge) ;
  //!  Transfert an Edge entity from TopoDS to IGES <br>
//!            If this Entity could not be converted, this member returns a NullEntity. <br>
  Standard_EXPORT     Handle_IGESData_IGESEntity TransferEdge(const TopoDS_Edge& myedge,const TopoDS_Face& myface,const Standard_Real length) ;
  //!  Transfert a Wire entity from TopoDS to IGES. <br>
//!            Returns the curve associated to mywire in the parametric space of myface. <br>
//!            If this Entity could not be converted, this member returns a NullEntity. <br>
  Standard_EXPORT     Handle_IGESSolid_Loop TransferWire(const TopoDS_Wire& mywire,const TopoDS_Face& myface,const Standard_Real length) ;
  //!  Transfert a Face entity from TopoDS to IGES <br>
//!            If this Entity could not be converted, this member returns a NullEntity. <br>
  Standard_EXPORT     Handle_IGESData_IGESEntity TransferFace(const TopoDS_Face& start) ;
  //!  Transfert an Shell entity from TopoDS to IGES <br>
//!            If this Entity could not be converted, this member returns a NullEntity. <br>
  Standard_EXPORT     Handle_IGESSolid_Shell TransferShell(const TopoDS_Shell& start) ;
  //!  Transfert a Solid entity from TopoDS to IGES <br>
//!            If this Entity could not be converted, this member returns a NullEntity. <br>
  Standard_EXPORT     Handle_IGESSolid_ManifoldSolid TransferSolid(const TopoDS_Solid& start) ;
  //!  Transfert an CompSolid entity from TopoDS to IGES <br>
//!            If this Entity could not be converted, this member returns a NullEntity. <br>
  Standard_EXPORT     Handle_IGESData_IGESEntity TransferCompSolid(const TopoDS_CompSolid& start) ;
  //!  Transfert a Compound entity from TopoDS to IGES <br>
//!            If this Entity could not be converted, this member returns a NullEntity. <br>
  Standard_EXPORT     Handle_IGESData_IGESEntity TransferCompound(const TopoDS_Compound& start) ;

  Standard_EXPORT   Handle(IGESData_IGESEntity) TransferPlanFace(const TopoDS_Face& start);



protected:





private:



TopTools_IndexedMapOfShape myVertices;
TopTools_IndexedMapOfShape myEdges;
TColStd_IndexedMapOfTransient myCurves;
Handle_IGESSolid_EdgeList myEdgeList;
Handle_IGESSolid_VertexList myVertexList;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
