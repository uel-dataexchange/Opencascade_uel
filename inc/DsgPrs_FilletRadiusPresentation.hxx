// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DsgPrs_FilletRadiusPresentation_HeaderFile
#define _DsgPrs_FilletRadiusPresentation_HeaderFile

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
#ifndef _DsgPrs_ArrowSide_HeaderFile
#include <DsgPrs_ArrowSide.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Geom_TrimmedCurve_HeaderFile
#include <Handle_Geom_TrimmedCurve.hxx>
#endif
class Prs3d_Presentation;
class Prs3d_Drawer;
class TCollection_ExtendedString;
class gp_Pnt;
class gp_Dir;
class Geom_TrimmedCurve;


//! A framework for displaying radii of fillets. <br>
class DsgPrs_FilletRadiusPresentation  {
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

  //! Adds a display of the radius of a fillet to the <br>
//! presentation aPresentation. The display ttributes <br>
//! defined by the attribute manager aDrawer. the value <br>
//! specifies the length of the radius. <br>
  Standard_EXPORT   static  void Add(const Handle(Prs3d_Presentation)& aPresentation,const Handle(Prs3d_Drawer)& aDrawer,const Standard_Real thevalue,const TCollection_ExtendedString& aText,const gp_Pnt& aPosition,const gp_Dir& aNormalDir,const gp_Pnt& aBasePnt,const gp_Pnt& aFirstPoint,const gp_Pnt& aSecondPoint,const gp_Pnt& aCenter,const DsgPrs_ArrowSide ArrowPrs,const Standard_Boolean drawRevers,gp_Pnt& DrawPosition,gp_Pnt& EndOfArrow,Handle(Geom_TrimmedCurve)& TrimCurve,Standard_Boolean& HasCircle) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
