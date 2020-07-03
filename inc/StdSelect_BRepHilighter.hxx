// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StdSelect_BRepHilighter_HeaderFile
#define _StdSelect_BRepHilighter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_StdSelect_ViewerSelector3d_HeaderFile
#include <Handle_StdSelect_ViewerSelector3d.hxx>
#endif
#ifndef _Handle_V3d_Viewer_HeaderFile
#include <Handle_V3d_Viewer.hxx>
#endif
#ifndef _Quantity_NameOfColor_HeaderFile
#include <Quantity_NameOfColor.hxx>
#endif
#ifndef _Handle_Prs3d_Drawer_HeaderFile
#include <Handle_Prs3d_Drawer.hxx>
#endif
#ifndef _StdSelect_TypeOfResult_HeaderFile
#include <StdSelect_TypeOfResult.hxx>
#endif
#ifndef _TColStd_MapOfInteger_HeaderFile
#include <TColStd_MapOfInteger.hxx>
#endif
#ifndef _StdSelect_IndexedDataMapOfOwnerPrs_HeaderFile
#include <StdSelect_IndexedDataMapOfOwnerPrs.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Visual3d_TransientManager_HeaderFile
#include <Handle_Visual3d_TransientManager.hxx>
#endif
#ifndef _Handle_V3d_View_HeaderFile
#include <Handle_V3d_View.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class StdSelect_ViewerSelector3d;
class V3d_Viewer;
class Prs3d_Drawer;
class Visual3d_TransientManager;
class V3d_View;


//! Tool to manage hilight of BRepOwners  during the selection process <br>
//!          -> Built with a ViewSelector3d. <br>
//!          -> Can hilight all the detected elements at the mouse position or <br>
//!                 just the closest one. <br>
//!          How Use It: <br>
//!          TheSelector -> SelectPix (Xmouse,YMouse); <br>
//!          TheBRepHilighter->Process (); <br>
//! <br>
//!          When good choice <br>
//! <br>
//!          toto = TheSelector->LastPicked(); <br>
class StdSelect_BRepHilighter  {
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

  
  Standard_EXPORT   StdSelect_BRepHilighter();
  
  Standard_EXPORT   StdSelect_BRepHilighter(const Handle(StdSelect_ViewerSelector3d)& aSelector,const Handle(V3d_Viewer)& aViewer,const Quantity_NameOfColor acolor = Quantity_NOC_INDIANRED3,const StdSelect_TypeOfResult aType = StdSelect_TOR_SIMPLE);
  
  Standard_EXPORT     void Set(const Handle(StdSelect_ViewerSelector3d)& aSelector) ;
  
  Standard_EXPORT     void Set(const Handle(V3d_Viewer)& aViewer) ;
  
  Standard_EXPORT     void Set(const Quantity_NameOfColor acolor) ;
  
  Standard_EXPORT     void Set(const StdSelect_TypeOfResult atype) ;
  //! updates the viewer with the selection. <br>
  Standard_EXPORT     void Process() ;
  //! updates only the view with the selection. <br>
//!          The updating will be made using immediate drawing which is far quicker. <br>
  Standard_EXPORT     void Process(const Handle(V3d_View)& aView,const Standard_Boolean DoubleBuffer = Standard_False) ;
  //! Clears the hilight structures <br>
//!          which were created during the selection action; <br>
//!          must me called after each selection loop; <br>
//! <br>
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT    const Handle_Prs3d_Drawer& Drawer() const;





protected:





private:

  
  Standard_EXPORT     void Update() ;
  
  Standard_EXPORT     void Update(const Handle(V3d_View)& aView,const Standard_Boolean DoubleBuffer = Standard_False) ;


Handle_StdSelect_ViewerSelector3d myselector;
Handle_V3d_Viewer myviewer;
Quantity_NameOfColor mycolor;
Handle_Prs3d_Drawer mydrwr;
StdSelect_TypeOfResult mytype;
TColStd_MapOfInteger myold;
TColStd_MapOfInteger mynew;
StdSelect_IndexedDataMapOfOwnerPrs myhimap;
Standard_Integer mynbpick;
Standard_Integer mylastindex;
Handle_Visual3d_TransientManager myManager;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
