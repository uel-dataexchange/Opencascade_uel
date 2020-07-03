// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_RadiusDimension_HeaderFile
#define _AIS_RadiusDimension_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AIS_RadiusDimension_HeaderFile
#include <Handle_AIS_RadiusDimension.hxx>
#endif

#ifndef _gp_Circ_HeaderFile
#include <gp_Circ.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _gp_Lin_HeaderFile
#include <gp_Lin.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _AIS_Relation_HeaderFile
#include <AIS_Relation.hxx>
#endif
#ifndef _DsgPrs_ArrowSide_HeaderFile
#include <DsgPrs_ArrowSide.hxx>
#endif
#ifndef _AIS_KindOfDimension_HeaderFile
#include <AIS_KindOfDimension.hxx>
#endif
#ifndef _Handle_PrsMgr_PresentationManager3d_HeaderFile
#include <Handle_PrsMgr_PresentationManager3d.hxx>
#endif
#ifndef _Handle_Prs3d_Presentation_HeaderFile
#include <Handle_Prs3d_Presentation.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Prs3d_Projector_HeaderFile
#include <Handle_Prs3d_Projector.hxx>
#endif
#ifndef _Handle_PrsMgr_PresentationManager2d_HeaderFile
#include <Handle_PrsMgr_PresentationManager2d.hxx>
#endif
#ifndef _Handle_Graphic2d_GraphicObject_HeaderFile
#include <Handle_Graphic2d_GraphicObject.hxx>
#endif
#ifndef _Handle_Geom_Transformation_HeaderFile
#include <Handle_Geom_Transformation.hxx>
#endif
#ifndef _Handle_SelectMgr_Selection_HeaderFile
#include <Handle_SelectMgr_Selection.hxx>
#endif
class TopoDS_Shape;
class TCollection_ExtendedString;
class gp_Pnt;
class PrsMgr_PresentationManager3d;
class Prs3d_Presentation;
class Prs3d_Projector;
class PrsMgr_PresentationManager2d;
class Graphic2d_GraphicObject;
class Geom_Transformation;
class SelectMgr_Selection;


//!  A framework to define display of radii. <br>
//! These displays serve as relational references in 3D <br>
//! presentations of surfaces, and are particularly useful <br>
//! in viewing fillets. The display consists of arrows and <br>
//! text giving the length of a radius. This display is <br>
//! recalculated if the applicative owner shape changes <br>
//! in dimension, and the text gives the modified length. <br>
//! The algorithm analyzes a length along a face as an <br>
//! arc. It then reconstructs the circle corresponding to <br>
//! the arc and calculates the radius of this circle. <br>
class AIS_RadiusDimension : public AIS_Relation {

public:

  //! Constructs the radius display object defined by the <br>
//! shape aShape, the dimension aVal, and the text aText. <br>
  Standard_EXPORT   AIS_RadiusDimension(const TopoDS_Shape& aShape,const Standard_Real aVal,const TCollection_ExtendedString& aText);
  //! Constructs radius display object defined by the shape <br>
//! aShape, the dimension aVal, the position aPosition, <br>
//! the type of arrow aSymbolPrs, the arrow length <br>
//! anArrowSize and the text aText. <br>
  Standard_EXPORT   AIS_RadiusDimension(const TopoDS_Shape& aShape,const Standard_Real aVal,const TCollection_ExtendedString& aText,const gp_Pnt& aPosition,const DsgPrs_ArrowSide aSymbolPrs,const Standard_Real anArrowSize = 0.0);
  
  Standard_EXPORT     void SetFirstShape(const TopoDS_Shape& aFShape) ;
  //! Indicates that the dimension selected is a radius. <br>
      virtual  AIS_KindOfDimension KindOfDimension() const;
  //! Returns true if the radius selected is movable. <br>
      virtual  Standard_Boolean IsMovable() const;
  
//! Draws an arrowhead pointing towards the center of <br>
//! the shape aShape defined at construction time if <br>
//! false, and away from the center if true. <br>
        Standard_Boolean DrawFromCenter() const;
  
//! Sets the Boolean drawfromcenter to true or false. <br>
//! If drawfromcenter is false, the arrowhead will point <br>
//! towards the center of the shape aShape defined at <br>
//! construction time. <br>
        void SetDrawFromCenter(const Standard_Boolean drawfromcenter) ;
  //! computes the presentation according to a point of view <br>
//!          given by <aProjector>. <br>
//!          To be Used when the associated degenerated Presentations <br>
//!          have been transformed by <aTrsf> which is not a Pure <br>
//!          Translation. The HLR Prs can't be deducted automatically <br>
//!          WARNING :<aTrsf> must be applied <br>
//!           to the object to display before computation  !!! <br>
  Standard_EXPORT   virtual  void Compute(const Handle(Prs3d_Projector)& aProjector,const Handle(Geom_Transformation)& aTrsf,const Handle(Prs3d_Presentation)& aPresentation) ;




  DEFINE_STANDARD_RTTI(AIS_RadiusDimension)

protected:




private: 

  
  Standard_EXPORT   virtual  void Compute(const Handle(PrsMgr_PresentationManager3d)& aPresentationManager,const Handle(Prs3d_Presentation)& aPresentation,const Standard_Integer aMode = 0) ;
  
  Standard_EXPORT     void Compute(const Handle(Prs3d_Projector)& aProjector,const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT     void Compute(const Handle(PrsMgr_PresentationManager2d)& aPresentationManager,const Handle(Graphic2d_GraphicObject)& aPresentation,const Standard_Integer aMode = 0) ;
  
  Standard_EXPORT   virtual  void ComputeSelection(const Handle(SelectMgr_Selection)& aSelection,const Standard_Integer aMode) ;
  
  Standard_EXPORT     void ComputeRadius(const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT     void InitFirstShape() ;

gp_Circ myCircle;
Standard_Real myFirstPar;
Standard_Real myLastPar;
gp_Pnt myCenter;
gp_Pnt myEndOfArrow;
gp_Lin myFirstLine;
gp_Lin myLastLine;
Standard_Boolean mydrawFromCenter;


};


#include <AIS_RadiusDimension.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
