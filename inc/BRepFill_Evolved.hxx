// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_Evolved_HeaderFile
#define _BRepFill_Evolved_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
#ifndef _TopoDS_Wire_HeaderFile
#include <TopoDS_Wire.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _GeomAbs_JoinType_HeaderFile
#include <GeomAbs_JoinType.hxx>
#endif
#ifndef _BRepFill_DataMapOfShapeDataMapOfShapeListOfShape_HeaderFile
#include <BRepFill_DataMapOfShapeDataMapOfShapeListOfShape.hxx>
#endif
class Standard_ConstructionError;
class Standard_NoSuchObject;
class TopoDS_Wire;
class gp_Ax3;
class TopoDS_Face;
class TopoDS_Shape;
class TopTools_ListOfShape;
class BRepMAT2d_BisectingLocus;
class BRepMAT2d_LinkTopoBilo;
class BRepFill_DataMapOfShapeDataMapOfShapeListOfShape;
class BRepTools_Quilt;
class TopTools_DataMapOfShapeShape;
class TopLoc_Location;
class TopoDS_Edge;
class TopoDS_Vertex;


//! Constructs a evolved volume from a spine (wire or face) <br>
//!          and  a profile ( wire). <br>
class BRepFill_Evolved  {
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

  
  Standard_EXPORT   BRepFill_Evolved();
  //! Creates an evolved shape by sweeping the <Profile> <br>
//!          along the  <Spine>.  <AxeProf> is  used to set the <br>
//!          position of <Profile> along  <Spine> as  follow: <br>
//!          l <AxeProf> glisse  sur le profil  avec  sa <br>
//!          direction colineaire a la normale au <Spine>, et sa <br>
//!          <XDirection> confondue avec la tangente au <Spine>. <br>
//! <br>
  Standard_EXPORT   BRepFill_Evolved(const TopoDS_Wire& Spine,const TopoDS_Wire& Profile,const gp_Ax3& AxeProf,const GeomAbs_JoinType Join = GeomAbs_Arc,const Standard_Boolean Solid = Standard_False);
  //! Creates an  evolved shape  by sweeping the <Profile> <br>
//!          along the <Spine> <br>
  Standard_EXPORT   BRepFill_Evolved(const TopoDS_Face& Spine,const TopoDS_Wire& Profile,const gp_Ax3& AxeProf,const GeomAbs_JoinType Join = GeomAbs_Arc,const Standard_Boolean Solid = Standard_False);
  //! Performs an  evolved shape  by sweeping the <Profile> <br>
//!          along the <Spine> <br>
  Standard_EXPORT     void Perform(const TopoDS_Wire& Spine,const TopoDS_Wire& Profile,const gp_Ax3& AxeProf,const GeomAbs_JoinType Join = GeomAbs_Arc,const Standard_Boolean Solid = Standard_False) ;
  //! Performs an  evolved shape  by sweeping the <Profile> <br>
//!          along the <Spine> <br>
  Standard_EXPORT     void Perform(const TopoDS_Face& Spine,const TopoDS_Wire& Profile,const gp_Ax3& AxeProf,const GeomAbs_JoinType Join = GeomAbs_Arc,const Standard_Boolean Solid = Standard_False) ;
  
  Standard_EXPORT     Standard_Boolean IsDone() const;
  //! returns the generated shape. <br>
  Standard_EXPORT    const TopoDS_Shape& Shape() const;
  //! Returns   the  shapes  created  from   a  subshape <br>
//!          <SpineShape>  of     the  spine   and   a subshape <br>
//!          <ProfShape> on the profile. <br>
//! <br>
  Standard_EXPORT    const TopTools_ListOfShape& GeneratedShapes(const TopoDS_Shape& SpineShape,const TopoDS_Shape& ProfShape) const;
  
  Standard_EXPORT     GeomAbs_JoinType JoinType() const;
  //! Return the face Top if <Solid> is True in the constructor. <br>
  Standard_EXPORT    const TopoDS_Shape& Top() const;
  //! Return the face Bottom  if <Solid> is True in the constructor. <br>
  Standard_EXPORT    const TopoDS_Shape& Bottom() const;





protected:





private:

  
  Standard_EXPORT     void PrivatePerform(const TopoDS_Face& Spine,const TopoDS_Wire& Profile,const gp_Ax3& AxeProf,const GeomAbs_JoinType Join = GeomAbs_Arc,const Standard_Boolean Solid = Standard_False) ;
  
  Standard_EXPORT     void SetWork(const TopoDS_Face& Spine,const TopoDS_Wire& Profile) ;
  
  Standard_EXPORT     void ElementaryPerform(const TopoDS_Face& Spine,const TopoDS_Wire& Profile,const BRepMAT2d_BisectingLocus& Locus,BRepMAT2d_LinkTopoBilo& Link,const GeomAbs_JoinType Join = GeomAbs_Arc) ;
  
  Standard_EXPORT     void PlanarPerform(const TopoDS_Face& Spine,const TopoDS_Wire& Profile,const BRepMAT2d_BisectingLocus& Locus,BRepMAT2d_LinkTopoBilo& Link,const GeomAbs_JoinType Join = GeomAbs_Arc) ;
  
  Standard_EXPORT     void VerticalPerform(const TopoDS_Face& Spine,const TopoDS_Wire& Profile,const BRepMAT2d_BisectingLocus& Locus,BRepMAT2d_LinkTopoBilo& Link,const GeomAbs_JoinType Join = GeomAbs_Arc) ;
  
  Standard_EXPORT     BRepFill_DataMapOfShapeDataMapOfShapeListOfShape& Generated() ;
  
  Standard_EXPORT     void Add(BRepFill_Evolved& Vevo,const TopoDS_Wire& Prof,BRepTools_Quilt& Glue) ;
  
  Standard_EXPORT     TopoDS_Shape& ChangeShape() ;
  
  Standard_EXPORT     void Transfert(BRepFill_Evolved& Vevo,const TopTools_DataMapOfShapeShape& MapProf,const TopTools_DataMapOfShapeShape& MapSpine,const TopLoc_Location& LS,const TopLoc_Location& InitLS,const TopLoc_Location& InitLP) ;
  //! Prepare the profil as follow <br>
//!          - Project the profile in the yOz Plane <br>
//!          - Cut the profile at the extrema of distance from the <br>
//!            Profile to the Oz Axis. <br>
//!          - building the new wires with the cutting edges. <br>
  Standard_EXPORT     void PrepareProfile(TopTools_ListOfShape& WorkProf,TopTools_DataMapOfShapeShape& MapProf) const;
  //! Prepare the spine as follow <br>
//!          - Cut the spine-Edges at the extrema of curvature and <br>
//!            at the inflexion points. <br>
  Standard_EXPORT     void PrepareSpine(TopoDS_Face& WorkSpine,TopTools_DataMapOfShapeShape& SpineProf) const;
  
  Standard_EXPORT     void MakePipe(const TopoDS_Edge& SpineEdge,const gp_Ax3& ProfRef) ;
  
  Standard_EXPORT     void MakeRevol(const TopoDS_Edge& SpineEdge,const TopoDS_Vertex& SpineVertex,const gp_Ax3& ProfRef) ;
  //! Find the location transforming the planar shape <Shape> <br>
//!          in the plane xOy <br>//! if the Shape is not planar. <br>
  Standard_EXPORT     TopLoc_Location FindLocation(const TopoDS_Face& Face) const;
  //! Apply the Location <LS> to <mySpine> and  <LP> to <br>
//!          <myProfil> <br>
//!          in order to set the Shapes in the work space. <br>
  Standard_EXPORT     void TransformInitWork(const TopLoc_Location& LS,const TopLoc_Location& LP) ;
  
  Standard_EXPORT     void ContinuityOnOffsetEdge(const TopTools_ListOfShape& WorkProf) ;
  
  Standard_EXPORT     void AddTopAndBottom(BRepTools_Quilt& Glue) ;
  
  Standard_EXPORT     void MakeSolid() ;


TopoDS_Face mySpine;
TopoDS_Wire myProfile;
TopoDS_Shape myShape;
Standard_Boolean myIsDone;
Standard_Boolean mySpineType;
GeomAbs_JoinType myJoinType;
BRepFill_DataMapOfShapeDataMapOfShapeListOfShape myMap;
TopoDS_Shape myTop;
TopoDS_Shape myBottom;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
