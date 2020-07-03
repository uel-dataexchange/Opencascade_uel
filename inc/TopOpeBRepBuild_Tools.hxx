// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_Tools_HeaderFile
#define _TopOpeBRepBuild_Tools_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TopAbs_State_HeaderFile
#include <TopAbs_State.hxx>
#endif
#ifndef _TopAbs_ShapeEnum_HeaderFile
#include <TopAbs_ShapeEnum.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class TopOpeBRepDS_IndexedDataMapOfShapeWithState;
class TopoDS_Shape;
class TopTools_IndexedDataMapOfShapeListOfShape;
class TopTools_MapOfShape;
class TopOpeBRepDS_DataMapOfShapeState;
class TopTools_IndexedMapOfShape;
class TopOpeBRepTool_ShapeClassifier;
class TopoDS_Face;
class TopoDS_Edge;
class gp_Vec;
class TopoDS_Wire;
class TopTools_IndexedMapOfOrientedShape;
class TopTools_IndexedDataMapOfShapeShape;


//! Auxiliary  methods  used  in  TopOpeBRepBuild_Builder1  class <br>
class TopOpeBRepBuild_Tools  {
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

  
  Standard_EXPORT   static  void DumpMapOfShapeWithState(const Standard_Integer iP,const TopOpeBRepDS_IndexedDataMapOfShapeWithState& aMapOfShapeWithState) ;
  
  Standard_EXPORT   static  void FindState(const TopoDS_Shape& aVertex,const TopAbs_State aState,const TopAbs_ShapeEnum aShapeEnum,const TopTools_IndexedDataMapOfShapeListOfShape& aMapVertexEdges,TopTools_MapOfShape& aMapProcessedVertices,TopOpeBRepDS_DataMapOfShapeState& aMapVs) ;
  
  Standard_EXPORT   static  void PropagateState(const TopOpeBRepDS_DataMapOfShapeState& aSplEdgesState,const TopTools_IndexedMapOfShape& anEdgesToRestMap,const TopAbs_ShapeEnum aShapeEnum1,const TopAbs_ShapeEnum aShapeEnum2,TopOpeBRepTool_ShapeClassifier& aShapeClassifier,TopOpeBRepDS_IndexedDataMapOfShapeWithState& aMapOfShapeWithState,const TopTools_MapOfShape& anUnkStateShapes) ;
  
  Standard_EXPORT   static  TopAbs_State FindStateThroughVertex(const TopoDS_Shape& aShape,TopOpeBRepTool_ShapeClassifier& aShapeClassifier,TopOpeBRepDS_IndexedDataMapOfShapeWithState& aMapOfShapeWithState,const TopTools_MapOfShape& anAvoidSubshMap) ;
  
  Standard_EXPORT   static  void PropagateStateForWires(const TopTools_IndexedMapOfShape& aFacesToRestMap,TopOpeBRepDS_IndexedDataMapOfShapeWithState& aMapOfShapeWithState) ;
  
  Standard_EXPORT   static  void SpreadStateToChild(const TopoDS_Shape& aShape,const TopAbs_State aState,TopOpeBRepDS_IndexedDataMapOfShapeWithState& aMapOfShapeWithState) ;
  
  Standard_EXPORT   static  void FindState1(const TopoDS_Shape& anEdge,const TopAbs_State aState,const TopTools_IndexedDataMapOfShapeListOfShape& aMapEdgesFaces,TopTools_MapOfShape& aMapProcessedVertices,TopOpeBRepDS_DataMapOfShapeState& aMapVs) ;
  
  Standard_EXPORT   static  void FindState2(const TopoDS_Shape& anEdge,const TopAbs_State aState,const TopTools_IndexedDataMapOfShapeListOfShape& aMapEdgesFaces,TopTools_MapOfShape& aMapProcessedEdges,TopOpeBRepDS_DataMapOfShapeState& aMapVs) ;
  
  Standard_EXPORT   static  Standard_Boolean GetAdjacentFace(const TopoDS_Shape& aFaceObj,const TopoDS_Shape& anEObj,const TopTools_IndexedDataMapOfShapeListOfShape& anEdgeFaceMap,TopoDS_Shape& anAdjFaceObj) ;
  
  Standard_EXPORT   static  void GetNormalToFaceOnEdge(const TopoDS_Face& aFObj,const TopoDS_Edge& anEdgeObj,gp_Vec& aDirNormal) ;
  //!  This  function  used  to  compute  normal  in  point  which  is  located <br>
//!          near  the  point  with  param  UV    (used  for  computation  of  normals  where  the  normal  in  the  point UV  equal  to  zero). <br>
  Standard_EXPORT   static  void GetNormalInNearestPoint(const TopoDS_Face& aFace,const TopoDS_Edge& anEdge,gp_Vec& aNormal) ;
  
  Standard_EXPORT   static  Standard_Boolean GetTangentToEdgeEdge(const TopoDS_Face& aFObj,const TopoDS_Edge& anEdgeObj,const TopoDS_Edge& aOriEObj,gp_Vec& aTangent) ;
  
  Standard_EXPORT   static  Standard_Boolean GetTangentToEdge(const TopoDS_Edge& anEdgeObj,gp_Vec& aTangent) ;
  //!  Recompute  PCurves  of  the  all  edges  from  the  wire  on  the  <toFace> <br>
  Standard_EXPORT   static  void UpdatePCurves(const TopoDS_Wire& aWire,const TopoDS_Face& fromFace,const TopoDS_Face& toFace) ;
  //!  recompute  PCurves  of  the  closing  (SIM  ,  with 2  PCurves)  edge on  the  NewFace <br>
  Standard_EXPORT   static  void UpdateEdgeOnPeriodicalFace(const TopoDS_Edge& aEdgeToUpdate,const TopoDS_Face& OldFace,const TopoDS_Face& NewFace) ;
  //!  recompute  PCurve  of  the    edge on  the  NewFace <br>
  Standard_EXPORT   static  void UpdateEdgeOnFace(const TopoDS_Edge& aEdgeToUpdate,const TopoDS_Face& OldFace,const TopoDS_Face& NewFace) ;
  
  Standard_EXPORT   static  Standard_Boolean IsDegEdgesTheSame(const TopoDS_Shape& anE1,const TopoDS_Shape& anE2) ;
  //!  test  if  <oldFace>  does  not  contain  INTERNAL  or  EXTERNAL  edges <br>
//!            and  remove  such  edges  in  case  of  its  presence.  The  result  is  stored  in  <corrFace> <br>
  Standard_EXPORT   static  void NormalizeFace(const TopoDS_Shape& oldFace,TopoDS_Shape& corrFace) ;
  //!  test  if  UV  representation  of  <oldFace>  is  good  (i.e.  face  is  closed  in  2d). <br>
//!           if  face  is  not  closed  ,  this  method  will  try  to  close  such  face  and  will <br>
//!           return  corrected  edges  in  the  <aMapOfCorrect2dEdges>.  Parameter  <aSourceShapes> <br>
//!           used  to  fix  the  edge  (or  wires)  which  should  be  correct  (Corrector  used  it  as  a  start  shapes). <br>
//!           NOTE  :  Parameter  corrFace  doesn't  mean  anything.  If  you  want  to use  this  method  ,  rebuild  resulting  face <br>
//!           after  by  yourself  using  corrected  edges. <br>
  Standard_EXPORT   static  void CorrectFace2d(const TopoDS_Shape& oldFace,TopoDS_Shape& corrFace,const TopTools_IndexedMapOfOrientedShape& aSourceShapes,TopTools_IndexedDataMapOfShapeShape& aMapOfCorrect2dEdges) ;
  
  Standard_EXPORT   static  void CorrectTolerances(const TopoDS_Shape& aS,const Standard_Real aTolMax = 0.0001) ;
  
  Standard_EXPORT   static  void CorrectCurveOnSurface(const TopoDS_Shape& aS,const Standard_Real aTolMax = 0.0001) ;
  
  Standard_EXPORT   static  void CorrectPointOnCurve(const TopoDS_Shape& aS,const Standard_Real aTolMax = 0.0001) ;
  //! Checks if <theFace> has the properly closed in 2D boundary(ies) <br>
  Standard_EXPORT   static  Standard_Boolean CheckFaceClosed2d(const TopoDS_Face& theFace) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
