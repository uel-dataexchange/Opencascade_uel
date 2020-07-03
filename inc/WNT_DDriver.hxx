// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WNT_DDriver_HeaderFile
#define _WNT_DDriver_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_WNT_DDriver_HeaderFile
#include <Handle_WNT_DDriver.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_WNT_GraphicDevice_HeaderFile
#include <Handle_WNT_GraphicDevice.hxx>
#endif
#ifndef _Aspect_Handle_HeaderFile
#include <Aspect_Handle.hxx>
#endif
#ifndef _WNT_OrientationType_HeaderFile
#include <WNT_OrientationType.hxx>
#endif
#ifndef _Quantity_Factor_HeaderFile
#include <Quantity_Factor.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_WNT_HColorTable_HeaderFile
#include <Handle_WNT_HColorTable.hxx>
#endif
#ifndef _Handle_WNT_HFontTable_HeaderFile
#include <Handle_WNT_HFontTable.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfInteger_HeaderFile
#include <Handle_TColStd_HArray1OfInteger.hxx>
#endif
#ifndef _Handle_WNT_HListOfMFTFonts_HeaderFile
#include <Handle_WNT_HListOfMFTFonts.hxx>
#endif
#ifndef _Handle_TShort_HArray1OfShortReal_HeaderFile
#include <Handle_TShort_HArray1OfShortReal.hxx>
#endif
#ifndef _Handle_WNT_TextManager_HeaderFile
#include <Handle_WNT_TextManager.hxx>
#endif
#ifndef _PlotMgt_PlotterDriver_HeaderFile
#include <PlotMgt_PlotterDriver.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Aspect_PlotMode_HeaderFile
#include <Aspect_PlotMode.hxx>
#endif
#ifndef _Quantity_PlaneAngle_HeaderFile
#include <Quantity_PlaneAngle.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif
#ifndef _Aspect_TypeOfText_HeaderFile
#include <Aspect_TypeOfText.hxx>
#endif
#ifndef _Quantity_Ratio_HeaderFile
#include <Quantity_Ratio.hxx>
#endif
#ifndef _Handle_Aspect_ColorMap_HeaderFile
#include <Handle_Aspect_ColorMap.hxx>
#endif
#ifndef _Handle_Aspect_TypeMap_HeaderFile
#include <Handle_Aspect_TypeMap.hxx>
#endif
#ifndef _Handle_Aspect_WidthMap_HeaderFile
#include <Handle_Aspect_WidthMap.hxx>
#endif
#ifndef _Handle_Aspect_FontMap_HeaderFile
#include <Handle_Aspect_FontMap.hxx>
#endif
#ifndef _Handle_Aspect_MarkMap_HeaderFile
#include <Handle_Aspect_MarkMap.hxx>
#endif
#ifndef _Quantity_Length_HeaderFile
#include <Quantity_Length.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfAsciiString_HeaderFile
#include <Handle_TColStd_HSequenceOfAsciiString.hxx>
#endif
#ifndef _Handle_MFT_FontManager_HeaderFile
#include <Handle_MFT_FontManager.hxx>
#endif
class TCollection_HAsciiString;
class WNT_GraphicDevice;
class WNT_HColorTable;
class WNT_HFontTable;
class TColStd_HArray1OfInteger;
class WNT_HListOfMFTFonts;
class TShort_HArray1OfShortReal;
class WNT_TextManager;
class Aspect_DriverDefinitionError;
class Aspect_DriverError;
class Standard_Transient;
class TCollection_ExtendedString;
class Aspect_ColorMap;
class Aspect_TypeMap;
class Aspect_WidthMap;
class Aspect_FontMap;
class Aspect_MarkMap;
class TColStd_HSequenceOfAsciiString;
class TCollection_AsciiString;
class MFT_FontManager;


//! Defines the device-independent Windows NT driver. <br>
//!          After graphics output enhanced metafile will be created. <br>
//!          It is possible to play this file on device several times <br>
//!          by Spool () method. <br>
class WNT_DDriver : public PlotMgt_PlotterDriver {

public:

  //! Constructs a device driver framework defined by the <br>
//! string aDeviceName, the path specified as an <br>
//! argument for OSD_Path, the type of orientation <br>
//! anOrientation, the scale aScale, the number of copies <br>
//! aCopies and the flag aPrintFlag. <br>
  Standard_EXPORT   WNT_DDriver(const Standard_CString aDeviceName,const Standard_CString aFileName,const WNT_OrientationType anOrientation = WNT_OT_LANDSCAPE,const Quantity_Factor aScale = 1.0,const Standard_Integer aCopies = 1);
  
//! Creates the class object. An empty path is authorized <br>
//! and in this case, a temporary enhanced metafile is <br>
//! created. You can delete this file by using the EndDraw function. <br>
//! Warning - OSD_Path corresponds to an ASCII string. <br>
//! Exceptions <br>
//! Aspect_DriverDefinitionError if the driver could not be defined. <br>
  Standard_EXPORT   WNT_DDriver(const Standard_CString aFileName,const Standard_Integer aCopies = 1);
  
  Standard_EXPORT   virtual  void Close() ;
~WNT_DDriver()
{
  Close();
}
  //! Begins a new picture of graphics in the enhanced metafile <br>
  Standard_EXPORT   virtual  void BeginDraw() ;
  //! Flushes all graphics, closes enhanced metafile. <br>
  Standard_EXPORT   virtual  void EndDraw(const Standard_Boolean fSynchronize = Standard_False) ;
  //! Spools the driver onto a printer spool. <br>
//! Stretches the picture so that it fits into the device <br>
//! workspace if the Boolean anOriginalSize is False <br>
//! and the workspace dimensions of the original <br>
//! device differ from those of the current device. This <br>
//! flag is ignored if aDeviceName is NULL. <br>
//! Warning <br>
//! If aDeviceName is NULL, then the driver should be <br>
//! created with the first constructor. Otherwise, use <br>
//! the second constructor to create a class object. <br>
//! Exceptions <br>
//! Aspect_DriverError if the driver is not correctly defined. <br>
  Standard_EXPORT   virtual  Standard_Boolean Spool(const Aspect_PlotMode aPlotMode = Aspect_PM_FILEONLY,const Standard_CString aDeviceName = NULL,const Standard_Boolean anOriginalSize = Standard_False) ;
  //! Defines the Current Line Attibutes <br>
  Standard_EXPORT   virtual  void SetLineAttrib(const Standard_Integer ColorIndex,const Standard_Integer TypeIndex,const Standard_Integer WidthIndex) ;
  //! Defines the Current Text Attributes <br>
  Standard_EXPORT   virtual  void SetTextAttrib(const Standard_Integer ColorIndex,const Standard_Integer FontIndex) ;
  //! Defines the Current Extended Text Attributes <br>
  Standard_EXPORT   virtual  void SetTextAttrib(const Standard_Integer ColorIndex,const Standard_Integer FontIndex,const Quantity_PlaneAngle aSlant,const Quantity_Factor aHScale,const Quantity_Factor aWScale,const Standard_Boolean isUnderlined = Standard_False) ;
  //! Sets the poly attributes <br>
  Standard_EXPORT   virtual  void SetPolyAttrib(const Standard_Integer ColorIndex,const Standard_Integer TileIndex,const Standard_Boolean DrawEdge = Standard_False) ;
  //! Defines the Current Marker Attributes <br>
  Standard_EXPORT   virtual  void SetMarkerAttrib(const Standard_Integer ColorIndex,const Standard_Integer WidthIndex,const Standard_Boolean FillMarker = Standard_False) ;
  
  Standard_EXPORT   virtual  Standard_Boolean IsKnownImage(const Handle(Standard_Transient)& anImage) ;
  
  Standard_EXPORT   virtual  Standard_Boolean SizeOfImageFile(const Standard_CString anImageFile,Standard_Integer& aWidth,Standard_Integer& aHeight) const;
  
  Standard_EXPORT   virtual  void ClearImage(const Handle(Standard_Transient)& anImageId) ;
  
  Standard_EXPORT   virtual  void ClearImageFile(const Standard_CString anImageFile) ;
  
  Standard_EXPORT   virtual  void DrawImage(const Handle(Standard_Transient)& anImageId,const Standard_ShortReal aX,const Standard_ShortReal aY) ;
  
  Standard_EXPORT   virtual  void DrawImageFile(const Standard_CString anImageFile,const Standard_ShortReal aX,const Standard_ShortReal aY,const Quantity_Factor aScale = 1.0) ;
  //! Fills a complete Image . <br>
  Standard_EXPORT   virtual  void FillAndDrawImage(const Handle(Standard_Transient)& anImageId,const Standard_ShortReal aX,const Standard_ShortReal aY,const Standard_Integer aWidth,const Standard_Integer aHeight,const Standard_Address anArrayOfPixels) ;
  //! Fills a line of the Image . <br>
//!  Warning: 0 <= anIndexOfLine < aHeight <br>
//!              anIndexOfLine = 0 must be the first call <br>
  Standard_EXPORT   virtual  void FillAndDrawImage(const Handle(Standard_Transient)& anImageId,const Standard_ShortReal aX,const Standard_ShortReal aY,const Standard_Integer anIndexOfLine,const Standard_Integer aWidth,const Standard_Integer aHeight,const Standard_Address anArrayOfPixels) ;
  //! Begin an incremental polyline primitive of <aNumber> of points <br>
//!  Warning: Points must be added by the the DrawPoint() method. <br>
  Standard_EXPORT     void BeginPolyline(const Standard_Integer aNumber) ;
  //! Begin an incremental polygon primitive of <aNumber> of points <br>
//!  Warning: Points must be added by the the DrawPoint() method. <br>
  Standard_EXPORT   virtual  void BeginPolygon(const Standard_Integer aNumber) ;
  //! Begin a set of segments . <br>
//!  Warning: Segments must be added by the DrawSegment() method <br>
  Standard_EXPORT   virtual  void BeginSegments() ;
  //! Begin a set of circles or ellips . <br>
//!  Warning: Arcs must be added by the DrawArc() methods <br>
  Standard_EXPORT   virtual  void BeginArcs() ;
  //! Begin a set of polygon circles or ellips <br>
//!  Warning: Arcs must be added by the DrawPolyArc() methods <br>
  Standard_EXPORT   virtual  void BeginPolyArcs() ;
  //! Begin a set of markers . <br>
//!  Warning: Markers must be added by the DrawMarker() method <br>
  Standard_EXPORT   virtual  void BeginMarkers() ;
  //! Begin a set of points . <br>
//!  Warning: Points must be added by the DrawPoint() method <br>
  Standard_EXPORT   virtual  void BeginPoints() ;
  //! Close the last Begining primitive <br>
  Standard_EXPORT     void ClosePrimitive() ;
  //! Returns the Available WorkSpace in DWU coordinates <br>
  Standard_EXPORT     void WorkSpace(Quantity_Length& Width,Quantity_Length& Heigth) const;
  //! Returns the DWU value depending of <br>
//!          the PIXEL value. <br>
  Standard_EXPORT     Quantity_Length Convert(const Standard_Integer PV) const;
  //! Returns the PIXEL value depending of the DWU value. <br>
  Standard_EXPORT     Standard_Integer Convert(const Quantity_Length DV) const;
  //! Returns the DWU position depending of the PIXEL position . <br>
  Standard_EXPORT     void Convert(const Standard_Integer PX,const Standard_Integer PY,Quantity_Length& DX,Quantity_Length& DY) const;
  //! Returns the PIXEL position depending of the DWU position <br>
  Standard_EXPORT     void Convert(const Quantity_Length DX,const Quantity_Length DY,Standard_Integer& PX,Standard_Integer& PY) const;
  //! Returns the TEXT size in DWU space depending <br>
//!          of the required FontIndex if aFontIndex is >= 0 <br>
//!          or the current FontIndex if < 0 (default). <br>
  Standard_EXPORT     void TextSize(const TCollection_ExtendedString& aText,Standard_ShortReal& aWidth,Standard_ShortReal& aHeight,const Standard_Integer aFontIndex = -1) const;
  //! Returns the TEXT size and offsets <br>
//!          in DWU space depending <br>
//!          of the required FontIndex if aFontIndex is >= 0 <br>
//!          or the current FontIndex if < 0 (default). <br>
  Standard_EXPORT     void TextSize(const TCollection_ExtendedString& aText,Standard_ShortReal& aWidth,Standard_ShortReal& aHeight,Standard_ShortReal& anXoffset,Standard_ShortReal& anYoffset,const Standard_Integer aFontIndex = -1) const;
  //! Returns the TEXT size in DWU space depending <br>
//!          of the required FontIndex if aFontIndex is >= 0 <br>
//!          or the current FontIndex if < 0 (default). <br>
  Standard_EXPORT     void TextSize(const Standard_CString aText,Standard_ShortReal& aWidth,Standard_ShortReal& aHeight,Standard_ShortReal& anXoffset,Standard_ShortReal& anYoffset,const Standard_Integer aFontIndex = -1) const;
  //! Returns device context handle <br>
  Standard_EXPORT     Aspect_Handle HDC() const;
  //! Returns dimensions of the device <br>
  Standard_EXPORT     void ClientRect(Standard_Integer& aWidth,Standard_Integer& aHeigth) const;
  //! Returns graphic device <br>
  Standard_EXPORT     Handle_WNT_GraphicDevice GraphicDevice() const;
  //! Returns list of available graphic devices. <br>
//!          First element is default device <br>
  Standard_EXPORT   static  Handle_TColStd_HSequenceOfAsciiString DeviceList() ;
  //! Returns size of a specified device. <br>
  Standard_EXPORT   static  void DeviceSize(const TCollection_AsciiString& aDevice,Standard_Real& aWidth,Standard_Real& aHeight) ;
  //! returns dimensions, in .01 millimeter units, <br>
//!           of a rectangle that surrounds the picture stored <br>
//!           in the metafile ( parameters <aWidth> & <aHeight> ). <br>
//!           <aSwap> value idicates whether rotate operation <br>
//!           (portrait/landscape) was performed or not. Valid <br>
//!           values are: <0> - no rotation <br>
//!                       <1> - do rotation <br>
//!                       <2> - could not determine <br>
//!           Returns ratio between <aWidth> & <aHeight>. <br>
//!  Warning:  returns <-1> in case of error <br>
  Standard_EXPORT     Standard_Real EMFDim(Standard_Integer& aWidth,Standard_Integer& aHeight,Standard_Integer& aSwap) ;
  
  Standard_EXPORT    const Handle_WNT_TextManager& TextManager() ;
  
  Standard_EXPORT    const Handle_MFT_FontManager& MFT_Font(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     Standard_ShortReal MFT_Size(const Standard_Integer anIndex) ;



  DEFINE_STANDARD_RTTI(WNT_DDriver)

protected:

  //! Draws a polyline depending of the SetLineAttrib() attributes. <br>
  Standard_EXPORT   virtual  Standard_Boolean PlotPolyline(const Standard_Address xArray,const Standard_Address yArray,const Standard_Address nPts,const Standard_Integer nParts) ;
  //! Draws a polygon depending of the SetPolyAttrib() attributes. <br>
  Standard_EXPORT   virtual  Standard_Boolean PlotPolygon(const Standard_Address xArray,const Standard_Address yArray,const Standard_Address nPts,const Standard_Integer nParts) ;
  //! Draws a segment depending of the SetLineAttrib() attributes. <br>
  Standard_EXPORT   virtual  Standard_Boolean PlotSegment(const Standard_ShortReal X1,const Standard_ShortReal Y1,const Standard_ShortReal X2,const Standard_ShortReal Y2) ;
  //! Draws a text depending of the SetTextAttrib() attributes. <br>
//!  Warning: Coordinates must be defined in DWU space. <br>
  Standard_EXPORT   virtual  Standard_Boolean PlotText(const TCollection_ExtendedString& aText,const Standard_ShortReal Xpos,const Standard_ShortReal Ypos,const Standard_ShortReal anAngle = 0.0,const Aspect_TypeOfText aType = Aspect_TOT_SOLID) ;
  //! Draws a text depending of the SetTextAttrib() attributes. <br>
//!  Warning: Coordinates must be defined in DWU space. <br>
  Standard_EXPORT   virtual  Standard_Boolean PlotText(const Standard_CString aText,const Standard_ShortReal Xpos,const Standard_ShortReal Ypos,const Standard_ShortReal anAngle = 0.0,const Aspect_TypeOfText aType = Aspect_TOT_SOLID) ;
  //! Draws an framed text depending of the <br>
//! SetTextAttrib() and SetPolyAttrib() attributes. <br>
//!  Warning: Coordinates must be defined in DWU space. <br>
//!          <aMarge> defines the ratio of the space between the <br>
//!          polygon borders and the bounding box of the text and <br>
//!          depending of the height of the text. <br>
  Standard_EXPORT   virtual  Standard_Boolean PlotPolyText(const TCollection_ExtendedString& aText,const Standard_ShortReal Xpos,const Standard_ShortReal Ypos,const Quantity_Ratio aMarge = 0.1,const Standard_ShortReal anAngle = 0.0,const Aspect_TypeOfText aType = Aspect_TOT_SOLID) ;
  //! Draws an framed text depending of the <br>
//! SetTextAttrib() and SetPolyAttrib() attributes. <br>
//!  Warning: Coordinates must be defined in DWU space. <br>
//!          <aMarge> defines the ratio of the space between the <br>
//!          polygon borders and the bounding box of the text and <br>
//!          depending of the height of the text. <br>
  Standard_EXPORT   virtual  Standard_Boolean PlotPolyText(const Standard_CString aText,const Standard_ShortReal Xpos,const Standard_ShortReal Ypos,const Quantity_Ratio aMarge = 0.1,const Standard_ShortReal anAngle = 0.0,const Aspect_TypeOfText aType = Aspect_TOT_SOLID) ;
  //! Draws a 1 PIXEL point depending of the SetMarkerAttrib() <br>
//!          color attribute or add a point depending of the incremental BeginXxxxxx() <br>
//!          primitive used. <br>
  Standard_EXPORT   virtual  Standard_Boolean PlotPoint(const Standard_ShortReal X,const Standard_ShortReal Y) ;
  //! Draws the prevously defined marker <aMarker> <br>
//!          depending of the SetMarkerAttrib() attributes. <br>
//!  Warning: Coordinates and sizes must be defined in DWU space. <br>
//!          Angle must be defined in RADIAN. <br>
//!          A one pixel marker is drawn when aMarker index is undefined <br>
  Standard_EXPORT   virtual  Standard_Boolean PlotMarker(const Standard_Integer aMarker,const Standard_ShortReal Xpos,const Standard_ShortReal Ypos,const Standard_ShortReal Width,const Standard_ShortReal Height,const Standard_ShortReal Angle = 0.0) ;
  //! Draws an Ellipsoid arc of center <X,Y> and Radius <br>
//!          <anXradius,anYradius> of relative angle <anOpenAngle> from <br>
//!          the base angle <aStartAngle> and depending of the SetLineAttrib() attributes <br>
  Standard_EXPORT   virtual  Standard_Boolean PlotArc(const Standard_ShortReal X,const Standard_ShortReal Y,const Standard_ShortReal anXradius,const Standard_ShortReal anYradius,const Standard_ShortReal aStartAngle = 0.0,const Standard_ShortReal anOpenAngle = 6.283185) ;
  //! Draws an filled Ellipsoid arc of center <X,Y> and Radius <br>
//!          <anXradius,anYradius> of relative angle <anOpenAngle> from <br>
//!          the base angle <aStartAngle> and depending of the SetPolyAttrib() attributes. <br>
  Standard_EXPORT   virtual  Standard_Boolean PlotPolyArc(const Standard_ShortReal X,const Standard_ShortReal Y,const Standard_ShortReal anXradius,const Standard_ShortReal anYradius,const Standard_ShortReal aStartAngle = 0.0,const Standard_ShortReal anOpenAngle = 6.283185) ;
  
  Standard_EXPORT   virtual  void InitializeColorMap(const Handle(Aspect_ColorMap)& aColorMap) ;
  
  Standard_EXPORT   virtual  void InitializeTypeMap(const Handle(Aspect_TypeMap)& aTypeMap) ;
  
  Standard_EXPORT   virtual  void InitializeWidthMap(const Handle(Aspect_WidthMap)& aWidthMap) ;
  
  Standard_EXPORT   virtual  void InitializeFontMap(const Handle(Aspect_FontMap)& aFontMap) ;
  
  Standard_EXPORT   virtual  void InitializeMarkMap(const Handle(Aspect_MarkMap)& aFontMap) ;



private: 

  
  Standard_EXPORT     Standard_Integer ProcessColorIndex(const Standard_Integer ColorIndex) const;
  
  Standard_EXPORT     Quantity_Length ProcessWidthIndex(const Standard_Integer WidthIndex) const;
  
  Standard_EXPORT     Standard_Integer ProcessTypeIndex(const Standard_Integer TypeIndex) const;
  //! Internal methods <br>
  Standard_EXPORT     Standard_Boolean DoSpool(const Standard_Boolean anOriginalSize,const Aspect_PlotMode aPlotMode = Aspect_PM_NPLOTTER) const;

Standard_Address myRect;
TCollection_AsciiString myPrnName;
TCollection_AsciiString myEmfName;
Standard_Address myAllocators;
Standard_Address myAllocator;
Standard_Real myPixelToUnit;
Handle_TCollection_HAsciiString myImageName;
Handle_WNT_GraphicDevice myDevice;
Aspect_Handle myHDC;
Aspect_Handle myHDCMeta;
Aspect_Handle myHMetaFile;
Aspect_Handle myImage;
WNT_OrientationType myOrientation;
Quantity_Factor myScale;
Standard_Integer myFlags;
Standard_Integer myNCopies;
Handle_WNT_HColorTable myColors;
Handle_WNT_HFontTable myFonts;
Handle_TColStd_HArray1OfInteger myTypeIdxs;
Handle_TColStd_HArray1OfInteger myWidthIdxs;
Handle_TColStd_HArray1OfInteger myMarkerIdxs;
Handle_WNT_HListOfMFTFonts myMFTFonts;
Handle_TShort_HArray1OfShortReal myMFTSizes;
Handle_WNT_TextManager myNTextManager;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
