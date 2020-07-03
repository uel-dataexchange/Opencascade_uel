// File:	ShapeUpgrade_ShapeDivideContinuity.cxx
// Created:	Fri Apr 30 17:08:45 1999
// Author:	data exchange team
//		<det@friendox.nnov.matra-dtv.fr>


#include <ShapeUpgrade_ShapeDivideContinuity.ixx>

#include <Precision.hxx>
#include <ShapeUpgrade_SplitCurve2dContinuity.hxx>
#include <ShapeUpgrade_SplitCurve3dContinuity.hxx>
#include <ShapeUpgrade_SplitSurfaceContinuity.hxx>
#include <ShapeUpgrade_WireDivide.hxx>
#include <ShapeUpgrade_FaceDivide.hxx>

//=======================================================================
//function : ShapeUpgrade_ShapeDivideContinuity
//purpose  : 
//=======================================================================

ShapeUpgrade_ShapeDivideContinuity::ShapeUpgrade_ShapeDivideContinuity()
{
  myCurve3dCriterion = GeomAbs_C1;
  myCurve2dCriterion = GeomAbs_C1;
  mySurfaceCriterion  = GeomAbs_C1;
  myTolerance3d = Precision::Confusion();
  myTolerance2d = Precision::PConfusion();
}

//=======================================================================
//function : ShapeUpgrade_ShapeDivideContinuity
//purpose  : 
//=======================================================================

ShapeUpgrade_ShapeDivideContinuity::ShapeUpgrade_ShapeDivideContinuity(const TopoDS_Shape& S):
     ShapeUpgrade_ShapeDivide(S)
{
  myCurve3dCriterion = GeomAbs_C1;
  myCurve2dCriterion = GeomAbs_C1;
  mySurfaceCriterion  = GeomAbs_C1;
  myTolerance3d = Precision::Confusion();
  myTolerance2d = Precision::PConfusion();
}

//=======================================================================
//function : SetTolerance
//purpose  : 
//=======================================================================

void ShapeUpgrade_ShapeDivideContinuity::SetTolerance(const Standard_Real Tol)
{
  myTolerance3d = Tol;
}

//=======================================================================
//function : SetTolerance2d
//purpose  : 
//=======================================================================

void ShapeUpgrade_ShapeDivideContinuity::SetTolerance2d(const Standard_Real Tol)
{
  myTolerance2d = Tol;
}

//=======================================================================
//function : SetBoundaryCriterion
//purpose  : 
//=======================================================================

void ShapeUpgrade_ShapeDivideContinuity::SetBoundaryCriterion(const GeomAbs_Shape Criterion)
{
  myCurve3dCriterion = Criterion;
}

//=======================================================================
//function : SetPCurveCriterion
//purpose  : 
//=======================================================================

void ShapeUpgrade_ShapeDivideContinuity::SetPCurveCriterion(const GeomAbs_Shape Criterion)
{
  myCurve2dCriterion = Criterion;
}

//=======================================================================
//function : SetSurfaceCriterion
//purpose  : 
//=======================================================================

void ShapeUpgrade_ShapeDivideContinuity::SetSurfaceCriterion(const GeomAbs_Shape Criterion)
{
  mySurfaceCriterion = Criterion;
}

//=======================================================================
//function : GetSplitFaceTool
//purpose  : 
//=======================================================================

Handle(ShapeUpgrade_FaceDivide) ShapeUpgrade_ShapeDivideContinuity::GetSplitFaceTool() const
{
  Handle(ShapeUpgrade_SplitCurve2dContinuity) theSplitCurve2dTool = new ShapeUpgrade_SplitCurve2dContinuity;
  Handle(ShapeUpgrade_SplitCurve3dContinuity) theSplitCurve3dTool = new ShapeUpgrade_SplitCurve3dContinuity;
  Handle(ShapeUpgrade_SplitSurfaceContinuity) theSplitSurfaceTool = new ShapeUpgrade_SplitSurfaceContinuity;
  theSplitCurve2dTool->SetCriterion (myCurve2dCriterion);
  theSplitCurve3dTool->SetCriterion (myCurve3dCriterion);
  theSplitSurfaceTool->SetCriterion (mySurfaceCriterion);
  theSplitCurve2dTool->SetTolerance (myTolerance2d);
  theSplitCurve3dTool->SetTolerance (myTolerance3d);
  theSplitSurfaceTool->SetTolerance (myTolerance3d);
  Handle(ShapeUpgrade_WireDivide) theSplitWireTool = new ShapeUpgrade_WireDivide;
  theSplitWireTool->SetSplitCurve2dTool ( theSplitCurve2dTool );
  theSplitWireTool->SetSplitCurve3dTool ( theSplitCurve3dTool );
  Handle(ShapeUpgrade_FaceDivide) theSplitFaceTool = new ShapeUpgrade_FaceDivide;
  theSplitFaceTool->SetSplitSurfaceTool ( theSplitSurfaceTool );
  theSplitFaceTool->SetWireDivideTool ( theSplitWireTool );
  return theSplitFaceTool;
}
