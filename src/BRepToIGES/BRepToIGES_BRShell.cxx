// Copyright: 	Matra-Datavision 1995
// File:	BRepToIGES_BRShell.cxx
// Created:	Mon Jan 30 11:46:12 1995
// Author:	Marie Jose MARTZ
//		<mjm>
//:n3 abv 8 Feb 99: PRO17820: BRepTools::OuterWire() -> ShapeAnalysis::OuterWire
//szv#4 S4163

#include <BRepToIGES_BRShell.ixx>
#include <BRepToIGES_BRWire.hxx>

#include <BRep_Tool.hxx>
#include <BRepTools.hxx>

#include <gp.hxx>
#include <gp_Trsf.hxx>

#include <Geom_ConicalSurface.hxx>
#include <Geom_CylindricalSurface.hxx>
#include <Geom_RectangularTrimmedSurface.hxx>
#include <Geom_SphericalSurface.hxx>
#include <Geom_Surface.hxx>
#include <Geom_SurfaceOfRevolution.hxx>
#include <Geom_ToroidalSurface.hxx>

#include <GeomToIGES_GeomSurface.hxx>

#include <IGESBasic_Group.hxx>
#include <IGESData_HArray1OfIGESEntity.hxx>
#include <IGESData_IGESEntity.hxx>

#include <IGESGeom_CurveOnSurface.hxx>
#include <IGESGeom_HArray1OfCurveOnSurface.hxx>
#include <IGESGeom_TrimmedSurface.hxx>
#include <IGESGeom_SurfaceOfRevolution.hxx>

#include <Interface_Macros.hxx>

#include <TColStd_HSequenceOfTransient.hxx>

#include <TopLoc_Location.hxx>

#include <TopoDS.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Shape.hxx>

#include <TopAbs_ShapeEnum.hxx>
#include <TopExp.hxx>
#include <TopExp_Explorer.hxx>

#include <ShapeAlgo.hxx>
#include <ShapeAlgo_AlgoContainer.hxx>

#include <Message_ProgressIndicator.hxx>
#include <Transfer_FinderProcess.hxx>

#include <Interface_Static.hxx>
#include <IGESConvGeom.hxx>

//=============================================================================
// BRepToIGES_BRShell
//=============================================================================

BRepToIGES_BRShell::BRepToIGES_BRShell()
{
}


//=============================================================================
// BRepToIGES_BRShell
//=============================================================================

BRepToIGES_BRShell::BRepToIGES_BRShell
(const BRepToIGES_BREntity& BR)
: BRepToIGES_BREntity(BR)
{
}


//=============================================================================
// TransferShell
//=============================================================================

Handle(IGESData_IGESEntity) BRepToIGES_BRShell ::TransferShell(const TopoDS_Shape& start)
{
  Handle(IGESData_IGESEntity) res;

  if (start.IsNull())  return  res;

  if (start.ShapeType() == TopAbs_FACE) {
    TopoDS_Face F =  TopoDS::Face(start);
    res = TransferFace(F);
  }  
  else if (start.ShapeType() == TopAbs_SHELL) {
    TopoDS_Shell S =  TopoDS::Shell(start);
    res = TransferShell(S);
  }  
  else {
    // message d`erreur
  }  
  return res;
}


//=============================================================================
// TransferFace
// 
//=============================================================================

Handle(IGESData_IGESEntity) BRepToIGES_BRShell ::TransferFace(const TopoDS_Face& start)
{
  Handle(IGESData_IGESEntity) res;

  Handle(Message_ProgressIndicator) progress = GetTransferProcess()->GetProgress();
  if ( ! progress.IsNull() ) {
    if ( progress->UserBreak() ) return res;
    progress->Increment();
  }

  if ( start.IsNull()) {
    return res;
  }
  //Standard_Integer Nb = 0; //szv#4:S4163:12Mar99 unused
  Standard_Real Length = 1.;
  Handle(IGESData_IGESEntity) ISurf;

   BRepToIGES_BRWire BW(*this);
  Standard_Integer Imode = 0; 
  Standard_Integer Iprefer = 0; 
  Handle(IGESData_IGESEntity) ICurve2d;
  // pour explorer la face , il faut la mettre fORWARD.
  TopoDS_Face myface = start;
  TopoDS_Wire Outer;
  Standard_Boolean IsReversed = Standard_False;
  if (start.Orientation() == TopAbs_REVERSED) {
    myface.Reverse();
    IsReversed = Standard_True;
	Outer = BRepTools::OuterWire(myface);
  }
  else {
	  Outer = ShapeAlgo::AlgoContainer()->OuterWire(myface);
  }

  // returns the face surface
  // ------------------------

  Handle(Geom_Surface) Surf = BRep_Tool::Surface(start);
  Handle(Geom_Surface) Surf1;

  Standard_Real U1, U2, V1, V2;
  if (!Surf.IsNull()) {
	// modif mjm du 17/07/97
	if (Surf->IsKind(STANDARD_TYPE(Geom_RectangularTrimmedSurface))) { 
	  DeclareAndCast(Geom_RectangularTrimmedSurface, rectang, Surf);
	  Surf1 = rectang->BasisSurface();
	}
	else 
	  Surf1 = Surf;
    // pour limiter les surfaces de base
    //BRepTools::UVBounds(start, U1, U2, V1, V2);
	ShapeAlgo::AlgoContainer()->GetFaceUVBounds(start, U1, U2, V1,V2);
	// オプションK
	// 掃引面・回転面をパラメトリック・スプライン曲面として出力する
	Standard_Integer optk = Interface_Static::IVal("write.iges.opt_k");
	// オプションV
	// 有限平面をB-スプライン曲面に変換する。
	Standard_Integer optv = Interface_Static::IVal("write.iges.opt_v");
	// オプションA
	// B-スプライン曲面をパラメトリック・スプライン曲面として出力する
	Standard_Integer opta = Interface_Static::IVal("write.iges.opt_a");

	if(optk == 1)
	{
		// Bspline曲面を強制にparametric化
		opta = 1;
	}

	Handle(Geom_BSplineSurface) bspSrf;
	if(optk == 1 
		&& (Surf1->IsKind(STANDARD_TYPE(Geom_SurfaceOfRevolution)) || Surf1->IsKind(STANDARD_TYPE(Geom_SweptSurface))))
	{
		if(abs(U2-U1) > Precision::Confusion() && abs(V2 - V1) > Precision::Confusion())
		{
			// 掃引面・回転面をBspline曲面に変換
			bspSrf = ShapeAlgo::AlgoContainer()->ConvertSurfaceToBSpline(Surf1, U1, U2, V1, V2);
		}
		else
		{
#ifdef _DEBUG
			cout << "thin  face, convert error!!" << endl;
#endif
			return res;
		}
	}

	if(optv == 1
		&& (Surf1->IsKind(STANDARD_TYPE(Geom_Plane)) && !Outer.IsNull()))
	{

		if(abs(U2-U1) > Precision::Confusion()  && abs(V2 - V1) > Precision::Confusion())
		{
			// 有限平面をBspline曲面に変換する
			bspSrf = ShapeAlgo::AlgoContainer()->ConvertSurfaceToBSpline(Surf1, U1, U2, V1, V2);
		}
		else
		{
#ifdef _DEBUG
			cout << "thin  face, convert error!!" << endl;
#endif
			return res;
		}
	}
	
	if(!bspSrf.IsNull())
	{
		Surf = bspSrf;
	}
	
	if(opta == 1 &&
		Surf->IsKind(STANDARD_TYPE(Geom_BSplineSurface)))
	{
		// Bspline曲面をパラメトリック・スプライン曲面に変換
		try
		{
		bspSrf = Handle(Geom_BSplineSurface)::DownCast(Surf);
		Handle(TColStd_HSequenceOfTransient) arySrf = new TColStd_HSequenceOfTransient();
		if(IGESConvGeom::ConvertToSplineSurface(bspSrf, arySrf) != 0)
		{
			return res;
		}
		else
		{
			bspSrf.Nullify();
			if(arySrf->Length() == 1)
			{
				ISurf = Handle(IGESData_IGESEntity)::DownCast(arySrf->Value(1));
			}
			else
			{
				// B－スプライン曲面を複数パラメトリック・スプライン曲面に変換する場合、
				// トリム面を作成しない
				for(Standard_Integer i=1; i<=arySrf->Length(); i++)
				{
					Handle(IGESData_IGESEntity) ret = Handle(IGESData_IGESEntity)::DownCast(arySrf->Value(i));
					if(!ret.IsNull())
					{
						SetShapeResult ( start, ret );
						if(i == 1)
						{
							ISurf = ret;
							res = ret;
						}
					}
				}
				return res;
			}
		}
		}
		catch(Standard_Failure)
		{
#ifdef _DEBUG
			cout << "convert to spline error!" << endl;
#endif
		}
	}

	if(ISurf.IsNull())
	{
		GeomToIGES_GeomSurface GS;
		GS.SetModel(GetModel());
		ISurf = GS.TransferSurface(Surf, U1, U2, V1, V2);
		if (ISurf.IsNull()) {
		  AddWarning (start, "the basic surface is a null entity");
		  return res;
		}
		Length = GS.Length();
	}

  }


 

  // returns the wires of the face
  // -----------------------------

 
  // outer wire
  //TopoDS_Wire Outer = BRepTools::OuterWire(myface);
  //TopoDS_Wire Outer = ShapeAlgo::AlgoContainer()->OuterWire(myface); //:n3 
  Handle(IGESGeom_CurveOnSurface) IOuter = new IGESGeom_CurveOnSurface;
  if (!Outer.IsNull()) {
    Handle(IGESData_IGESEntity) ICurve3d = 
      BW.TransferWire(Outer, myface, ICurve2d, Length);
    if ((!ICurve3d.IsNull()) && (!ICurve2d.IsNull())) Iprefer = 3; 
    if ((!ICurve3d.IsNull()) && (ICurve2d.IsNull())) Iprefer = 2; 
    if ((ICurve3d.IsNull()) && (!ICurve2d.IsNull())) Iprefer = 1; 
    IOuter -> Init (Imode, ISurf, ICurve2d, ICurve3d, Iprefer);
  }

  // inners wires
  TopExp_Explorer Ex;
  Handle(TColStd_HSequenceOfTransient) Seq = new TColStd_HSequenceOfTransient();

  for (Ex.Init(myface,TopAbs_WIRE); Ex.More(); Ex.Next()) {
    TopoDS_Wire W = TopoDS::Wire(Ex.Current());
    Handle(IGESGeom_CurveOnSurface) Curve = new IGESGeom_CurveOnSurface;
    if (W.IsNull()) {
      AddWarning(start," an Wire is a null entity");
    }
    else if (!W.IsSame(Outer)) {
      Handle(IGESData_IGESEntity) ICurve3d = 
	BW.TransferWire(W, myface, ICurve2d, Length);
      if ((!ICurve3d.IsNull()) && (!ICurve2d.IsNull())) Iprefer = 3; 
      if ((!ICurve3d.IsNull()) && (ICurve2d.IsNull())) Iprefer = 2; 
      if ((ICurve3d.IsNull()) && (!ICurve2d.IsNull())) Iprefer = 1; 
      Curve-> Init (Imode, ISurf, ICurve2d, ICurve3d, Iprefer);
      if (!Curve.IsNull()) Seq->Append(Curve);
    }
  }

  // all inners edges not in a wire
  for (Ex.Init(myface,TopAbs_EDGE,TopAbs_WIRE); Ex.More(); Ex.Next()) {
    TopoDS_Edge E = TopoDS::Edge(Ex.Current());
    Handle(IGESGeom_CurveOnSurface) Curve = new IGESGeom_CurveOnSurface;
    if (E.IsNull()) {
      AddWarning(start," an Edge is a null entity");
    }
    else {
      Handle(IGESData_IGESEntity) ICurve3d = BW.TransferEdge(E, Standard_False);
      Handle(IGESData_IGESEntity) newICurve2d = BW.TransferEdge(E, myface, Length, Standard_False);
      if ((!ICurve3d.IsNull()) && (!newICurve2d.IsNull())) Iprefer = 3; 
      if ((!ICurve3d.IsNull()) && (newICurve2d.IsNull())) Iprefer = 2; 
      if ((ICurve3d.IsNull()) && (!newICurve2d.IsNull())) Iprefer = 1; 
      Curve-> Init (Imode, ISurf, newICurve2d, ICurve3d, Iprefer);
      if (!Curve.IsNull()) Seq->Append(Curve);
    }
  }


  Standard_Integer nbent = Seq->Length();
  Handle(IGESGeom_HArray1OfCurveOnSurface) Tab;
  if (nbent >=1) {
    Tab = new IGESGeom_HArray1OfCurveOnSurface(1,nbent);
    for (Standard_Integer itab = 1; itab <= nbent; itab++) {
      Handle(IGESGeom_CurveOnSurface) item = GetCasted(IGESGeom_CurveOnSurface, Seq->Value(itab));
      Tab->SetValue(itab,item);
    }
  }

  // returns the TrimmedSurface
  // 無限平面対応
  // --------------------------
  if(nbent > 0 || !Outer.IsNull()) {
	  Standard_Boolean Flag = Standard_True; // pour l`instant
	  Handle(IGESGeom_TrimmedSurface) TrimmedSurf = new IGESGeom_TrimmedSurface;
	  TrimmedSurf-> Init (ISurf, Flag, IOuter, Tab);

	  res = TrimmedSurf;
  }
  else {
	  res = ISurf;
  }
  if (IsReversed) myface.Reverse();

  SetShapeResult ( start, res );

  return res;
}


//=============================================================================
// TransferShell
//=============================================================================

Handle(IGESData_IGESEntity) BRepToIGES_BRShell::TransferShell(const TopoDS_Shell& start)
{
  Handle(IGESData_IGESEntity) res;
  if ( start.IsNull()) return res;

  TopExp_Explorer Ex;
  Handle(IGESBasic_Group) IGroup = new IGESBasic_Group;
  Handle(TColStd_HSequenceOfTransient) Seq = new TColStd_HSequenceOfTransient();
  Handle(IGESData_IGESEntity) IFace;

  for (Ex.Init(start,TopAbs_FACE); Ex.More(); Ex.Next()) {
    TopoDS_Face F = TopoDS::Face(Ex.Current());
    if (F.IsNull()) {
      AddWarning(start," a Face is a null entity");
    }
    else {
      IFace = TransferFace(F);
      if (!IFace.IsNull()) Seq->Append(IFace);
    }
  }


  Standard_Integer nbfaces = Seq->Length();  
  Handle(IGESData_HArray1OfIGESEntity) Tab;
  if ( nbfaces >= 1) {
    Tab = new IGESData_HArray1OfIGESEntity(1,nbfaces);
    for (Standard_Integer itab = 1; itab <= nbfaces; itab++) {
      Handle(IGESData_IGESEntity) item = GetCasted(IGESData_IGESEntity, Seq->Value(itab));
      Tab->SetValue(itab,item);
    }
  }

  if (nbfaces == 1) {
    res = IFace;
  }
  else {
    IGroup->Init(Tab);
    res = IGroup;
  }

  SetShapeResult ( start, res );

  return res;
}




