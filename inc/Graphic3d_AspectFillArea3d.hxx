// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_AspectFillArea3d_HeaderFile
#define _Graphic3d_AspectFillArea3d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Graphic3d_AspectFillArea3d_HeaderFile
#include <Handle_Graphic3d_AspectFillArea3d.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Graphic3d_TextureMap_HeaderFile
#include <Handle_Graphic3d_TextureMap.hxx>
#endif
#ifndef _Graphic3d_MaterialAspect_HeaderFile
#include <Graphic3d_MaterialAspect.hxx>
#endif
#ifndef _Aspect_TypeOfDegenerateModel_HeaderFile
#include <Aspect_TypeOfDegenerateModel.hxx>
#endif
#ifndef _Quantity_Ratio_HeaderFile
#include <Quantity_Ratio.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Aspect_AspectFillArea_HeaderFile
#include <Aspect_AspectFillArea.hxx>
#endif
#ifndef _Aspect_InteriorStyle_HeaderFile
#include <Aspect_InteriorStyle.hxx>
#endif
#ifndef _Aspect_TypeOfLine_HeaderFile
#include <Aspect_TypeOfLine.hxx>
#endif
class Graphic3d_TextureMap;
class Quantity_Color;
class Graphic3d_MaterialAspect;


//! This class permits the creation and updating of <br>
//!          a graphic attribute context for opaque 3d <br>
//!          primitives (polygons, triangles, quadrilaterals) <br>
//!  Keywords: Face, FillArea, Triangle, Quadrangle, Polygon, <br>
//!           TriangleMesh, QuadrangleMesh, Edge, Border, Interior, <br>
//!           Color, Type, Width, Style, Hatch, Material, <br>
//!           BackFaceRemoval, DistinguishMode <br>
class Graphic3d_AspectFillArea3d : public Aspect_AspectFillArea {

public:

  //! Creates a context table for fill area primitives <br>
//!          defined with the following default values: <br>
  Standard_EXPORT   Graphic3d_AspectFillArea3d();
  //! Creates a context table for fill area primitives <br>
//!          defined with the specified values. <br>
  Standard_EXPORT   Graphic3d_AspectFillArea3d(const Aspect_InteriorStyle Interior,const Quantity_Color& InteriorColor,const Quantity_Color& EdgeColor,const Aspect_TypeOfLine EdgeLineType,const Standard_Real EdgeWidth,const Graphic3d_MaterialAspect& FrontMaterial,const Graphic3d_MaterialAspect& BackMaterial);
  //! Allows the display of back-facing filled <br>
//!          polygons. <br>
  Standard_EXPORT     void AllowBackFace() ;
  //! Modifies the surface material of internal faces <br>
  Standard_EXPORT     void SetBackMaterial(const Graphic3d_MaterialAspect& AMaterial) ;
  //! Allows distinction between external and internal <br>
//!          faces of FillAreas. <br>
  Standard_EXPORT     void SetDistinguishOn() ;
  //! Forbids distinction between external and internal <br>
//!          faces of FillAreas. <br>
  Standard_EXPORT     void SetDistinguishOff() ;
  //! The edges of FillAreas are drawn. <br>
  Standard_EXPORT     void SetEdgeOn() ;
  //! The edges of FillAreas are not drawn. <br>
  Standard_EXPORT     void SetEdgeOff() ;
  //! Modifies the surface material of external faces <br>
  Standard_EXPORT     void SetFrontMaterial(const Graphic3d_MaterialAspect& AMaterial) ;
  //! Suppress the display of back-facing filled <br>
//!          polygons. <br>
//!          A back-facing polygon is defined as a polygon whose <br>
//!          vertices are in a clockwise order with respect <br>
//!          to screen coordinates. <br>
  Standard_EXPORT     void SuppressBackFace() ;
  
  Standard_EXPORT     void SetTextureMap(const Handle(Graphic3d_TextureMap)& ATexture) ;
  
  Standard_EXPORT     void SetTextureMapOn() ;
  
  Standard_EXPORT     void SetTextureMapOff() ;
  //! Sets the default model of degeneration for the polygons <br>
//!      which is taking in account at creation time of any <br>
//!      graphic structure until the model is change using <br>
//!      SetDegenerateModel() method. <br>
  Standard_EXPORT   static  void SetDefaultDegenerateModel(const Aspect_TypeOfDegenerateModel aModel = Aspect_TDM_WIREFRAME,const Quantity_Ratio aRatio = 0.0) ;
  //! Sets the model of degeneration for the polygons <br>
//!   according to the degenerate ratio >= 0. & <= 1. where : <br>
//!   <aRatio> = 0. indicate that all polygons of the graphic structure <br>
//!      are displayed. <br>
//!   <aRatio> = 1. indicate that nothing is displayed in the graphic <br>
//!      structure. <br>
//!   When <ARatio> is > 0 & < 1. the corresponding amount <br>
//!   of polygons are displayed in the graphic structure with a <br>
//!   random method. <br>
//!  Warning: the degenerate structure is shown only when <br>
//! the animation and degenerate flags are set to TRUE <br>
//! in V3d_View::SetAnimationMode(..) <br>
  Standard_EXPORT     void SetDegenerateModel(const Aspect_TypeOfDegenerateModel aModel = Aspect_TDM_WIREFRAME,const Quantity_Ratio aRatio = 0.0) ;
  //! Sets up OpenGL polygon offsets mechanism. <br>
//!          <aMode> parameter can contain various combinations of <br>
//!          Aspect_PolygonOffsetMode enumeration elements (Aspect_POM_None means <br>
//!          that polygon offsets are not changed). <br>
//!          If <aMode> is different from Aspect_POM_Off and Aspect_POM_None, then <aFactor> and <aUnits> <br>
//!          arguments are used by graphic renderer to calculate a depth offset value: <br>
//! <br>
//!          offset = <aFactor> * m + <aUnits> * r, where <br>
//!          m - maximum depth slope for the polygon currently being displayed, <br>
//!          r - minimum window coordinates depth resolution (implementation-specific) <br>
  Standard_EXPORT     void SetPolygonOffsets(const Standard_Integer aMode,const Standard_Real aFactor = 1.0,const Standard_Real aUnits = 0.0) ;
  //! Returns the Back Face Removal status. <br>
//!          Standard_True if SuppressBackFace is activated. <br>
  Standard_EXPORT     Standard_Boolean BackFace() const;
  //! Returns the Distinguish Mode status. <br>
  Standard_EXPORT     Standard_Boolean Distinguish() const;
  //! Returns Standard_True if the edges are drawn and <br>
//!          Standard_False if the edges are not drawn. <br>
  Standard_EXPORT     Standard_Boolean Edge() const;
  //! Returns the surface material of internal faces <br>
  Standard_EXPORT     Graphic3d_MaterialAspect BackMaterial() const;
  //! Returns the surface material of external faces <br>
  Standard_EXPORT     Graphic3d_MaterialAspect FrontMaterial() const;
  
  Standard_EXPORT     Handle_Graphic3d_TextureMap TextureMap() const;
  
  Standard_EXPORT     Standard_Boolean TextureMapState() const;
  //! returns the current degeneration model and ratio <br>
//!  for the polygons <br>
  Standard_EXPORT     Aspect_TypeOfDegenerateModel DegenerateModel(Quantity_Ratio& aRatio) const;
  //! returns the default degeneration model and ratio <br>
//!  for the polygons <br>
  Standard_EXPORT   static  Aspect_TypeOfDegenerateModel DefaultDegenerateModel(Quantity_Ratio& aRatio) ;
  //! Returns current polygon offsets settings. <br>
  Standard_EXPORT     void PolygonOffsets(Standard_Integer& aMode,Standard_Real& aFactor,Standard_Real& aUnits) const;




  DEFINE_STANDARD_RTTI(Graphic3d_AspectFillArea3d)

protected:




private: 


Standard_Boolean DistinguishModeActive;
Standard_Boolean EdgeModeActive;
Standard_Boolean BackFaceRemovalActive;
Handle_Graphic3d_TextureMap MyTextureMap;
Standard_Boolean MyTextureMapState;
Graphic3d_MaterialAspect MyFrontMaterial;
Graphic3d_MaterialAspect MyBackMaterial;
Aspect_TypeOfDegenerateModel MyDegenerateModel;
Quantity_Ratio MyDegenerateRatio;
Standard_Integer MyPolygonOffsetMode;
Standard_Real MyPolygonOffsetFactor;
Standard_Real MyPolygonOffsetUnits;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
