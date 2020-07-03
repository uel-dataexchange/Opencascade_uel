// Created on: 1993-06-11
// Created by: Martine LANGLOIS
// Copyright (c) 1993-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef _StepToGeom_HeaderFile
#define _StepToGeom_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Handle.hxx>

#include <Geom_Axis1Placement.hxx>
#include <Geom_Axis2Placement.hxx>
#include <Geom_BoundedCurve.hxx>
#include <Geom_BoundedSurface.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Geom_CartesianPoint.hxx>
#include <Geom_Circle.hxx>
#include <Geom_Conic.hxx>
#include <Geom_ConicalSurface.hxx>
#include <Geom_Curve.hxx>
#include <Geom_CylindricalSurface.hxx>
#include <Geom_Direction.hxx>
#include <Geom_ElementarySurface.hxx>
#include <Geom_Ellipse.hxx>
#include <Geom_Hyperbola.hxx>
#include <Geom_Line.hxx>
#include <Geom_Parabola.hxx>
#include <Geom_Plane.hxx>
#include <Geom_RectangularTrimmedSurface.hxx>
#include <Geom_SphericalSurface.hxx>
#include <Geom_Surface.hxx>
#include <Geom_SurfaceOfLinearExtrusion.hxx>
#include <Geom_SurfaceOfRevolution.hxx>
#include <Geom_SweptSurface.hxx>
#include <Geom_ToroidalSurface.hxx>
#include <Geom_TrimmedCurve.hxx>
#include <Geom_VectorWithMagnitude.hxx>

#include <Geom2d_AxisPlacement.hxx>
#include <Geom2d_BoundedCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom2d_CartesianPoint.hxx>
#include <Geom2d_Circle.hxx>
#include <Geom2d_Conic.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom2d_Direction.hxx>
#include <Geom2d_Ellipse.hxx>
#include <Geom2d_Hyperbola.hxx>
#include <Geom2d_Line.hxx>
#include <Geom2d_Parabola.hxx>
#include <Geom2d_VectorWithMagnitude.hxx>

#include <gp_Trsf.hxx>
#include <gp_Trsf2d.hxx>

#include <StepGeom_Axis1Placement.hxx>
#include <StepGeom_Axis2Placement2d.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepGeom_BoundedCurve.hxx>
#include <StepGeom_BoundedSurface.hxx>
#include <StepGeom_BSplineCurve.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepGeom_Direction.hxx>

#include <StepGeom_BSplineSurface.hxx>
#include <StepGeom_Circle.hxx>
#include <StepGeom_Conic.hxx>
#include <StepGeom_ConicalSurface.hxx>
#include <StepGeom_Curve.hxx>
#include <StepGeom_CylindricalSurface.hxx>
#include <StepGeom_ElementarySurface.hxx>
#include <StepGeom_Ellipse.hxx>
#include <StepGeom_Hyperbola.hxx>
#include <StepGeom_Line.hxx>
#include <StepGeom_Parabola.hxx>
#include <StepGeom_Plane.hxx>
#include <StepGeom_Polyline.hxx>
#include <StepGeom_RectangularTrimmedSurface.hxx>
#include <StepGeom_SphericalSurface.hxx>
#include <StepGeom_Surface.hxx>
#include <StepGeom_SurfaceOfLinearExtrusion.hxx>
#include <StepGeom_SurfaceOfRevolution.hxx>
#include <StepGeom_SweptSurface.hxx>
#include <StepGeom_ToroidalSurface.hxx>
#include <StepGeom_CartesianTransformationOperator2d.hxx>
#include <StepGeom_CartesianTransformationOperator3d.hxx>
#include <StepGeom_TrimmedCurve.hxx>
#include <StepGeom_Vector.hxx>

//! This class provides static methods to convert STEP geometric entities to OCCT.
//! The methods returning handles will return null handle in case of error.
//! The methods returning boolean will return True if succeeded and False if error.

class StepToGeom
{
public:

  Standard_EXPORT static Handle(Geom_Axis1Placement) MakeAxis1Placement (const Handle(StepGeom_Axis1Placement)& SA);
  Standard_EXPORT static Handle(Geom_Axis2Placement) MakeAxis2Placement (const Handle(StepGeom_Axis2Placement3d)& SA);
  Standard_EXPORT static Handle(Geom2d_AxisPlacement) MakeAxisPlacement (const Handle(StepGeom_Axis2Placement2d)& SA);
  Standard_EXPORT static Handle(Geom_BoundedCurve) MakeBoundedCurve (const Handle(StepGeom_BoundedCurve)& SC);
  Standard_EXPORT static Handle(Geom2d_BoundedCurve) MakeBoundedCurve2d (const Handle(StepGeom_BoundedCurve)& SC);
  Standard_EXPORT static Handle(Geom_BoundedSurface) MakeBoundedSurface (const Handle(StepGeom_BoundedSurface)& SS);
  Standard_EXPORT static Handle(Geom_BSplineCurve) MakeBSplineCurve (const Handle(StepGeom_BSplineCurve)& SC);
  Standard_EXPORT static Handle(Geom2d_BSplineCurve) MakeBSplineCurve2d (const Handle(StepGeom_BSplineCurve)& SC);
  Standard_EXPORT static Handle(Geom_BSplineSurface) MakeBSplineSurface (const Handle(StepGeom_BSplineSurface)& SS);
  Standard_EXPORT static Handle(Geom_CartesianPoint) MakeCartesianPoint (const Handle(StepGeom_CartesianPoint)& SP);
  Standard_EXPORT static Handle(Geom2d_CartesianPoint) MakeCartesianPoint2d (const Handle(StepGeom_CartesianPoint)& SP);
  Standard_EXPORT static Handle(Geom_Circle) MakeCircle (const Handle(StepGeom_Circle)& SC);
  Standard_EXPORT static Handle(Geom2d_Circle) MakeCircle2d (const Handle(StepGeom_Circle)& SC);
  Standard_EXPORT static Handle(Geom_Conic) MakeConic (const Handle(StepGeom_Conic)& SC);
  Standard_EXPORT static Handle(Geom2d_Conic) MakeConic2d (const Handle(StepGeom_Conic)& SC);
  Standard_EXPORT static Handle(Geom_ConicalSurface) MakeConicalSurface (const Handle(StepGeom_ConicalSurface)& SS);
  Standard_EXPORT static Handle(Geom_Curve) MakeCurve (const Handle(StepGeom_Curve)& SC);
  Standard_EXPORT static Handle(Geom2d_Curve) MakeCurve2d (const Handle(StepGeom_Curve)& SC);
  Standard_EXPORT static Handle(Geom_CylindricalSurface) MakeCylindricalSurface (const Handle(StepGeom_CylindricalSurface)& SS);
  Standard_EXPORT static Handle(Geom_Direction) MakeDirection (const Handle(StepGeom_Direction)& SD);
  Standard_EXPORT static Handle(Geom2d_Direction) MakeDirection2d (const Handle(StepGeom_Direction)& SD);
  Standard_EXPORT static Handle(Geom_ElementarySurface) MakeElementarySurface (const Handle(StepGeom_ElementarySurface)& SS);
  Standard_EXPORT static Handle(Geom_Ellipse) MakeEllipse (const Handle(StepGeom_Ellipse)& SC);
  Standard_EXPORT static Handle(Geom2d_Ellipse) MakeEllipse2d (const Handle(StepGeom_Ellipse)& SC);
  Standard_EXPORT static Handle(Geom_Hyperbola) MakeHyperbola (const Handle(StepGeom_Hyperbola)& SC);
  Standard_EXPORT static Handle(Geom2d_Hyperbola) MakeHyperbola2d (const Handle(StepGeom_Hyperbola)& SC);
  Standard_EXPORT static Handle(Geom_Line) MakeLine (const Handle(StepGeom_Line)& SC);
  Standard_EXPORT static Handle(Geom2d_Line) MakeLine2d (const Handle(StepGeom_Line)& SC);
  Standard_EXPORT static Handle(Geom_Parabola) MakeParabola (const Handle(StepGeom_Parabola)& SC);
  Standard_EXPORT static Handle(Geom2d_Parabola) MakeParabola2d (const Handle(StepGeom_Parabola)& SC);
  Standard_EXPORT static Handle(Geom_Plane) MakePlane (const Handle(StepGeom_Plane)& SP);
  Standard_EXPORT static Handle(Geom_BSplineCurve) MakePolyline (const Handle(StepGeom_Polyline)& SPL);
  Standard_EXPORT static Handle(Geom2d_BSplineCurve) MakePolyline2d (const Handle(StepGeom_Polyline)& SPL);
  Standard_EXPORT static Handle(Geom_RectangularTrimmedSurface) MakeRectangularTrimmedSurface (const Handle(StepGeom_RectangularTrimmedSurface)& SS);
  Standard_EXPORT static Handle(Geom_SphericalSurface) MakeSphericalSurface (const Handle(StepGeom_SphericalSurface)& SS);
  Standard_EXPORT static Handle(Geom_Surface) MakeSurface (const Handle(StepGeom_Surface)& SS);
  Standard_EXPORT static Handle(Geom_SurfaceOfLinearExtrusion) MakeSurfaceOfLinearExtrusion (const Handle(StepGeom_SurfaceOfLinearExtrusion)& SS);
  Standard_EXPORT static Handle(Geom_SurfaceOfRevolution) MakeSurfaceOfRevolution (const Handle(StepGeom_SurfaceOfRevolution)& SS);
  Standard_EXPORT static Handle(Geom_SweptSurface) MakeSweptSurface (const Handle(StepGeom_SweptSurface)& SS);
  Standard_EXPORT static Handle(Geom_ToroidalSurface) MakeToroidalSurface (const Handle(StepGeom_ToroidalSurface)& SS);
  Standard_EXPORT static Standard_Boolean MakeTransformation2d (const Handle(StepGeom_CartesianTransformationOperator2d)& SCTO, gp_Trsf2d& CT);
  Standard_EXPORT static Standard_Boolean MakeTransformation3d (const Handle(StepGeom_CartesianTransformationOperator3d)& SCTO, gp_Trsf& CT);
  Standard_EXPORT static Handle(Geom_TrimmedCurve) MakeTrimmedCurve (const Handle(StepGeom_TrimmedCurve)& SC);
  Standard_EXPORT static Handle(Geom2d_BSplineCurve) MakeTrimmedCurve2d (const Handle(StepGeom_TrimmedCurve)& SC);
  Standard_EXPORT static Handle(Geom_VectorWithMagnitude) MakeVectorWithMagnitude (const Handle(StepGeom_Vector)& SV);
  Standard_EXPORT static Handle(Geom2d_VectorWithMagnitude) MakeVectorWithMagnitude2d (const Handle(StepGeom_Vector)& SV);
};

#endif // _StepToGeom_HeaderFile
