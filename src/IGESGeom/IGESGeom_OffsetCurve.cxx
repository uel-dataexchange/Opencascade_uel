//--------------------------------------------------------------------
//
//  File Name : IGESGeom_OffsetCurve.cxx
//  Date      :
//  Author    : CKY / Contract Toubro-Larsen
//  Copyright : MATRA-DATAVISION 1993
//
//--------------------------------------------------------------------

#include <IGESGeom_OffsetCurve.ixx>
#include <gp_GTrsf.hxx>


    IGESGeom_OffsetCurve::IGESGeom_OffsetCurve ()     {  }


    void IGESGeom_OffsetCurve::Init
  (const Handle(IGESData_IGESEntity)& aBaseCurve,
   const Standard_Integer anOffsetType,
   const Handle(IGESData_IGESEntity)& aFunction,
   const Standard_Integer aFunctionCoord,
   const Standard_Integer aTaperedOffsetType,
   const Standard_Real    offDistance1, 
   const Standard_Real    anArcLength1, 
   const Standard_Real    offDistance2, 
   const Standard_Real    anArcLength2, 
   const gp_XYZ&          aNormalVec,
   const Standard_Real    anOffsetParam, 
   const Standard_Real    anotherOffsetParam) 
{
  theBaseCurve         = aBaseCurve;
  theOffsetType        = anOffsetType;
  theFunction          = aFunction;
  theFunctionCoord     = aFunctionCoord;
  theTaperedOffsetType = aTaperedOffsetType;
  theOffsetDistance1   = offDistance1;
  theArcLength1        = anArcLength1;
  theOffsetDistance2   = offDistance2;
  theArcLength2        = anArcLength2;
  theNormalVector      = aNormalVec;
  theOffsetParam1      = anOffsetParam;
  theOffsetParam2      = anotherOffsetParam;
  InitTypeAndForm(130,0);
}


    Handle(IGESData_IGESEntity) IGESGeom_OffsetCurve::BaseCurve () const
{
  return theBaseCurve;
}

    Standard_Integer IGESGeom_OffsetCurve::OffsetType () const
{
  return theOffsetType;
}

    Handle(IGESData_IGESEntity) IGESGeom_OffsetCurve::Function () const
{
  return theFunction;
}

    Standard_Integer IGESGeom_OffsetCurve::FunctionParameter () const
{
  return theFunctionCoord;
}

    Standard_Integer IGESGeom_OffsetCurve::TaperedOffsetType () const
{
  return theTaperedOffsetType;
}

    Standard_Real IGESGeom_OffsetCurve::FirstOffsetDistance () const
{
  return theOffsetDistance1;
}

    Standard_Real IGESGeom_OffsetCurve::ArcLength1 () const
{
  return theArcLength1;
}

    Standard_Real IGESGeom_OffsetCurve::SecondOffsetDistance () const
{
  return theOffsetDistance2;
}

    Standard_Real IGESGeom_OffsetCurve::ArcLength2 () const
{
  return theArcLength2;
}

    gp_Vec IGESGeom_OffsetCurve::NormalVector () const
{
  return ( gp_Vec(theNormalVector) );
}

    gp_Vec IGESGeom_OffsetCurve::TransformedNormalVector () const
{
  if (!HasTransf()) return gp_Vec(theNormalVector);
  gp_XYZ tempXYZ(theNormalVector);
  gp_GTrsf loc = Location();
  loc.SetTranslationPart(gp_XYZ(0.,0.,0.));
  loc.Transforms(tempXYZ);
  return gp_Vec(tempXYZ);
}

    Standard_Real IGESGeom_OffsetCurve::StartParameter () const
{  return theOffsetParam1;  }

    Standard_Real IGESGeom_OffsetCurve::EndParameter () const
{  return theOffsetParam2;  }

    void IGESGeom_OffsetCurve::Parameters
  (Standard_Real& TT1, Standard_Real& TT2) const
{
  TT1 = theOffsetParam1;
  TT2 = theOffsetParam2;
}

    Standard_Boolean IGESGeom_OffsetCurve::HasFunction () const
{
  return (! theFunction.IsNull() );
}
