// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Visual3d_TransientManager_HeaderFile
#define _Visual3d_TransientManager_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Visual3d_TransientManager_HeaderFile
#include <Handle_Visual3d_TransientManager.hxx>
#endif

#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Visual3d_View_HeaderFile
#include <Handle_Visual3d_View.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Quantity_PlaneAngle_HeaderFile
#include <Quantity_PlaneAngle.hxx>
#endif
#ifndef _Graphic3d_TextPath_HeaderFile
#include <Graphic3d_TextPath.hxx>
#endif
#ifndef _Graphic3d_HorizontalTextAlignment_HeaderFile
#include <Graphic3d_HorizontalTextAlignment.hxx>
#endif
#ifndef _Graphic3d_VerticalTextAlignment_HeaderFile
#include <Graphic3d_VerticalTextAlignment.hxx>
#endif
#ifndef _Handle_Graphic3d_Structure_HeaderFile
#include <Handle_Graphic3d_Structure.hxx>
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
#ifndef _Graphic3d_TypeOfComposition_HeaderFile
#include <Graphic3d_TypeOfComposition.hxx>
#endif
class Visual3d_TransientDefinitionError;
class Graphic3d_TransformError;
class Visual3d_View;
class TCollection_ExtendedString;
class Graphic3d_Structure;
class Graphic3d_AspectLine3d;
class Graphic3d_AspectFillArea3d;
class Graphic3d_AspectText3d;
class Graphic3d_AspectMarker3d;
class TColStd_Array2OfReal;


//! This class allows to manage transient graphics <br>
//!      above one View. <br>
//!      A simple way to drawn something very quicly above <br>
//!      a complex scene (Hilighting,Sketching,...) <br>
//!      All transient graphics will be drawn with <br>
//!      the projection defined by the view with the current <br>
//!      attributes depending of the primitive type : <br>
//!      Lines,Markers,Polygons,Texts <br>
//!      All transient graphics will be erased at the next <br>
//!      View::BeginDraw(). <br>
//!      If RetainMode is active, <br>
//!      All transient graphics will be kept at the <br>
//!      next View::Update(),Redraw(). The transient graphics <br>
//!      is stored by this object and graphic library, the <br>
//!      graphic managed itself exposure,resizing,... <br>
//!      The method View::ClearDraw() is necessary to erase <br>
//!      all transient graphics. <br>
//!      If RetainMode is deactivate, <br>
//!      All transient graphics will be erased at the <br>
//!      next View::Update(),Redraw(). <br>
//!      Remember that nothing is stored by this object and <br>
//!      graphic library,the application must managed itself <br>
//!      exposure,resizing,... <br>
//!      If double_buffering is activate, <br>
//!      all graphics are drawn in the back buffer and flushed <br>
//!      in the front buffer at the end of drawing but nothing <br>
//!      is done for to separate transient from structured <br>
//!      graphics,the only way to regenerate the structured <br>
//!      view is to Redraw() the view. <br>
//!      If double_buffering is deactivate, <br>
//!      the back buffer is preserved and used for restoring <br>
//!      the front buffer at begin drawing time.I recommend <br>
//!      to use the second way (without DB) if you want <br>
//!      to preserve the graphics and the performances! <br>
class Visual3d_TransientManager : public MMgt_TShared {

public:

  //! Creates a TransientManager <aView>. <br>
  Standard_EXPORT   Visual3d_TransientManager();
  //! Suppress the TransientManager <me>. <br>
  Standard_EXPORT     void Destroy() ;
~Visual3d_TransientManager()
{
  Destroy();
}
  //! Begins any graphics in the view <aView> <br>
//!      Redraw any structured graphics in the back buffer before <br>
//!      if <DoubleBuffer> is TRUE. <br>
//!          Restore the front buffer from the back before <br>
//!      if <DoubleBuffer> is FALSE. <br>
//!      if <RetainMode> is TRUE. <br>
//!          the graphic managed itself exposure,resizing ... <br>
//!      if <RetainMode> is FALSE. <br>
//!          the application must managed itself exposure,resizing ... <br>
//! <br>
//!  Warning: Returns TRUE if transient drawing is enabled in <br>
//!     the associated view. <br>
//!          Returns FALSE ,if nothing works because something <br>
//!     is wrong for the transient principle : <br>
//!     Immediat mode is not implemented depending of the <br>
//!     graphic library used. <br>
//!         MBX,PIXMAP double buffering don't works depending of <br>
//!         the graphic board and the visual of the window supporting <br>
//!         the view. <br>
//!  Warning: No default attributes <br>
//! Raises TransientDefinitionError from Visual3d; <br>
//! if   Drawing is already opened. <br>
//! or   the associated view is not mapped on a window. <br>
  Standard_EXPORT   static  Standard_Boolean BeginDraw(const Handle(Visual3d_View)& aView,const Standard_Boolean DoubleBuffer = Standard_False,const Standard_Boolean RetainMode = Standard_False) ;
  //! Flush all graphics to the front buffer. <br>
//!  Synchronize graphics to the screen if <Synchronize> is <br>
//!  TRUE (make becarefull to the performances!). <br>
//!  Raises TransientDefinitionError from Visual3d; <br>
//! if   Drawing is not opened. <br>
  Standard_EXPORT   static  void EndDraw(const Standard_Boolean Synchronize = Standard_False) ;
  //! Clear all transient graphics in the view <aView> <br>
//!         updates a scene if <aFlush> = true <br>
//!  Raises TransientDefinitionError from Visual3d; <br>
//! if   Drawing is already opened. <br>
//! or   the associated view is not mapped on a window. <br>
  Standard_EXPORT   static  void ClearDraw(const Handle(Visual3d_View)& aView,const Standard_Boolean aFlush = Standard_True) ;
  //! Begins any add graphics in the view <aView> <br>
//!          the application must managed itself exposure,resizing ... <br>
//! <br>
//!  Warning: Returns TRUE if transient drawing is enabled in <br>
//!     the associated view. <br>
//!          Returns FALSE ,if nothing works because something <br>
//!     is wrong for the transient principle : <br>
//!     Immediat mode is not implemented depending of the <br>
//!     graphic library used. <br>
//!         MBX,PIXMAP double buffering don't works depending of <br>
//!         the graphic board and the visual of the window supporting <br>
//!         the view. <br>
//!  Warning: No default attributes <br>
//! Raises TransientDefinitionError from Visual3d; <br>
//! if   Drawing is already opened. <br>
//! or   the associated view is not mapped on a window. <br>
  Standard_EXPORT   static  Standard_Boolean BeginAddDraw(const Handle(Visual3d_View)& aView) ;
  //! Flush all add graphics to the front buffer. <br>
//! Raises TransientDefinitionError from Visual3d; <br>
//! if   Drawing is not opened. <br>
  Standard_EXPORT   static  void EndAddDraw() ;
  //! After this call, <me> is ready to receive <br>
//!      a definition of a polyline with AddVertex(). <br>
//!  Raises TransientDefinitionError from Visual3d; <br>
//! if a Begin... primitive is already opened, <br>
//! or   Drawing is not opened. <br>
  Standard_EXPORT   static  void BeginPolyline() ;
  //! After this call, <me> is ready to receive <br>
//!      a definition of a polygon with AddVertex(). <br>
//! Raises TransientDefinitionError from Visual3d; <br>
//! if a Begin... primitive is already opened, <br>
//! or   Drawing is not opened. <br>
  Standard_EXPORT   static  void BeginPolygon() ;
  //! After this call, <me> is ready to receive <br>
//!      a definition of a triangle mesh with AddVertex(). <br>
//! Raises TransientDefinitionError from Visual3d; <br>
//! if a Begin... primitive is already opened, <br>
//! or   Drawing is not opened. <br>
  Standard_EXPORT   static  void BeginTriangleMesh() ;
  //! After this call, <me> is ready to receive <br>
//!      a definition of a marker with AddVertex(). <br>
//! Raises TransientDefinitionError from Visual3d; <br>
//! if a Begin... primitive is already opened, <br>
//! or   Drawing is not opened. <br>
  Standard_EXPORT   static  void BeginMarker() ;
  //! After this call, <me> is ready to receive <br>
//!      a definition of a curve with AddVertex(). <br>
//! Raises TransientDefinitionError from Visual3d; <br>
//! if a Begin... primitive is already opened, <br>
//! or   Drawing is not opened. <br>
  Standard_EXPORT   static  void BeginBezier() ;
  //! Puts <X, Y, Z> as a new point in the current primitive. <br>
//!      If <AFlag> then it is a draw between last point and <br>
//!      this point else it is a move between last point and <br>
//!      this point. <br>
//! Raises TransientDefinitionError from Visual3d; <br>
//! if a Begin... primitive is not opened, <br>
//! or   Drawing is not opened. <br>
  Standard_EXPORT   static  void AddVertex(const Standard_Real X,const Standard_Real Y,const Standard_Real Z,const Standard_Boolean AFlag = Standard_True) ;
  //! Puts <X, Y, Z, W> as a new point coordinates and <br>
//!      weight in the current primitive. <br>
//!      If <AFlag> then it is a draw between last point and <br>
//!      this point else it is a move between last point and <br>
//!      this point. <br>
//! Raises TransientDefinitionError from Visual3d; <br>
//! if a Begin... primitive is not opened, <br>
//! or   Drawing is not opened. <br>
  Standard_EXPORT   static  void AddVertex(const Standard_Real X,const Standard_Real Y,const Standard_Real Z,const Standard_Real W,const Standard_Boolean AFlag = Standard_True) ;
  //! Puts <X, Y, Z> as a new point in the current primitive. <br>
//!          Puts <NX, NY, NZ> as a new normal in the current <br>
//!      primitive. <br>
//!      If <AFlag> then it is a draw between last point and <br>
//!      this point else it is a move between last point and <br>
//!      this point. <br>
//! Raises TransientDefinitionError from Visual3d; <br>
//! if a Begin... primitive is not opened, <br>
//! or   Drawing is not opened. <br>
  Standard_EXPORT   static  void AddVertex(const Standard_Real X,const Standard_Real Y,const Standard_Real Z,const Standard_Real NX,const Standard_Real NY,const Standard_Real NZ,const Standard_Boolean AFlag = Standard_True) ;
  //! After this call, <me> stops the reception of <br>
//!      a definition of a Begin... primitive. <br>
//!  Raises TransientDefinitionError from Visual3d; <br>
//! if a Begin... primitive is not opened, <br>
//! or   Drawing is not opened. <br>
  Standard_EXPORT   static  void ClosePrimitive() ;
  //! Drawn the string <AText> at position <X,Y,Z>. <br>
//!     The 3D point of attachment is projected. The text is <br>
//!          written in the plane of projection. <br>
//!  The attributes are given with respect to the plane of <br>
//!          projection. <br>
//!          AHeight     : Height of text. <br>
//!             (Relative to the Normalized Projection <br>
//!                          Coordinates (NPC) Space). <br>
//!          AAngle      : Orientation of the text <br>
//!                  (with respect to the horizontal). <br>
//! Raises TransientDefinitionError from Visual3d; <br>
//! if   Drawing is not opened. <br>
  Standard_EXPORT   static  void DrawText(const TCollection_ExtendedString& AText,const Standard_Real X,const Standard_Real Y,const Standard_Real Z,const Standard_Real AHeight,const Quantity_PlaneAngle AAngle = 0.0,const Graphic3d_TextPath ATp = Graphic3d_TP_RIGHT,const Graphic3d_HorizontalTextAlignment AHta = Graphic3d_HTA_LEFT,const Graphic3d_VerticalTextAlignment AVta = Graphic3d_VTA_BOTTOM) ;
  //! Drawn the structure <AStructure>. <br>
//! Raises TransientDefinitionError from Visual3d; <br>
//! if   Drawing is not opened. <br>
  Standard_EXPORT   static  void DrawStructure(const Handle(Graphic3d_Structure)& AStructure) ;
  //! Modifies the current lines attributes. <br>
//!  Warning: No default attributes <br>
//! Raises TransientDefinitionError from Visual3d; <br>
//! if   Drawing is not opened. <br>
  Standard_EXPORT   static  void SetPrimitivesAspect(const Handle(Graphic3d_AspectLine3d)& CTX) ;
  //! Modifies the current faces attributes <br>
//!  Warning: No default attributes <br>
//! Raises TransientDefinitionError from Visual3d; <br>
//! if   Drawing is not opened. <br>
  Standard_EXPORT   static  void SetPrimitivesAspect(const Handle(Graphic3d_AspectFillArea3d)& CTX) ;
  //! Modifies the current texts attributes <br>
//!  Warning: No default attributes <br>
//!    Raises TransientDefinitionError from Visual3d; <br>
//! if   Drawing is not opened. <br>
  Standard_EXPORT   static  void SetPrimitivesAspect(const Handle(Graphic3d_AspectText3d)& CTX) ;
  //! Modifies the current markers attributes <br>
//!  Warning: No default attributes <br>
//! Raises TransientDefinitionError from Visual3d; <br>
//! if   Drawing is not opened. <br>
  Standard_EXPORT   static  void SetPrimitivesAspect(const Handle(Graphic3d_AspectMarker3d)& CTX) ;
  //! Returns the coordinates of the boundary box <br>
//!      of the Transient graphics actually drawn <br>
//!      since BeginDraw() has been call. <br>
//!  Warning: If nothing has been drawn then : <br>
//!      XMin = YMin = ZMin = RealFirst (). <br>
//!      XMax = YMax = ZMax = RealLast (). <br>
  Standard_EXPORT   static  void MinMaxValues(Standard_Real& XMin,Standard_Real& YMin,Standard_Real& ZMin,Standard_Real& XMax,Standard_Real& YMax,Standard_Real& ZMax) ;
  //! Returns the coordinates of the boundary box projection <br>
//!      of the Transient graphics actually drawn <br>
//!      since BeginDraw() has been call. <br>
//!  Warning: If nothing has been drawn then : <br>
//!      XMin = YMin = ZMin = RealFirst (). <br>
//!      XMax = YMax = ZMax = RealLast (). <br>
  Standard_EXPORT   static  void MinMaxValues(Standard_Real& UMin,Standard_Real& VMin,Standard_Real& UMax,Standard_Real& VMax) ;
  //! Modifies the current local modelling transformation <br>
//!      of the transient graphics. <br>
  Standard_EXPORT   static  void SetTransform(const TColStd_Array2OfReal& AMatrix,const Graphic3d_TypeOfComposition AType = Graphic3d_TOC_REPLACE) ;



  DEFINE_STANDARD_RTTI(Visual3d_TransientManager)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
