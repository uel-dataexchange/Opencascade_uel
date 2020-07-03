// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StdSelect_BRepSelectionTool_HeaderFile
#define _StdSelect_BRepSelectionTool_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_SelectMgr_Selection_HeaderFile
#include <Handle_SelectMgr_Selection.hxx>
#endif
#ifndef _TopAbs_ShapeEnum_HeaderFile
#include <TopAbs_ShapeEnum.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_SelectMgr_SelectableObject_HeaderFile
#include <Handle_SelectMgr_SelectableObject.hxx>
#endif
#ifndef _Handle_StdSelect_BRepOwner_HeaderFile
#include <Handle_StdSelect_BRepOwner.hxx>
#endif
#ifndef _Handle_Select3D_SensitiveEntity_HeaderFile
#include <Handle_Select3D_SensitiveEntity.hxx>
#endif
class SelectMgr_Selection;
class TopoDS_Shape;
class SelectMgr_SelectableObject;
class StdSelect_BRepOwner;
class Select3D_SensitiveEntity;
class TopoDS_Face;
class Select3D_ListOfSensitive;


//! Tool to create specific selections (sets of primitives) <br>
//!          for Shapes from Topology. <br>
//!          These Selections may be used  in dynamic selection <br>
//!          Mechanism <br>
//!          Given a Shape and a mode of selection <br>
//!          (selection of vertices, <br>
//!          edges,faces ...) , This Tool Computes corresponding sensitive primitives, <br>
//!          puts them in an entity called Selection (see package SelectMgr) and returns it. <br>
//! <br>
//! <br>
//!          A Priority for the decomposed pickable objects can be given ; <br>
//!         by default There is A Preset Hierachy: <br>
//!             Vertex             priority : 5 <br>
//!             Edge               priority : 4 <br>
//!             Wire               priority : 3 <br>
//!             Face               priority : 2 <br>
//!             Shell,solid,shape  priority : 1 <br>
//!         the default priority in the following methods has no sense - it's only taken in account <br>
//!         when the user gives a value between 0 and 10. <br>
//!          IMPORTANT : This decomposition creates BRepEntityOwner instances (from StdSelect). <br>
//!                      which are stored in the Sensitive Entities coming from The Decomposition. <br>
//! <br>
//!                      the result of picking in a ViewerSelector return EntityOwner from SelectMgr; <br>
//!                      to know what kind of object was picked : <br>
//! <br>
//!   ENTITY_OWNER -> Selectable() gives the selectableobject which <br>
//!                          was decomposed into pickable elements. <br>
//!  Handle(StdSelect_BRepOwner)::DownCast(ENTITY_OWNER) -> Shape() <br>
//!                            gives the real picked shape (edge,vertex,shape...) <br>
//! <br>
class StdSelect_BRepSelectionTool  {
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

  //! Decomposition of <aShape> into sensitive entities following <br>
//!         a mode of decomposition <aType>. These entities are stored in <aSelection>. <br>
//!         BrepOwners are created to store the identity of the picked shapes <br>
//!         during the selection process. <br>
//!         In those BRepOwners is also stored the original shape. <br>
//!         But One can't get the selectable object which was decomposed to give <br>
//!         the sensitive entities. <br>
//!        maximal parameter is used for infinite objects, to limit the sensitive Domain.... <br>
//!         If AutoTriangulation = True, a Triangulation will be <br>
//!         computed for faces which have no existing one. <br>
//!         if AutoTriangulation = False the old algorithm will be <br>
//!         called to compute sensitive entities on faces. <br>
  Standard_EXPORT   static  void Load(const Handle(SelectMgr_Selection)& aSelection,const TopoDS_Shape& aShape,const TopAbs_ShapeEnum aType,const Standard_Real theDeflection,const Standard_Real theDeviationAngle,const Standard_Boolean AutoTriangulation = Standard_True,const Standard_Integer aPriority = -1,const Standard_Integer NbPOnEdge = 9,const Standard_Real MaximalParameter = 500) ;
  //!  Same  functionnalities  ; the  only <br>
//!        difference is that  the selectable object from which the <br>
//!        selection comes is stored in each Sensitive EntityOwner; <br>//!decomposition of <aShape> into sensitive entities following <br>
//!         a mode of decomposition <aType>. These entities are stored in <aSelection> <br>
//!         The Major difference is that the known users are first inserted in the <br>
//!         BRepOwners. the original shape is the last user... <br>
//!         (see EntityOwner from SelectBasics and BrepOwner)... <br>
  Standard_EXPORT   static  void Load(const Handle(SelectMgr_Selection)& aSelection,const Handle(SelectMgr_SelectableObject)& Origin,const TopoDS_Shape& aShape,const TopAbs_ShapeEnum aType,const Standard_Real theDeflection,const Standard_Real theDeviationAngle,const Standard_Boolean AutoTriangulation = Standard_True,const Standard_Integer aPriority = -1,const Standard_Integer NbPOnEdge = 9,const Standard_Real MaximalParameter = 500) ;
  //! Returns the standard priority of the shape aShap having the type aType. <br>
//! This priority is passed to a StdSelect_BRepOwner object. <br>
//! You can use the function Load to modify the <br>
//! selection priority of an owner to make one entity <br>
//! more selectable than another one. <br>
  Standard_EXPORT   static  Standard_Integer GetStandardPriority(const TopoDS_Shape& aShap,const TopAbs_ShapeEnum aType) ;
  //! Computes the sensitive primitives corresponding to <br>
//! the subshape aShape with the owner anOwner. <br>
//! Stores them in the SelectMgr_Selection object, and returns this object. <br>
//! The number NbPOnEdge is used to define edges and wires. <br>
//! In the case of infinite objects, the value <br>
//! MaximalParameter serves to limit computation time <br>
//! by limiting the sensitive area. The default value is 500. <br>
//! If AutoTriangulation is true, triangulation will be <br>
//! computed for the faces which have none. If it is false, <br>
//! sensitive entities on these faces will be calculated. <br>
  Standard_EXPORT   static  void ComputeSensitive(const TopoDS_Shape& aShape,const Handle(StdSelect_BRepOwner)& anOwner,const Handle(SelectMgr_Selection)& aSelection,const Standard_Real theDeflection,const Standard_Real theDeviationAngle,const Standard_Integer NbPOnEdge,const Standard_Real MaximalParameter,const Standard_Boolean AutoTriangulation = Standard_True) ;
  //!   appends   to <OutList>   the  3D <br>
//!          sensitive entities  created  for  selection of <aFace> <br>
//!         if<InteriorFlag> =  False  the face  will  be sensitive only on its boundary <br>
  Standard_EXPORT   static  Standard_Boolean GetSensitiveForFace(const TopoDS_Face& aFace,const Handle(StdSelect_BRepOwner)& anOwner,Select3D_ListOfSensitive& OutList,const Standard_Boolean AutoTriangulation = Standard_True,const Standard_Integer NbPOnEdge = 9,const Standard_Real MaxiParam = 500,const Standard_Boolean InteriorFlag = Standard_True) ;





protected:





private:

  
  Standard_EXPORT   static  void GetEdgeSensitive(const TopoDS_Shape& aShape,const Handle(StdSelect_BRepOwner)& anOwner,const Handle(SelectMgr_Selection)& aSelection,const Standard_Real theDeflection,const Standard_Real theDeflectionAngle,const Standard_Integer NbPOnEdge,const Standard_Real MaximalParameter,Handle(Select3D_SensitiveEntity)& aSensitive) ;




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
