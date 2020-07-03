// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic2d_Primitive_HeaderFile
#define _Graphic2d_Primitive_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Graphic2d_Primitive_HeaderFile
#include <Handle_Graphic2d_Primitive.hxx>
#endif

#ifndef _Graphic2d_GOPtr_HeaderFile
#include <Graphic2d_GOPtr.hxx>
#endif
#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TColStd_MapOfInteger_HeaderFile
#include <TColStd_MapOfInteger.hxx>
#endif
#ifndef _Graphic2d_TypeOfPrimitive_HeaderFile
#include <Graphic2d_TypeOfPrimitive.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfInteger_HeaderFile
#include <Handle_TColStd_HSequenceOfInteger.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_Graphic2d_Drawer_HeaderFile
#include <Handle_Graphic2d_Drawer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Graphic2d_GraphicObject_HeaderFile
#include <Graphic2d_GraphicObject.hxx>
#endif
#ifndef _Handle_Graphic2d_Primitive_HeaderFile
#include <Handle_Graphic2d_Primitive.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Graphic2d_PickMode_HeaderFile
#include <Graphic2d_PickMode.hxx>
#endif
#ifndef _Quantity_Length_HeaderFile
#include <Quantity_Length.hxx>
#endif
#ifndef _Graphic2d_TransientManager_HeaderFile
#include <Graphic2d_TransientManager.hxx>
#endif
#ifndef _Handle_Graphic2d_GraphicObject_HeaderFile
#include <Handle_Graphic2d_GraphicObject.hxx>
#endif
#ifndef _Aspect_FStream_HeaderFile
#include <Aspect_FStream.hxx>
#endif
class TColStd_HSequenceOfInteger;
class Graphic2d_Buffer;
class Graphic2d_Drawer;
class Graphic2d_GraphicObject;
class TColStd_MapOfInteger;


//! Groups all drawing elements which can be stored <br>
//!	    in a graphic object. <br>
//!	    Each primitive have a postion in the space model. <br>
class Graphic2d_Primitive : public MMgt_TShared {

public:

  //! Defines the index, in the color map, of the primitive color. <br>
//!  Warning: For an image, this method defines the color of the <br>
//!	    boundary rectangle. <br>
  Standard_EXPORT     void SetColorIndex(const Standard_Integer anIndex) ;
  //! Returns the index, in the color map, of the primitive color. <br>
//!  Warning: For an image, it is the color of the border. <br>
  Standard_EXPORT     Standard_Integer ColorIndex() const;
  //! Draws the primitive <me>. <br>
  Standard_EXPORT   virtual  void Draw(const Handle(Graphic2d_Drawer)& aDrawer)  = 0;
  //! Declares that previously highlighted elements will be selected ones. <br>
//!  Warning: If a descendant redefines this method then it  must return <true>! <br>
  Standard_EXPORT   virtual  Standard_Boolean SetElementsSelected() ;
  
  Standard_EXPORT   virtual  Standard_Boolean HasSelectedElements() ;
  
  Standard_EXPORT   virtual  void ClearSelectedElements() ;
  //! Returns number of elements of primitive <br>
  Standard_EXPORT   virtual  Standard_Integer NumOfElemIndices() const;
  //! Returns number of vertices of primitive <br>
  Standard_EXPORT   virtual  Standard_Integer NumOfVertIndices() const;
  //! Returns the index of the last picked primitive element. <br>
//!  Warning: This is available only if the Pick() method has <br>
//!         returned Standard_True. <br>
  Standard_EXPORT     Standard_Integer PickedIndex() const;
  
  Standard_EXPORT    const TColStd_MapOfInteger& PickedIndices() const;
  //! Highlights the primitive <me> or a part of the <br>
//!	    primitive with the override color of the view. <br>
//!	    When <anIndex> is 0 all the primitive is highlighted <br>
//!		 >0 only the requested element is highlighted. <br>
//!		 <0 only the requested vertex is highlighted. <br>
  Standard_EXPORT     void Highlight(const Standard_Integer anIndex = 0) ;
  //! Suppress the highlight on the primitive <me>. <br>
  Standard_EXPORT     void Unhighlight() ;
  //! Returns Standard_True if the primitive <me> <br>
//!          is highlighted, Standard_False if not. <br>
  Standard_EXPORT     Standard_Boolean IsHighlighted() const;
  //! Returns the sequence of highlight indices of the primitive <me> <br>
  Standard_EXPORT     Handle_TColStd_HSequenceOfInteger HighlightIndices() const;
  //! Sets the display mode of primitive <br>
  Standard_EXPORT     void SetDisplayMode(const Standard_Integer aMode) ;
  //! Indicates the display mode of primitive <br>
  Standard_EXPORT     Standard_Integer DisplayMode() const;
  //! Returns TRUE and the min max values of <me>. <br>
//!	    or FALSE when the primitive is empty. <br>
//!	    Called by the method Graphic2d_GraphicObject::MinMax <br>
  Standard_EXPORT     Standard_Boolean MinMax(Standard_ShortReal& Minx,Standard_ShortReal& Maxx,Standard_ShortReal& Miny,Standard_ShortReal& Maxy) ;
  //! Returns Standard_True if the point <X>, <Y> is in the <br>
//!	    rectangle defined by the min max values of <me>. <br>
//!  Warning: If <me> is in a transformed GraphicObject then <br>
//!	    the min max values are transformed. <br>
  Standard_EXPORT     Standard_Boolean IsInMinMax(const Standard_ShortReal X,const Standard_ShortReal Y,const Standard_ShortReal aPrecision) ;
  
  Standard_EXPORT   virtual  void Save(Aspect_FStream& aFStream) const = 0;


friend class Graphic2d_Buffer;
friend   //! Drawn the last Undrawn primitives managed by the <br>
//!	    graphic object <me> in the drawer <aDrawer>. <br>
//!	    Called by the methods : <br>
//!		- Graphic2d_View::TinyUpdate () <br>
  Standard_EXPORT   void Graphic2d_GraphicObject::Draw(const Handle(Graphic2d_Drawer)& aDrawer,const Standard_Boolean Reset) ;
friend   //! Drawn a primitive managed by the <br>
//!	    graphic object <me> in the drawer <aDrawer>. <br>
//!	    Called by the method Graphic2d_View::Update (aPrimitive) <br>
  Standard_EXPORT   void Graphic2d_GraphicObject::Draw(const Handle(Graphic2d_Drawer)& aDrawer,const Handle(Graphic2d_Primitive)& aPrimitive) ;
friend   //! Returns Standard_True if the graphic object <me> <br>
//!	    is picked, Standard_False if not. <br>
//!	    Called by the method Graphic2d_View::Pick <br>
  Standard_EXPORT   Standard_Boolean Graphic2d_GraphicObject::Pick(const Standard_Real X,const Standard_Real Y,const Standard_Real aPrecision,const Handle(Graphic2d_Drawer)& aDrawer) ;
friend   //! Returns Standard_True if the graphic object <me> <br>
//!	    is picked, Standard_False if not. <br>
//!	    Called by the method Graphic2d_View::PickByCircle <br>
  Standard_EXPORT   Standard_Boolean Graphic2d_GraphicObject::PickByCircle(const Standard_Real X,const Standard_Real Y,const Standard_Real Radius,const Handle(Graphic2d_Drawer)& aDrawer) ;
friend   //! Returns Standard_True if the primitive <me> is: <br>
//!          included in rectangle (<aPickMode = PM_INCLUDE>), <br>
//!          excluded from rectangle (<aPickMode = PM_EXLUDE>), <br>
//!          intersected by rectangle (<aPickMode = PM_INTERSECT>), <br>
//!          defined by Xmin, Ymin, Xmax, Ymax. <br>
//!	        Standard_False if not. <br>
  Standard_EXPORT   Standard_Boolean Graphic2d_GraphicObject::Pick(const Standard_Real Xmin,const Standard_Real Ymin,const Standard_Real Xmax,const Standard_Real Ymax,const Handle(Graphic2d_Drawer)& aDrawer,const Graphic2d_PickMode aPickMode) ;
friend   //! Returns the min max values of <me>. <br>
//!  Warning: All markers are ignored. <br>
//!  Warning: If <me> is empty or not displayed or <br>
//!	    contains markers and nothing else <br>
//!	    returns FALSE and <br>
//!	    Minx = Miny = RealFirst () <br>
//!	    Maxx = Maxy = RealLast () <br>
  Standard_EXPORT   Standard_Boolean Graphic2d_GraphicObject::MinMax(Quantity_Length& Minx,Quantity_Length& Maxx,Quantity_Length& Miny,Quantity_Length& Maxy) const;
friend   //! Returns the min max values of all markers in <me>. <br>
//!  Warning: If <me> is empty or not displayed or without markers <br>
//!	    returns FALSE and <br>
//!	    Minx = Miny = RealFirst () <br>
//!	    Maxx = Maxy = RealLast () <br>
  Standard_EXPORT   Standard_Boolean Graphic2d_GraphicObject::MarkerMinMax(Quantity_Length& Minx,Quantity_Length& Maxx,Quantity_Length& Miny,Quantity_Length& Maxy) const;
friend   //! Removes the primitive <aPrimitive> from <me>. <br>
  Standard_EXPORT   void Graphic2d_GraphicObject::RemovePrimitive(const Handle(Graphic2d_Primitive)& aPrimitive) ;
friend   //! Drawn the primitive <aPrimitive>, <br>
//!	    with the internal primitive attributes. <br>
  Standard_EXPORT   void Graphic2d_TransientManager::Draw(const Handle(Graphic2d_Primitive)& aPrimitive) ;
friend   //! Drawn the element <anIndex> from the primitive <aPrimitive>, <br>
//!	    with the internal primitive attributes. <br>
  Standard_EXPORT   void Graphic2d_TransientManager::DrawElement(const Handle(Graphic2d_Primitive)& aPrimitive,const Standard_Integer anIndex) ;
friend   //! Drawn the vertex <anIndex> from the primitive <aPrimitive>, <br>
//!	    with the internal primitive attributes. <br>
  Standard_EXPORT   void Graphic2d_TransientManager::DrawVertex(const Handle(Graphic2d_Primitive)& aPrimitive,const Standard_Integer anIndex) ;
friend   //! Draws all picked elements. <br>
  Standard_EXPORT   void Graphic2d_TransientManager::DrawPickedElements(const Handle(Graphic2d_Primitive)& aPrimitive) ;


  DEFINE_STANDARD_RTTI(Graphic2d_Primitive)

protected:

  //! Creates a primitive in a graphic object <aGraphicObject>. <br>
  Standard_EXPORT   Graphic2d_Primitive(const Handle(Graphic2d_GraphicObject)& aGraphicObject);
  //! Draws the element <anElement> of the primitive <me>. <br>
  Standard_EXPORT   virtual  void DrawElement(const Handle(Graphic2d_Drawer)& aDrawer,const Standard_Integer anElement) ;
  //! Draws the all picked elements of the primitive <me>. <br>
  Standard_EXPORT   virtual  void DrawPickedElements(const Handle(Graphic2d_Drawer)& aDrawer) ;
  //! Draws the all picked elements of the primitive <me>. <br>
  Standard_EXPORT   virtual  void DrawSelectedElements(const Handle(Graphic2d_Drawer)& aDrawer) ;
  //! Draws the vertex <aVertex> of the primitive <me>. <br>
  Standard_EXPORT   virtual  void DrawVertex(const Handle(Graphic2d_Drawer)& aDrawer,const Standard_Integer aVertex) ;
  //! Returns Standard_True if the primitive <me> is picked, <br>
//!	    Standard_False if not. <br>
  Standard_EXPORT   virtual  Standard_Boolean Pick(const Standard_ShortReal X,const Standard_ShortReal Y,const Standard_ShortReal aPrecision,const Handle(Graphic2d_Drawer)& aDrawer)  = 0;
  //! Returns Standard_True if the primitive <me> is picked, <br>
//!	    Standard_False if not. <br>
  Standard_EXPORT   virtual  Standard_Boolean PickByCircle(const Standard_ShortReal X,const Standard_ShortReal Y,const Standard_ShortReal Radius,const Handle(Graphic2d_Drawer)& aDrawer,const Graphic2d_PickMode aPickMode = Graphic2d_PM_INCLUDE) ;
  //! Returns Standard_True if the primitive <me> is: <br>
//!		included in rectangle (<aPickMode = PM_INCLUDE>), <br>
//!		excluded from rectangle (<aPickMode = PM_EXLUDE>), <br>
//!		intersected by rectangle (<aPickMode = PM_INTERSECT>), <br>
//!		defined by Xmin, Ymin, Xmax, Ymax. <br>
//!	    Standard_False if not. <br>
  Standard_EXPORT   virtual  Standard_Boolean Pick(const Standard_ShortReal Xmin,const Standard_ShortReal Ymin,const Standard_ShortReal Xmax,const Standard_ShortReal Ymax,const Handle(Graphic2d_Drawer)& aDrawer,const Graphic2d_PickMode aPickMode = Graphic2d_PM_INCLUDE) ;
  //! Sets the index of the picked primitive element if any. <br>
  Standard_EXPORT     void SetPickedIndex(const Standard_Integer anIndex) ;
  //! Computes the MinMax of the primitive if possible. <br>
  Standard_EXPORT   virtual  Standard_Boolean ComputeMinMax() ;
  //! Returns Standard_True if (<aX1>, <aY1>) is closed <br>
//!          to the point (<aX2>, <aY2>). <br>
  Standard_EXPORT   static  Standard_Boolean IsOn(const Standard_ShortReal aX1,const Standard_ShortReal aY1,const Standard_ShortReal aX2,const Standard_ShortReal aY2,const Standard_ShortReal aPrecision) ;
  //! Returns the attached drawer of the view of this Primitive. <br>
  Standard_EXPORT     Handle_Graphic2d_Drawer Drawer() const;
  //! Resets the starting traversal index to this primitive. <br>
  Standard_EXPORT     void ResetIndex() ;
  //! Sets the family of this primitive. <br>
  Standard_EXPORT     void SetFamily(const Graphic2d_TypeOfPrimitive aFamily) ;
  //! Returns the family of this primitive <br>
  Standard_EXPORT     Graphic2d_TypeOfPrimitive Family() const;

Graphic2d_GOPtr myGOPtr;
Standard_ShortReal myMinX;
Standard_ShortReal myMinY;
Standard_ShortReal myMaxX;
Standard_ShortReal myMaxY;
Standard_Integer myColorIndex;
TColStd_MapOfInteger myPickedIndices;
Standard_Integer myNumOfElem;
Standard_Integer myNumOfVert;
Standard_Integer myDisplayMode;


private: 

  //! Returns the graphic-object back pointer of this Primitive. <br>
  Standard_EXPORT     Graphic2d_GOPtr PGraphicObject() const;

Standard_Integer myPickedIndex;
Graphic2d_TypeOfPrimitive myTypeOfPrimitive;
Handle_TColStd_HSequenceOfInteger mySeqOfHighInd;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
