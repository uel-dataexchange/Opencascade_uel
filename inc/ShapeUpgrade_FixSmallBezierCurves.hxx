// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeUpgrade_FixSmallBezierCurves_HeaderFile
#define _ShapeUpgrade_FixSmallBezierCurves_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_ShapeUpgrade_FixSmallBezierCurves_HeaderFile
#include <Handle_ShapeUpgrade_FixSmallBezierCurves.hxx>
#endif

#ifndef _ShapeUpgrade_FixSmallCurves_HeaderFile
#include <ShapeUpgrade_FixSmallCurves.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Geom_Curve;
class Geom2d_Curve;



class ShapeUpgrade_FixSmallBezierCurves : public ShapeUpgrade_FixSmallCurves {

public:

  
  Standard_EXPORT   ShapeUpgrade_FixSmallBezierCurves();
  
  Standard_EXPORT   virtual  Standard_Boolean Approx(Handle(Geom_Curve)& Curve3d,Handle(Geom2d_Curve)& Curve2d,Handle(Geom2d_Curve)& Curve2dR,Standard_Real& First,Standard_Real& Last) ;




  DEFINE_STANDARD_RTTI(ShapeUpgrade_FixSmallBezierCurves)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
