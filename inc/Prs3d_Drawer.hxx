// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Prs3d_Drawer_HeaderFile
#define _Prs3d_Drawer_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Prs3d_Drawer_HeaderFile
#include <Handle_Prs3d_Drawer.hxx>
#endif

#ifndef _Handle_Prs3d_IsoAspect_HeaderFile
#include <Handle_Prs3d_IsoAspect.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Prs3d_LineAspect_HeaderFile
#include <Handle_Prs3d_LineAspect.hxx>
#endif
#ifndef _Handle_Prs3d_TextAspect_HeaderFile
#include <Handle_Prs3d_TextAspect.hxx>
#endif
#ifndef _Handle_Prs3d_ShadingAspect_HeaderFile
#include <Handle_Prs3d_ShadingAspect.hxx>
#endif
#ifndef _Quantity_Length_HeaderFile
#include <Quantity_Length.hxx>
#endif
#ifndef _Aspect_TypeOfDeflection_HeaderFile
#include <Aspect_TypeOfDeflection.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Prs3d_PointAspect_HeaderFile
#include <Handle_Prs3d_PointAspect.hxx>
#endif
#ifndef _Handle_Prs3d_PlaneAspect_HeaderFile
#include <Handle_Prs3d_PlaneAspect.hxx>
#endif
#ifndef _Handle_Prs3d_ArrowAspect_HeaderFile
#include <Handle_Prs3d_ArrowAspect.hxx>
#endif
#ifndef _Handle_Prs3d_DatumAspect_HeaderFile
#include <Handle_Prs3d_DatumAspect.hxx>
#endif
#ifndef _Handle_Prs3d_LengthAspect_HeaderFile
#include <Handle_Prs3d_LengthAspect.hxx>
#endif
#ifndef _Handle_Prs3d_AngleAspect_HeaderFile
#include <Handle_Prs3d_AngleAspect.hxx>
#endif
#ifndef _Handle_Prs3d_RadiusAspect_HeaderFile
#include <Handle_Prs3d_RadiusAspect.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class Prs3d_IsoAspect;
class Prs3d_LineAspect;
class Prs3d_TextAspect;
class Prs3d_ShadingAspect;
class Prs3d_PointAspect;
class Prs3d_PlaneAspect;
class Prs3d_ArrowAspect;
class Prs3d_DatumAspect;
class Prs3d_LengthAspect;
class Prs3d_AngleAspect;
class Prs3d_RadiusAspect;


//! A graphic attribute manager which governs how <br>
//! objects such as color, width, line thickness and <br>
//! deflection are displayed. <br>
//! Prs3d_Drawer is the mother class of AIS_Drawer. <br>
//! As such, it is its set functions which are called to <br>
//! modify display parameters. In the example below we <br>
//! can see that the AIS_Drawer is modified to set the <br>
//! value of the deviation coefficient using a method <br>
//! inherited from Prs3d_Drawer. <br>
class Prs3d_Drawer : public MMgt_TShared {

public:

  
  Standard_EXPORT   Prs3d_Drawer();
  //! Sets the type of chordal deflection. <br>
//! This indicates whether the deflection value is absolute <br>
//! or relative to the size of the object. <br>
  Standard_EXPORT   virtual  void SetTypeOfDeflection(const Aspect_TypeOfDeflection aTypeOfDeflection) ;
  //! Returns the type of chordal deflection. <br>
//! This indicates whether the deflection value is absolute <br>
//! or relative to the size of the object. <br>
  Standard_EXPORT   virtual  Aspect_TypeOfDeflection TypeOfDeflection() const;
  //! Defines the maximal chordial deviation when drawing any curve; <br>
//!          Even if the type of deviation is set to TOD_Relative, <br>
//!          this value is used by: <br>
//! <br>
//!                   Prs3d_DeflectionCurve <br>
//!                   Prs3d_WFDeflectionSurface <br>
//!                   Prs3d_WFDeflectionRestrictedFace <br>
  Standard_EXPORT   virtual  void SetMaximalChordialDeviation(const Quantity_Length aChordialDeviation) ;
  //! returns the maximal chordial deviation. Default value is 0.1 <br>
  Standard_EXPORT   virtual  Quantity_Length MaximalChordialDeviation() const;
  //! Sets the deviation coefficient aCoefficient. <br>
  Standard_EXPORT   virtual  void SetDeviationCoefficient(const Standard_Real aCoefficient) ;
  //! Returns the deviation coefficient. <br>
  Standard_EXPORT   virtual  Standard_Real DeviationCoefficient() const;
  //! Sets the deviation coefficient aCoefficient for removal <br>
//! of hidden lines created by different viewpoints in <br>
//! different presentations. The Default value is 0.02. <br>
  Standard_EXPORT   virtual  void SetHLRDeviationCoefficient(const Standard_Real aCoefficient) ;
  //! Returns the real number value of the hidden line <br>
//! removal deviation coefficient. <br>
  Standard_EXPORT   virtual  Standard_Real HLRDeviationCoefficient() const;
  //! Sets anAngle, the angle of maximum chordal <br>
//! deviation for removal of hidden lines created by <br>
//! different viewpoints in different presentations. The <br>
//! default value is 20*PI/180. <br>
  Standard_EXPORT   virtual  void SetHLRAngle(const Standard_Real anAngle) ;
  //! Returns the real number value of the deviation angle <br>
//! in hidden line removal views. The default value is 20*PI/180. <br>
  Standard_EXPORT   virtual  Standard_Real HLRAngle() const;
  //! Sets deviation angle <br>
  Standard_EXPORT   virtual  void SetDeviationAngle(const Standard_Real anAngle) ;
  //! Returns the value for deviation angle. <br>
  Standard_EXPORT   virtual  Standard_Real DeviationAngle() const;
  //! Sets the discretisation parameter d. <br>
  Standard_EXPORT   virtual  void SetDiscretisation(const Standard_Integer d) ;
  //! Returns the discretisation setting. <br>
  Standard_EXPORT   virtual  Standard_Integer Discretisation() const;
  //! defines the maximum value allowed  for the first and last <br>
//!          parameters of an infinite curve. Default value: 500. <br>
  Standard_EXPORT   virtual  void SetMaximalParameterValue(const Standard_Real Value) ;
  //! Sets the maximum value allowed for the first and last <br>
//! parameters of an infinite curve. By default, this value is 500000. <br>
  Standard_EXPORT   virtual  Standard_Real MaximalParameterValue() const;
  //! Sets IsoOnPlane on or off   by setting the parameter <br>
//! OnOff to true or false. <br>
  Standard_EXPORT   virtual  void SetIsoOnPlane(const Standard_Boolean OnOff) ;
  //! Returns True if the drawing of isos on planes is enabled. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsoOnPlane() const;
  //! Defines the attributes which are used when drawing an <br>
//!          U isoparametric curve of a face. Defines the number <br>
//!          of U isoparametric curves to be drawn for a single face. <br>
//!          The LineAspect for U isoparametric lines can be edited <br>
//!          (methods SetColor, SetTypeOfLine, SetWidth, SetNumber) <br>
//!          The default values are: <br>
//!          COLOR       : Quantity_NOC_GRAY75 <br>
//!          TYPE OF LINE: Aspect_TOL_SOLID <br>
//!          WIDTH       : 0.5 <br>
//! <br>
//! <br>
//!          These attributes are used by the following algorithms: <br>
//!          Prs3d_WFDeflectionSurface <br>
//!          Prs3d_WFDeflectionRestrictedFace <br>
  Standard_EXPORT   virtual  Handle_Prs3d_IsoAspect UIsoAspect() ;
  
  Standard_EXPORT   virtual  void SetUIsoAspect(const Handle(Prs3d_IsoAspect)& anAspect) ;
  //! Defines the attributes which are used when drawing an <br>
//!          V isoparametric curve of a face. Defines the number <br>
//!          of V isoparametric curves to be drawn for a single face. <br>
//!          The LineAspect for V isoparametric lines can be edited <br>
//!          (methods SetColor, SetTypeOfLine, SetWidth, SetNumber) <br>
//!          The default values are: <br>
//!          COLOR       : Quantity_NOC_GRAY82 <br>
//!          TYPE OF LINE: Aspect_TOL_SOLID <br>
//!          WIDTH       : 0.5 <br>
//! <br>
//! <br>
//!          These attributes are used by the following algorithms: <br>
//!          Prs3d_WFDeflectionSurface <br>
//!          Prs3d_WFDeflectionRestrictedFace <br>
  Standard_EXPORT   virtual  Handle_Prs3d_IsoAspect VIsoAspect() ;
  //! Sets the appearance of V isoparameters - anAspect. <br>
  Standard_EXPORT   virtual  void SetVIsoAspect(const Handle(Prs3d_IsoAspect)& anAspect) ;
  //!  Stores the values for presentation of free boundaries, <br>
//! in other words, boundaries which are not shared. <br>
//!          The LineAspect for the  free boundaries can be edited. <br>
//!          The default values are: <br>
//!          Color: Quantity_NOC_GREEN <br>
//!          Type of line: Aspect_TOL_SOLID <br>
//!          Width: 1. <br>
//!          These attributes are used by the algorithm Prs3d_WFShape <br>
  Standard_EXPORT   virtual  Handle_Prs3d_LineAspect FreeBoundaryAspect() ;
  //! Sets the parameter anAspect for the display of free boundaries. <br>
  Standard_EXPORT   virtual  void SetFreeBoundaryAspect(const Handle(Prs3d_LineAspect)& anAspect) ;
  //! Sets free boundary drawing on or off by setting the <br>
//! parameter OnOff to true or false. <br>
  Standard_EXPORT   virtual  void SetFreeBoundaryDraw(const Standard_Boolean OnOff) ;
  //! Returns True if the drawing of the shared boundaries <br>
//! is disabled. True is the default setting. <br>
  Standard_EXPORT   virtual  Standard_Boolean FreeBoundaryDraw() const;
  //! Returns wire aspect settings. <br>
//!          The LineAspect for the wire can be edited. <br>
//!          The default values are: <br>
//!          Color: Quantity_NOC_RED <br>
//!          Type of line: Aspect_TOL_SOLID <br>
//!          Width: 1. <br>
//!          These attributes are used by the algorithm Prs3d_WFShape <br>
  Standard_EXPORT   virtual  Handle_Prs3d_LineAspect WireAspect() ;
  //! Sets the parameter anAspect for display of wires. <br>
  Standard_EXPORT   virtual  void SetWireAspect(const Handle(Prs3d_LineAspect)& anAspect) ;
  //! Sets WireDraw on or off   by setting the parameter <br>
//! OnOff to true or false. <br>
  Standard_EXPORT   virtual  void SetWireDraw(const Standard_Boolean OnOff) ;
  //! returns True if the drawing of the wire is enabled. <br>
  Standard_EXPORT   virtual  Standard_Boolean WireDraw() const;
  //! Returns settings for shared boundary line aspects. <br>
//!          The LineAspect for the unfree boundaries can be edited. <br>
//!          The default values are: <br>
//!          Color: Quantity_NOC_YELLOW <br>
//!          Type of line: Aspect_TOL_SOLID <br>
//!          Width: 1. <br>
//!          These attributes are used by the algorithm Prs3d_WFShape <br>
  Standard_EXPORT   virtual  Handle_Prs3d_LineAspect UnFreeBoundaryAspect() ;
  //! Sets the parameter anAspect for the display of shared boundaries. <br>
  Standard_EXPORT   virtual  void SetUnFreeBoundaryAspect(const Handle(Prs3d_LineAspect)& anAspect) ;
  //! Sets FreeBoundaryDraw on or off by setting the <br>
//! parameter OnOff to true or false. <br>
//!          By default the unfree boundaries  are drawn. <br>
  Standard_EXPORT   virtual  void SetUnFreeBoundaryDraw(const Standard_Boolean OnOff) ;
  //! Returns True if the drawing of the shared boundaries is enabled. <br>
//! True is the default setting. <br>
  Standard_EXPORT   virtual  Standard_Boolean UnFreeBoundaryDraw() const;
  //!   Returns settings for line aspects. <br>
//! These settings can be edited. The default values are: <br>
//!          Color: Quantity_NOC_YELLOW <br>
//!          Type of line: Aspect_TOL_SOLID <br>
//!          Width: 1. <br>
//!          These attributes are used by the following algorithms: <br>
//!          Prs3d_Curve <br>
//!          Prs3d_Line <br>
//!          Prs3d_HLRShape <br>
  Standard_EXPORT   virtual  Handle_Prs3d_LineAspect LineAspect() ;
  //! Sets the parameter anAspect for display attributes of lines. <br>
  Standard_EXPORT   virtual  void SetLineAspect(const Handle(Prs3d_LineAspect)& anAspect) ;
  //! Returns settings for text aspect. <br>
//! These settings can be edited. The default value is: <br>
//! -   Color: Quantity_NOC_YELLOW <br>
  Standard_EXPORT   virtual  Handle_Prs3d_TextAspect TextAspect() ;
  //! Sets the parameter anAspect for display attributes of text. <br>
  Standard_EXPORT   virtual  void SetTextAspect(const Handle(Prs3d_TextAspect)& anAspect) ;
  //! enables the drawing of an arrow at the end of each line. <br>
//!          By default the arrows are not drawn. <br>
  Standard_EXPORT   virtual  void SetLineArrowDraw(const Standard_Boolean OnOff) ;
  //! Sets LineArrowDraw on or off by setting the <br>
//! parameter OnOff to true or false. <br>
  Standard_EXPORT   virtual  Standard_Boolean LineArrowDraw() const;
  //! Returns the attributes for display of arrows. <br>
  Standard_EXPORT   virtual  Handle_Prs3d_ArrowAspect ArrowAspect() ;
  //! Sets the parameter anAspect for display attributes of arrows. <br>
  Standard_EXPORT   virtual  void SetArrowAspect(const Handle(Prs3d_ArrowAspect)& anAspect) ;
  //! Returns the point aspect setting. The default values are <br>
//!        Color: Quantity_NOC_YELLOW <br>
//!          Type of marker: Aspect_TOM_PLUS <br>
//!          Scale: 1. <br>
//!          These attributes are used by the algorithms Prs3d_Point. <br>
  Standard_EXPORT   virtual  Handle_Prs3d_PointAspect PointAspect() ;
  //! Sets the parameter anAspect for display attributes of points <br>
  Standard_EXPORT   virtual  void SetPointAspect(const Handle(Prs3d_PointAspect)& anAspect) ;
  //! Returns settings for shading aspects. <br>
//! These settings can be edited. The default values are: <br>
//! -   Color: Quantity_NOC_YELLOW <br>
//! -   Material: Graphic3d_NOM_BRASS <br>
//!   Shading aspect is obtained through decomposition of <br>
//! 3d faces into triangles, each side of each triangle <br>
//! being a chord of the corresponding curved edge in <br>
//! the face. Reflection of light in each projector <br>
//! perspective is then calculated for each of the <br>
//! resultant triangular planes. <br>
  Standard_EXPORT   virtual  Handle_Prs3d_ShadingAspect ShadingAspect() ;
  //! Sets the parameter anAspect for display attributes of shading. <br>
  Standard_EXPORT   virtual  void SetShadingAspect(const Handle(Prs3d_ShadingAspect)& anAspect) ;
  //! indicates that the ShadingAspect will be apply <br>
//!          to the whole presentation. This allows to modify <br>
//!          the aspect without recomputing the content of the presentation. <br>
  Standard_EXPORT   virtual  void SetShadingAspectGlobal(const Standard_Boolean aValue) ;
  
  Standard_EXPORT   virtual  Standard_Boolean ShadingAspectGlobal() const;
  //! returns Standard_True if the hidden lines are to be drawn. <br>
//!          By default the hidden lines are not drawn. <br>
  Standard_EXPORT   virtual  Standard_Boolean DrawHiddenLine() const;
  //! Enables the DrawHiddenLine function. <br>
  Standard_EXPORT   virtual  void EnableDrawHiddenLine() ;
  //!  Disables the DrawHiddenLine function. <br>
  Standard_EXPORT   virtual  void DisableDrawHiddenLine() ;
  //! Returns settings for hidden line aspects. <br>
//! These settings can be edited. The default values are: <br>
//!          Color: Quantity_NOC_YELLOW <br>
//!          Type of line: Aspect_TOL_DASH <br>
//!          Width: 1. <br>
  Standard_EXPORT   virtual  Handle_Prs3d_LineAspect HiddenLineAspect() ;
  //! Sets the parameter anAspect for the display of <br>
//! hidden lines in hidden line removal mode. <br>
  Standard_EXPORT   virtual  void SetHiddenLineAspect(const Handle(Prs3d_LineAspect)& anAspect) ;
  //! Returns settings for seen line aspects. <br>
//! These settings can be edited. The default values are: <br>
//!          Color: Quantity_NOC_YELLOW <br>
//!          Type of line: Aspect_TOL_SOLID <br>
//!          Width: 1. <br>
  Standard_EXPORT   virtual  Handle_Prs3d_LineAspect SeenLineAspect() ;
  //! Sets the parameter anAspect for the display of seen <br>
//! lines in hidden line removal mode. <br>
  Standard_EXPORT   virtual  void SetSeenLineAspect(const Handle(Prs3d_LineAspect)& anAspect) ;
  //! Returns settings for the appearance of planes. <br>
  Standard_EXPORT   virtual  Handle_Prs3d_PlaneAspect PlaneAspect() ;
  //! Sets the parameter anAspect for the display of planes. <br>
  Standard_EXPORT   virtual  void SetPlaneAspect(const Handle(Prs3d_PlaneAspect)& anAspect) ;
  //! Returns settings for the appearance of vectors. <br>
//! These settings can be edited. The default values are: <br>
//!          Color: Quantity_NOC_SKYBLUE <br>
//!          Type of line: Aspect_TOL_SOLID <br>
//!          Width: 1. <br>
  Standard_EXPORT   virtual  Handle_Prs3d_LineAspect VectorAspect() ;
  //! Sets the modality anAspect for the display of vectors. <br>
  Standard_EXPORT   virtual  void SetVectorAspect(const Handle(Prs3d_LineAspect)& anAspect) ;
  //! Returns settings for the appearance of datums. <br>
//! These settings can be edited. The default values for <br>
//! the three axes are: <br>
//!          Color: Quantity_NOC_PEACHPUFF <br>
//!          Type of line: Aspect_TOL_SOLID <br>
//!          Width: 1. <br>
  Standard_EXPORT   virtual  Handle_Prs3d_DatumAspect DatumAspect() ;
  //! Sets the modality anAspect for the display of datums. <br>
  Standard_EXPORT   virtual  void SetDatumAspect(const Handle(Prs3d_DatumAspect)& anAspect) ;
  //! Returns settings for the appearance of lengths. <br>
  Standard_EXPORT   virtual  Handle_Prs3d_LengthAspect LengthAspect() ;
  //! Sets the modality anAspect for display of lengths. <br>
  Standard_EXPORT   virtual  void SetLengthAspect(const Handle(Prs3d_LengthAspect)& anAspect) ;
  //! Returns settings for lines used to display angles. <br>
  Standard_EXPORT   virtual  Handle_Prs3d_AngleAspect AngleAspect() ;
  //! Sets the modality anAspect for the display of angles. <br>
  Standard_EXPORT   virtual  void SetAngleAspect(const Handle(Prs3d_AngleAspect)& anAspect) ;
  //! Returns settings for lines which serve to display radii. <br>
  Standard_EXPORT   virtual  Handle_Prs3d_RadiusAspect RadiusAspect() const;
  //! Sets the parameter anAspect for display attributes of radii. <br>
  Standard_EXPORT   virtual  void SetRadiusAspect(const Handle(Prs3d_RadiusAspect)& anAspect) ;
  //! The LineAspect for the wire can be edited. <br>
//!          The default values are: <br>
//!          Color: Quantity_NOC_ORANGE <br>
//!          Type of line: Aspect_TOL_SOLID <br>
//!          Width: 1. <br>
//!          These attributes are used by the algorithm Prs3d_WFShape <br>
  Standard_EXPORT   virtual  Handle_Prs3d_LineAspect SectionAspect() ;
  //! Sets the parameter anAspect for display attributes of sections. <br>
  Standard_EXPORT   virtual  void SetSectionAspect(const Handle(Prs3d_LineAspect)& anAspect) ;
  
  Standard_EXPORT   virtual  void Print(Standard_OStream& s) const;




  DEFINE_STANDARD_RTTI(Prs3d_Drawer)

protected:


Handle_Prs3d_IsoAspect myUIsoAspect;
Handle_Prs3d_IsoAspect myVIsoAspect;
Standard_Integer myNbPoints;
Standard_Boolean myIsoOnPlane;
Handle_Prs3d_LineAspect myFreeBoundaryAspect;
Standard_Boolean myFreeBoundaryDraw;
Handle_Prs3d_LineAspect myUnFreeBoundaryAspect;
Standard_Boolean myUnFreeBoundaryDraw;
Handle_Prs3d_LineAspect myWireAspect;
Standard_Boolean myWireDraw;
Handle_Prs3d_LineAspect myLineAspect;
Handle_Prs3d_TextAspect myTextAspect;
Handle_Prs3d_ShadingAspect myShadingAspect;
Standard_Boolean myShadingAspectGlobal;
Quantity_Length myChordialDeviation;
Aspect_TypeOfDeflection myTypeOfDeflection;
Standard_Real myMaximalParameterValue;
Standard_Real myDeviationCoefficient;
Standard_Real myHLRDeviationCoefficient;
Standard_Real myDeviationAngle;
Standard_Real myHLRAngle;
Handle_Prs3d_PointAspect myPointAspect;
Handle_Prs3d_PlaneAspect myPlaneAspect;
Handle_Prs3d_ArrowAspect myArrowAspect;
Standard_Boolean myLineDrawArrow;
Standard_Boolean myDrawHiddenLine;
Handle_Prs3d_LineAspect myHiddenLineAspect;
Handle_Prs3d_LineAspect mySeenLineAspect;
Handle_Prs3d_LineAspect myVectorAspect;
Handle_Prs3d_DatumAspect myDatumAspect;
Standard_Real myDatumScale;
Handle_Prs3d_LengthAspect myLengthAspect;
Handle_Prs3d_AngleAspect myAngleAspect;
Handle_Prs3d_RadiusAspect myRadiusAspect;
Handle_Prs3d_LineAspect mySectionAspect;


private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
