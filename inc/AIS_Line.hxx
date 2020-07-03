// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_Line_HeaderFile
#define _AIS_Line_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AIS_Line_HeaderFile
#include <Handle_AIS_Line.hxx>
#endif

#ifndef _Handle_Geom_Line_HeaderFile
#include <Handle_Geom_Line.hxx>
#endif
#ifndef _Handle_Geom_Point_HeaderFile
#include <Handle_Geom_Point.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _AIS_InteractiveObject_HeaderFile
#include <AIS_InteractiveObject.hxx>
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
#ifndef _AIS_KindOfInteractive_HeaderFile
#include <AIS_KindOfInteractive.hxx>
#endif
#ifndef _Quantity_NameOfColor_HeaderFile
#include <Quantity_NameOfColor.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Geom_Line;
class Geom_Point;
class PrsMgr_PresentationManager3d;
class Prs3d_Presentation;
class Prs3d_Projector;
class PrsMgr_PresentationManager2d;
class Graphic2d_GraphicObject;
class Geom_Transformation;
class SelectMgr_Selection;
class Quantity_Color;


//! Constructs line datums to be used in construction of <br>
//! composite shapes. <br>
class AIS_Line : public AIS_InteractiveObject {

public:

  //! Initializes the line aLine. <br>
  Standard_EXPORT   AIS_Line(const Handle(Geom_Line)& aLine);
  //! Initializes a starting point aStartPoint <br>
//!   and a finishing point aEndPoint for the line. <br>
  Standard_EXPORT   AIS_Line(const Handle(Geom_Point)& aStartPoint,const Handle(Geom_Point)& aEndPoint);
  //! computes the presentation according to a point of view <br>
//!          given by <aProjector>. <br>
//!          To be Used when the associated degenerated Presentations <br>
//!          have been transformed by <aTrsf> which is not a Pure <br>
//!          Translation. The HLR Prs can't be deducted automatically <br>
//!          WARNING :<aTrsf> must be applied <br>
//!           to the object to display before computation  !!! <br>
  Standard_EXPORT   virtual  void Compute(const Handle(Prs3d_Projector)& aProjector,const Handle(Geom_Transformation)& aTrsf,const Handle(Prs3d_Presentation)& aPresentation) ;
  //! Returns the signature 5. <br>
      virtual  Standard_Integer Signature() const;
  //! Returns the type Datum. <br>
      virtual  AIS_KindOfInteractive Type() const;
  //! Constructs an infinite line. <br>
       const Handle_Geom_Line& Line() const;
  //! Returns the starting point PStart and the end point <br>
//! PEnd of the line set by SetPoints. <br>
        void Points(Handle(Geom_Point)& PStart,Handle(Geom_Point)& PEnd) const;
  //! instantiates an infinite line. <br>
        void SetLine(const Handle(Geom_Line)& L) ;
  
//! Sets the starting point P1 and ending point P2 of the <br>
//! infinite line to create a finite line segment. <br>
        void SetPoints(const Handle(Geom_Point)& P1,const Handle(Geom_Point)& P2) ;
  //! Provides a new color setting aColor for the line in the <br>
//! drawing tool, or "Drawer". <br>
  Standard_EXPORT     void SetColor(const Quantity_NameOfColor aColor) ;
  
  Standard_EXPORT     void SetColor(const Quantity_Color& aColor) ;
  //! Provides the new width setting aValue for the line in <br>
//! the drawing tool, or "Drawer". <br>
  Standard_EXPORT     void SetWidth(const Standard_Real aValue) ;
  //! Removes the color setting and returns the original color. <br>
  Standard_EXPORT     void UnsetColor() ;
  //! Removes the width setting and returns the original width. <br>
  Standard_EXPORT     void UnsetWidth() ;




  DEFINE_STANDARD_RTTI(AIS_Line)

protected:




private: 

  
  Standard_EXPORT     void Compute(const Handle(PrsMgr_PresentationManager3d)& aPresentationManager,const Handle(Prs3d_Presentation)& aPresentation,const Standard_Integer aMode = 0) ;
  
  Standard_EXPORT     void Compute(const Handle(Prs3d_Projector)& aProjector,const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT     void Compute(const Handle(PrsMgr_PresentationManager2d)& aPresentationManager,const Handle(Graphic2d_GraphicObject)& aPresentation,const Standard_Integer aMode = 0) ;
  
  Standard_EXPORT     void ComputeSelection(const Handle(SelectMgr_Selection)& aSelection,const Standard_Integer aMode) ;
  
  Standard_EXPORT     void ComputeInfiniteLine(const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT     void ComputeSegmentLine(const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT     void ComputeInfiniteLineSelection(const Handle(SelectMgr_Selection)& aSelection) ;
  
  Standard_EXPORT     void ComputeSegmentLineSelection(const Handle(SelectMgr_Selection)& aSelection) ;

Handle_Geom_Line myComponent;
Handle_Geom_Point myStartPoint;
Handle_Geom_Point myEndPoint;
Standard_Boolean myLineIsSegment;


};


#include <AIS_Line.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
