// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS2D_LocalContext_HeaderFile
#define _AIS2D_LocalContext_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AIS2D_LocalContext_HeaderFile
#include <Handle_AIS2D_LocalContext.hxx>
#endif

#ifndef _Handle_AIS2D_InteractiveContext_HeaderFile
#include <Handle_AIS2D_InteractiveContext.hxx>
#endif
#ifndef _AIS2D_DataMapOfLocStat_HeaderFile
#include <AIS2D_DataMapOfLocStat.hxx>
#endif
#ifndef _Handle_AIS2D_InteractiveObject_HeaderFile
#include <Handle_AIS2D_InteractiveObject.hxx>
#endif
#ifndef _Handle_Graphic2d_Primitive_HeaderFile
#include <Handle_Graphic2d_Primitive.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TColStd_ListOfInteger_HeaderFile
#include <TColStd_ListOfInteger.hxx>
#endif
#ifndef _TColStd_SequenceOfInteger_HeaderFile
#include <TColStd_SequenceOfInteger.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _AIS2D_InteractiveContext_HeaderFile
#include <AIS2D_InteractiveContext.hxx>
#endif
#ifndef _AIS2D_ClearMode_HeaderFile
#include <AIS2D_ClearMode.hxx>
#endif
#ifndef _Quantity_NameOfColor_HeaderFile
#include <Quantity_NameOfColor.hxx>
#endif
#ifndef _Handle_V2d_View_HeaderFile
#include <Handle_V2d_View.hxx>
#endif
#ifndef _AIS2D_StatusOfDetection_HeaderFile
#include <AIS2D_StatusOfDetection.hxx>
#endif
#ifndef _AIS2D_StatusOfPick_HeaderFile
#include <AIS2D_StatusOfPick.hxx>
#endif
#ifndef _Handle_AIS2D_LocalStatus_HeaderFile
#include <Handle_AIS2D_LocalStatus.hxx>
#endif
class AIS2D_InteractiveContext;
class AIS2D_InteractiveObject;
class Graphic2d_Primitive;
class TColStd_MapOfTransient;
class V2d_View;
class AIS2D_LocalStatus;


//! defines a specific context  for selection: One can <br>
//!          loads  InteractiveObjects  with   a mode   to be <br>
//!          activated  associate InteractiveObjects   with a <br>
//!          set of  temporary   selectable Objects <br>
//! <br>
class AIS2D_LocalContext : public MMgt_TShared {

public:

  //! Constructor By Default, the  displayed objects are <br>
//!          automatically loaded. <br>
  Standard_EXPORT   AIS2D_LocalContext();
  //! Constructor <br>
  Standard_EXPORT   AIS2D_LocalContext(const Handle(AIS2D_InteractiveContext)& aCtx,const Standard_Integer anIndex,const Standard_Boolean LoadDisplayed = Standard_True,const Standard_Boolean AcceptStdModes = Standard_True,const Standard_Boolean AcceptErase = Standard_False);
  
  Standard_EXPORT     Standard_Boolean Display(const Handle(AIS2D_InteractiveObject)& anIObj,const Standard_Integer DisplayMode = 0,const Standard_Boolean AllowDecomp = Standard_True,const Standard_Integer ActivationMode = 0) ;
  
  Standard_EXPORT     Standard_Boolean Load(const Handle(AIS2D_InteractiveObject)& anIObj,const Standard_Boolean AllowDecomp = Standard_True,const Standard_Integer ActivationMode = 0) ;
  
  Standard_EXPORT     Standard_Boolean Erase(const Handle(AIS2D_InteractiveObject)& anIObj) ;
  
  Standard_EXPORT     Standard_Boolean Remove(const Handle(AIS2D_InteractiveObject)& aSelObj) ;
  
  Standard_EXPORT     void LoadContextObjects() ;
  
  Standard_EXPORT     void UnloadContextObjects() ;
  
  Standard_EXPORT     void Terminate() ;
  //! according to <aType>, clears the  different parts of <br>
//!          the selector (filters, modeof activation, objects...) <br>
  Standard_EXPORT     void Clear(const AIS2D_ClearMode aType = AIS2D_CM_All) ;
  
  Standard_EXPORT     void HighlightPicked(const Standard_Boolean UpdateVwr = Standard_True) ;
  
  Standard_EXPORT     void UnhighlightPicked(const Standard_Boolean UpdateVwr = Standard_True) ;
  
  Standard_EXPORT     void UpdateSelected(const Standard_Boolean UpdateVwr = Standard_True) ;
  //! useful  to  update selection with objects  coming from <br>
//!          Collector or stack <br>
  Standard_EXPORT     void SetSelected(const Handle(AIS2D_InteractiveObject)& anIObj,const Standard_Boolean UpdateVwr = Standard_True) ;
  //! useful  to  update selection with objects  coming from <br>
//!          Collector or stack <br>
  Standard_EXPORT     void AddOrRemoveSelected(const Handle(AIS2D_InteractiveObject)& anIObj,const Standard_Boolean UpdateVwr = Standard_True) ;
  
  Standard_EXPORT     Standard_Boolean IsSelected(const Handle(AIS2D_InteractiveObject)& anIObj) const;
  
  Standard_EXPORT     Handle_AIS2D_InteractiveObject SelectedIO() const;
  
  Standard_EXPORT     void SetDisplayPriority(const Handle(AIS2D_InteractiveObject)& anIObj,const Standard_Integer Prior) ;
  
  Standard_EXPORT     Standard_Integer DisplayedObjects(TColStd_MapOfTransient& theMapToFill) const;
  
  Standard_EXPORT     Standard_Boolean IsDisplayed(const Handle(AIS2D_InteractiveObject)& anIObj) const;
  
  Standard_EXPORT     Standard_Boolean IsDisplayed(const Handle(AIS2D_InteractiveObject)& anIObj,const Standard_Integer aMode) const;
  
  Standard_EXPORT     void Unhighlight(const Handle(AIS2D_InteractiveObject)& anIObj) ;
  
  Standard_EXPORT     Standard_Boolean IsHighlight(const Handle(AIS2D_InteractiveObject)& anIObj) const;
  
  Standard_EXPORT     Standard_Boolean IsHighlight(const Handle(AIS2D_InteractiveObject)& anIObj,Standard_Boolean& WithColor,Quantity_NameOfColor& HiCol) const;
  
  Standard_EXPORT     Standard_Boolean IsIn(const Handle(AIS2D_InteractiveObject)& anIObj) const;
  
  Standard_EXPORT     void SubIntensityOn(const Handle(AIS2D_InteractiveObject)& anIObj) ;
  
  Standard_EXPORT     void SubIntensityOff(const Handle(AIS2D_InteractiveObject)& anIObj) ;
  
  Standard_EXPORT     Standard_Boolean UnhighLastDetect(const Handle(V2d_View)& aView) ;
  
  Standard_EXPORT     AIS2D_StatusOfDetection MoveTo(const Standard_Integer Xpix,const Standard_Integer Ypix,const Handle(V2d_View)& aView) ;
  
  Standard_EXPORT     AIS2D_StatusOfPick Select(const Standard_Boolean UpdateVwr = Standard_True) ;
  
  Standard_EXPORT     AIS2D_StatusOfPick ShiftSelect(const Standard_Boolean UpdateVwr = Standard_True) ;
  
  Standard_EXPORT     void ClearSelected(const Standard_Boolean UpdateVwr = Standard_True) ;


friend   //! Changes the status of a temporary object it will be -- <br>
//!          kept at the  neutral point, i.e.   put in the list  of <br>
//!           displayed  objects,  with  its  temporary  attributes <br>
//!          (displaymode,selection  mode) returns true  if done -- <br>
//!          inWhichLocal means that gives   the local context   in <br>
//!          which <anIObj> is displayed.  By default, -1 means the <br>
//!          last opened one <br>
  Standard_EXPORT   Standard_Boolean AIS2D_InteractiveContext::KeepTemporary(const Handle(AIS2D_InteractiveObject)& anIObj,const Standard_Integer InWhichLocal) ;


  DEFINE_STANDARD_RTTI(AIS2D_LocalContext)

protected:




private: 

  
  Standard_EXPORT     void ClearObjects() ;
  
  Standard_EXPORT     void ClearDetected() ;
  
  Standard_EXPORT     Standard_Boolean IsValidForSelection(const Handle(AIS2D_InteractiveObject)& anIObj) const;
  
  Standard_EXPORT     void DrawObject(const Handle(AIS2D_InteractiveObject)& anObj,const Standard_Integer aDispMode) ;
  
  Standard_EXPORT     Standard_Integer DetectedIndex() ;
  
  Standard_EXPORT    const Handle_AIS2D_LocalStatus& Status(const Handle(AIS2D_InteractiveObject)& anObject) const;

Handle_AIS2D_InteractiveContext myICTX;
AIS2D_DataMapOfLocStat myActiveObjects;
Handle_AIS2D_InteractiveObject myLastPicked;
Handle_AIS2D_InteractiveObject myLastinMain;
Handle_Graphic2d_Primitive myLastSelPrim;
Handle_Graphic2d_Primitive myLastPickPrim;
Standard_Integer myLastPickElInd;
Standard_Integer myLastSelElInd;
Standard_Boolean myLoadDisplayed;
Standard_Boolean myAcceptStdMode;
Standard_Boolean myAcceptErase;
TColStd_ListOfInteger myListOfStdMode;
Standard_Boolean myAutoHighlight;
Standard_Integer myLastIndex;
Standard_Integer myLastGood;
TColStd_SequenceOfInteger myDetectedSeq;
Standard_Integer myCurDetected;
Standard_Boolean myResetDetect;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
