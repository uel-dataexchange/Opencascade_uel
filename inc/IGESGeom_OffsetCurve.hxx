// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESGeom_OffsetCurve_HeaderFile
#define _IGESGeom_OffsetCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESGeom_OffsetCurve_HeaderFile
#include <Handle_IGESGeom_OffsetCurve.hxx>
#endif

#ifndef _Handle_IGESData_IGESEntity_HeaderFile
#include <Handle_IGESData_IGESEntity.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _gp_XYZ_HeaderFile
#include <gp_XYZ.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class IGESData_IGESEntity;
class gp_XYZ;
class gp_Vec;


//! defines IGESOffsetCurve, Type <130> Form <0> <br>
//!          in package IGESGeom <br>
//!          An OffsetCurve entity contains the data necessary to <br>
//!          determine the offset of a given curve C. This entity <br>
//!          points to the base curve to be offset and contains <br>
//!          offset distance and other pertinent information. <br>
class IGESGeom_OffsetCurve : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESGeom_OffsetCurve();
  //! This method is used to set the fields of the class <br>
//!           OffsetCurve <br>
//!       - aBaseCurve         : The curve entity to be offset <br>
//!       - anOffsetType       : Offset distance flag <br>
//!                              1 = Single value, uniform distance <br>
//!                              2 = Varying linearly <br>
//!                              3 = As a specified function <br>
//!       - aFunction          : Curve entity, one coordinate of which <br>
//!                              describes offset as a function of its <br>
//!                              parameter (0 unless OffsetType = 3) <br>
//!       - aFunctionCoord     : Particular coordinate of curve <br>
//!                              describing offset as function of its <br>
//!                              parameters. (used if OffsetType = 3) <br>
//!       - aTaperedOffsetType : Tapered offset type flag <br>
//!                              1 = Function of arc length <br>
//!                              2 = Function of parameter <br>
//!                              (Only used if OffsetType = 2 or 3) <br>
//!       - offDistance1       : First offset distance <br>
//!                              (Only used if OffsetType = 1 or 2) <br>
//!       - arcLength1         : Arc length or parameter value of <br>
//!                              first offset distance <br>
//!                              (Only used if OffsetType = 2) <br>
//!       - offDistance2       : Second offset distance <br>
//!       - arcLength2         : Arc length or parameter value of <br>
//!                              second offset distance <br>
//!                              (Only used if OffsetType = 2) <br>
//!       - aNormalVec         : Unit vector normal to plane containing <br>
//!                              curve to be offset <br>
//!       - anOffsetParam      : Start parameter value of offset curve <br>
//!       - anotherOffsetParam : End parameter value of offset curve <br>
  Standard_EXPORT     void Init(const Handle(IGESData_IGESEntity)& aBaseCurve,const Standard_Integer anOffsetType,const Handle(IGESData_IGESEntity)& aFunction,const Standard_Integer aFunctionCoord,const Standard_Integer aTaperedOffsetType,const Standard_Real offDistance1,const Standard_Real arcLength1,const Standard_Real offDistance2,const Standard_Real arcLength2,const gp_XYZ& aNormalVec,const Standard_Real anOffsetParam,const Standard_Real anotherOffsetParam) ;
  //! returns the curve to be offset <br>
  Standard_EXPORT     Handle_IGESData_IGESEntity BaseCurve() const;
  //! returns the offset distance flag <br>
//! 1 = Single value offset (uniform distance) <br>
//! 2 = Offset distance varying linearly <br>
//! 3 = Offset distance specified as a function <br>
  Standard_EXPORT     Standard_Integer OffsetType() const;
  //! returns the function defining the offset if at all the offset <br>
//! is described as a function or Null Handle. <br>
  Standard_EXPORT     Handle_IGESData_IGESEntity Function() const;
  //! returns True if function defining the offset is present. <br>
  Standard_EXPORT     Standard_Boolean HasFunction() const;
  //! returns particular coordinate of the curve which describes offset <br>
//! as a function of its parameters. (only used if OffsetType() = 3) <br>
  Standard_EXPORT     Standard_Integer FunctionParameter() const;
  //! returns tapered offset type flag (only used if OffsetType() = 2 or 3) <br>
//! 1 = Function of arc length <br>
//! 2 = Function of parameter <br>
  Standard_EXPORT     Standard_Integer TaperedOffsetType() const;
  //! returns first offset distance (only used if OffsetType() = 1 or 2) <br>
  Standard_EXPORT     Standard_Real FirstOffsetDistance() const;
  //! returns arc length or parameter value (depending on value of <br>
//! offset distance flag) of first offset distance <br>
//! (only used if OffsetType() = 2) <br>
  Standard_EXPORT     Standard_Real ArcLength1() const;
  //! returns the second offset distance <br>
  Standard_EXPORT     Standard_Real SecondOffsetDistance() const;
  //! returns arc length or parameter value (depending on value of <br>
//! offset distance flag) of second offset distance <br>
//! (only used if OffsetType() = 2) <br>
  Standard_EXPORT     Standard_Real ArcLength2() const;
  //! returns unit vector normal to plane containing curve to be offset <br>
  Standard_EXPORT     gp_Vec NormalVector() const;
  //! returns unit vector normal to plane containing curve to be offset <br>
//! after applying Transf. Matrix <br>
  Standard_EXPORT     gp_Vec TransformedNormalVector() const;
  
  Standard_EXPORT     void Parameters(Standard_Real& StartParam,Standard_Real& EndParam) const;
  //! returns Start Parameter value of the offset curve <br>
  Standard_EXPORT     Standard_Real StartParameter() const;
  //! returns End   Parameter value of the offset curve <br>
  Standard_EXPORT     Standard_Real EndParameter() const;




  DEFINE_STANDARD_RTTI(IGESGeom_OffsetCurve)

protected:




private: 


Handle_IGESData_IGESEntity theBaseCurve;
Standard_Integer theOffsetType;
Handle_IGESData_IGESEntity theFunction;
Standard_Integer theFunctionCoord;
Standard_Integer theTaperedOffsetType;
Standard_Real theOffsetDistance1;
Standard_Real theArcLength1;
Standard_Real theOffsetDistance2;
Standard_Real theArcLength2;
gp_XYZ theNormalVector;
Standard_Real theOffsetParam1;
Standard_Real theOffsetParam2;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
