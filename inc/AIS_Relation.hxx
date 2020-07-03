// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_Relation_HeaderFile
#define _AIS_Relation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AIS_Relation_HeaderFile
#include <Handle_AIS_Relation.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _Handle_Geom_Plane_HeaderFile
#include <Handle_Geom_Plane.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _TCollection_ExtendedString_HeaderFile
#include <TCollection_ExtendedString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _DsgPrs_ArrowSide_HeaderFile
#include <DsgPrs_ArrowSide.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _gp_Pln_HeaderFile
#include <gp_Pln.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _AIS_KindOfSurface_HeaderFile
#include <AIS_KindOfSurface.hxx>
#endif
#ifndef _Bnd_Box_HeaderFile
#include <Bnd_Box.hxx>
#endif
#ifndef _AIS_InteractiveObject_HeaderFile
#include <AIS_InteractiveObject.hxx>
#endif
#ifndef _PrsMgr_TypeOfPresentation3d_HeaderFile
#include <PrsMgr_TypeOfPresentation3d.hxx>
#endif
#ifndef _Quantity_NameOfColor_HeaderFile
#include <Quantity_NameOfColor.hxx>
#endif
#ifndef _AIS_KindOfInteractive_HeaderFile
#include <AIS_KindOfInteractive.hxx>
#endif
#ifndef _AIS_KindOfDimension_HeaderFile
#include <AIS_KindOfDimension.hxx>
#endif
#ifndef _Handle_Prs3d_Presentation_HeaderFile
#include <Handle_Prs3d_Presentation.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _Aspect_TypeOfLine_HeaderFile
#include <Aspect_TypeOfLine.hxx>
#endif
#ifndef _Aspect_TypeOfMarker_HeaderFile
#include <Aspect_TypeOfMarker.hxx>
#endif
class Geom_Plane;
class Geom_Surface;
class Quantity_Color;
class TopoDS_Shape;
class gp_Pnt;
class TCollection_ExtendedString;
class Prs3d_Presentation;
class TopoDS_Edge;
class Geom_Curve;
class TopoDS_Vertex;


//! One of the four types of interactive object in <br>
//! AIS,comprising dimensions and constraints. Serves <br>
//! as the abstract class for the seven relation classes as <br>
//! well as the seven dimension classes. <br>
//! The statuses available for relations between shapes are as follows: <br>
//! -   0 - there is no connection to a shape; <br>
//! -   1 - there is a connection to the first shape; <br>
//! -   2 - there is a connection to the second shape. <br>
//!   The connection takes the form of an edge between the two shapes. <br>
class AIS_Relation : public AIS_InteractiveObject {

public:

  //! Allows you to provide settings for the color aColor <br>
//! of the lines representing the relation between the two shapes. <br>
  Standard_EXPORT     void SetColor(const Quantity_NameOfColor aColor) ;
  
  Standard_EXPORT     void SetColor(const Quantity_Color& aColor) ;
  //! Allows you to remove settings for the color of the <br>
//! lines representing the relation between the two shapes. <br>
  Standard_EXPORT     void UnsetColor() ;
  
      virtual  AIS_KindOfInteractive Type() const;
  //! Indicates that the type of dimension is unknown. <br>
  Standard_EXPORT   virtual  AIS_KindOfDimension KindOfDimension() const;
  //! Returns true if the interactive object is movable. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsMovable() const;
  
       const TopoDS_Shape& FirstShape() const;
  
  Standard_EXPORT   virtual  void SetFirstShape(const TopoDS_Shape& aFShape) ;
  //! Returns the second shape. <br>
       const TopoDS_Shape& SecondShape() const;
  //! Allows you to identify the second shape aSShape <br>
//! relative to the first. <br>
  Standard_EXPORT   virtual  void SetSecondShape(const TopoDS_Shape& aSShape) ;
  
        void SetBndBox(const Standard_Real Xmin,const Standard_Real Ymin,const Standard_Real Zmin,const Standard_Real Xmax,const Standard_Real Ymax,const Standard_Real Zmax) ;
  
        void UnsetBndBox() ;
  //! Returns the plane. <br>
       const Handle_Geom_Plane& Plane() const;
  
//! Allows you to set the plane aPlane. This is used to <br>
//! define relations and dimensions in several daughter classes. <br>
        void SetPlane(const Handle(Geom_Plane)& aPlane) ;
  //! Returns the value of each object in the relation. <br>
        Standard_Real Value() const;
  //! Allows you to provide settings for the value aVal for <br>
//! each object in the relation. <br>
        void SetValue(const Standard_Real aVal) ;
  //! Returns the position set using SetPosition. <br>
       const gp_Pnt& Position() const;
  
//! Allows you to provide the objects in the relation with <br>
//! settings for a non-default position. <br>
        void SetPosition(const gp_Pnt& aPosition) ;
  //! Returns settings for text aspect. <br>
       const TCollection_ExtendedString& Text() const;
  //! Allows you to provide the settings aText for text aspect. <br>
        void SetText(const TCollection_ExtendedString& aText) ;
  
//! Returns the value for the size of the arrow identifying <br>
//! the relation between the two shapes. <br>
        Standard_Real ArrowSize() const;
  
//! Allows you to provide settings for the size of the <br>
//! arrow anArrowsize identifying the relation between the two shapes. <br>
        void SetArrowSize(const Standard_Real anArrowSize) ;
  
//! Returns the value of the symbol presentation. This will be one of: <br>
//! -   AS_NONE - none <br>
//! -   AS_FIRSTAR - first arrow <br>
//! -   AS_LASTAR - last arrow <br>
//! -   AS_BOTHAR - both arrows <br>
//! -   AS_FIRSTPT - first point <br>
//! -   AS_LASTPT - last point <br>
//! -   AS_BOTHPT - both points <br>
//! -   AS_FIRSTAR_LASTPT - first arrow, last point <br>
//! -   AS_FIRSTPT_LASTAR - first point, last arrow <br>
        DsgPrs_ArrowSide SymbolPrs() const;
  
//! Allows you to provide settings for the symbol presentation. <br>
        void SetSymbolPrs(const DsgPrs_ArrowSide aSymbolPrs) ;
  
//! Allows you to set the status of the extension shape by <br>
//! the index aIndex. <br>
//! The status will be one of the following: <br>
//! -   0 - there is no connection to a shape; <br>
//! -   1 - there is a connection to the first shape; <br>
//! -   2 - there is a connection to the second shape. <br>
        void SetExtShape(const Standard_Integer aIndex) ;
  
//! Returns the status index of the extension shape. <br>
        Standard_Integer ExtShape() const;
  
//! Returns true if the display mode aMode is accepted <br>
//! for the Interactive Objects in the relation. <br>
//! ComputeProjPresentation(me; <br>
//! 	    	    	    aPres    : mutable Presentation from Prs3d; <br>
//!		    Curve1   : Curve                from Geom; <br>
//!		    Curve2   : Curve                from Geom; <br>
//!		    FirstP1  : Pnt                  from gp; <br>
//!		    LastP1   : Pnt                  from gp; <br>
//!		    FirstP2  : Pnt                  from gp; <br>
//!		    LastP2   : Pnt                  from gp; <br>
//!		    aColor   : NameOfColor          from Quantity = Quantity_NOC_PURPLE; <br>
//!		    aWidth   : Real                 from Standard = 2; <br>
//!    	    	    aProjTOL : TypeOfLine           from Aspect   = Aspect_TOL_DASH; <br>
//!		    aCallTOL : TypeOfLine           from Aspect   = Aspect_TOL_DOT) <br>
  Standard_EXPORT   virtual  Standard_Boolean AcceptDisplayMode(const Standard_Integer aMode) const;
  
        void SetAutomaticPosition(const Standard_Boolean aStatus) ;
  
        Standard_Boolean AutomaticPosition() const;




  DEFINE_STANDARD_RTTI(AIS_Relation)

protected:

  
  Standard_EXPORT   AIS_Relation(const PrsMgr_TypeOfPresentation3d aTypeOfPresentation3d = PrsMgr_TOP_AllView);
  //! Calculates the presentation aPres of the the edge <br>
//! anEdge and the curve it defines, ProjCurve. The later <br>
//! is also specified by the first point FirstP and the last point LastP. <br>
//! The presentation includes settings for color aColor, <br>
//! type - aProjTOL and aCallTOL -   and width of line, aWidth. <br>
  Standard_EXPORT     void ComputeProjEdgePresentation(const Handle(Prs3d_Presentation)& aPres,const TopoDS_Edge& anEdge,const Handle(Geom_Curve)& ProjCurve,const gp_Pnt& FirstP,const gp_Pnt& LastP,const Quantity_NameOfColor aColor = Quantity_NOC_PURPLE,const Standard_Real aWidth = 2,const Aspect_TypeOfLine aProjTOL = Aspect_TOL_DASH,const Aspect_TypeOfLine aCallTOL = Aspect_TOL_DOT) const;
  //! Calculates the presentation aPres of the the vertex <br>
//! aVertex and the point it defines, ProjPoint. <br>
//! The presentation includes settings for color aColor, <br>
//! type - aProjTOM and aCallTOL -   and width of line, aWidth. <br>
  Standard_EXPORT     void ComputeProjVertexPresentation(const Handle(Prs3d_Presentation)& aPres,const TopoDS_Vertex& aVertex,const gp_Pnt& ProjPoint,const Quantity_NameOfColor aColor = Quantity_NOC_PURPLE,const Standard_Real aWidth = 2,const Aspect_TypeOfMarker aProjTOM = Aspect_TOM_PLUS,const Aspect_TypeOfLine aCallTOL = Aspect_TOL_DOT) const;

TopoDS_Shape myFShape;
TopoDS_Shape mySShape;
Handle_Geom_Plane myPlane;
Standard_Real myVal;
gp_Pnt myPosition;
TCollection_ExtendedString myText;
Standard_Real myArrowSize;
Standard_Boolean myAutomaticPosition;
DsgPrs_ArrowSide mySymbolPrs;
Standard_Integer myExtShape;
gp_Pln myFirstPlane;
gp_Pln mySecondPlane;
Handle_Geom_Surface myFirstBasisSurf;
Handle_Geom_Surface mySecondBasisSurf;
AIS_KindOfSurface myFirstSurfType;
AIS_KindOfSurface mySecondSurfType;
Standard_Real myFirstOffset;
Standard_Real mySecondOffset;
Bnd_Box myBndBox;
Standard_Boolean myIsSetBndBox;
Standard_Boolean myArrowSizeIsDefined;


private: 




};


#include <AIS_Relation.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
