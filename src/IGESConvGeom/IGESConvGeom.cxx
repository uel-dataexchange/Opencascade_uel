// Copyright: 	Matra-Datavision 1994
// File:	IGESConvGeom.cxx
// Created:	Thu Sep  1 16:00:17 1994
// Author:	Christian CAILLET
//		<cky>
// modif du 31/01/97 : mjm
// on commence par les SplineCurves.
// modif du 17/03/97 : mjm
// SplineSurfaces.
//%13 pdn 12.02.99: USA60293 avoid applying transformation twice



#include <IGESConvGeom.ixx>

#include <IGESData_ToolLocation.hxx>

#include <BSplCLib.hxx>

#include <BSplSLib.hxx>

#include <gp_GTrsf.hxx>
#include <gp_Trsf.hxx>
#include <GeomConvert_CompCurveToBSplineCurve.hxx>
#include <PLib.hxx>

#include <TColgp_HArray1OfPnt.hxx>
#include <TColgp_HArray2OfPnt.hxx>
  
#include <TColStd_Array1OfInteger.hxx>
#include <TColStd_Array1OfReal.hxx>
#include <TColStd_HArray1OfReal.hxx>

#include <TColStd_Array1OfReal.hxx>
#include <TColStd_HArray2OfReal.hxx>
#include <IGESBasic_HArray2OfHArray1OfReal.hxx>

//#ifdef __cplusplus
extern "C" 
{
//#endif
	INT IZMcBspPsp( UINT_PTR, IKGeoCrvAttr *, INT *, IKPSpCrvAttr **);
	INT IICsBspPsp(UINT_PTR,IKSFSrfAttr *,DOUBLE [2], INT *, IKPSpSrfAttr **);
//#ifdef __cplusplus
}
//#endif

INT IdxSnpId = 88;
const UINT PAGE_ID = 888888;

//=======================================================================
//function : IGESConvGeom::SplineCurveFromIGES
//purpose  : 
//=======================================================================
Standard_Integer  IGESConvGeom::SplineCurveFromIGES
  (const Handle(IGESGeom_SplineCurve)& st,
   const Standard_Real /*epscoef*/,  const Standard_Real epsgeom,
   Handle(Geom_BSplineCurve)& res)
{
  Standard_Integer returned = 0;

  // on recupere le degre
  Standard_Integer degree = st->SplineType();
  if (degree > 3) degree = 3;

  // on recupere le nombre de segments.
  Standard_Integer nbSegs  = st->NbSegments();  
  if (nbSegs < 1) return 5;            // FAIL : no segment

  Standard_Integer nbKnots = nbSegs+1;          

  // Array of multiplicities.  
  TColStd_Array1OfInteger multi(1, nbKnots); 
  multi.Init(degree);
  multi.SetValue(multi.Lower(), degree+1);
  multi.SetValue(multi.Upper(), degree+1);

  // Array of knots.  
  TColStd_Array1OfReal knots(1, nbKnots);                 
  TColStd_Array1OfReal delta(1, nbSegs);
  Standard_Integer i; // svv Jan 10 2000 : porting on DEC
  for (i = 1; i<= nbKnots; i++)
    knots.SetValue(i, st->BreakPoint(i));

  for (i = 1; i <= nbSegs; i++) 
    delta.SetValue(i, st->BreakPoint(i+1) - st->BreakPoint(i));

  TColgp_Array1OfPnt bspoles(1, nbSegs*degree+1);
  Standard_Integer ibspole = bspoles.Lower()-1;              // Bspole Index.
  // il faut reparametrer avant de passer dans PLib.
  // on est entre[0, T(i+1)-T(i)] et on veut [0,1]

  for (i = 1; i <= nbSegs; i++) {
    Standard_Real AX,BX,CX,DX,AY,BY,CY,DY,AZ,BZ,CZ,DZ;
    st->XCoordPolynomial(i, AX, BX, CX, DX);
    st->YCoordPolynomial(i, AY, BY, CY, DY);
    st->ZCoordPolynomial(i, AZ, BZ, CZ, DZ);
    if (st->NbDimensions() == 2 ) BZ=0.,CZ=0.,DZ=0.; 
    Standard_Real Di  = delta(i);
    Standard_Real Di2 = delta(i)*delta(i);
    Standard_Real Di3 = delta(i)*delta(i)*delta(i);

    TColgp_Array1OfPnt coeff(0, degree);
    switch (degree) {
    case 3 :
      coeff.SetValue(coeff.Lower()+3, gp_Pnt(DX*Di3, DY*Di3, DZ*Di3));
    case 2 :
      coeff.SetValue(coeff.Lower()+2, gp_Pnt(CX*Di2, CY*Di2, CZ*Di2));
    case 1 :
      coeff.SetValue(coeff.Lower()+1, gp_Pnt(BX*Di, BY*Di, BZ*Di));
      coeff.SetValue(coeff.Lower()+0, gp_Pnt(AX, AY, AZ));
      break;
    default:
      break;
    }


    TColgp_Array1OfPnt bzpoles(0, degree);
    PLib::CoefficientsPoles(coeff,PLib::NoWeights(),bzpoles,PLib::NoWeights());

    // C0 test.
    // Not to check the first pole of the first segment.
    if (ibspole > bspoles.Lower()) {  
      Standard_Integer bzlow = bzpoles.Lower();
      if (!(bspoles.Value(ibspole).IsEqual(bzpoles.Value(bzlow), epsgeom))) {
	returned = 1;
	// Medium point computing.
	bspoles.SetValue (ibspole, 
	   gp_Pnt((bspoles.Value(ibspole).X() + bzpoles.Value(bzlow).X())/2.,
		  (bspoles.Value(ibspole).Y() + bzpoles.Value(bzlow).Y())/2.,
		  (bspoles.Value(ibspole).Z() + bzpoles.Value(bzlow).Z())/2.));
      }
    }
    if (i == 1) bspoles.SetValue(++ibspole, bzpoles.Value(bzpoles.Lower()));

    for (Standard_Integer j = bzpoles.Lower()+1; j <= bzpoles.Upper(); j++) 
      bspoles.SetValue(++ibspole, bzpoles.Value(j));
  }
  if (ibspole != bspoles.Upper()) {   
    // Just to be sure.
    return 3;           // FAIL : Error during creation of control points
  }

  //  Building result taking into account transformation if any :
  //  ===========================================================
  
  //%13 pdn 12.02.99 USA60293
//  if (st->HasTransf()) {
//    gp_Trsf trsf;
//    Standard_Real epsilon = 1.E-04;
//    if (IGESData_ToolLocation::ConvertLocation
//	(epsilon,st->CompoundLocation(),trsf)) { 
//      for (Standard_Integer i = bspoles.Lower(); i <= bspoles.Upper(); i++) 
//	bspoles.SetValue(i, bspoles.Value(i).Transformed(trsf));
//    }
//    else
//      AddFail(st, "Transformation : not a similarity");
//  }
  res = new Geom_BSplineCurve (bspoles, knots, multi, degree);
//  GeomConvert_CompCurveToBSplineCurve CompCurve = 
//    GeomConvert_CompCurveToBSplineCurve(res);
//  res = CompCurve.BSplineCurve();
  return returned;
}



//=======================================================================
//function : IGESConvGeom::IncreaseCurveContinuity
//purpose  : 
//=======================================================================
Standard_Integer IGESConvGeom::IncreaseCurveContinuity (const Handle(Geom_BSplineCurve)& res,
                                                        const Standard_Real epsgeom,
                                                        const Standard_Integer continuity)
{
  if (continuity < 1) return continuity;
  Standard_Boolean isC1 = Standard_True, isC2 = Standard_True;
  Standard_Integer degree = res->Degree();

  
  Standard_Boolean isModified;
  do {
    isModified = Standard_False;
    for (Standard_Integer i = res->FirstUKnotIndex()+1; i < res->LastUKnotIndex(); i++) 
      if(degree - res->Multiplicity(i) < continuity) {
        if (continuity >= 2) {
          if (!res->RemoveKnot(i, degree-2, epsgeom)) {
            isC2 = Standard_False;
            Standard_Boolean locOK = res->RemoveKnot(i, degree-1, epsgeom);   // is C1 ?
            isC1 &= locOK;
            isModified |= locOK;
          }
          else
            isModified = Standard_True;
        }
        else {
          Standard_Boolean locOK = res->RemoveKnot(i, degree-1, epsgeom);   // is C1 ?
          isC1 &= locOK;
          isModified |= locOK;
        }
      }
  }
  while (isModified);
    
  if (!isC1) return 0;
  if (continuity >= 2 && !isC2) return 1;
  return continuity;
}

//=======================================================================
//function : IncreaseCurveContinuity
//purpose  : 
//=======================================================================

Standard_Integer IGESConvGeom::IncreaseCurveContinuity (const Handle(Geom2d_BSplineCurve)& res,
                                                        const Standard_Real epsgeom,
                                                        const Standard_Integer continuity)
{
  if (continuity < 1) return continuity;
  Standard_Boolean isC1 = Standard_True, isC2 = Standard_True;
  Standard_Integer degree = res->Degree();

  Standard_Boolean isModified;
  do {
    isModified = Standard_False;
    for (Standard_Integer i = res->FirstUKnotIndex()+1; i < res->LastUKnotIndex(); i++) 
      if(degree - res->Multiplicity(i) < continuity) {
        if (continuity >= 2) {
          if (!res->RemoveKnot(i, degree-2, epsgeom)) {
            isC2 = Standard_False;
            Standard_Boolean locOK = res->RemoveKnot(i, degree-1, epsgeom);   // is C1 ?
            isC1 &= locOK;
            isModified |= locOK;
          }
          else
            isModified = Standard_True;
        }
        else {
          Standard_Boolean locOK = res->RemoveKnot(i, degree-1, epsgeom);   // is C1 ?
          isC1 &= locOK;
          isModified |= locOK;
        }
      }
  }
  while (isModified);

  if (!isC1) return 0;
  if (continuity >= 2 && !isC2) return 1;
  return continuity;
}


//=======================================================================
//function : IGESConvGeom::SplineSurfaceFromIGES
//purpose  : 
//=======================================================================
Standard_Integer  IGESConvGeom::SplineSurfaceFromIGES
  (const Handle(IGESGeom_SplineSurface)& st,
   const Standard_Real /*epscoef*/,  const Standard_Real epsgeom,
   Handle(Geom_BSplineSurface)& res)
{
  Standard_Integer returned = 0;
  Standard_Integer degree = st->BoundaryType();
  if (degree > 3) degree = 3;
  Standard_Integer DegreeU = degree;
  Standard_Integer DegreeV = degree;
  
  Standard_Integer  NbUSeg = st->NbUSegments();  
  Standard_Integer  NbVSeg = st->NbVSegments();  
  
  if ((NbUSeg < 1) || (NbVSeg < 1)) return 5;
  
  //  Output BSpline knots & multiplicities arraies for U & V :
  //  =========================================================

  TColStd_Array1OfReal  UKnot(1,NbUSeg+1);
  TColStd_Array1OfReal  VKnot(1,NbVSeg+1);
  TColStd_Array1OfReal  deltaU(1,NbUSeg);
  TColStd_Array1OfReal  deltaV(1,NbVSeg);

  Standard_Integer i; // svv Jan 10 2000 : porting on DEC
  for (i=1; i <= NbUSeg+1; i++)
    UKnot.SetValue(i, st->UBreakPoint(i));

  for (i=1; i <= NbUSeg; i++)
    deltaU.SetValue(i, st->UBreakPoint(i+1)- st->UBreakPoint(i));

  for (i=1; i <= NbVSeg+1; i++)
    VKnot.SetValue(i, st->VBreakPoint(i));

  for (i=1; i <= NbVSeg; i++) 
    deltaV.SetValue(i, st->VBreakPoint(i+1)- st->VBreakPoint(i));

  TColStd_Array1OfInteger  UMult(1,NbUSeg+1); UMult.Init(DegreeU);
  UMult.SetValue(UMult.Lower(),DegreeU+1);
  UMult.SetValue(UMult.Upper(),DegreeU+1);

  TColStd_Array1OfInteger  VMult(1,NbVSeg+1); VMult.Init(DegreeV);
  VMult.SetValue(VMult.Lower(),DegreeV+1);
  VMult.SetValue(VMult.Upper(),DegreeV+1);
      
  
  //  Poles computing
  //  ===============
  
  Standard_Integer  NbUPoles  =  NbUSeg * DegreeU + 1;
  Standard_Integer  NbVPoles  =  NbVSeg * DegreeV + 1;  
  
  TColgp_Array2OfPnt  BsPole(1, NbUPoles, 1, NbVPoles);

  Standard_Integer  iBs, jBs, iBz, jBz;
  Standard_Boolean  wasC0 = Standard_True;
  
  //  Patch (1,1)
  //  ===========
  Standard_Integer USeg, VSeg, j;
  USeg = 1;
  VSeg = 1;
  
  Handle(TColStd_HArray1OfReal) XPoly = st->XPolynomial(USeg, VSeg);
  Handle(TColStd_HArray1OfReal) YPoly = st->YPolynomial(USeg, VSeg);
  Handle(TColStd_HArray1OfReal) ZPoly = st->ZPolynomial(USeg, VSeg);
  
  TColgp_Array2OfPnt Coef(1, DegreeU+1, 1, DegreeV+1);
  Standard_Real ParamU, ParamV;
  ParamU = 1.;
  for (i=1; i<=DegreeU+1; i++) {
    ParamV = 1.;
    for (j=1; j<=DegreeV+1; j++) {
      Standard_Integer PolyIndex = i + 4*(j-1);
      gp_Pnt aPoint(XPoly->Value(PolyIndex)*ParamU*ParamV, 
		    YPoly->Value(PolyIndex)*ParamU*ParamV, 
		    ZPoly->Value(PolyIndex)*ParamU*ParamV);
      Coef.SetValue(i, j, aPoint);
      ParamV = ParamV *deltaV(VSeg);
    }
    ParamU = ParamU * deltaU(USeg);
  }  
  TColgp_Array2OfPnt BzPole(1, DegreeU+1, 1, DegreeV+1);
  PLib::CoefficientsPoles(Coef,PLib::NoWeights2(),BzPole,PLib::NoWeights2());
  
  iBs = BsPole.LowerRow();
  jBs = BsPole.LowerCol();
  
  //  Making output BSpline poles array :
  for (iBz=BzPole.LowerRow(); iBz<=BzPole.UpperRow(); iBz++) {
    for (jBz=BzPole.LowerCol(); jBz<=BzPole.UpperCol(); jBz++)
      BsPole.SetValue(iBs, jBs++, BzPole.Value(iBz,jBz));
    jBs = BsPole.LowerCol();
    iBs++;
  }


  //  Patches (1<USeg<NbUSeg, 1)
  //  ==========================
  
  VSeg = 1;
  for (USeg=2; USeg<=NbUSeg; USeg++) {
    XPoly = st->XPolynomial(USeg, VSeg);
    YPoly = st->YPolynomial(USeg, VSeg);
    ZPoly = st->ZPolynomial(USeg, VSeg);
    Standard_Real ParamU, ParamV;
    ParamU = 1.;
    for (i=Coef.LowerRow(); i<=Coef.UpperRow(); i++) {
      ParamV = 1.;
      for (j=Coef.LowerCol(); j<=Coef.UpperCol(); j++) {
	Standard_Integer PolyIndex = i + 4*(j-1);
	gp_Pnt aPoint;
	aPoint.SetCoord(XPoly->Value(PolyIndex)*ParamU*ParamV, 
			YPoly->Value(PolyIndex)*ParamU*ParamV, 
			ZPoly->Value(PolyIndex)*ParamU*ParamV);
	Coef.SetValue(i, j, aPoint);
	ParamV = ParamV *deltaV(VSeg);
      }
      ParamU = ParamU * deltaU(USeg);
    }
    PLib::CoefficientsPoles(Coef,PLib::NoWeights2(),BzPole,PLib::NoWeights2());

    //  C0 check and correction for poles lying on isoparametrics U=0 & V=0
    Standard_Integer  iBs = BsPole.LowerRow() + (USeg-1)*DegreeU;
    Standard_Integer  jBs = BsPole.LowerCol();
    iBz = BzPole.LowerRow();
    for (jBz=BzPole.LowerCol(); jBz<=BzPole.UpperCol(); jBz++) {
     if (!BzPole.Value(iBz,jBz).IsEqual(BsPole.Value(iBs,jBs), epsgeom)) {
	wasC0=Standard_False;
	gp_Pnt MidPoint;
	Standard_Real  XCoord = 
	  0.5 * (BzPole.Value(iBz,jBz).X() + BsPole.Value(iBs,jBs).X());
	Standard_Real  YCoord = 
	  0.5 * (BzPole.Value(iBz,jBz).Y() + BsPole.Value(iBs,jBs).Y());
	Standard_Real  ZCoord = 
	  0.5 * (BzPole.Value(iBz,jBz).Z() + BsPole.Value(iBs,jBs).Z());
	MidPoint.SetCoord(XCoord, YCoord, ZCoord);
	BsPole.SetValue(iBs, jBs++, MidPoint);
      }
      else {
	BsPole.SetValue(iBs, jBs++, BzPole.Value(iBz,jBz));
      }
    }
    
    //  Other poles (no check about C0) :
    iBs++;
    jBs = BsPole.LowerCol();
    for (iBz=BzPole.LowerRow()+1; iBz<=BzPole.UpperRow(); iBz++) {
      for (jBz=BzPole.LowerCol(); jBz<=BzPole.UpperCol(); jBz++)
	BsPole.SetValue(iBs, jBs++, BzPole.Value(iBz,jBz));
      iBs++;
      jBs = BsPole.LowerCol();
    }
  }
      
      
      
  //  Patches (1, 1<VSeg<NbVSeg)
  //  ==========================
  
  USeg = 1;
  for (VSeg=2; VSeg <= NbVSeg; VSeg++) {
    XPoly = st->XPolynomial(USeg, VSeg);
    YPoly = st->YPolynomial(USeg, VSeg);
    ZPoly = st->ZPolynomial(USeg, VSeg);
    Standard_Real ParamU, ParamV;
    ParamU = 1.;
    for (i=Coef.LowerRow(); i<=Coef.UpperRow(); i++) {
      ParamV = 1.;
      for (j=Coef.LowerCol(); j<=Coef.UpperCol(); j++) {
	Standard_Integer PolyIndex = i + 4*(j-1);
	gp_Pnt aPoint;
	aPoint.SetCoord(XPoly->Value(PolyIndex)*ParamU*ParamV, 
			YPoly->Value(PolyIndex)*ParamU*ParamV, 
			ZPoly->Value(PolyIndex)*ParamU*ParamV);
	Coef.SetValue(i, j, aPoint);
	ParamV = ParamV *deltaV(VSeg);
      }
      ParamU = ParamU * deltaU(USeg);
    }
    PLib::CoefficientsPoles(Coef,PLib::NoWeights2(),BzPole,PLib::NoWeights2());

    //  C0 check and correction for poles lying on isoparametrics U=0 & V=0
    iBs = BsPole.LowerRow();
    jBs = BsPole.LowerCol() + (VSeg-1)*DegreeV;
    jBz = BzPole.LowerCol();
    for (iBz=BzPole.LowerRow(); iBz<=BzPole.UpperRow(); iBz++) {
      if (!BzPole.Value(iBz,jBz).IsEqual(BsPole.Value(iBs,jBs), epsgeom)) {
	wasC0=Standard_False;
	gp_Pnt MidPoint;
	Standard_Real  XCoord = 0.5 * 
	  (BzPole.Value(iBz,jBz).X() + BsPole.Value(iBs,jBs).X());
	Standard_Real  YCoord = 0.5 * 
	  (BzPole.Value(iBz,jBz).Y() + BsPole.Value(iBs,jBs).Y());
	Standard_Real  ZCoord = 0.5 * 
	  (BzPole.Value(iBz,jBz).Z() + BsPole.Value(iBs,jBs).Z());
	MidPoint.SetCoord(XCoord, YCoord, ZCoord);
	BsPole.SetValue(iBs++, jBs, MidPoint);
      }
      else{
	BsPole.SetValue(iBs++, jBs, BzPole.Value(iBz,jBz));
      }
    }

    jBs++;
    iBs = BsPole.LowerRow();
    for (jBz=BzPole.LowerCol()+1; jBz<=BzPole.UpperCol(); jBz++) {
      for (iBz=BzPole.LowerRow(); iBz<=BzPole.UpperRow(); iBz++) 
        BsPole.SetValue(iBs++, jBs, BzPole.Value(iBz,jBz));
      iBs = BsPole.LowerRow();
      jBs++;
    }
  }
  
  
  //  Patches (1<USeg<NbUSeg, 1<VSeg<NbVSeg)
  //  ======================================  
  
  for (VSeg=2; VSeg <= NbVSeg; VSeg++) {
    for (USeg=2; USeg <= NbUSeg; USeg++) {
      XPoly = st->XPolynomial(USeg, VSeg);
      YPoly = st->YPolynomial(USeg, VSeg);
      ZPoly = st->ZPolynomial(USeg, VSeg);
      Standard_Real ParamU, ParamV;
      ParamU = 1.;
      for (i=Coef.LowerRow(); i<=Coef.UpperRow(); i++) {
	ParamV = 1.;
	for (j=Coef.LowerCol(); j<=Coef.UpperCol(); j++) {
	  Standard_Integer PolyIndex = i + 4*(j-1);
	  gp_Pnt aPoint;
	  aPoint.SetCoord(XPoly->Value(PolyIndex)*ParamU*ParamV, 
			  YPoly->Value(PolyIndex)*ParamU*ParamV, 
			  ZPoly->Value(PolyIndex)*ParamU*ParamV);
	  Coef.SetValue(i, j, aPoint);
	  ParamV = ParamV *deltaV(VSeg);	  
	}
	ParamU = ParamU * deltaU(USeg);
      }
      PLib::CoefficientsPoles(Coef,PLib::NoWeights2(),BzPole,PLib::NoWeights2());

      //  C0 check and correction for poles lying on isoparametrics U=0 & V=0
      iBs = (USeg-1)*DegreeU + BsPole.LowerRow();
      jBs = (VSeg-1)*DegreeV + BsPole.LowerCol();
      jBz = BzPole.LowerCol();
      for (iBz=BzPole.LowerRow(); iBz<=BzPole.UpperRow(); iBz++) {
	if (!BzPole.Value(iBz,jBz).IsEqual(BsPole.Value(iBs,jBs), epsgeom)) {
	  wasC0=Standard_False;
	  gp_Pnt MidPoint;
	  Standard_Real  XCoord = 0.5 * 
	    (BzPole.Value(iBz,jBz).X() + BsPole.Value(iBs,jBs).X());
	  Standard_Real  YCoord = 0.5 * 
	    (BzPole.Value(iBz,jBz).Y() + BsPole.Value(iBs,jBs).Y());
	  Standard_Real  ZCoord = 0.5 * 
	    (BzPole.Value(iBz,jBz).Z() + BsPole.Value(iBs,jBs).Z());
	  MidPoint.SetCoord(XCoord, YCoord, ZCoord);
	  BsPole.SetValue(iBs++, jBs, MidPoint);
	}
	else
	  BsPole.SetValue(iBs++, jBs, BzPole.Value(iBz,jBz));
      }
      
      iBs = (USeg-1)*DegreeU + BsPole.LowerRow();
      iBz = BzPole.LowerRow();
      for (jBz=BzPole.LowerCol(); jBz<=BzPole.UpperCol(); jBz++) {
	//  C0 check and correction for poles lying on isoparametrics U=0 & V=0
	if (!BzPole.Value(iBz,jBz).IsEqual(BsPole.Value(iBs,jBs), epsgeom)) {
	  wasC0=Standard_False;
	  gp_Pnt MidPoint;
	  Standard_Real  XCoord = 0.5 * 
	    (BzPole.Value(iBz,jBz).X() + BsPole.Value(iBs,jBs).X());
	  Standard_Real  YCoord = 0.5 * 
	    (BzPole.Value(iBz,jBz).Y() + BsPole.Value(iBs,jBs).Y());
	  Standard_Real  ZCoord = 0.5 * 
	    (BzPole.Value(iBz,jBz).Z() + BsPole.Value(iBs,jBs).Z());
	  MidPoint.SetCoord(XCoord, YCoord, ZCoord);
	  BsPole.SetValue(iBs, jBs++, MidPoint);
	}
	else 
	  BsPole.SetValue(iBs, jBs++, BzPole.Value(iBz,jBz));
      }

      iBs = BsPole.LowerRow() + (USeg-1)*DegreeU + 1;
      jBs = BsPole.LowerCol() + (VSeg-1)*DegreeV + 1;
      for (iBz=BzPole.LowerRow()+1; iBz<=BzPole.UpperRow(); iBz++) {
	for (jBz=BzPole.LowerCol()+1; jBz<=BzPole.UpperCol(); jBz++)
	  BsPole.SetValue(iBs, jBs++, BzPole.Value(iBz,jBz));
	jBs = BsPole.LowerCol() + (VSeg-1)*DegreeV + 1;
	iBs++;
      }
    }
  }

  //  Building result taking into account transformation if any :
  //  ===========================================================

  if (st->HasTransf()) {
    gp_GTrsf GSplTrsf(st->CompoundLocation());
    gp_Trsf  SplTrsf;
    Standard_Real epsilon = 1.E-04;
    if (IGESData_ToolLocation::ConvertLocation(epsilon,GSplTrsf,SplTrsf)) 
      for (iBs=BsPole.LowerRow(); iBs<=BsPole.UpperRow(); iBs++) 
	for (jBs=BsPole.LowerCol(); jBs<=BsPole.UpperCol(); jBs++) 
	  BsPole.SetValue(iBs, jBs, BsPole.Value(iBs,jBs).Transformed(SplTrsf));
//    else
//      AddWarning(start, "Transformation skipped : Not a similarity");
  }

  res = new Geom_BSplineSurface
    (BsPole, UKnot, VKnot, UMult, VMult, DegreeU, DegreeV);
  if (wasC0) returned += 1;
  return returned;
}


//=======================================================================
//function : IGESConvGeom::IncreaseSurfaceContinuity
//purpose  : 
//=======================================================================
Standard_Integer IGESConvGeom::IncreaseSurfaceContinuity  (const Handle(Geom_BSplineSurface)& res,
                                                           const Standard_Real epsgeom,
                                                           const Standard_Integer continuity)
{
  if (continuity < 1) return continuity;
  Standard_Boolean isC1 = Standard_True, isC2 = Standard_True;
  Standard_Integer i,j;

  i = res->LastUKnotIndex();   //knots.Upper();
  j = res->FirstUKnotIndex();  //knots.Lower();
  Standard_Integer DegreeU = res->UDegree();
  
  Standard_Boolean isModified;
  do {
    isModified = Standard_False;
    for (i = res->FirstUKnotIndex()+1; i < res->LastUKnotIndex(); i++) 
      if(DegreeU - res->UMultiplicity(i) < continuity) {
        if (continuity >= 2) {
          if (!res->RemoveUKnot(i, DegreeU-2, epsgeom)) {
            isC2 = Standard_False;
            Standard_Boolean locOK = res->RemoveUKnot(i, DegreeU-1, epsgeom);   // is C1 ?
            isC1 &= locOK;
            isModified |= locOK;
          }
          else
            isModified = Standard_True;
        }
        else {
          Standard_Boolean locOK = res->RemoveUKnot(i, DegreeU-1, epsgeom);   // is C1 ?
          isC1 &= locOK;
          isModified |= locOK;
        }
      }
  }
  while (isModified);
  
  Standard_Integer DegreeV = res->VDegree();
  do {
    isModified = Standard_False;
    for (i = res->FirstVKnotIndex()+1; i < res->LastVKnotIndex(); i++) 
      if(DegreeV - res->VMultiplicity(i) < continuity) {
        if (continuity >= 2) {
          if (!res->RemoveVKnot(i, DegreeV-2, epsgeom)) {
            isC2 = Standard_False;
            Standard_Boolean locOK = res->RemoveVKnot(i, DegreeV-1, epsgeom);   // is C1 ?
            isC1 &= locOK;
            isModified |= locOK;
          }
          else
            isModified = Standard_True;
        }
        else {
          Standard_Boolean locOK = res->RemoveVKnot(i, DegreeV-1, epsgeom);   // is C1 ?
          isC1 &= locOK;
          isModified |= locOK;
        }
      }
  }
  while (isModified);
    
  /*
  while (--i > j) {                                      // from 2 to NbKnots-1
    if (continuity >= 2) {
      if (!res->RemoveUKnot(i, DegreeU-2, epsgeom)) {    // is C2 ?
	isC2 = Standard_False;
	isC1 &= res->RemoveUKnot(i, DegreeU-1, epsgeom); // is C1 ?
      }
    }
    else {
      isC1 &= res->RemoveUKnot(i, DegreeU-1, epsgeom); // is C1 ?
    }
  }

  i = res->LastVKnotIndex();   //knots.Upper();
  j = res->FirstVKnotIndex();  //knots.Lower();
  Standard_Integer DegreeV = res->VDegree();
  while (--i > j) {                                      // from 2 to NbKnots-1
    if (continuity >= 2) {
      if (!res->RemoveVKnot(i, DegreeV-2, epsgeom)) {    // is C2 ?
	isC2 = Standard_False;
	isC1 &= res->RemoveVKnot(i, DegreeV-1, epsgeom); // is C1 ?
      }
    }
    else {
      isC1 &= res->RemoveVKnot(i, DegreeV-1, epsgeom); // is C1 ?
    }
  }*/
  
  
  if (!isC1) return 0;
  if (continuity >= 2 && !isC2) return 1;
  return continuity;
}



/**
  IGESConvGeom::ConvertToSplineSurface
  
  @par 
	convert bsplinesurface to splinesurface
  
  @param [IN] bspSrf bspline surface	  
  @param [OUT] retSrf result spline surface
  
  @return 0		: convert success
          != 0	: convert error
  */
Standard_Integer IGESConvGeom::ConvertToSplineSurface(const Handle(Geom_BSplineSurface)& bspSrf, Handle(TColStd_HSequenceOfTransient)& aryParamtricSrf)
{
	Standard_Integer status = 0;
	IKSFSrfAttr		bspSP;
	INT				srfnum = 0;
	IKPSpSrfAttr	*srfSP = NULL;
	DOUBLE tol[2];
	INT uknotNum = 0, vknotNum = 0;
	UINT_PTR pageidP;

	// ������
	memset(&bspSP, NULL, sizeof(IKSFSrfAttr));
	pageidP = BmAllocVpage( PAGE_ID, IBBLKSIZ );
	// �g�������X�Œ�
	tol[0] = 0.01;
	tol[1] = 0.0175;
	// Bspline�Ȗʃf�[�^��Open cascade��Index�ϊ�
	// ���ʑ����̐ݒ�
	bspSP.entcomS.entityclass = IKBSPSRF;
	bspSP.srfcomS.dirsrf = IKFRONT;
	bspSP.srfcomS.pareaflg = IKPANOTDEF;
	bspSP.srfcomS.pareaA[0] = 0.0;
	bspSP.srfcomS.pareaA[1] = 0.0;
	bspSP.srfcomS.pareaA[2] = 0.0;
	bspSP.srfcomS.pareaA[3] = 0.0;
	// Bspline�Ȗʏ��ݒ�
	// �L���t���O
	bspSP.gsU.bspsrfS.rtnl = (bspSrf->IsURational() || bspSrf->IsVRational())?IKRATIONAL:IKPOLYNOMINAL;
	// U����CLOSE�t���O
	bspSP.gsU.bspsrfS.uclsflg = bspSrf->IsUClosed()?IKCLOSEDCRV:IKOPENCRV;
	// V����CLOSE�t���O
	bspSP.gsU.bspsrfS.vclsflg = bspSrf->IsVClosed()?IKCLOSEDCRV:IKOPENCRV;
	// U�����������t���O
	bspSP.gsU.bspsrfS.uprdflg = bspSrf->IsUPeriodic()?IKPERIODIC:IKNOTPERIODIC;
	// V�����������t���O
	bspSP.gsU.bspsrfS.vprdflg = bspSrf->IsVPeriodic()?IKPERIODIC:IKNOTPERIODIC;
	// U�����֐�����
	bspSP.gsU.bspsrfS.udgr = bspSrf->UDegree();
	// V�����֐�����
	bspSP.gsU.bspsrfS.vdgr = bspSrf->VDegree();
	// U����CP�_��
	bspSP.gsU.bspsrfS.upnum = bspSrf->NbUPoles();
	// V����CP�_��
	bspSP.gsU.bspsrfS.vpnum = bspSrf->NbVPoles();
	// Knotes
	Handle(TColStd_HArray1OfReal) ufknots, vfknots; 
	ufknots = bspSrf->UFKnots();
	vfknots = bspSrf->VFKnots();

	// U����
	bspSP.gsU.bspsrfS.ukntvctP = (DOUBLE*)BmCAllocVseg(pageidP, sizeof(DOUBLE)*ufknots->Length());
	for(Standard_Integer i=0; i<ufknots->Length(); i++)
	{
		*(bspSP.gsU.bspsrfS.ukntvctP + i) = ufknots->Value(i+1);
	}
	bspSP.gsU.bspsrfS.vkntvctP = (DOUBLE*)BmCAllocVseg(pageidP, sizeof(DOUBLE)*vfknots->Length());
	// V����
	for(Standard_Integer i=0; i<vfknots->Length(); i++)
	{
		*(bspSP.gsU.bspsrfS.vkntvctP + i) = vfknots->Value(i+1);
	}

	//GetKnots(pageidP, bspSrf, uknotNum, &(bspSP.gsU.bspsrfS.ukntvctP), vknotNum, &(bspSP.gsU.bspsrfS.vkntvctP)); 

	// �E�F�C�g
	bspSP.gsU.bspsrfS.wightP = (DOUBLE*)BmCAllocVseg(pageidP, sizeof(DOUBLE) * bspSrf->NbUPoles() * bspSrf->NbVPoles());
	
	// CP�_
	bspSP.gsU.bspsrfS.cntpntSP = (POINT3*)BmCAllocVseg(pageidP, sizeof(POINT3) * bspSrf->NbUPoles() * bspSrf->NbVPoles());
	INT j = 0, k = 0, uIndex = 0, vIndex = 0; 
	for(j=k=0; k<bspSrf->NbVPoles(); k++)
	{
		for(INT i=0; i<bspSrf->NbUPoles();i++)
		{
			if(i<bspSrf->NbUPoles())
			{
				uIndex = i;
			}
			else
			{
				uIndex = 0;
			}

			if(k <bspSrf->NbVPoles())
			{
				vIndex = k;
			}
			else
			{
				vIndex = 0;
			}

			(bspSP.gsU.bspsrfS.cntpntSP + j)->x = bspSrf->Pole(uIndex+1, vIndex+1).X();
			(bspSP.gsU.bspsrfS.cntpntSP + j)->y = bspSrf->Pole(uIndex+1, vIndex+1).Y();
			(bspSP.gsU.bspsrfS.cntpntSP + j)->z = bspSrf->Pole(uIndex+1, vIndex+1).Z();
			//if(bspSP.gsU.bspsrfS.rtnl == IKRATIONAL)
			{
				/* �E�F�C�g�t�� */
				*(bspSP.gsU.bspsrfS.wightP + j) = bspSrf->Weight(uIndex+1,vIndex+1);
			}
			j++;
		}
	}

	// Bspline�Ȗʂ������د�����ײ݋Ȗʂɕϊ�����
	status = IICsBspPsp(pageidP, &bspSP, tol, &srfnum, &srfSP);
	// �����د�����ײ݋Ȗʂ�Index��Open cascade�ϊ�
	if(status == 0)
	{
		IKPSpSrfAttr *pspSrfP = srfSP;
		for(Standard_Integer i=0; i<srfnum; i++)
		{
			// BrkP�ݒ�
			// U����
			Handle(TColStd_HArray1OfReal) allUBreakPoints = new TColStd_HArray1OfReal(1, pspSrfP->unum+1);
			for(Standard_Integer index = 1; index<=pspSrfP->unum+1; index++)
			{
				allUBreakPoints->SetValue(index, *(pspSrfP->ubrkpntP + index - 1));
			}
			// V����
			Handle(TColStd_HArray1OfReal) allVBreakPoints = new TColStd_HArray1OfReal(1, pspSrfP->vnum+1);
			for(Standard_Integer index = 1; index<=pspSrfP->vnum+1; index++)
			{
				allVBreakPoints->SetValue(index, *(pspSrfP->vbrkpntP + index - 1));
			}
			
			// �������W����ݒ肷��
			Handle(IGESBasic_HArray2OfHArray1OfReal) allXCoeffs = new IGESBasic_HArray2OfHArray1OfReal(1, pspSrfP->unum + 1, 1, pspSrfP->vnum + 1);
			Handle(IGESBasic_HArray2OfHArray1OfReal) allYCoeffs = new IGESBasic_HArray2OfHArray1OfReal(1, pspSrfP->unum + 1, 1, pspSrfP->vnum + 1);
			Handle(IGESBasic_HArray2OfHArray1OfReal) allZCoeffs = new IGESBasic_HArray2OfHArray1OfReal(1, pspSrfP->unum + 1, 1, pspSrfP->vnum + 1);
			
			Standard_Integer cofCount = 0;
			for(Standard_Integer uIndex = 1; uIndex <=pspSrfP->unum + 1; uIndex++)
			{
				for(Standard_Integer vIndex = 1; vIndex <= pspSrfP->vnum + 1; vIndex++)
				{
					Handle(TColStd_HArray1OfReal) xCoeffs = new TColStd_HArray1OfReal(1, 16);
					Handle(TColStd_HArray1OfReal) yCoeffs = new TColStd_HArray1OfReal(1, 16);
					Handle(TColStd_HArray1OfReal) zCoeffs = new TColStd_HArray1OfReal(1, 16);

					for(Standard_Integer coefIndex=1; coefIndex<=16; coefIndex++)
					{
						xCoeffs->SetValue(coefIndex, (pspSrfP->cffP + cofCount)->cffcntAA[0][coefIndex - 1]);
						yCoeffs->SetValue(coefIndex, (pspSrfP->cffP + cofCount)->cffcntAA[1][coefIndex - 1]);
						zCoeffs->SetValue(coefIndex, (pspSrfP->cffP + cofCount)->cffcntAA[2][coefIndex - 1]);
					}
					cofCount++;

					allXCoeffs->SetValue(uIndex, vIndex, xCoeffs);
					allYCoeffs->SetValue(uIndex, vIndex, yCoeffs);
					allZCoeffs->SetValue(uIndex, vIndex, zCoeffs);
				}
			}

			// Open cascade�`���� �����د�����ײ݋Ȗʂ��쐬����
			Handle(IGESGeom_SplineSurface) splineSrf = new IGESGeom_SplineSurface();
			splineSrf->Init(3, pspSrfP->ptctyp, allUBreakPoints, allVBreakPoints, allXCoeffs, allYCoeffs, allZCoeffs);
			
			aryParamtricSrf->Append(splineSrf);
		}
	}

	// �������J��
	BmFreeVpage(pageidP);
	//BmFreeAll();
	return status;
}



/**
  IGESConvGeom::ConvertToSplineCurve
  
  @par
	convert bspline curve to spline curve
  
  @param [IN] bspCrv	bspline curve  
  @param [OUT]retCurve	result spline curve  
  
  @return	0	: convert success
		  !=0	: error
  
  */
Standard_Integer IGESConvGeom::ConvertToSplineCurve(const Handle(Geom_BSplineCurve) &bspCrv, Handle(TColStd_HSequenceOfTransient)& aryParamtricLine)
{
	Standard_Integer status = 0;
	IKGeoCrvAttr	bspcvS;
	IKPSpCrvAttr	*crvSP = NULL;
	IKPSpCrvCff		*cP = NULL;
	INT	crvnm = 0;
	UINT_PTR pageidP;

	// ������
	memset( (VOID *)&bspcvS, NULL,  sizeof(IKGeoCrvAttr) );
	pageidP = BmAllocVpage( PAGE_ID, IBBLKSIZ );
	// Bspline�Ȑ��f�[�^��Open cascade��Index�ϊ�
	bspcvS.entcomS.entityclass = IKBSPCRV;
	bspcvS.crvcomS.startprm = bspCrv->FirstParameter();
	bspcvS.crvcomS.endprm = bspCrv->LastParameter();
	// �Ȑ��t���O
	bspcvS.gcU.bspcrvS.clsflg = bspCrv->IsClosed()?IKCLOSEDCRV:IKOPENCRV;
	// cp�_��
	bspcvS.gcU.bspcrvS.pnum = bspCrv->NbPoles();
	// cp�_���
	bspcvS.gcU.bspcrvS.cntpntSP = (POINT3*)BmCAllocVseg(pageidP, sizeof(POINT3) * bspCrv->NbPoles());
	for(Standard_Integer i = 0; i<bspCrv->NbPoles(); i++)
	{
		(bspcvS.gcU.bspcrvS.cntpntSP + i)->x = bspCrv->Pole(i+1).X();
		(bspcvS.gcU.bspcrvS.cntpntSP + i)->y = bspCrv->Pole(i+1).Y();
		(bspcvS.gcU.bspcrvS.cntpntSP + i)->z = bspCrv->Pole(i+1).Z();
	}
	// ����
	bspcvS.gcU.bspcrvS.dgr = bspCrv->Degree();
	// knots
	Handle(TColStd_HArray1OfReal) knots = bspCrv->FlatKnots();
	bspcvS.gcU.bspcrvS.kntvctP = (DOUBLE*)BmCAllocVseg(pageidP, sizeof(DOUBLE) * knots->Length());
	for(Standard_Integer i=0; i<knots->Length(); i++)
	{
		*(bspcvS.gcU.bspcrvS.kntvctP+i) = knots->Value(i+1);
	}
	// �������t���O
	bspcvS.gcU.bspcrvS.prdflg = bspCrv->IsPeriodic()?IKPERIODIC:IKNOTPERIODIC;
	// �L���t���O
	bspcvS.gcU.bspcrvS.rtnl = bspCrv->IsRational()?IKRATIONAL:IKPOLYNOMINAL;
	//�E�F�C�g
	/*if(bspCrv->IsRational())
	{*/
	bspcvS.gcU.bspcrvS.wightP = (DOUBLE*)BmCAllocVseg(pageidP, sizeof(DOUBLE)*bspCrv->NbPoles());
	for(Standard_Integer i=0; i<bspCrv->NbPoles(); i++)
	{
		*(bspcvS.gcU.bspcrvS.wightP+i) = bspCrv->Weight(i+1);
	}
	/*}
	else
	{
		bspcvS.gcU.bspcrvS.wightP = NULL;
	}*/
	bspcvS.gcU.bspcrvS.planar = IKNOTPLANE;

	// Bspline�Ȑ��������د��E���ײ݋Ȑ��ɕϊ�����
	status = IZMcBspPsp( pageidP, &bspcvS, &crvnm, &crvSP );
	
	if(status == 0)
	{
		//�����د��E���ײ݋Ȑ���Index��Open cascade�ɕϊ�����
		for(Standard_Integer i=0; i<crvnm; i++)
		{
			if(crvSP != NULL)
			{
				Handle(TColStd_HArray1OfReal) allBreakPoints = new TColStd_HArray1OfReal(1, crvSP->num+1);
				Handle(TColStd_HArray2OfReal) theXCoordsPolynomial = new TColStd_HArray2OfReal(1,crvSP->num+1,1,4);
				Handle(TColStd_HArray2OfReal) theYCoordsPolynomial = new TColStd_HArray2OfReal(1,crvSP->num+1,1,4);
				Handle(TColStd_HArray2OfReal) theZCoordsPolynomial = new TColStd_HArray2OfReal(1,crvSP->num+1,1,4);
				
				Handle(TColStd_HArray1OfReal) allXvalues = new TColStd_HArray1OfReal(1,4);
				Handle(TColStd_HArray1OfReal) allYvalues = new TColStd_HArray1OfReal(1,4);
				Handle(TColStd_HArray1OfReal) allZvalues = new TColStd_HArray1OfReal(1,4);

				cP = crvSP->cffP;
				for(Standard_Integer j=1; j<=crvSP->num + 1; j++)
				{
					allBreakPoints->SetValue(j, *(crvSP->brkpntP + j-1));
					if(j <= crvSP->num)
					{
						for(Standard_Integer jj=1; jj<=4; jj++)
						{
							theXCoordsPolynomial->SetValue(j, jj, cP->cffcntAA[0][jj-1]);
							theYCoordsPolynomial->SetValue(j, jj, cP->cffcntAA[1][jj-1]);
							theZCoordsPolynomial->SetValue(j, jj, cP->cffcntAA[2][jj-1]);
						}
						cP = crvSP->cffP + j;
					}
					else
					{
						for(Standard_Integer jj=1; jj<=4; jj++)
						{
							allXvalues->SetValue(jj, cP->cffcntAA[0][jj-1]);
							allYvalues->SetValue(jj, cP->cffcntAA[1][jj-1]);
							allZvalues->SetValue(jj, cP->cffcntAA[2][jj-1]);
						}
					}
				}
			
				Handle(IGESGeom_SplineCurve) splineCrv = new IGESGeom_SplineCurve();
				splineCrv->Init(3, crvSP->num, 3, allBreakPoints, theXCoordsPolynomial, theYCoordsPolynomial, theZCoordsPolynomial, allXvalues, allYvalues, allZvalues);
				aryParamtricLine->Append(splineCrv);
			}
		}
	}

	// �������J��
	BmFreeVpage(pageidP);
	//BmFreeAll();
	return status;
}


/**
  IGESConvGeom::GetKnots
  
  @par �@�\����
		U,V�����̐���_�����擾����
  @param [IN] *srfSP  
  @param [OUT] *u_knot_numP  
  @param [OUT] **u_knotPP  
  @param [OUT] *v_knot_numP  
  @param [OUT] **v_knotPP  
  
  @return
  
  @par �C������ 
  -# 2011�N8��4�� �Ӂ�UEL �V�K�쐬
  
  */
Standard_Integer IGESConvGeom::GetKnots(UINT_PTR pageId,const Handle(Geom_BSplineSurface)& bspSrf, Standard_Integer& uknot_num, 
										Standard_Real** uknotsP, Standard_Integer& vknot_num, Standard_Real** vknotsP)
{
	Standard_Integer	stat;
	Standard_Integer	knots_cnt;
	Standard_Integer	wsize;
	
	stat = 0;	
	// brkpt��knots�ɓW�J����(U�����j
	uknot_num = 0;
	for(Standard_Integer i = 0; i < bspSrf->NbUKnots(); i++){
		for(INT j = 0; j < bspSrf->UMultiplicity(i); j++){
			uknot_num++;
		}
	}
	wsize = sizeof(DOUBLE) * (uknot_num);
    *uknotsP = (DOUBLE *)BmCAllocVseg(pageId, wsize );
	knots_cnt = 0;
	for(INT i = 0; i < bspSrf->NbUKnots(); i++){
		for(INT j = 0; j < bspSrf->UMultiplicity(i); j++){
			*(*uknotsP+knots_cnt)= bspSrf->UKnot(i);
			knots_cnt++;
		}
	}
	  
	// brkpt��knots�ɓW�J����(�u�����j
	vknot_num = 0;
	for(Standard_Integer i = 0; i < bspSrf->NbVKnots(); i++){
		for(INT j = 0; j < bspSrf->VMultiplicity(i); j++){
			vknot_num++;
		}
	}
	wsize = sizeof(DOUBLE) * vknot_num;
    *vknotsP = (DOUBLE *)BmCAllocVseg(pageId, wsize );
	knots_cnt = 0;
	for(INT i = 0; i < bspSrf->NbVKnots(); i++){
		for(INT j = 0; j < bspSrf->VMultiplicity(i); j++){
			*(*vknotsP+knots_cnt)=bspSrf->VKnot(i);
			knots_cnt++;
		}
	}

	return stat;
}
