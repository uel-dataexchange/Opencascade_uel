// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DsgPrs_IdenticPresentation_HeaderFile
#define _DsgPrs_IdenticPresentation_HeaderFile

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
class Prs3d_Presentation;
class Prs3d_Drawer;
class TCollection_ExtendedString;
class gp_Pnt;
class gp_Ax2;
class gp_Elips;



class DsgPrs_IdenticPresentation  {
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

  //! draws a line between <aPntAttach> and <br>
//!          <aPntOffset>. <br>
  Standard_EXPORT   static  void Add(const Handle(Prs3d_Presentation)& aPresentation,const Handle(Prs3d_Drawer)& aDrawer,const TCollection_ExtendedString& aText,const gp_Pnt& aPntAttach,const gp_Pnt& aPntOffset) ;
  //! draws the 'identic' presentation by <br>
//!          drawing a line between <aFAttach> and <br>
//!          <aSAttach> , and a linkimg segment <br>
//!          between <aPntOffset> and its projection <br>
//!          on the precedent line. <br>
  Standard_EXPORT   static  void Add(const Handle(Prs3d_Presentation)& aPresentation,const Handle(Prs3d_Drawer)& aDrawer,const TCollection_ExtendedString& aText,const gp_Pnt& aFAttach,const gp_Pnt& aSAttach,const gp_Pnt& aPntOffset) ;
  //! draws the 'identic' presentation in the case of <br>
//!          circles : draws an arc of circle between <br>
//!          <aFAttach> and <aSAttach> of center <aCenter> <br>
//!          and of radius dist(aCenter, aFAttach), and <br>
//!          draws a segment between <aPntOffset> and <br>
//!          its projection on the arc. <br>
  Standard_EXPORT   static  void Add(const Handle(Prs3d_Presentation)& aPresentation,const Handle(Prs3d_Drawer)& aDrawer,const TCollection_ExtendedString& aText,const gp_Ax2& aAx2,const gp_Pnt& aCenter,const gp_Pnt& aFAttach,const gp_Pnt& aSAttach,const gp_Pnt& aPntOffset) ;
  //! draws the 'identic' presentation in the case of <br>
//!          circles : draws an arc of circle between <br>
//!          <aFAttach> and <aSAttach> of center <aCenter> <br>
//!          and of radius dist(aCenter, aFAttach), and <br>
//!          draws a segment between <aPntOffset> and <aPntOnCirc> <br>
  Standard_EXPORT   static  void Add(const Handle(Prs3d_Presentation)& aPresentation,const Handle(Prs3d_Drawer)& aDrawer,const TCollection_ExtendedString& aText,const gp_Ax2& aAx2,const gp_Pnt& aCenter,const gp_Pnt& aFAttach,const gp_Pnt& aSAttach,const gp_Pnt& aPntOffset,const gp_Pnt& aPntOnCirc) ;
  //! draws the 'identic' presentation in the case of <br>
//!          ellipses: draws an arc of the anEllipse <br>
//!          between <aFAttach> and <aSAttach> and <br>
//!          draws a segment between <aPntOffset> and <aPntOnElli> <br>
  Standard_EXPORT   static  void Add(const Handle(Prs3d_Presentation)& aPresentation,const Handle(Prs3d_Drawer)& aDrawer,const TCollection_ExtendedString& aText,const gp_Elips& anEllipse,const gp_Pnt& aFAttach,const gp_Pnt& aSAttach,const gp_Pnt& aPntOffset,const gp_Pnt& aPntOnElli) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
