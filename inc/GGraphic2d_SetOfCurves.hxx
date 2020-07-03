// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GGraphic2d_SetOfCurves_HeaderFile
#define _GGraphic2d_SetOfCurves_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_GGraphic2d_SetOfCurves_HeaderFile
#include <Handle_GGraphic2d_SetOfCurves.hxx>
#endif

#ifndef _TColGeom2d_SequenceOfCurve_HeaderFile
#include <TColGeom2d_SequenceOfCurve.hxx>
#endif
#ifndef _Graphic2d_Line_HeaderFile
#include <Graphic2d_Line.hxx>
#endif
#ifndef _Handle_Graphic2d_GraphicObject_HeaderFile
#include <Handle_Graphic2d_GraphicObject.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Graphic2d_Drawer_HeaderFile
#include <Handle_Graphic2d_Drawer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif
#ifndef _Aspect_FStream_HeaderFile
#include <Aspect_FStream.hxx>
#endif
class GGraphic2d_CurveDefinitionError;
class Standard_OutOfRange;
class Graphic2d_GraphicObject;
class Geom2d_Curve;
class Graphic2d_Drawer;


//! The primitive SetOfCurves <br>
class GGraphic2d_SetOfCurves : public Graphic2d_Line {

public:

  //! Creates an empty set of curves in the graphic <br>
//!         object <aGraphicObject>. <br>
  Standard_EXPORT   GGraphic2d_SetOfCurves(const Handle(Graphic2d_GraphicObject)& aGraphicObject);
  //! Add a curve in the set <br>
  Standard_EXPORT     void Add(const Handle(Geom2d_Curve)& aCurve) ;
  //! Returns the number of curves in the set. <br>
  Standard_EXPORT     Standard_Integer Length() const;
  //! Returns the curve of rank <aRank> from the set. <br>
  Standard_EXPORT     Handle_Geom2d_Curve Values(const Standard_Integer aRank) const;




  DEFINE_STANDARD_RTTI(GGraphic2d_SetOfCurves)

protected:

  //! Draws the set of curves <me>. <br>
  Standard_EXPORT     void Draw(const Handle(Graphic2d_Drawer)& aDrawer) ;
  //! Draws element <anIndex> of the set <me>. <br>
  Standard_EXPORT   virtual  void DrawElement(const Handle(Graphic2d_Drawer)& aDrawer,const Standard_Integer anIndex) ;
  //! Draws vertex <anIndex> of the set <me>. <br>
  Standard_EXPORT   virtual  void DrawVertex(const Handle(Graphic2d_Drawer)& aDrawer,const Standard_Integer anIndex) ;
  //! Returns Standard_True if one curve of the set <me> <br>
//!	    is picked, Standard_False if not. <br>
  Standard_EXPORT     Standard_Boolean Pick(const Standard_ShortReal X,const Standard_ShortReal Y,const Standard_ShortReal aPrecision,const Handle(Graphic2d_Drawer)& aDrawer) ;
  
  Standard_EXPORT   virtual  void Save(Aspect_FStream& aFStream) const;



private: 


TColGeom2d_SequenceOfCurve myCurves;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
