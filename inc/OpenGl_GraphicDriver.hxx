// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _OpenGl_GraphicDriver_HeaderFile
#define _OpenGl_GraphicDriver_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_OpenGl_GraphicDriver_HeaderFile
#include <Handle_OpenGl_GraphicDriver.hxx>
#endif

#ifndef _Graphic3d_GraphicDriver_HeaderFile
#include <Graphic3d_GraphicDriver.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Aspect_Display_HeaderFile
#include <Aspect_Display.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Graphic3d_CView_HeaderFile
#include <Graphic3d_CView.hxx>
#endif
#ifndef _Graphic3d_CStructure_HeaderFile
#include <Graphic3d_CStructure.hxx>
#endif
#ifndef _Graphic3d_CGroup_HeaderFile
#include <Graphic3d_CGroup.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfByte_HeaderFile
#include <Handle_TColStd_HArray1OfByte.hxx>
#endif
#ifndef _Graphic3d_TypeOfPrimitive_HeaderFile
#include <Graphic3d_TypeOfPrimitive.hxx>
#endif
#ifndef _Graphic3d_CPick_HeaderFile
#include <Graphic3d_CPick.hxx>
#endif
#ifndef _Aspect_GradientFillMethod_HeaderFile
#include <Aspect_GradientFillMethod.hxx>
#endif
#ifndef _Aspect_FillMethod_HeaderFile
#include <Aspect_FillMethod.hxx>
#endif
#ifndef _Aspect_CLayer2d_HeaderFile
#include <Aspect_CLayer2d.hxx>
#endif
#ifndef _Graphic3d_TypeOfPolygon_HeaderFile
#include <Graphic3d_TypeOfPolygon.hxx>
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
#ifndef _Graphic3d_PrimitiveArray_HeaderFile
#include <Graphic3d_PrimitiveArray.hxx>
#endif
#ifndef _Graphic3d_CUserDraw_HeaderFile
#include <Graphic3d_CUserDraw.hxx>
#endif
#ifndef _Quantity_NameOfColor_HeaderFile
#include <Quantity_NameOfColor.hxx>
#endif
#ifndef _Aspect_TypeOfTriedronPosition_HeaderFile
#include <Aspect_TypeOfTriedronPosition.hxx>
#endif
#ifndef _Aspect_TypeOfTriedronEcho_HeaderFile
#include <Aspect_TypeOfTriedronEcho.hxx>
#endif
#ifndef _OSD_FontAspect_HeaderFile
#include <OSD_FontAspect.hxx>
#endif
#ifndef _Graphic3d_CGraduatedTrihedron_HeaderFile
#include <Graphic3d_CGraduatedTrihedron.hxx>
#endif
#ifndef _Graphic3d_TypeOfComposition_HeaderFile
#include <Graphic3d_TypeOfComposition.hxx>
#endif
#ifndef _Graphic3d_TypeOfTexture_HeaderFile
#include <Graphic3d_TypeOfTexture.hxx>
#endif
#ifndef _Handle_AlienImage_AlienImage_HeaderFile
#include <Handle_AlienImage_AlienImage.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
#ifndef _Graphic3d_CInitTexture_HeaderFile
#include <Graphic3d_CInitTexture.hxx>
#endif
#ifndef _Aspect_Handle_HeaderFile
#include <Aspect_Handle.hxx>
#endif
#ifndef _Graphic3d_ExportFormat_HeaderFile
#include <Graphic3d_ExportFormat.hxx>
#endif
#ifndef _Graphic3d_SortType_HeaderFile
#include <Graphic3d_SortType.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Graphic3d_PtrFrameBuffer_HeaderFile
#include <Graphic3d_PtrFrameBuffer.hxx>
#endif
#ifndef _Image_CRawBufferData_HeaderFile
#include <Image_CRawBufferData.hxx>
#endif
class TColStd_Array2OfReal;
class TColStd_HArray1OfByte;
class Graphic3d_VertexNC;
class Graphic3d_Vector;
class Quantity_Color;
class Graphic3d_Vertex;
class Graphic3d_Array1OfVertex;
class Graphic3d_Array1OfVertexN;
class Graphic3d_Array1OfVertexNT;
class TColStd_Array1OfInteger;
class Graphic3d_Array1OfVertexC;
class Graphic3d_Array2OfVertex;
class Graphic3d_Array2OfVertexN;
class Graphic3d_Array2OfVertexNT;
class Aspect_Array1OfEdge;
class Graphic3d_Array1OfVertexNC;
class TCollection_ExtendedString;
class TColStd_Array1OfReal;
class AlienImage_AlienImage;
class TColStd_HArray1OfReal;


//! This class allows the definition of an opengl graphic <br>
//!      driver <br>
class OpenGl_GraphicDriver : public Graphic3d_GraphicDriver {

public:

  
  Standard_EXPORT   OpenGl_GraphicDriver(const Standard_CString AShrName);
  
  Standard_EXPORT     Standard_ShortReal DefaultTextHeight() const;
  //! call_togl_begin <br>
  Standard_EXPORT     Standard_Boolean Begin(const Standard_CString ADisplay) ;
  //! call_togl_begin_display <br>
  Standard_EXPORT     Standard_Boolean Begin(const Aspect_Display ADisplay) ;
  //! call_togl_end <br>
  Standard_EXPORT     void End() ;
  //! call_togl_inquirelight <br>
  Standard_EXPORT     Standard_Integer InquireLightLimit() ;
  //! call_togl_inquiremat <br>
  Standard_EXPORT     void InquireMat(const Graphic3d_CView& ACView,TColStd_Array2OfReal& AMatO,TColStd_Array2OfReal& AMatM) ;
  //! call_togl_inquireplane <br>
  Standard_EXPORT     Standard_Integer InquirePlaneLimit() ;
  //! call_togl_inquireview <br>
  Standard_EXPORT     Standard_Integer InquireViewLimit() ;
  //! Returns Standard_True if texture is <br>
//!      supported by the graphic driver <br>
  Standard_EXPORT     Standard_Boolean InquireTextureAvailable() ;
  //! call_togl_blink <br>
  Standard_EXPORT     void Blink(const Graphic3d_CStructure& ACStructure,const Standard_Boolean Create) ;
  //! call_togl_boundarybox <br>
  Standard_EXPORT     void BoundaryBox(const Graphic3d_CStructure& ACStructure,const Standard_Boolean Create) ;
  //! call_togl_highlightcolor <br>
  Standard_EXPORT     void HighlightColor(const Graphic3d_CStructure& ACStructure,const Standard_ShortReal R,const Standard_ShortReal G,const Standard_ShortReal B,const Standard_Boolean Create) ;
  //! call_togl_namesetstructure <br>
  Standard_EXPORT     void NameSetStructure(const Graphic3d_CStructure& ACStructure) ;
  //! call_togl_cleargroup <br>
  Standard_EXPORT     void ClearGroup(const Graphic3d_CGroup& ACGroup) ;
  //! call_togl_closegroup <br>
  Standard_EXPORT     void CloseGroup(const Graphic3d_CGroup& ACGroup) ;
  //! call_togl_facecontextgroup <br>
  Standard_EXPORT     void FaceContextGroup(const Graphic3d_CGroup& ACGroup,const Standard_Integer NoInsert) ;
  //! call_togl_group <br>
  Standard_EXPORT     void Group(Graphic3d_CGroup& ACGroup) ;
  //! call_togl_linecontextgroup <br>
  Standard_EXPORT     void LineContextGroup(const Graphic3d_CGroup& ACGroup,const Standard_Integer NoInsert) ;
  //! call_togl_markercontextgroup <br>
  Standard_EXPORT     void MarkerContextGroup(const Graphic3d_CGroup& ACGroup,const Standard_Integer NoInsert) ;
  //! call_togl_markercontextgroup <br>
  Standard_EXPORT     void MarkerContextGroup(const Graphic3d_CGroup& ACGroup,const Standard_Integer NoInsert,const Standard_Integer AMarkWidth,const Standard_Integer AMarkHeight,const Handle(TColStd_HArray1OfByte)& ATexture) ;
  //! call_togl_opengroup <br>
  Standard_EXPORT     void OpenGroup(const Graphic3d_CGroup& ACGroup) ;
  //! call_togl_removegroup <br>
  Standard_EXPORT     void RemoveGroup(const Graphic3d_CGroup& ACGroup) ;
  //! call_togl_textcontextgroup <br>
  Standard_EXPORT     void TextContextGroup(const Graphic3d_CGroup& ACGroup,const Standard_Integer NoInsert) ;
  //! call_togl_clearstructure <br>
  Standard_EXPORT     void ClearStructure(const Graphic3d_CStructure& ACStructure) ;
  //! call_togl_connect <br>
  Standard_EXPORT     void Connect(const Graphic3d_CStructure& AFather,const Graphic3d_CStructure& ASon) ;
  //! call_togl_contextstructure <br>
  Standard_EXPORT     void ContextStructure(const Graphic3d_CStructure& ACStructure) ;
  //! call_togl_disconnect <br>
  Standard_EXPORT     void Disconnect(const Graphic3d_CStructure& AFather,const Graphic3d_CStructure& ASon) ;
  //! call_togl_displaystructure <br>
  Standard_EXPORT     void DisplayStructure(const Graphic3d_CView& ACView,const Graphic3d_CStructure& ACStructure,const Standard_Integer APriority) ;
  //! call_togl_erasestructure <br>
  Standard_EXPORT     void EraseStructure(const Graphic3d_CView& ACView,const Graphic3d_CStructure& ACStructure) ;
  //! call_togl_removestructure <br>
  Standard_EXPORT     void RemoveStructure(const Graphic3d_CStructure& ACStructure) ;
  //! call_togl_structure <br>
  Standard_EXPORT     void Structure(Graphic3d_CStructure& ACStructure) ;
  //! call_togl_structure_exploration <br>
  Standard_EXPORT     void DumpGroup(const Graphic3d_CGroup& ACGroup) ;
  //! call_togl_structure_exploration <br>
  Standard_EXPORT     void DumpStructure(const Graphic3d_CStructure& ACStructure) ;
  //! call_togl_view_exploration <br>
  Standard_EXPORT     void DumpView(const Graphic3d_CView& ACView) ;
  //! call_togl_element_exploration <br>
  Standard_EXPORT     Standard_Boolean ElementExploration(const Graphic3d_CStructure& ACStructure,const Standard_Integer ElementNumber,Graphic3d_VertexNC& AVertex,Graphic3d_Vector& AVector) ;
  //! call_togl_element_type <br>
  Standard_EXPORT     Graphic3d_TypeOfPrimitive ElementType(const Graphic3d_CStructure& ACStructure,const Standard_Integer ElementNumber) ;
  //! call_togl_init_pick <br>
  Standard_EXPORT     void InitPick() ;
  //! call_togl_pick <br>
  Standard_EXPORT     void Pick(Graphic3d_CPick& ACPick) ;
  //! call_togl_pickid <br>
  Standard_EXPORT     void PickId(const Graphic3d_CGroup& ACGroup) ;
  //! call_togl_activateview <br>
  Standard_EXPORT     void ActivateView(const Graphic3d_CView& ACView) ;
  //! call_togl_antialiasing <br>
  Standard_EXPORT     void AntiAliasing(const Graphic3d_CView& ACView,const Standard_Boolean AFlag) ;
  //! call_togl_background <br>
  Standard_EXPORT     void Background(const Graphic3d_CView& ACView) ;
  //! call_togl_gradient_background <br>
  Standard_EXPORT     void GradientBackground(const Graphic3d_CView& ACView,const Quantity_Color& AColor1,const Quantity_Color& AColor2,const Aspect_GradientFillMethod FillStyle) ;
  
  Standard_EXPORT     void BackgroundImage(const Standard_CString FileName,const Graphic3d_CView& ACView,const Aspect_FillMethod FillStyle) ;
  
  Standard_EXPORT     void SetBgImageStyle(const Graphic3d_CView& ACView,const Aspect_FillMethod FillStyle) ;
  
  Standard_EXPORT     void SetBgGradientStyle(const Graphic3d_CView& ACView,const Aspect_GradientFillMethod FillStyle) ;
  //! call_togl_cliplimit <br>
  Standard_EXPORT     void ClipLimit(const Graphic3d_CView& ACView,const Standard_Boolean AWait) ;
  //! call_togl_deactivateview <br>
  Standard_EXPORT     void DeactivateView(const Graphic3d_CView& ACView) ;
  //! call_togl_cliplimit <br>
  Standard_EXPORT     void DepthCueing(const Graphic3d_CView& ACView,const Standard_Boolean AFlag) ;
  //! call_togl_unproject_raster <br>
  Standard_EXPORT     Standard_Boolean ProjectRaster(const Graphic3d_CView& ACView,const Standard_ShortReal AX,const Standard_ShortReal AY,const Standard_ShortReal AZ,Standard_Integer& AU,Standard_Integer& AV) ;
  //! call_togl_unproject_raster <br>
  Standard_EXPORT     Standard_Boolean UnProjectRaster(const Graphic3d_CView& ACView,const Standard_Integer Axm,const Standard_Integer Aym,const Standard_Integer AXM,const Standard_Integer AYM,const Standard_Integer AU,const Standard_Integer AV,Standard_ShortReal& AX,Standard_ShortReal& AY,Standard_ShortReal& AZ) ;
  //! call_togl_unproject_raster_with_ray <br>
  Standard_EXPORT     Standard_Boolean UnProjectRasterWithRay(const Graphic3d_CView& ACView,const Standard_Integer Axm,const Standard_Integer Aym,const Standard_Integer AXM,const Standard_Integer AYM,const Standard_Integer AU,const Standard_Integer AV,Standard_ShortReal& AX,Standard_ShortReal& AY,Standard_ShortReal& AZ,Standard_ShortReal& DX,Standard_ShortReal& DY,Standard_ShortReal& DZ) ;
  //! call_togl_ratio_window <br>
  Standard_EXPORT     void RatioWindow(const Graphic3d_CView& ACView) ;
  //! call_togl_redraw <br>
  Standard_EXPORT     void Redraw(const Graphic3d_CView& ACView,const Aspect_CLayer2d& ACUnderLayer,const Aspect_CLayer2d& ACOverLayer,const Standard_Integer x = 0,const Standard_Integer y = 0,const Standard_Integer width = 0,const Standard_Integer height = 0) ;
  //! call_togl_removeview <br>
  Standard_EXPORT     void RemoveView(const Graphic3d_CView& ACView) ;
  //! call_togl_setlight <br>
  Standard_EXPORT     void SetLight(const Graphic3d_CView& ACView) ;
  //! call_togl_setplane <br>
  Standard_EXPORT     void SetPlane(const Graphic3d_CView& ACView) ;
  //! call_togl_setvisualisation <br>
  Standard_EXPORT     void SetVisualisation(const Graphic3d_CView& ACView) ;
  //! call_togl_transformstructure <br>
  Standard_EXPORT     void TransformStructure(const Graphic3d_CStructure& ACStructure) ;
  //! call_togl_degeneratestructure <br>
  Standard_EXPORT     void DegenerateStructure(const Graphic3d_CStructure& ACStructure) ;
  //! call_togl_transparency <br>
  Standard_EXPORT     void Transparency(const Graphic3d_CView& ACView,const Standard_Boolean AFlag) ;
  //! call_togl_update <br>
  Standard_EXPORT     void Update(const Graphic3d_CView& ACView,const Aspect_CLayer2d& ACUnderLayer,const Aspect_CLayer2d& ACOverLayer) ;
  //! call_togl_view <br>
  Standard_EXPORT     Standard_Boolean View(Graphic3d_CView& ACView) ;
  //! call_togl_viewmapping <br>
  Standard_EXPORT     void ViewMapping(const Graphic3d_CView& ACView,const Standard_Boolean AWait) ;
  //! call_togl_vieworientation <br>
  Standard_EXPORT     void ViewOrientation(const Graphic3d_CView& ACView,const Standard_Boolean AWait) ;
  
  Standard_EXPORT     void Environment(const Graphic3d_CView& ACView) ;
  
  Standard_EXPORT     void Marker(const Graphic3d_CGroup& ACGroup,const Graphic3d_Vertex& APoint,const Standard_Boolean EvalMinMax = Standard_True) ;
  
  Standard_EXPORT     void MarkerSet(const Graphic3d_CGroup& ACGroup,const Graphic3d_Array1OfVertex& ListVertex,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_polygon <br>
  Standard_EXPORT     void Polygon(const Graphic3d_CGroup& ACGroup,const Graphic3d_Array1OfVertex& ListVertex,const Graphic3d_TypeOfPolygon AType = Graphic3d_TOP_CONVEX,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_polygon <br>
  Standard_EXPORT     void Polygon(const Graphic3d_CGroup& ACGroup,const Graphic3d_Array1OfVertex& ListVertex,const Graphic3d_Vector& Normal,const Graphic3d_TypeOfPolygon AType = Graphic3d_TOP_CONVEX,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_polygon <br>
  Standard_EXPORT     void Polygon(const Graphic3d_CGroup& ACGroup,const Graphic3d_Array1OfVertexN& ListVertex,const Graphic3d_TypeOfPolygon AType = Graphic3d_TOP_CONVEX,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_polygon <br>
  Standard_EXPORT     void Polygon(const Graphic3d_CGroup& ACGroup,const Graphic3d_Array1OfVertexN& ListVertex,const Graphic3d_Vector& Normal,const Graphic3d_TypeOfPolygon AType = Graphic3d_TOP_CONVEX,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_polygon <br>
  Standard_EXPORT     void Polygon(const Graphic3d_CGroup& ACGroup,const Graphic3d_Array1OfVertexNT& ListVertex,const Graphic3d_TypeOfPolygon AType = Graphic3d_TOP_CONVEX,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_polygon_holes <br>
  Standard_EXPORT     void PolygonHoles(const Graphic3d_CGroup& ACGroup,const TColStd_Array1OfInteger& Bounds,const Graphic3d_Array1OfVertex& ListVertex,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_polygon_holes <br>
  Standard_EXPORT     void PolygonHoles(const Graphic3d_CGroup& ACGroup,const TColStd_Array1OfInteger& Bounds,const Graphic3d_Array1OfVertex& ListVertex,const Graphic3d_Vector& Normal,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_polygon_holes <br>
  Standard_EXPORT     void PolygonHoles(const Graphic3d_CGroup& ACGroup,const TColStd_Array1OfInteger& Bounds,const Graphic3d_Array1OfVertexN& ListVertex,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_polygon_holes <br>
  Standard_EXPORT     void PolygonHoles(const Graphic3d_CGroup& ACGroup,const TColStd_Array1OfInteger& Bounds,const Graphic3d_Array1OfVertexN& ListVertex,const Graphic3d_Vector& Normal,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_polyline <br>
  Standard_EXPORT     void Polyline(const Graphic3d_CGroup& ACGroup,const Standard_Real X1,const Standard_Real Y1,const Standard_Real Z1,const Standard_Real X2,const Standard_Real Y2,const Standard_Real Z2,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_polyline <br>
  Standard_EXPORT     void Polyline(const Graphic3d_CGroup& ACGroup,const Graphic3d_Array1OfVertex& ListVertex,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_polyline <br>
  Standard_EXPORT     void Polyline(const Graphic3d_CGroup& ACGroup,const Graphic3d_Array1OfVertexC& ListVertex,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_quadrangle <br>
  Standard_EXPORT     void QuadrangleMesh(const Graphic3d_CGroup& ACGroup,const Graphic3d_Array2OfVertex& ListVertex,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_quadrangle <br>
  Standard_EXPORT     void QuadrangleMesh(const Graphic3d_CGroup& ACGroup,const Graphic3d_Array2OfVertexN& ListVertex,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_quadrangle <br>
  Standard_EXPORT     void QuadrangleMesh(const Graphic3d_CGroup& ACGroup,const Graphic3d_Array2OfVertexNT& ListVertex,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_polygon_indices <br>
  Standard_EXPORT     void QuadrangleSet(const Graphic3d_CGroup& ACGroup,const Graphic3d_Array1OfVertex& ListVertex,const Aspect_Array1OfEdge& ListEdge,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_polygon_indices <br>
  Standard_EXPORT     void QuadrangleSet(const Graphic3d_CGroup& ACGroup,const Graphic3d_Array1OfVertexN& ListVertex,const Aspect_Array1OfEdge& ListEdge,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_polygon_indices <br>
  Standard_EXPORT     void QuadrangleSet(const Graphic3d_CGroup& ACGroup,const Graphic3d_Array1OfVertexNT& ListVertex,const Aspect_Array1OfEdge& ListEdge,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_polygon_indices <br>
  Standard_EXPORT     void QuadrangleSet(const Graphic3d_CGroup& ACGroup,const Graphic3d_Array1OfVertexC& ListVertex,const Aspect_Array1OfEdge& ListEdge,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_polygon_indices <br>
  Standard_EXPORT     void QuadrangleSet(const Graphic3d_CGroup& ACGroup,const Graphic3d_Array1OfVertexNC& ListVertex,const Aspect_Array1OfEdge& ListEdge,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_text <br>
  Standard_EXPORT     void Text(const Graphic3d_CGroup& ACGroup,const Standard_CString AText,const Graphic3d_Vertex& APoint,const Standard_Real AHeight,const Quantity_PlaneAngle AAngle,const Graphic3d_TextPath ATp,const Graphic3d_HorizontalTextAlignment AHta,const Graphic3d_VerticalTextAlignment AVta,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_text <br>
  Standard_EXPORT     void Text(const Graphic3d_CGroup& ACGroup,const Standard_CString AText,const Graphic3d_Vertex& APoint,const Standard_Real AHeight,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_text <br>
  Standard_EXPORT     void Text(const Graphic3d_CGroup& ACGroup,const TCollection_ExtendedString& AText,const Graphic3d_Vertex& APoint,const Standard_Real AHeight,const Quantity_PlaneAngle AAngle,const Graphic3d_TextPath ATp,const Graphic3d_HorizontalTextAlignment AHta,const Graphic3d_VerticalTextAlignment AVta,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_text <br>
  Standard_EXPORT     void Text(const Graphic3d_CGroup& ACGroup,const TCollection_ExtendedString& AText,const Graphic3d_Vertex& APoint,const Standard_Real AHeight,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_triangle <br>
  Standard_EXPORT     void TriangleMesh(const Graphic3d_CGroup& ACGroup,const Graphic3d_Array1OfVertex& ListVertex,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_triangle <br>
  Standard_EXPORT     void TriangleMesh(const Graphic3d_CGroup& ACGroup,const Graphic3d_Array1OfVertexN& ListVertex,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_triangle <br>
  Standard_EXPORT     void TriangleMesh(const Graphic3d_CGroup& ACGroup,const Graphic3d_Array1OfVertexNT& ListVertex,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_polygon_indices <br>
  Standard_EXPORT     void TriangleSet(const Graphic3d_CGroup& ACGroup,const Graphic3d_Array1OfVertex& ListVertex,const Aspect_Array1OfEdge& ListEdge,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_polygon_indices <br>
  Standard_EXPORT     void TriangleSet(const Graphic3d_CGroup& ACGroup,const Graphic3d_Array1OfVertexN& ListVertex,const Aspect_Array1OfEdge& ListEdge,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_polygon_indices <br>
  Standard_EXPORT     void TriangleSet(const Graphic3d_CGroup& ACGroup,const Graphic3d_Array1OfVertexNT& ListVertex,const Aspect_Array1OfEdge& ListEdge,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_polygon_indices <br>
  Standard_EXPORT     void TriangleSet(const Graphic3d_CGroup& ACGroup,const Graphic3d_Array1OfVertexC& ListVertex,const Aspect_Array1OfEdge& ListEdge,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_polygon_indices <br>
  Standard_EXPORT     void TriangleSet(const Graphic3d_CGroup& ACGroup,const Graphic3d_Array1OfVertexNC& ListVertex,const Aspect_Array1OfEdge& ListEdge,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_parray <br>
  Standard_EXPORT     void PrimitiveArray(const Graphic3d_CGroup& ACGroup,const Graphic3d_PrimitiveArray& parray,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_userdraw <br>
  Standard_EXPORT     void UserDraw(const Graphic3d_CGroup& ACGroup,const Graphic3d_CUserDraw& AUserDraw) ;
  //! enables/disables usage of OpenGL vertex buffer arrays while drawing primitiev arrays <br>
  Standard_EXPORT     void EnableVBO(const Standard_Boolean status) ;
  //! call_togl_ztriedron_setup <br>
  Standard_EXPORT     void ZBufferTriedronSetup(const Quantity_NameOfColor XColor = Quantity_NOC_RED,const Quantity_NameOfColor YColor = Quantity_NOC_GREEN,const Quantity_NameOfColor ZColor = Quantity_NOC_BLUE1,const Standard_Real SizeRatio = 0.8,const Standard_Real AxisDiametr = 0.05,const Standard_Integer NbFacettes = 12) ;
  //! call_togl_triedron_display <br>
  Standard_EXPORT     void TriedronDisplay(const Graphic3d_CView& ACView,const Aspect_TypeOfTriedronPosition APosition = Aspect_TOTP_CENTER,const Quantity_NameOfColor AColor = Quantity_NOC_WHITE,const Standard_Real AScale = 0.02,const Standard_Boolean AsWireframe = Standard_True) ;
  //! call_togl_triedron_erase <br>
  Standard_EXPORT     void TriedronErase(const Graphic3d_CView& ACView) ;
  //! call_togl_triedron_echo <br>
  Standard_EXPORT     void TriedronEcho(const Graphic3d_CView& ACView,const Aspect_TypeOfTriedronEcho AType = Aspect_TOTE_NONE) ;
  //! call_togl_graduatedtrihedron_get <br>
  Standard_EXPORT     void GetGraduatedTrihedron(const Graphic3d_CView& view,Standard_CString& xname,Standard_CString& yname,Standard_CString& zname,Standard_Boolean& xdrawname,Standard_Boolean& ydrawname,Standard_Boolean& zdrawname,Standard_Boolean& xdrawvalues,Standard_Boolean& ydrawvalues,Standard_Boolean& zdrawvalues,Standard_Boolean& drawgrid,Standard_Boolean& drawaxes,Standard_Integer& nbx,Standard_Integer& nby,Standard_Integer& nbz,Standard_Integer& xoffset,Standard_Integer& yoffset,Standard_Integer& zoffset,Standard_Integer& xaxisoffset,Standard_Integer& yaxisoffset,Standard_Integer& zaxisoffset,Standard_Boolean& xdrawtickmarks,Standard_Boolean& ydrawtickmarks,Standard_Boolean& zdrawtickmarks,Standard_Integer& xtickmarklength,Standard_Integer& ytickmarklength,Standard_Integer& ztickmarklength,Quantity_Color& gridcolor,Quantity_Color& xnamecolor,Quantity_Color& ynamecolor,Quantity_Color& znamecolor,Quantity_Color& xcolor,Quantity_Color& ycolor,Quantity_Color& zcolor,Standard_CString& fontOfNames,OSD_FontAspect& styleOfNames,Standard_Integer& sizeOfNames,Standard_CString& fontOfValues,OSD_FontAspect& styleOfValues,Standard_Integer& sizeOfValues) const;
  //! call_togl_graduatedtrihedron_display <br>
  Standard_EXPORT     void GraduatedTrihedronDisplay(const Graphic3d_CView& view,Graphic3d_CGraduatedTrihedron& cubic,const Standard_CString xname,const Standard_CString yname,const Standard_CString zname,const Standard_Boolean xdrawname,const Standard_Boolean ydrawname,const Standard_Boolean zdrawname,const Standard_Boolean xdrawvalues,const Standard_Boolean ydrawvalues,const Standard_Boolean zdrawvalues,const Standard_Boolean drawgrid,const Standard_Boolean drawaxes,const Standard_Integer nbx,const Standard_Integer nby,const Standard_Integer nbz,const Standard_Integer xoffset,const Standard_Integer yoffset,const Standard_Integer zoffset,const Standard_Integer xaxisoffset,const Standard_Integer yaxisoffset,const Standard_Integer zaxisoffset,const Standard_Boolean xdrawtickmarks,const Standard_Boolean ydrawtickmarks,const Standard_Boolean zdrawtickmarks,const Standard_Integer xtickmarklength,const Standard_Integer ytickmarklength,const Standard_Integer ztickmarklength,const Quantity_Color& gridcolor,const Quantity_Color& xnamecolor,const Quantity_Color& ynamecolor,const Quantity_Color& znamecolor,const Quantity_Color& xcolor,const Quantity_Color& ycolor,const Quantity_Color& zcolor,const Standard_CString fontOfNames,const OSD_FontAspect styleOfNames,const Standard_Integer sizeOfNames,const Standard_CString fontOfValues,const OSD_FontAspect styleOfValues,const Standard_Integer sizeOfValues) ;
  //! call_togl_graduatedtrihedron_erase <br>
  Standard_EXPORT     void GraduatedTrihedronErase(const Graphic3d_CView& view) ;
  //! call_togl_graduatedtrihedron_minmaxvalues <br>
  Standard_EXPORT     void GraduatedTrihedronMinMaxValues(const Standard_ShortReal xmin,const Standard_ShortReal ymin,const Standard_ShortReal zmin,const Standard_ShortReal xmax,const Standard_ShortReal ymax,const Standard_ShortReal zmax) ;
  //! call_togl_bezier <br>
  Standard_EXPORT     void Bezier(const Graphic3d_CGroup& ACGroup,const Graphic3d_Array1OfVertex& ListVertex,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_bezier_weight <br>
  Standard_EXPORT     void Bezier(const Graphic3d_CGroup& ACGroup,const Graphic3d_Array1OfVertex& ListVertex,const TColStd_Array1OfReal& ListWeight,const Standard_Boolean EvalMinMax = Standard_True) ;
  //! call_togl_begin_animation <br>
  Standard_EXPORT     void BeginAnimation(const Graphic3d_CView& ACView) ;
  //! call_togl_end_animation <br>
  Standard_EXPORT     void EndAnimation(const Graphic3d_CView& ACView) ;
  //! call_togl_begin_ajout_mode <br>
  Standard_EXPORT     Standard_Boolean BeginAddMode(const Graphic3d_CView& ACView) ;
  //! call_togl_end_ajout_mode <br>
  Standard_EXPORT     void EndAddMode() ;
  //! call_togl_begin_immediat_mode <br>
  Standard_EXPORT     Standard_Boolean BeginImmediatMode(const Graphic3d_CView& ACView,const Aspect_CLayer2d& ACUnderLayer,const Aspect_CLayer2d& ACOverLayer,const Standard_Boolean DoubleBuffer,const Standard_Boolean RetainMode) ;
  //! call_togl_begin_polyline <br>
  Standard_EXPORT     void BeginPolyline() ;
  //! call_togl_clear_immediat_mode <br>
  Standard_EXPORT     void ClearImmediatMode(const Graphic3d_CView& ACView,const Standard_Boolean aFlush = Standard_True) ;
  //! call_togl_draw <br>
  Standard_EXPORT     void Draw(const Standard_ShortReal X,const Standard_ShortReal Y,const Standard_ShortReal Z) ;
  //! call_togl_draw_structure <br>
  Standard_EXPORT     void DrawStructure(const Graphic3d_CStructure& ACStructure) ;
  //! call_togl_end_immediat_mode <br>
  Standard_EXPORT     void EndImmediatMode(const Standard_Integer Synchronize) ;
  //! call_togl_end_polyline <br>
  Standard_EXPORT     void EndPolyline() ;
  //! call_togl_move <br>
  Standard_EXPORT     void Move(const Standard_ShortReal X,const Standard_ShortReal Y,const Standard_ShortReal Z) ;
  //! call_togl_set_linecolor <br>
  Standard_EXPORT     void SetLineColor(const Standard_ShortReal R,const Standard_ShortReal G,const Standard_ShortReal B) ;
  //! call_togl_set_linetype <br>
  Standard_EXPORT     void SetLineType(const Standard_Integer Type) ;
  //! call_togl_set_linewidth <br>
  Standard_EXPORT     void SetLineWidth(const Standard_ShortReal Width) ;
  //! call_togl_set_minmax <br>
  Standard_EXPORT     void SetMinMax(const Standard_ShortReal X1,const Standard_ShortReal Y1,const Standard_ShortReal Z1,const Standard_ShortReal X2,const Standard_ShortReal Y2,const Standard_ShortReal Z2) ;
  //! call_togl_transform <br>
  Standard_EXPORT     void Transform(const TColStd_Array2OfReal& AMatrix,const Graphic3d_TypeOfComposition AType) ;
  
  Standard_EXPORT     Standard_Integer CreateTexture(const Graphic3d_TypeOfTexture Type,const Handle(AlienImage_AlienImage)& Image,const Standard_CString FileName,const Handle(TColStd_HArray1OfReal)& TexUpperBounds) const;
  
  Standard_EXPORT     void DestroyTexture(const Standard_Integer TexId) const;
  
  Standard_EXPORT     void ModifyTexture(const Standard_Integer TexId,const Graphic3d_CInitTexture& AValue) const;
  //! call_togl_layer2d <br>
  Standard_EXPORT     void Layer(Aspect_CLayer2d& ACLayer) ;
  //! call_togl_removelayer2d <br>
  Standard_EXPORT     void RemoveLayer(const Aspect_CLayer2d& ACLayer) ;
  //! call_togl_begin_layer2d <br>
  Standard_EXPORT     void BeginLayer(const Aspect_CLayer2d& ACLayer) ;
  //! call_togl_begin_polygon2d <br>
  Standard_EXPORT     void BeginPolygon2d() ;
  //! call_togl_begin_polyline2d <br>
  Standard_EXPORT     void BeginPolyline2d() ;
  //! call_togl_clear_layer2d <br>
  Standard_EXPORT     void ClearLayer(const Aspect_CLayer2d& ACLayer) ;
  //! call_togl_draw2d <br>
  Standard_EXPORT     void Draw(const Standard_ShortReal X,const Standard_ShortReal Y) ;
  //! call_togl_edge2d <br>
  Standard_EXPORT     void Edge(const Standard_ShortReal X,const Standard_ShortReal Y) ;
  //! call_togl_end_layer2d <br>
  Standard_EXPORT     void EndLayer() ;
  //! call_togl_end_polygon2d <br>
  Standard_EXPORT     void EndPolygon2d() ;
  //! call_togl_end_polyline2d <br>
  Standard_EXPORT     void EndPolyline2d() ;
  //! call_togl_move2d <br>
  Standard_EXPORT     void Move(const Standard_ShortReal X,const Standard_ShortReal Y) ;
  //! call_togl_rectangle2d <br>
  Standard_EXPORT     void Rectangle(const Standard_ShortReal X,const Standard_ShortReal Y,const Standard_ShortReal Width,const Standard_ShortReal Height) ;
  //! call_togl_set_color <br>
  Standard_EXPORT     void SetColor(const Standard_ShortReal R,const Standard_ShortReal G,const Standard_ShortReal B) ;
  //! call_togl_set_transparency <br>
  Standard_EXPORT     void SetTransparency(const Standard_ShortReal ATransparency) ;
  //! call_togl_unset_transparency <br>
  Standard_EXPORT     void UnsetTransparency() ;
  //! call_togl_set_line_attributes <br>
  Standard_EXPORT     void SetLineAttributes(const Standard_Integer Type,const Standard_ShortReal Width) ;
  //! call_togl_set_text_attributes <br>
  Standard_EXPORT     void SetTextAttributes(const Standard_CString FontName,const Standard_Integer Type,const Standard_ShortReal R,const Standard_ShortReal G,const Standard_ShortReal B) ;
  //! call_togl_text2d <br>
  Standard_EXPORT     void Text(const Standard_CString AText,const Standard_ShortReal X,const Standard_ShortReal Y,const Standard_ShortReal AHeight) ;
  //! call_togl_textsize2d <br>
  Standard_EXPORT     void TextSize(const Standard_CString AText,const Standard_ShortReal AHeight,Standard_ShortReal& AWidth,Standard_ShortReal& AnAscent,Standard_ShortReal& ADescent) const;
  //! call_togl_backfacing <br>
  Standard_EXPORT     void SetBackFacingModel(const Graphic3d_CView& aView) ;
  //! print the contents of all layers of the view to the printer. <br>
//! <hPrnDC> : Pass the PrinterDeviceContext (HDC), <br>
//! <showBackground> : When set to FALSE then print the view without background color <br>
//! (background is white) <br>
//! else set to TRUE for printing with current background color. <br>
//! <filename>: If != NULL, then the view will be printed to a file. <br>
  Standard_EXPORT     void Print(const Graphic3d_CView& ACView,const Aspect_CLayer2d& ACUnderLayer,const Aspect_CLayer2d& ACOverLayer,const Aspect_Handle hPrnDC,const Standard_Boolean showBackground,const Standard_CString filename) const;
  
  Standard_EXPORT   virtual  void Export(const Standard_CString FileName,const Graphic3d_ExportFormat Format,const Graphic3d_SortType SortType,const Standard_Integer W,const Standard_Integer H,const Graphic3d_CView& View,const Aspect_CLayer2d& Under,const Aspect_CLayer2d& Over,const Standard_Real Precision = 0.005,const Standard_Address ProgressBarFunc = NULL,const Standard_Address ProgressObject = NULL) ;
  //! call_togl_depthtest() <br>
  Standard_EXPORT     void SetDepthTestEnabled(const Graphic3d_CView& view,const Standard_Boolean isEnabled) const;
  //! call_togl_isdepthtest() <br>
  Standard_EXPORT     Standard_Boolean IsDepthTestEnabled(const Graphic3d_CView& view) const;
  //! Reads depths of shown pixels of the given <br>
//!          rectangle (glReadPixels with GL_DEPTH_COMPONENT) <br>
  Standard_EXPORT     void ReadDepths(const Graphic3d_CView& view,const Standard_Integer x,const Standard_Integer y,const Standard_Integer width,const Standard_Integer height,const Standard_Address buffer) const;
  //! Generate offscreen FBO (needs OpenGL2+ hardware) <br>
//!          If not supported on hardware returns NULL. <br>
  Standard_EXPORT     Graphic3d_PtrFrameBuffer FBOCreate(const Graphic3d_CView& view,const Standard_Integer width,const Standard_Integer height) ;
  //! Remove offscreen FBO <br>
  Standard_EXPORT     void FBORelease(const Graphic3d_CView& view,Graphic3d_PtrFrameBuffer& fboPtr) ;
  //! Read offscreen FBO configuration. <br>
  Standard_EXPORT     void FBOGetDimensions(const Graphic3d_CView& view,const Graphic3d_PtrFrameBuffer fboPtr,Standard_Integer& width,Standard_Integer& height,Standard_Integer& widthMax,Standard_Integer& heightMax) ;
  //! Change offscreen FBO viewport. <br>
  Standard_EXPORT     void FBOChangeViewport(const Graphic3d_CView& view,Graphic3d_PtrFrameBuffer& fboPtr,const Standard_Integer width,const Standard_Integer height) ;
  //! Dump active rendering buffer into specified memory buffer. <br>
  Standard_EXPORT     Standard_Boolean BufferDump(const Graphic3d_CView& view,Image_CRawBufferData& buffer) ;
  //! call_togl_gllight() <br>
  Standard_EXPORT     void SetGLLightEnabled(const Graphic3d_CView& view,const Standard_Boolean isEnabled) const;
  //! call_togl_isgllight() <br>
  Standard_EXPORT     Standard_Boolean IsGLLightEnabled(const Graphic3d_CView& view) const;




  DEFINE_STANDARD_RTTI(OpenGl_GraphicDriver)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
