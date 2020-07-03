// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DsgPrs_EllipseRadiusPresentation_HeaderFile
#define _DsgPrs_EllipseRadiusPresentation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Prs3d_Presentation_HeaderFile
#include <Handle_Prs3d_Presentation.hxx>
#endif
#ifndef _Handle_Prs3d_Drawer_HeaderFile
#include <Handle_Prs3d_Drawer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _DsgPrs_ArrowSide_HeaderFile
#include <DsgPrs_ArrowSide.hxx>
#endif
#ifndef _Handle_Geom_OffsetCurve_HeaderFile
#include <Handle_Geom_OffsetCurve.hxx>
#endif
class Prs3d_Presentation;
class Prs3d_Drawer;
class TCollection_ExtendedString;
class gp_Pnt;
class gp_Elips;
class Geom_OffsetCurve;



class DsgPrs_EllipseRadiusPresentation  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! draws a  Radius  (Major  or  Minor) <br>
//! representation for whole ellipse  case <br>
  Standard_EXPORT   static  void Add(const Handle(Prs3d_Presentation)& aPresentation,const Handle(Prs3d_Drawer)& aDrawer,const Standard_Real theval,const TCollection_ExtendedString& aText,const gp_Pnt& AttachmentPoint,const gp_Pnt& anEndOfArrow,const gp_Pnt& aCenter,const Standard_Boolean IsMaxRadius,const DsgPrs_ArrowSide ArrowSide) ;
  //! draws a  Radius  (Major  or  Minor) representation <br>
//!  for arc of an ellipse  case <br>
  Standard_EXPORT   static  void Add(const Handle(Prs3d_Presentation)& aPresentation,const Handle(Prs3d_Drawer)& aDrawer,const Standard_Real theval,const TCollection_ExtendedString& aText,const gp_Elips& anEllipse,const gp_Pnt& AttachmentPoint,const gp_Pnt& anEndOfArrow,const gp_Pnt& aCenter,const Standard_Real uFirst,const Standard_Boolean IsInDomain,const Standard_Boolean IsMaxRadius,const DsgPrs_ArrowSide ArrowSide) ;
  //! draws a  Radius  (Major  or  Minor) representation <br>
//!  for arc of an offset  curve  from  ellipse <br>
  Standard_EXPORT   static  void Add(const Handle(Prs3d_Presentation)& aPresentation,const Handle(Prs3d_Drawer)& aDrawer,const Standard_Real theval,const TCollection_ExtendedString& aText,const Handle(Geom_OffsetCurve)& aCurve,const gp_Pnt& AttachmentPoint,const gp_Pnt& anEndOfArrow,const gp_Pnt& aCenter,const Standard_Real uFirst,const Standard_Boolean IsInDomain,const Standard_Boolean IsMaxRadius,const DsgPrs_ArrowSide ArrowSide) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
