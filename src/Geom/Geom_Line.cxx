// File:	Geom_Line.cxx
// Created:	Wed Mar 10 09:47:01 1993
// Author:	JCV
//		<fid@phylox>
// Copyright:	Matra Datavision 1993

//File Geom_Line.cxx ,JCV 17/01/91


#include <Geom_Line.ixx>

#include <Precision.hxx>
#include <gp_XYZ.hxx>
#include <ElCLib.hxx>
#include <Standard_RangeError.hxx>



//=======================================================================
//function : Copy
//purpose  : 
//=======================================================================

Handle(Geom_Geometry) Geom_Line::Copy() const {

   Handle(Geom_Line) L;
   L = new Geom_Line (pos);
   return L;
}

//=======================================================================
//function : Geom_Line
//purpose  : 
//=======================================================================

Geom_Line::Geom_Line (const gp_Ax1& A) : pos (A) { }

//=======================================================================
//function : Geom_Line
//purpose  : 
//=======================================================================

Geom_Line::Geom_Line (const gp_Lin& L) : pos (L.Position()) { }

//=======================================================================
//function : Geom_Line
//purpose  : 
//=======================================================================

Geom_Line::Geom_Line (const gp_Pnt& P, const gp_Dir& V) : pos (P, V) { }

//=======================================================================
//function : Reverse
//purpose  : 
//=======================================================================

void Geom_Line::Reverse () { pos.Reverse(); }

//=======================================================================
//function : ReversedParameter
//purpose  : 
//=======================================================================

Standard_Real Geom_Line::ReversedParameter( const Standard_Real U) const 
{ return (-U);}

//=======================================================================
//function : SetDirection
//purpose  : 
//=======================================================================

void Geom_Line::SetDirection (const gp_Dir& V) { pos.SetDirection (V); }

//=======================================================================
//function : SetLin
//purpose  : 
//=======================================================================

void Geom_Line::SetLin (const gp_Lin& L) { pos = L.Position(); }

//=======================================================================
//function : SetLocation
//purpose  : 
//=======================================================================

void Geom_Line::SetLocation (const gp_Pnt& P) { pos.SetLocation (P); }

//=======================================================================
//function : SetPosition
//purpose  : 
//=======================================================================

void Geom_Line::SetPosition (const gp_Ax1& A1) { pos = A1; }

//=======================================================================
//function : Position
//purpose  : 
//=======================================================================

const gp_Ax1& Geom_Line::Position () const { return pos; }

//=======================================================================
//function : IsClosed
//purpose  : 
//=======================================================================

Standard_Boolean Geom_Line::IsClosed () const { return Standard_False; }

//=======================================================================
//function : IsPeriodic
//purpose  : 
//=======================================================================

Standard_Boolean Geom_Line::IsPeriodic () const { return Standard_False;  }

//=======================================================================
//function : Continuity
//purpose  : 
//=======================================================================

GeomAbs_Shape Geom_Line::Continuity () const { return GeomAbs_CN; }

//=======================================================================
//function : FirstParameter
//purpose  : 
//=======================================================================

Standard_Real Geom_Line::FirstParameter () const 
{ return -Precision::Infinite(); }

//=======================================================================
//function : LastParameter
//purpose  : 
//=======================================================================

Standard_Real Geom_Line::LastParameter () const 
{ return Precision::Infinite(); }

//=======================================================================
//function : Lin
//purpose  : 
//=======================================================================

gp_Lin Geom_Line::Lin () const { return gp_Lin (pos); }


//=======================================================================
//function : IsCN
//purpose  : 
//=======================================================================

Standard_Boolean Geom_Line::IsCN (const Standard_Integer ) const 
{ return Standard_True; }

//=======================================================================
//function : Transform
//purpose  : 
//=======================================================================

void Geom_Line::Transform (const gp_Trsf& T) { pos.Transform (T); }

//=======================================================================
//function : D0
//purpose  : 
//=======================================================================

void Geom_Line::D0 (const Standard_Real U, gp_Pnt& P) const  
{ 
  P = ElCLib::LineValue (U, pos);
}

//=======================================================================
//function : D1
//purpose  : 
//=======================================================================

void Geom_Line::D1 (const Standard_Real U, gp_Pnt& P, gp_Vec& V1) const {
 
  ElCLib::LineD1 (U, pos, P, V1);
}

//=======================================================================
//function : D2
//purpose  : 
//=======================================================================

void Geom_Line::D2 (const Standard_Real U, gp_Pnt& P, gp_Vec& V1, gp_Vec& V2) const {

  ElCLib::LineD1 (U, pos, P, V1);
  V2.SetCoord (0.0, 0.0, 0.0);
}

//=======================================================================
//function : D3
//purpose  : 
//=======================================================================

void Geom_Line::D3 (const Standard_Real U, gp_Pnt& P, gp_Vec& V1, gp_Vec& V2, gp_Vec& V3) const{

  ElCLib::LineD1 (U, pos, P, V1);
  V2.SetCoord (0.0, 0.0, 0.0);
  V3.SetCoord (0.0, 0.0, 0.0);
}

//=======================================================================
//function : DN
//purpose  : 
//=======================================================================

gp_Vec Geom_Line::DN (const Standard_Real , const Standard_Integer N) const {

  Standard_RangeError_Raise_if (N <= 0, " ");
  if (N == 1) return gp_Vec (pos.Direction ());
  else        return gp_Vec (0.0, 0.0, 0.0);
}

//=======================================================================
//function : TransformedParameter
//purpose  : 
//=======================================================================

Standard_Real Geom_Line::TransformedParameter(const Standard_Real U,
					      const gp_Trsf& T) const
{
  if (Precision::IsInfinite(U)) return U;
  return U * Abs(T.ScaleFactor());
}


//=======================================================================
//function : TransformedParameter
//purpose  : 
//=======================================================================

Standard_Real Geom_Line::ParametricTransformation(const gp_Trsf& T) const
{
  return Abs(T.ScaleFactor());
}


