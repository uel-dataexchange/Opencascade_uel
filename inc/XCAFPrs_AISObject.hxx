// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XCAFPrs_AISObject_HeaderFile
#define _XCAFPrs_AISObject_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_XCAFPrs_AISObject_HeaderFile
#include <Handle_XCAFPrs_AISObject.hxx>
#endif

#ifndef _TDF_Label_HeaderFile
#include <TDF_Label.hxx>
#endif
#ifndef _AIS_Shape_HeaderFile
#include <AIS_Shape.hxx>
#endif
#ifndef _Handle_PrsMgr_PresentationManager3d_HeaderFile
#include <Handle_PrsMgr_PresentationManager3d.hxx>
#endif
#ifndef _Handle_Prs3d_Presentation_HeaderFile
#include <Handle_Prs3d_Presentation.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class TDF_Label;
class XCAFPrs_Style;
class TopoDS_Shape;
class PrsMgr_PresentationManager3d;
class Prs3d_Presentation;


//! Implements AIS_InteractiveObject functionality <br>
//!          for shape in DECAF document <br>
class XCAFPrs_AISObject : public AIS_Shape {

public:

  //! Creates an object to visualise the shape label <br>
  Standard_EXPORT   XCAFPrs_AISObject(const TDF_Label& lab);




  DEFINE_STANDARD_RTTI(XCAFPrs_AISObject)

protected:




private: 

  
  Standard_EXPORT     void AddStyledItem(const XCAFPrs_Style& style,const TopoDS_Shape& shape,const Handle(PrsMgr_PresentationManager3d)& aPresentationManager,const Handle(Prs3d_Presentation)& aPresentation,const Standard_Integer aMode = 0) ;
  //! Redefined method to compute presentation <br>
  Standard_EXPORT   virtual  void Compute(const Handle(PrsMgr_PresentationManager3d)& aPresentationManager,const Handle(Prs3d_Presentation)& aPresentation,const Standard_Integer aMode = 0) ;

TDF_Label myLabel;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
