// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepAlgo_TopOpe_HeaderFile
#define _BRepAlgo_TopOpe_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BOPTools_PDSFiller_HeaderFile
#include <BOPTools_PDSFiller.hxx>
#endif
#ifndef _BOP_PBuilder_HeaderFile
#include <BOP_PBuilder.hxx>
#endif
#ifndef _Handle_BOP_HistoryCollector_HeaderFile
#include <Handle_BOP_HistoryCollector.hxx>
#endif
#ifndef _Handle_BRepAlgo_EdgeConnector_HeaderFile
#include <Handle_BRepAlgo_EdgeConnector.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _TopAbs_State_HeaderFile
#include <TopAbs_State.hxx>
#endif
#ifndef _TopTools_ListOfShape_HeaderFile
#include <TopTools_ListOfShape.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopoDS_Wire_HeaderFile
#include <TopoDS_Wire.hxx>
#endif
#ifndef _TColStd_ListOfInteger_HeaderFile
#include <TColStd_ListOfInteger.hxx>
#endif
#ifndef _TopTools_DataMapOfShapeShape_HeaderFile
#include <TopTools_DataMapOfShapeShape.hxx>
#endif
#ifndef _TColStd_SetOfInteger_HeaderFile
#include <TColStd_SetOfInteger.hxx>
#endif
class BOP_HistoryCollector;
class BRepAlgo_EdgeConnector;
class TopoDS_Shape;
class TopTools_ListOfShape;



class BRepAlgo_TopOpe  {
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

  
  Standard_EXPORT   BRepAlgo_TopOpe();
  //! Clean the internal data structure, including the <br>
//!          Shapes of Load(). <br>
  Standard_EXPORT     void Init() ;
  //! Load the shape in the DS. <br>
//! <br>
  Standard_EXPORT     void Load(const TopoDS_Shape& S) ;
  //! Load the shapes in the DS without intersecting them. <br>
  Standard_EXPORT     void Load(TopoDS_Shape& S1,TopoDS_Shape& S2) ;
  //! Intersect two shapes at input and load the DS with <br>
//!          their intersection. Clear TopOpeBRepBuild_HBuilder if <br>
//!          necessary <br>
  Standard_EXPORT     void Intersect() ;
  //! Intersect faces contained in two given shapes <br>
//!          load the DS with them. Clear TopOpeBRepBuild_HBuilder <br>
//!          if necessary <br>
  Standard_EXPORT     void Intersect(const TopoDS_Shape& S1,const TopoDS_Shape& S2) ;
  
  Standard_EXPORT     void ToCompleteIntersection() ;
  //! return all compounds of connected edges <br>
//!          of section contained in the DS <br>
  Standard_EXPORT    const TopTools_ListOfShape& GetSectionEdgeSet() ;
  //! Invalidate a line of complete section. <br>
//!          A group of Edges connected by Vertexes. Can be a Wire. <br>
//!          Can be a group of connected Edges that do not form a <br>
//!          standard Wire. <br>
  Standard_EXPORT     void SuppressEdgeSet() ;
  
  Standard_EXPORT    const TopoDS_Shape& Merge(const TopAbs_State state1,const TopAbs_State state2) ;
  
  Standard_EXPORT    const TopoDS_Shape& Merge(const TopAbs_State state1) ;
  
  Standard_EXPORT     Standard_Boolean PaveBlocksNotEmpty() ;
  
  Standard_EXPORT    const BOP_PBuilder& Builder() const;
  
  Standard_EXPORT    const BOPTools_PDSFiller& DSFiller() const;
  
  Standard_EXPORT    const Handle_BOP_HistoryCollector& History() const;
  
  Standard_EXPORT     void Destroy() ;
Standard_EXPORT virtual ~BRepAlgo_TopOpe(){Destroy();}





protected:





private:



BOPTools_PDSFiller myDSFiller;
BOP_PBuilder myBuilder;
Handle_BOP_HistoryCollector myHistory;
Handle_BRepAlgo_EdgeConnector myEC;
TopoDS_Shape myS1;
TopoDS_Shape myS2;
TopAbs_State myState1;
TopAbs_State myState2;
TopTools_ListOfShape myListOfCompoundOfEdgeConnected;
TopTools_ListOfShape myCurrentList;
Standard_Boolean myRecomputeBuilderIsDone;
Standard_Boolean myGetSectionIsDone;
TopoDS_Shape myResultShape;
TopoDS_Wire myWire;
TopTools_ListOfShape myListOfVertex;
TopTools_ListOfShape myModified;
TopoDS_Shape myEmptyShape;
TopTools_ListOfShape myEmptyListOfShape;
TColStd_ListOfInteger myEmptyListOfInteger;
TopTools_DataMapOfShapeShape myCompoundWireMap;
TColStd_SetOfInteger mySetOfKeepPoint;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
