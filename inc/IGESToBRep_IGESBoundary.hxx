// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESToBRep_IGESBoundary_HeaderFile
#define _IGESToBRep_IGESBoundary_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESToBRep_IGESBoundary_HeaderFile
#include <Handle_IGESToBRep_IGESBoundary.hxx>
#endif

#ifndef _IGESToBRep_CurveAndSurface_HeaderFile
#include <IGESToBRep_CurveAndSurface.hxx>
#endif
#ifndef _Handle_IGESData_IGESEntity_HeaderFile
#include <Handle_IGESData_IGESEntity.hxx>
#endif
#ifndef _Handle_ShapeExtend_WireData_HeaderFile
#include <Handle_ShapeExtend_WireData.hxx>
#endif
#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
#ifndef _gp_Trsf2d_HeaderFile
#include <gp_Trsf2d.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_IGESData_HArray1OfIGESEntity_HeaderFile
#include <Handle_IGESData_HArray1OfIGESEntity.hxx>
#endif
class IGESData_IGESEntity;
class ShapeExtend_WireData;
class IGESToBRep_CurveAndSurface;
class TopoDS_Face;
class gp_Trsf2d;
class IGESData_HArray1OfIGESEntity;


//! This class is intended to translate IGES boundary entity <br>
//!          (142-CurveOnSurface, 141-Boundary or 508-Loop) into the wire. <br>
//!          Methods Transfer are virtual and are redefined in Advanced <br>
//!          Data Exchange to optimize the translation and take into <br>
//!          account advanced parameters. <br>
class IGESToBRep_IGESBoundary : public MMgt_TShared {

public:

  //! Empty constructor <br>
  Standard_EXPORT   IGESToBRep_IGESBoundary();
  //! Empty constructor <br>
  Standard_EXPORT   IGESToBRep_IGESBoundary(const IGESToBRep_CurveAndSurface& CS);
  //! Inits the object with parameters common for all <br>
//!          types of IGES boundaries. <br>
//!          <CS>: object to be used for retrieving translation parameters <br>
//!                and sending messages, <br>
//!          <entity>: boundary entity to be processed, <br>
//!          <face>, <trans>, <uFact>: as for IGESToBRep_TopoCurve <br>
//!          <filepreference>: preferred representation (2 or 3) given <br>
//!                            in the IGES file <br>
  Standard_EXPORT     void Init(const IGESToBRep_CurveAndSurface& CS,const Handle(IGESData_IGESEntity)& entity,const TopoDS_Face& face,const gp_Trsf2d& trans,const Standard_Real uFact,const Standard_Integer filepreference) ;
  //! Returns the resulting wire <br>
        Handle_ShapeExtend_WireData WireData() const;
  //! Returns the wire from 3D curves (edges contain 3D curves <br>
//!          and may contain pcurves) <br>
        Handle_ShapeExtend_WireData WireData3d() const;
  //! Returns the the wire from 2D curves (edges contain pcurves <br>
//!          only) <br>
        Handle_ShapeExtend_WireData WireData2d() const;
  //! Translates 141 and 142 entities. <br>
//!          Returns True if the curve has been successfully translated, <br>
//!          otherwise returns False. <br>
//!          <okCurve..>: flags that indicate whether corresponding <br>
//!                       representation has been successfully translated <br>
//!                       (must be set to True before first call), <br>
//!          <curve3d>: model space curve for 142 and current model space <br>
//!                     curve for 141, <br>
//!          <toreverse3d>: False for 142 and current orientation flag <br>
//!                         for 141, <br>
//!          <curves2d>: 1 parameter space curve for 142 or list of <br>
//!                      them for current model space curves for 141, <br>
//!          <number>: 1 for 142 and rank number of model space curve for 141. <br>
  Standard_EXPORT     Standard_Boolean Transfer(Standard_Boolean& okCurve,Standard_Boolean& okCurve3d,Standard_Boolean& okCurve2d,const Handle(IGESData_IGESEntity)& curve3d,const Standard_Boolean toreverse3d,const Handle(IGESData_HArray1OfIGESEntity)& curves2d,const Standard_Integer number) ;
  //! Translates 508 entity. <br>
//!          Returns True if the curve has been successfully translated, <br>
//!          otherwise returns False. <br>
//!          Input object IGESBoundary must be created and initialized <br>
//!          before. <br>
//!          <okCurve..>: flags that indicate whether corresponding <br>
//!                       representation has been successfully translated <br>
//!                       (must be set to True before first call), <br>
//!          <curve3d>: result of translation of current edge, <br>
//!          <curves2d>: list of parameter space curves for edge, <br>
//!          <toreverse2d>: orientation flag of current edge in respect <br>
//!                         to its model space curve, <br>
//!          <number>: rank number of edge, <br>
//!          <lsewd>: returns the result of translation of current edge. <br>
  Standard_EXPORT     Standard_Boolean Transfer(Standard_Boolean& okCurve,Standard_Boolean& okCurve3d,Standard_Boolean& okCurve2d,const Handle(ShapeExtend_WireData)& curve3d,const Handle(IGESData_HArray1OfIGESEntity)& curves2d,const Standard_Boolean toreverse2d,const Standard_Integer number,Handle(ShapeExtend_WireData)& lsewd) ;
  //! Checks result of translation of IGES boundary entities <br>
//!          (types 141, 142 or 508). <br>
//!          Checks consistency of 2D and 3D representations and keeps <br>
//!          only one if they are inconsistent. <br>
//!          <result>: result of translation (returned by Transfer), <br>
//!          <checkclosure>: False for 142 without parent 144 entity, <br>
//!                          otherwise True, <br>
//!          <okCurve3d>, <okCurve2d>: those returned by Transfer. <br>
  Standard_EXPORT   virtual  void Check(const Standard_Boolean result,const Standard_Boolean checkclosure,const Standard_Boolean okCurve3d,const Standard_Boolean okCurve2d) ;




  DEFINE_STANDARD_RTTI(IGESToBRep_IGESBoundary)

protected:

  //! Methods called by both Transfer methods. <br>
  Standard_EXPORT   virtual  Standard_Boolean Transfer(Standard_Boolean& okCurve,Standard_Boolean& okCurve3d,Standard_Boolean& okCurve2d,const Handle(IGESData_IGESEntity)& icurve3d,const Handle(ShapeExtend_WireData)& scurve3d,const Standard_Boolean usescurve,const Standard_Boolean toreverse3d,const Handle(IGESData_HArray1OfIGESEntity)& curves2d,const Standard_Boolean toreverse2d,const Standard_Integer number,Handle(ShapeExtend_WireData)& lsewd) ;
  
  Standard_EXPORT   static  void ReverseCurves3d(const Handle(ShapeExtend_WireData)& sewd) ;
  
  Standard_EXPORT   static  void ReverseCurves2d(const Handle(ShapeExtend_WireData)& sewd,const TopoDS_Face& face) ;

IGESToBRep_CurveAndSurface myCS;
Handle_IGESData_IGESEntity myentity;
Handle_ShapeExtend_WireData mysewd;
Handle_ShapeExtend_WireData mysewd3d;
Handle_ShapeExtend_WireData mysewd2d;
TopoDS_Face myface;
gp_Trsf2d mytrsf;
Standard_Real myuFact;
Standard_Integer myfilepreference;


private: 




};


#include <IGESToBRep_IGESBoundary.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
