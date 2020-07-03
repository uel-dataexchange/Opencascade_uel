// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DsgPrs_DiameterPresentation_HeaderFile
#define _DsgPrs_DiameterPresentation_HeaderFile

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
#ifndef _DsgPrs_ArrowSide_HeaderFile
#include <DsgPrs_ArrowSide.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Prs3d_Presentation;
class Prs3d_Drawer;
class TCollection_ExtendedString;
class gp_Pnt;
class gp_Circ;


//! A framework for displaying diameters in shapes. <br>
class DsgPrs_DiameterPresentation  {
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

  //! Draws the diameter of the circle aCircle displayed in <br>
//! the presentation aPresentation and with attributes <br>
//! defined by the attribute manager aDrawer. The point <br>
//! AttachmentPoint defines the point of contact <br>
//! between the circle and the diameter presentation. <br>
//! The value of the enumeration ArrowSide controls <br>
//! whether arrows will be displayed at either or both <br>
//! ends of the length. The text aText labels the diameter. <br>
  Standard_EXPORT   static  void Add(const Handle(Prs3d_Presentation)& aPresentation,const Handle(Prs3d_Drawer)& aDrawer,const TCollection_ExtendedString& aText,const gp_Pnt& AttachmentPoint,const gp_Circ& aCircle,const DsgPrs_ArrowSide ArrowSide,const Standard_Boolean IsDiamSymbol) ;
  //! Draws the diameter of the arc anArc displayed in the <br>
//! presentation aPresentation and with attributes <br>
//! defined by the attribute manager aDrawer. The point <br>
//! AttachmentPoint defines the point of contact <br>
//! between the arc and the diameter presentation. The <br>
//! value of the enumeration ArrowSide controls whether <br>
//! arrows will be displayed at either or both ends of the <br>
//! length. The parameters uFirst and uLast define the <br>
//! first and last points of the arc. The text aText labels the diameter. <br>
  Standard_EXPORT   static  void Add(const Handle(Prs3d_Presentation)& aPresentation,const Handle(Prs3d_Drawer)& aDrawer,const TCollection_ExtendedString& aText,const gp_Pnt& AttachmentPoint,const gp_Circ& aCircle,const Standard_Real uFirst,const Standard_Real uLast,const DsgPrs_ArrowSide ArrowSide,const Standard_Boolean IsDiamSymbol) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
