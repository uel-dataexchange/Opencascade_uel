// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic2d_GraphicObject_HeaderFile
#define _Graphic2d_GraphicObject_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Graphic2d_GraphicObject_HeaderFile
#include <Handle_Graphic2d_GraphicObject.hxx>
#endif

#ifndef _Graphic2d_ViewPtr_HeaderFile
#include <Graphic2d_ViewPtr.hxx>
#endif
#ifndef _TColStd_IndexedMapOfTransient_HeaderFile
#include <TColStd_IndexedMapOfTransient.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _gp_GTrsf2d_HeaderFile
#include <gp_GTrsf2d.hxx>
#endif
#ifndef _Graphic2d_CBitFields8_HeaderFile
#include <Graphic2d_CBitFields8.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfInteger_HeaderFile
#include <Handle_TColStd_HSequenceOfInteger.hxx>
#endif
#ifndef _Graphic2d_DisplayStatus_HeaderFile
#include <Graphic2d_DisplayStatus.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_Graphic2d_View_HeaderFile
#include <Handle_Graphic2d_View.hxx>
#endif
#ifndef _Graphic2d_TypeOfComposition_HeaderFile
#include <Graphic2d_TypeOfComposition.hxx>
#endif
#ifndef _Handle_Graphic2d_Primitive_HeaderFile
#include <Handle_Graphic2d_Primitive.hxx>
#endif
#ifndef _Quantity_Length_HeaderFile
#include <Quantity_Length.hxx>
#endif
#ifndef _Handle_Graphic2d_Drawer_HeaderFile
#include <Handle_Graphic2d_Drawer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Graphic2d_PickMode_HeaderFile
#include <Graphic2d_PickMode.hxx>
#endif
class TColStd_HSequenceOfInteger;
class Graphic2d_OverrideColorError;
class Standard_OutOfRange;
class Graphic2d_Primitive;
class Graphic2d_View;
class Graphic2d_TransientManager;
class gp_GTrsf2d;
class Graphic2d_Drawer;


//! Creates a 2D graphic object in a view. <br>
//!	    A graphic object is a primitives manager. <br>
class Graphic2d_GraphicObject : public MMgt_TShared {

public:

  //! Creates an unattached graphic object, <br>
//!   	    the attachment will be realized more later <br>
//!	    using the method SetView(). <br>
  Standard_EXPORT   Graphic2d_GraphicObject();
  //! Creates a graphic object in the view <aView>. <br>
//!	    A graphic object manages a sequence of primitives. <br>
//!	    By default a graphic object is : <br>
//!	    - empty. <br>
//!	    - plottable. <br>
//!	    - drawable. <br>
//!	    - pickable. <br>
//!	    - not displayed. <br>
//!	    - not highlighted. <br>
//!	    - a relative drawing priority of 0 <br>
  Standard_EXPORT   Graphic2d_GraphicObject(const Handle(Graphic2d_View)& aView);
  //! Attach the graphic object to this view <br>
  Standard_EXPORT     void SetView(const Handle(Graphic2d_View)& aView) ;
  //! Sets the transformation <aTrsf> applied to <br>
//!	    the primitives according to the composition type. <br>
  Standard_EXPORT     void SetTransform(const gp_GTrsf2d& aTrsf,const Graphic2d_TypeOfComposition aType = Graphic2d_TOC_REPLACE) ;
  //! Returns the transformation applied to <br>
//!	    the primitives. <br>
  Standard_EXPORT    const gp_GTrsf2d& Transform() const;
  //! Returns Standard_True if the associated <br>
//!	    transformation is not the Identity. <br>
  Standard_EXPORT     Standard_Boolean IsTransformed() const;
  //! Modifies the layer of the graphic object <me>. <br>
  Standard_EXPORT     void SetLayer(const Standard_Integer aLayer) ;
  //! Returns the layer of the graphic object <me>. <br>
  Standard_EXPORT     Standard_Integer Layer() const;
  //! Modifies the drawing priority of the graphic object <me>. <br>
//!	    <aPriority> of 0 is the lowest priority. <br>
//!	    <aPriority> of MaxPriority() is the highest priority. <br>
  Standard_EXPORT     void SetPriority(const Standard_Integer aPriority) ;
  //! Returns the drawing priority of the graphic object <br>
  Standard_EXPORT     Standard_Integer Priority() const;
  //! Returns the max usable relative priority of the <br>
//!         "standard" graphic object. <br>
  Standard_EXPORT   virtual  Standard_Integer MaxPriority() const;
  //! Allows the drawing of graphic object <me> on a plotter. <br>
  Standard_EXPORT     void EnablePlot() ;
  //! Forbids the drawing of graphic object <me> on a plotter. <br>
  Standard_EXPORT     void DisablePlot() ;
  //! Returns Standard_True if the graphic object <me> <br>
//!	    is plottable, Standard_False if not. <br>
  Standard_EXPORT     Standard_Boolean IsPlottable() const;
  //! Allows the drawing of graphic object <me>. <br>
  Standard_EXPORT     void EnableDraw() ;
  //! Forbids the drawing of graphic object <me>. <br>
  Standard_EXPORT     void DisableDraw() ;
  //! Returns Standard_True if the graphic object <me> <br>
//!	    is drawable, Standard_False if not. <br>
  Standard_EXPORT     Standard_Boolean IsDrawable() const;
  //! Returns Standard_True if the primitive <aPrimitive> <br>
//!	    is in the graphic object <me>, Standard_False if not. <br>
  Standard_EXPORT     Standard_Boolean IsIn(const Handle(Graphic2d_Primitive)& aPrimitive) const;
  //! Removes the primitive <aPrimitive> from <me>. <br>
  Standard_EXPORT     void RemovePrimitive(const Handle(Graphic2d_Primitive)& aPrimitive) ;
  //! Removes all the primitives from <me>. <br>
  Standard_EXPORT     void RemovePrimitives() ;
  //! Removes <me> from the associated view. <br>
//!	    If <me> was displayed or highlighted, <me> <br>
//!	    is removed from the display list of the associated view. <br>
  Standard_EXPORT     void Remove() ;
  //! Allows the picking on the graphic object <me>. <br>
  Standard_EXPORT     void EnablePick() ;
  //! Forbids the picking on the graphic object <me>. <br>
  Standard_EXPORT     void DisablePick() ;
  //! Returns Standard_True if the graphic object <me> <br>
//!	    is pickable, Standard_False if not. <br>
  Standard_EXPORT     Standard_Boolean IsPickable() const;
  //! Allows the drawing of the graphic object <me>. <br>
  Standard_EXPORT     void Display() ;
  //! Forbids the drawing of the graphic object <me>. <br>
  Standard_EXPORT     void Erase() ;
  //! Returns Standard_True if the graphic object <me> <br>
//!	    is displayed, Standard_False if not. <br>
  Standard_EXPORT     Standard_Boolean IsDisplayed() const;
  //! Highlights the graphic object <me> with the <br>
//!	    override color of the view. <br>
  Standard_EXPORT     void Highlight() ;
  //! Highlights the graphic object <me> with the <br>
//!	    specified color. <br>
  Standard_EXPORT     void Highlight(const Standard_Integer aColorIndex) ;
  //! Suppress the highlight the graphic object <me>. <br>
  Standard_EXPORT     void Unhighlight() ;
  //! Returns Standard_True if the graphic object <me> <br>
//!	    is highlighted, Standard_False if not. <br>
  Standard_EXPORT     Standard_Boolean IsHighlighted() const;
  //! Specifies an offset applied to the original color <br>
//!	index when drawing a primitives, those already created <br>
//!	and the future one. <br>
//!  Warning: To reset the real color of the primitives when drawing <br>
//!	then you have to call this method with <anOffSet> = 0. <br>
  Standard_EXPORT     void SetOffSet(const Standard_Integer anOffSet) ;
  //! Returns the offset applied to the original color <br>
//!	    index of all primitives in the graphic object <me>. <br>
  Standard_EXPORT     Standard_Integer OffSet() const;
  //! Returns the current overridel color apply to <br>
//!	   this graphic object. <br>
  Standard_EXPORT     Standard_Integer OverrideColor() const;
  //! Sets the current overridel color apply to <br>
//!	   this graphic object. <br>
  Standard_EXPORT     void SetOverrideColor(const Standard_Integer indColor) ;
  //! Returns the number of primitive of the graphic object. <br>
  Standard_EXPORT     Standard_Integer Length() const;
  //! Returns the primitive of rank <aRank> <br>
  Standard_EXPORT     Handle_Graphic2d_Primitive Primitive(const Standard_Integer aRank) const;
  //! Returns the min max values of <me>. <br>
//!  Warning: All markers are ignored. <br>
//!  Warning: If <me> is empty or not displayed or <br>
//!	    contains markers and nothing else <br>
//!	    returns FALSE and <br>
//!	    Minx = Miny = RealFirst () <br>
//!	    Maxx = Maxy = RealLast () <br>
  Standard_EXPORT   virtual  Standard_Boolean MinMax(Quantity_Length& Minx,Quantity_Length& Maxx,Quantity_Length& Miny,Quantity_Length& Maxy) const;
  //! Returns the min max values of all markers in <me>. <br>
//!  Warning: If <me> is empty or not displayed or without markers <br>
//!	    returns FALSE and <br>
//!	    Minx = Miny = RealFirst () <br>
//!	    Maxx = Maxy = RealLast () <br>
  Standard_EXPORT   virtual  Standard_Boolean MarkerMinMax(Quantity_Length& Minx,Quantity_Length& Maxx,Quantity_Length& Miny,Quantity_Length& Maxy) const;
  //! Returns the last picked primitive index in this. <br>
//!  Warning: This is available only if the Pick() method has <br>
//!	   returned Standard_True. <br>
  Standard_EXPORT     Standard_Integer PickedIndex() const;
  //! Returns the sequence of picked primitives. <br>
  Standard_EXPORT     Handle_TColStd_HSequenceOfInteger PickList() const;


friend class Graphic2d_Primitive;
friend class Graphic2d_View;
friend class Graphic2d_TransientManager;


  DEFINE_STANDARD_RTTI(Graphic2d_GraphicObject)

protected:

  //! Sets the index of the picked primitive if any. <br>
  Standard_EXPORT     void SetPickedIndex(const Standard_Integer anIndex) ;
  //! Drawn the last Undrawn primitives managed by the <br>
//!	    graphic object <me> in the drawer <aDrawer>. <br>
//!	    Called by the methods : <br>
//!		- Graphic2d_View::TinyUpdate () <br>
  Standard_EXPORT   virtual  void Draw(const Handle(Graphic2d_Drawer)& aDrawer,const Standard_Boolean Reset) ;
  //! Drawn a primitive managed by the <br>
//!	    graphic object <me> in the drawer <aDrawer>. <br>
//!	    Called by the method Graphic2d_View::Update (aPrimitive) <br>
  Standard_EXPORT   virtual  void Draw(const Handle(Graphic2d_Drawer)& aDrawer,const Handle(Graphic2d_Primitive)& aPrimitive) ;
  //! Returns Standard_True if the graphic object <me> <br>
//!	    is picked, Standard_False if not. <br>
//!	    Called by the method Graphic2d_View::Pick <br>
  Standard_EXPORT   virtual  Standard_Boolean Pick(const Standard_Real X,const Standard_Real Y,const Standard_Real aPrecision,const Handle(Graphic2d_Drawer)& aDrawer) ;
  //! Returns Standard_True if the graphic object <me> <br>
//!	    is picked, Standard_False if not. <br>
//!	    Called by the method Graphic2d_View::PickByCircle <br>
  Standard_EXPORT   virtual  Standard_Boolean PickByCircle(const Standard_Real X,const Standard_Real Y,const Standard_Real Radius,const Handle(Graphic2d_Drawer)& aDrawer) ;
  //! Returns Standard_True if the primitive <me> is: <br>
//!          included in rectangle (<aPickMode = PM_INCLUDE>), <br>
//!          excluded from rectangle (<aPickMode = PM_EXLUDE>), <br>
//!          intersected by rectangle (<aPickMode = PM_INTERSECT>), <br>
//!          defined by Xmin, Ymin, Xmax, Ymax. <br>
//!	        Standard_False if not. <br>
  Standard_EXPORT   virtual  Standard_Boolean Pick(const Standard_Real Xmin,const Standard_Real Ymin,const Standard_Real Xmax,const Standard_Real Ymax,const Handle(Graphic2d_Drawer)& aDrawer,const Graphic2d_PickMode aPickMode = Graphic2d_PM_INCLUDE) ;
  //! Returns TRUE when the graphic object is <br>
//!	up to date at screen; <br>
  Standard_EXPORT     Standard_Boolean IsUpToDate() const;

Standard_Integer myOverrideColor;
Standard_Integer myCurrentIndex;
Standard_Integer myOffSet;
Standard_Boolean myIsUpToDate;
Standard_Boolean myIsTransformed;


private: 

  //! Drawn all the primitives managed by the <br>
//!	    graphic object <me> in the drawer <aDrawer>. <br>
//!	    Called by the method : <br>
//!		- Graphic2d_View::Update (aViewMapping, x, y, scale) <br>
  Standard_EXPORT     void Redraw(const Handle(Graphic2d_Drawer)& aDrawer) ;
  //! Returns the view which manages <me>. <br>
//!	    Called by the constructor of Primitive. <br>
  Standard_EXPORT     Handle_Graphic2d_View View() const;
  //! Adds the primitive <aPrimitive> in <me>. <br>
//!	    Called by the constructor of Primitive. <br>
  Standard_EXPORT     void AddPrimitive(const Handle(Graphic2d_Primitive)& aPrimitive) ;
  //! Sets the current index in the GraphicObject <me> <br>
//!	    to the index of the primitive <aPrimitive>. <br>
  Standard_EXPORT     void SetIndex(const Handle(Graphic2d_Primitive)& aPrimitive) ;
  //! Returns the min usable absolute priority of the <br>
//!         "standard" graphic object. <br>
  Standard_EXPORT   virtual  Standard_Integer BasePriority() const;

Graphic2d_ViewPtr myViewPtr;
TColStd_IndexedMapOfTransient myPrimitives;
Standard_Integer myLayer;
gp_GTrsf2d myTrsf;
Graphic2d_CBitFields8 myCBitFields;
Standard_Integer myPickedIndex;
Standard_Integer myPriority;
Handle_TColStd_HSequenceOfInteger myPickIndices;
Graphic2d_DisplayStatus myDisplayStatus;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
