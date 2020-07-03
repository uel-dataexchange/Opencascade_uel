// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_Structure_HeaderFile
#define _Graphic3d_Structure_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Graphic3d_Structure_HeaderFile
#include <Handle_Graphic3d_Structure.hxx>
#endif

#ifndef _Graphic3d_CStructure_HeaderFile
#include <Graphic3d_CStructure.hxx>
#endif
#ifndef _Aspect_GenId_HeaderFile
#include <Aspect_GenId.hxx>
#endif
#ifndef _TColStd_SequenceOfAddress_HeaderFile
#include <TColStd_SequenceOfAddress.hxx>
#endif
#ifndef _Graphic3d_SequenceOfGroup_HeaderFile
#include <Graphic3d_SequenceOfGroup.hxx>
#endif
#ifndef _Handle_Graphic3d_GraphicDriver_HeaderFile
#include <Handle_Graphic3d_GraphicDriver.hxx>
#endif
#ifndef _Quantity_Color_HeaderFile
#include <Quantity_Color.hxx>
#endif
#ifndef _Aspect_TypeOfHighlightMethod_HeaderFile
#include <Aspect_TypeOfHighlightMethod.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Graphic3d_TypeOfStructure_HeaderFile
#include <Graphic3d_TypeOfStructure.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_Graphic3d_StructureManager_HeaderFile
#include <Handle_Graphic3d_StructureManager.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Graphic3d_AspectLine3d_HeaderFile
#include <Handle_Graphic3d_AspectLine3d.hxx>
#endif
#ifndef _Handle_Graphic3d_AspectFillArea3d_HeaderFile
#include <Handle_Graphic3d_AspectFillArea3d.hxx>
#endif
#ifndef _Handle_Graphic3d_AspectText3d_HeaderFile
#include <Handle_Graphic3d_AspectText3d.hxx>
#endif
#ifndef _Handle_Graphic3d_AspectMarker3d_HeaderFile
#include <Handle_Graphic3d_AspectMarker3d.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Graphic3d_DataStructureManager_HeaderFile
#include <Handle_Graphic3d_DataStructureManager.hxx>
#endif
#ifndef _Graphic3d_TypeOfPrimitive_HeaderFile
#include <Graphic3d_TypeOfPrimitive.hxx>
#endif
#ifndef _Graphic3d_TypeOfConnection_HeaderFile
#include <Graphic3d_TypeOfConnection.hxx>
#endif
#ifndef _Graphic3d_TypeOfComposition_HeaderFile
#include <Graphic3d_TypeOfComposition.hxx>
#endif
#ifndef _Graphic3d_TransModeFlags_HeaderFile
#include <Graphic3d_TransModeFlags.hxx>
#endif
#ifndef _Handle_Graphic3d_Group_HeaderFile
#include <Handle_Graphic3d_Group.hxx>
#endif
#ifndef _Handle_Graphic3d_Plotter_HeaderFile
#include <Handle_Graphic3d_Plotter.hxx>
#endif
class Graphic3d_GraphicDriver;
class Graphic3d_PriorityDefinitionError;
class Graphic3d_StructureDefinitionError;
class Graphic3d_TransformError;
class Graphic3d_Group;
class Graphic3d_StructureManager;
class Quantity_Color;
class Graphic3d_AspectLine3d;
class Graphic3d_AspectFillArea3d;
class Graphic3d_AspectText3d;
class Graphic3d_AspectMarker3d;
class Graphic3d_DataStructureManager;
class TColStd_Array2OfReal;
class Graphic3d_VertexNC;
class Graphic3d_Vector;
class Graphic3d_SequenceOfGroup;
class Graphic3d_MapOfStructure;
class gp_Pnt;
class Graphic3d_Plotter;
class Graphic3d_Vertex;


//! This class allows the definition a graphic object. <br>
//!	    This graphic structure can be displayed, <br>
//!	    erased, or highlighted. <br>
//!	    This graphic structure can be connected with <br>
//!	    another graphic structure. <br>
//!  Keywords: Structure, StructureManager, Display, Erase, Highlight, <br>
//!	     UnHighlight, Visible, Priority, Selectable, Visible, <br>
//!	     Visual, Connection, Ancestors, Descendants, Transformation <br>
class Graphic3d_Structure : public MMgt_TShared {

public:

  //! Creates a graphic object in the manager <AManager>. <br>
//!	    It will appear in all the views of the visualiser. <br>
//!  Warning: The default values AspectLine, AspectFillArea, <br>
//!	    AspectText and AspectMarker are NOT applied to the <br>
//!	    structure. <br>
//!	    The structure is not displayed when it is created. <br>
  Standard_EXPORT   Graphic3d_Structure(const Handle(Graphic3d_StructureManager)& AManager);
  //! if WithDestruction == Standard_True then <br>
//!		suppress all the groups of primitives in the structure. <br>
//!	        and it is mandatory to create a new group in <me>. <br>
//!	    if WithDestruction == Standard_False then <br>
//!		clears all the groups of primitives in the structure. <br>
//!	        and all the groups are conserved and empty. <br>
//!	    They will be erased at the next screen update. <br>
//!	    The structure itself is conserved. <br>
//!	    The transformation and the attributes of <me> are conserved. <br>
//!	    The childs of <me> are conserved. <br>
  Standard_EXPORT   virtual  void Clear(const Standard_Boolean WithDestruction = Standard_True) ;
  //! Suppresses the structure <me>. <br>
//!	    It will be erased at the next screen update. <br>
  Standard_EXPORT   virtual  void Destroy() ;
~Graphic3d_Structure()
{
  Destroy();
}
  //! Displays the structure <me> in all the views of <br>
//!	    the visualiser. <br>
  Standard_EXPORT   virtual  void Display() ;
  //! Displays the structure <me> in all the views of <br>
//!	    the visualiser, while modifying its current priority. <br>
//!          Note: Display Priorities <br>
//!          Structure display priorities control the order in which <br>
//!          structures are redrawn.   When you display a <br>
//!          structure, you specify its priority. The lower the value, <br>
//!          the lower the display priority. When the display is <br>
//!          regenerated, the structures with the lowest priority <br>
//!          are drawn first. For structures with the same display <br>
//!          priority, the order in which they were displayed <br>
//!          determines the drawing order. Open CASCADE <br>
//!          supports 11 structure display priorities, 0 to 10. <br>
//!          Warning: Raises PriorityDefinitionError if <Priority> is <br>
//!	    greater than 10 or a negative value. <br>
  Standard_EXPORT     void Display(const Standard_Integer Priority) ;
  //! Returns the current display priority for the <br>
//!	    structure <me>. <br>
  Standard_EXPORT     Standard_Integer DisplayPriority() const;
  //! Erases the structure <me> in all the views <br>
//!	    of the visualiser. <br>
  Standard_EXPORT   virtual  void Erase() ;
  //! Highlights the structure <me> in all the <br>
//!	    views of the visualiser, using the following methods: <br>
  Standard_EXPORT     void Highlight(const Aspect_TypeOfHighlightMethod Method) ;
  //! Suppress the structure <me>. <br>
//!	    It will be erased at the next screen update. <br>
//!  Warning: No more graphic operations in <me> after this call. <br>
//!  Category: Methods to modify the class definition <br>
  Standard_EXPORT     void Remove() ;
  //! Modifies the highlight color for the Highlight method <br>
//!	    with the highlight method TOHM_COLOR or TOHM_BOUNDBOX. <br>
  Standard_EXPORT     void SetHighlightColor(const Quantity_Color& AColor) ;
  //! Modifies the coordinates of the boundary box <br>
//!	    of the structure <me>. <br>
//!	    if <AFlag> is Standard_True then <me> is infinite and <br>
//!	    the MinMaxValues method or the MinMaxCoord method return : <br>
//!	    XMin = YMin = ZMin = RealFirst (). <br>
//!	    XMax = YMax = ZMax = RealLast (). <br>
//!	    By default, <me> is not infinite but empty. <br>
  Standard_EXPORT     void SetInfiniteState(const Standard_Boolean AFlag) ;
  //! Modifies the order of displaying the structure. <br>
//!	    Values are between 0 et 10. <br>
//!	    The priority 10 being displayed first. <br>
//!	    The default value is 5 <br>
//!  Category: Methods to modify the class definition <br>
//!  Warning: If <me> is displayed then the SetDisplayPriority <br>
//!	    method erase <me> and display <me> with the <br>
//!	    new priority. <br>
//!	    Raises PriorityDefinitionError if <Priority> is <br>
//!	    greater than 10 or a negative value. <br>
  Standard_EXPORT     void SetDisplayPriority(const Standard_Integer Priority) ;
  //! Reset the current priority of the structure to the <br>
//!	    previous priority. <br>
//!  Category: Methods to modify the class definition <br>
//!  Warning: If <me> is displayed then the SetDisplayPriority <br>
//!	    method erase <me> and display <me> with the <br>
//!	    previous priority. <br>
  Standard_EXPORT     void ResetDisplayPriority() ;
  //! Modifies the detectability indicator to Standard_True <br>
//!	    or Standard_False for the structure <me>. <br>
//!	    The default value at the definition of <me> is <br>
//!	    Standard_True. <br>
  Standard_EXPORT     void SetPick(const Standard_Boolean AValue) ;
  //! Modifies the default attributes for lines <br>
//!	    in the structure <me>. <br>
  Standard_EXPORT     void SetPrimitivesAspect(const Handle(Graphic3d_AspectLine3d)& CTX) ;
  //! Modifies the default attributes for faces <br>
//!	    in the structure <me>. <br>
  Standard_EXPORT     void SetPrimitivesAspect(const Handle(Graphic3d_AspectFillArea3d)& CTX) ;
  //! Modifies the default attributes for text <br>
//!	    in the structure <me>. <br>
  Standard_EXPORT     void SetPrimitivesAspect(const Handle(Graphic3d_AspectText3d)& CTX) ;
  //! Modifies the default attributes for markers <br>
//!	    in the structure <me>. <br>
  Standard_EXPORT     void SetPrimitivesAspect(const Handle(Graphic3d_AspectMarker3d)& CTX) ;
  //! Modifies the visibility indicator to Standard_True or <br>
//!	    Standard_False for the structure <me>. <br>
//!	    The default value at the definition of <me> is <br>
//!	    Standard_True. <br>
  Standard_EXPORT     void SetVisible(const Standard_Boolean AValue) ;
  //! Moves the graphic object <me> in the manager <AManager>. <br>
//!	    If <WithPropagation> is Standard_True then all the connected <br>
//!	    graphic objects to <me> are moved. <br>
  Standard_EXPORT     void SetManager(const Handle(Graphic3d_StructureManager)& AManager,const Standard_Boolean WithPropagation = Standard_False) ;
  //! Modifies the visualisation mode for the structure <me>. <br>
  Standard_EXPORT   virtual  void SetVisual(const Graphic3d_TypeOfStructure AVisual) ;
  //! Modifies the minimum and maximum zoom coefficients <br>
//!	    for the structure <me>. <br>
//!	    The default value at the definition of <me> is unlimited. <br>
//!  Category: Methods to modify the class definition <br>
//!  Warning: Raises StructureDefinitionError if <LimitInf> is <br>
//!	    greater than <LimitSup> or if <LimitInf> or <br>
//!	    <LimitSup> is a negative value. <br>
  Standard_EXPORT     void SetZoomLimit(const Standard_Real LimitInf,const Standard_Real LimitSup) ;
  //! Suppresses the highlight for the structure <me> <br>
//!	     in all the views of the visualiser. <br>
  Standard_EXPORT     void UnHighlight() ;
  //! Returns the new Structure defined for the new visualization <br>
  Standard_EXPORT   virtual  Handle_Graphic3d_Structure Compute(const Handle(Graphic3d_DataStructureManager)& aProjector) ;
  //! Returns the new Structure defined for the new visualization <br>
  Standard_EXPORT   virtual  Handle_Graphic3d_Structure Compute(const Handle(Graphic3d_DataStructureManager)& aProjector,const TColStd_Array2OfReal& AMatrix) ;
  //! Returns the new Structure defined for the new visualization <br>
  Standard_EXPORT   virtual  void Compute(const Handle(Graphic3d_DataStructureManager)& aProjector,Handle(Graphic3d_Structure)& aStructure) ;
  //! Returns the new Structure defined for the new visualization <br>
  Standard_EXPORT   virtual  void Compute(const Handle(Graphic3d_DataStructureManager)& aProjector,const TColStd_Array2OfReal& AMatrix,Handle(Graphic3d_Structure)& aStructure) ;
  //! Forces a new construction of the structure <me> <br>
//!	    if <me> is displayed and TOS_COMPUTED. <br>
  Standard_EXPORT     void ReCompute() ;
  //! Forces a new construction of the structure <me> <br>
//!	    if <me> is displayed in <aProjetor> and TOS_COMPUTED. <br>
  Standard_EXPORT     void ReCompute(const Handle(Graphic3d_DataStructureManager)& aProjector) ;
  //! Returns Standard_True if the structure <me> contains <br>
//!	    Polygons, Triangles or Quadrangles. <br>
  Standard_EXPORT     Standard_Boolean ContainsFacet() const;
  //! Explores a structure element of <me>. <br>
//!	    Returns Standard_True if the exploration succeded and <br>
//!	    Standard_False if the exploration is done or if the <br>
//!	    specified structure element is not in the structure. <br>
//!	    <AVertex> contains the coordinates, the normal and <br>
//!	    the color of the vertex found in the structure element. <br>
//!	    <AVector> contains the normal of the face. <br>
//!  Warning: - The structure element number is given by <br>
//!	    Visual3d_ViewManager::Pick method. <br>
//!	    - The primitive type is given by <br>
//!	    Graphic3d_Structure::Type method. <br>
//!	    - The normal is (0.0, 0.0, 0.0) when the normal is not <br>
//!	    specified in the structure element. <br>
//!	    - The color is (0.0, 0.0, 0.0) when the color is not <br>
//!	    specified in the structure element. <br>
//!	    - To initialize the exploration, you have to call the <br>
//!	    Graphic3d_Structure::Type method before this method. <br>
  Standard_EXPORT     Standard_Boolean Exploration(const Standard_Integer ElementNumber,Graphic3d_VertexNC& AVertex,Graphic3d_Vector& AVector) const;
  //! Returns the values of the current default attributes. <br>
  Standard_EXPORT     Handle_Graphic3d_AspectFillArea3d FillArea3dAspect() const;
  //! Returns the groups sequence included in the structure <me> (internal storage). <br>
  Standard_EXPORT    const Graphic3d_SequenceOfGroup& Groups() const;
  //! Returns the current number of groups in the <br>
//!	    structure <me>. <br>
  Standard_EXPORT     Standard_Integer NumberOfGroups() const;
  //! Returns the highlight color for the Highlight method <br>
//!	    with the highlight method TOHM_COLOR or TOHM_BOUNDBOX. <br>
  Standard_EXPORT     Quantity_Color HighlightColor() const;
  //! Returns Standard_True if the structure <me> is deleted. <br>
//!	    <me> is deleted after the call Remove (me). <br>
  Standard_EXPORT     Standard_Boolean IsDeleted() const;
  //! Returns the display indicator for the structure <me>. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsDisplayed() const;
  //! Returns Standard_True if the structure <me> is empty. <br>
//!  Warning: A structure is empty if : <br>
//!		it do not have group or all the groups are empties <br>
//!		and it do not have descendant or all the descendants <br>
//!		are empties. <br>
  Standard_EXPORT     Standard_Boolean IsEmpty() const;
  //! Returns Standard_True if the structure <me> is infinite. <br>
  Standard_EXPORT     Standard_Boolean IsInfinite() const;
  //! Returns the highlight indicator for the structure <me>. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsHighlighted() const;
  //! Returns the detectability indicator for the structure <me>. <br>
  Standard_EXPORT     Standard_Boolean IsSelectable() const;
  //! Returns Standard_True if the structure <me> is rotated. <br>
//!	    <=> The transformation != Identity, != Scale, != Translation. <br>
  Standard_EXPORT     Standard_Boolean IsRotated() const;
  //! Returns Standard_True if the structure <me> is transformed. <br>
//!	    <=> The transformation != Identity. <br>
  Standard_EXPORT     Standard_Boolean IsTransformed() const;
  //! Returns the visibility indicator for the structure <me>. <br>
  Standard_EXPORT     Standard_Boolean IsVisible() const;
  //! Returns the values of the current default attributes. <br>
  Standard_EXPORT     Handle_Graphic3d_AspectLine3d Line3dAspect() const;
  //! Returns the current group of graphic attributes used <br>
//! for 3d marker primitives. <br>
  Standard_EXPORT     Handle_Graphic3d_AspectMarker3d Marker3dAspect() const;
  //! Returns the coordinates of the boundary box <br>
//!	    of the structure <me>. <br>
//!  Warning: If the structure <me> is empty or infinite then : <br>
//!	    XMin = YMin = ZMin = RealFirst (). <br>
//!	    XMax = YMax = ZMax = RealLast (). <br>
  Standard_EXPORT     void MinMaxValues(Standard_Real& XMin,Standard_Real& YMin,Standard_Real& ZMin,Standard_Real& XMax,Standard_Real& YMax,Standard_Real& ZMax) const;
  //! Returns the current values of the default attributes. <br>
  Standard_EXPORT     void PrimitivesAspect(Handle(Graphic3d_AspectLine3d)& CTXL,Handle(Graphic3d_AspectText3d)& CTXT,Handle(Graphic3d_AspectMarker3d)& CTXM,Handle(Graphic3d_AspectFillArea3d)& CTXF) const;
  //! Returns the values of the current default attributes. <br>
  Standard_EXPORT     Handle_Graphic3d_AspectText3d Text3dAspect() const;
  //! Returns the primitive type stored in the structure <br>
//!	    element <ElementNumber>. <br>
//!	    Initialises the exploration of this primitive. <br>
//!	    If the structure element is not a primitive, returns <br>
//!	    Graphic3d_TOP_UNDEFINED. <br>
//!  Warning: The structure element number is given by <br>
//!	    Visual3d_ViewManager::Pick method. <br>
  Standard_EXPORT     Graphic3d_TypeOfPrimitive Type(const Standard_Integer ElementNumber) const;
  //! Returns the visualisation mode for the structure <me>. <br>
  Standard_EXPORT     Graphic3d_TypeOfStructure Visual() const;
  //! Returns Standard_True if the connection is possible between <br>
//!	    <AStructure1> and <AStructure2> without a creation <br>
//!	    of a cycle. <br>
  Standard_EXPORT   static  Standard_Boolean AcceptConnection(const Handle(Graphic3d_Structure)& AStructure1,const Handle(Graphic3d_Structure)& AStructure2,const Graphic3d_TypeOfConnection AType) ;
  //! Returns the group of structures to which <me> is connected. <br>
  Standard_EXPORT     void Ancestors(Graphic3d_MapOfStructure& SG) const;
  //! If Atype is TOC_DESCENDANT then add <AStructure> <br>
//!	    as a child structure of  <me>. <br>
//!	    If Atype is TOC_ANCESTOR then add <AStructure> <br>
//!	    as a parent structure of <me>. <br>
//!	    The connection propagates Display, Highlight, Erase, <br>
//!	    Remove, and stacks the transformations. <br>
//!	    No connection if the graph of the structures <br>
//!	    contains a cycle and <WithCheck> is Standard_True; <br>
  Standard_EXPORT     void Connect(const Handle(Graphic3d_Structure)& AStructure,const Graphic3d_TypeOfConnection AType,const Standard_Boolean WithCheck = Standard_False) ;
  //! Returns the group of structures connected to <me>. <br>
  Standard_EXPORT     void Descendants(Graphic3d_MapOfStructure& SG) const;
  //! Suppress the connection between <AStructure> and <me>. <br>
  Standard_EXPORT     void Disconnect(const Handle(Graphic3d_Structure)& AStructure) ;
  //! If Atype is TOC_DESCENDANT then suppress all <br>
//!	    the connections with the child structures of <me>. <br>
//!	    If Atype is TOC_ANCESTOR then suppress all <br>
//!	    the connections with the parent structures of <me>. <br>
  Standard_EXPORT     void DisconnectAll(const Graphic3d_TypeOfConnection AType) ;
  //! Returns <ASet> the group of structures : <br>
//!	    - directly or indirectly connected to <AStructure> if the <br>
//!	      TypeOfConnection == TOC_DESCENDANT <br>
//!	    - to which <AStructure> is directly or indirectly connected <br>
//!	      if the TypeOfConnection == TOC_ANCESTOR <br>
  Standard_EXPORT   static  void Network(const Handle(Graphic3d_Structure)& AStructure,const Graphic3d_TypeOfConnection AType,Graphic3d_MapOfStructure& ASet) ;
  
  Standard_EXPORT     void SetOwner(const Standard_Address Owner) ;
  
  Standard_EXPORT     Standard_Address Owner() const;
  
  Standard_EXPORT     void SetHLRValidation(const Standard_Boolean AFlag) ;
  
  Standard_EXPORT     Standard_Boolean HLRValidation() const;
  //! Returns the type of composition applied to matrices <br>
//!	    of transformation of <me>. <br>
  Standard_EXPORT     Graphic3d_TypeOfComposition Composition() const;
  //! Modifies the current local modelling transformation <br>
//!	    in the structure <me>. <br>
  Standard_EXPORT     void SetTransform(const TColStd_Array2OfReal& AMatrix,const Graphic3d_TypeOfComposition AType) ;
  //! Returns the transformation associated with <br>
//!	    the structure <me>. <br>
  Standard_EXPORT     void Transform(TColStd_Array2OfReal& AMatrix) const;
  //! Modifies the current modelling transform persistence (pan, zoom or rotate) <br>
  Standard_EXPORT     void SetTransformPersistence(const Graphic3d_TransModeFlags& AFlag,const gp_Pnt& APoint) ;
  
  Standard_EXPORT     void SetTransformPersistence(const Graphic3d_TransModeFlags& AFlag) ;
  //! Get the current modelling transform persistence (pan, zoom or rotate) <br>
  Standard_EXPORT     Graphic3d_TransModeFlags TransformPersistenceMode() const;
  //! Get the current point of relative modelling transform persistence <br>
  Standard_EXPORT     gp_Pnt TransformPersistencePoint() const;
  
  Standard_EXPORT     Graphic3d_TypeOfStructure ComputeVisual() const;
  //! Prints informations about the structure <me>. <br>
  Standard_EXPORT     void Exploration() const;
  //! Clears the structure <me>. <br>
  Standard_EXPORT     void GraphicClear(const Standard_Boolean WithDestruction) ;
  
  Standard_EXPORT     void GraphicConnect(const Handle(Graphic3d_Structure)& ADaughter) ;
  
  Standard_EXPORT     void GraphicDisconnect(const Handle(Graphic3d_Structure)& ADaughter) ;
  //! Highlights the structure <me>. <br>
  Standard_EXPORT     void GraphicHighlight(const Aspect_TypeOfHighlightMethod Method) ;
  
  Standard_EXPORT     void GraphicTransform(const TColStd_Array2OfReal& AMatrix) ;
  //! Suppress the highlight for the structure <me>. <br>
  Standard_EXPORT     void GraphicUnHighlight() ;
  //! Returns the identification number of the structure <me>. <br>
  Standard_EXPORT     Standard_Integer Identification() const;
  
  Standard_EXPORT   virtual  void Plot(const Handle(Graphic3d_Plotter)& aPlotter) ;
  //! Prints informations about the network associated <br>
//!	    with the structure <AStructure>. <br>
  Standard_EXPORT   static  void PrintNetwork(const Handle(Graphic3d_Structure)& AStructure,const Graphic3d_TypeOfConnection AType) ;
  //! Suppress the adress <APtr> in the list <br>
//!	    of descendants or in the list of ancestors. <br>
  Standard_EXPORT     void Remove(const Standard_Address APtr,const Graphic3d_TypeOfConnection AType) ;
  
  Standard_EXPORT     void SetComputeVisual(const Graphic3d_TypeOfStructure AVisual) ;
  //! Transforms <X>, <Y>, <Z> with the transformation <ATrsf>. <br>
  Standard_EXPORT   static  void Transforms(const TColStd_Array2OfReal& ATrsf,const Standard_Real X,const Standard_Real Y,const Standard_Real Z,Standard_Real& NewX,Standard_Real& NewY,Standard_Real& NewZ) ;
  //! Transforms <Coord> with the transformation <ATrsf>. <br>
  Standard_EXPORT   static  Graphic3d_Vector Transforms(const TColStd_Array2OfReal& ATrsf,const Graphic3d_Vector& Coord) ;
  //! Transforms <Coord> with the transformation <ATrsf>. <br>
  Standard_EXPORT   static  Graphic3d_Vertex Transforms(const TColStd_Array2OfReal& ATrsf,const Graphic3d_Vertex& Coord) ;
  //! Returns the c structure associated to <me>. <br>
  Standard_EXPORT     Standard_Address CStructure() const;

friend class Graphic3d_Group;


  DEFINE_STANDARD_RTTI(Graphic3d_Structure)

protected:


Standard_Address MyPtrStructureManager;
Standard_Address MyFirstPtrStructureManager;
Graphic3d_TypeOfStructure MyComputeVisual;


private: 

  //! Inserts in the structure <me>, the group <G>. <br>
//!	    It will be erased at the next screen update. <br>
  Standard_EXPORT     void Add(const Handle(Graphic3d_Group)& AGroup) ;
  //! Manages the number of groups in the structure <me> <br>
//!	    which contains facet. <br>
//!	    Polygons, Triangles or Quadrangles. <br>
//!	    <ADelta> = +1 or -1 <br>
  Standard_EXPORT     void GroupsWithFacet(const Standard_Integer ADelta) ;
  //! Returns the labels for a new group in the structure <me>. <br>
  Standard_EXPORT     void GroupLabels(Standard_Integer& LB,Standard_Integer& LE) ;
  //! Returns the extreme coordinates found in the <br>
//!	    structure <me>. <br>
//!  Warning: If the structure <me> is empty or infinite then : <br>
//!	    XMin = YMin = ZMin = RealFirst (). <br>
//!	    XMax = YMax = ZMax = RealLast (). <br>
  Standard_EXPORT     void MinMaxCoord(Standard_Real& XMin,Standard_Real& YMin,Standard_Real& ZMin,Standard_Real& XMax,Standard_Real& YMax,Standard_Real& ZMax) const;
  //! Suppress in the structure <me>, the group <AGroup>. <br>
//!	    It will be erased at the next screen update. <br>
  Standard_EXPORT     void Remove(const Handle(Graphic3d_Group)& AGroup) ;
  //! Returns the manager to which <me> is associated. <br>
  Standard_EXPORT     Handle_Graphic3d_StructureManager StructureManager() const;
  //! Calls the Update method of the StructureManager which <br>
//!	    contains the Structure <me>. <br>
  Standard_EXPORT     void Update() const;
  //! Updates the c structure associated to <me>. <br>
  Standard_EXPORT     void UpdateStructure(const Handle(Graphic3d_AspectLine3d)& CTXL,const Handle(Graphic3d_AspectText3d)& CTXT,const Handle(Graphic3d_AspectMarker3d)& CTXM,const Handle(Graphic3d_AspectFillArea3d)& CTXF) ;

Graphic3d_CStructure MyCStructure;
Aspect_GenId MyGroupGenId;
TColStd_SequenceOfAddress MyAncestors;
TColStd_SequenceOfAddress MyDescendants;
Graphic3d_SequenceOfGroup MyGroups;
Handle_Graphic3d_GraphicDriver MyGraphicDriver;
Quantity_Color MyHighlightColor;
Aspect_TypeOfHighlightMethod MyHighlightMethod;
Standard_Address MyOwner;
Graphic3d_TypeOfStructure MyVisual;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
