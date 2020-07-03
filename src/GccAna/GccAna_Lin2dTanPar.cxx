// File GccAna_Lin2dTanPar.cxx, REG 08/07/91

//========================================================================
//    CREATION D UNE LIGNE TANGENTE A UN CERCLE OU PASSANT PAR UN POINT  +
//                     ET PARALLELE A UNE DROITE.                        +
//========================================================================

#include <GccAna_Lin2dTanPar.ixx>

#include <ElCLib.hxx>
#include <StdFail_NotDone.hxx>
#include <gp_XY.hxx>
#include <gp_Dir2d.hxx>
#include <gp_Vec2d.hxx>
#include <gp_Circ2d.hxx>
#include <Standard_OutOfRange.hxx>
#include <GccEnt_BadQualifier.hxx>

//========================================================================
//   Passant par un point :                                              +
//   On cree la droite d origine ThePoint et                             + 
//                     de direction Lin1.Direction().                    +
//========================================================================

GccAna_Lin2dTanPar::
   GccAna_Lin2dTanPar (const gp_Pnt2d& ThePoint  ,
                       const gp_Lin2d& Lin1      ):
   linsol(1,1),
   qualifier1(1,1) ,
   pnttg1sol(1,1),
   par1sol(1,1),
   pararg1(1,1)
{

   linsol(1) = gp_Lin2d(ThePoint,Lin1.Direction());
// ===============================================
   qualifier1(1) = GccEnt_noqualifier;
   pnttg1sol(1) = ThePoint;
   par1sol(1) = 0.;
   pararg1(1) = 0.;
   NbrSol = 1;
   WellDone = Standard_True;
}

//========================================================================
//   Tangent a un cercle :                                               +
//   On cree suivant le qualifieur la droite                             +
//          - d origine P1 (P1 est un point d intersection entre C1 et   +
//                         une droite passant par le centre de C1 et de  +
//                         direction la normale a Lin1).                 +
//                         le choix du point d intersection est fonction +
//                         du qualifieur.                                +
//          - de direction la direction de Lin1.                         +
//========================================================================

GccAna_Lin2dTanPar::
   GccAna_Lin2dTanPar (const GccEnt_QualifiedCirc& Qualified1,
                       const gp_Lin2d&             Lin1      ):
   linsol(1,2),
   qualifier1(1,2) ,
   pnttg1sol(1,2),
   par1sol(1,2),
   pararg1(1,2)
{

   WellDone = Standard_False;
   Standard_Integer signe = 0;
   Standard_Integer nbsol = 0;
   NbrSol = 0;
   if (!(Qualified1.IsEnclosed() || Qualified1.IsEnclosing() || 
	 Qualified1.IsOutside() || Qualified1.IsUnqualified())) {
     GccEnt_BadQualifier::Raise();
     return;
   }
   gp_Circ2d C1 = Qualified1.Qualified();
   Standard_Real xdir = (Lin1.Direction()).X();
   Standard_Real ydir = (Lin1.Direction()).Y();

   if (Qualified1.IsEnclosed()) { GccEnt_BadQualifier::Raise(); }
// ============================
   else if (Qualified1.IsEnclosing()) {
// ==================================
     nbsol = 1;
     signe = 1;
     qualifier1(1) = GccEnt_enclosing;
   }
   else if (Qualified1.IsOutside()) {
// ===================================
     nbsol = 1;
     signe = -1;
     qualifier1(1) = GccEnt_outside;
   }
   else {
     nbsol = 2;
     signe = -1;
     qualifier1(1) = GccEnt_outside;
     qualifier1(2) = GccEnt_enclosing;
   }
   gp_XY xy(-C1.Radius()*ydir,C1.Radius()*xdir);
   for (Standard_Integer j = 1 ; j <= nbsol ; j++) {
     signe = -signe;
     NbrSol++;
     linsol(NbrSol) = gp_Lin2d(gp_Pnt2d((C1.Location().XY()).Added(signe*xy)),
//   =========================================================================
			       Lin1.Direction());
//                             =================
     pnttg1sol(NbrSol) = gp_Pnt2d((C1.Location().XY()).Added(signe*xy));
     par1sol(NbrSol) = 0.;
     pararg1(NbrSol)=ElCLib::Parameter(C1,pnttg1sol(NbrSol));
     WellDone = Standard_True;
   }
 }

Standard_Boolean GccAna_Lin2dTanPar::
   IsDone () const { return WellDone; }

Standard_Integer GccAna_Lin2dTanPar::NbSolutions () const 
{
  if (!WellDone) 
    StdFail_NotDone::Raise();
  return NbrSol;
}

gp_Lin2d GccAna_Lin2dTanPar::ThisSolution (const Standard_Integer Index) const
{
  if (!WellDone) { StdFail_NotDone::Raise(); }
  else if (Index <= 0 || Index > NbrSol) { Standard_OutOfRange::Raise(); }
  return linsol(Index);
}

void GccAna_Lin2dTanPar::
  WhichQualifier(const Standard_Integer Index   ,
		       GccEnt_Position& Qualif1 ) const
{
  if (!WellDone) { StdFail_NotDone::Raise(); }
   else if (Index <= 0 ||Index > NbrSol) { Standard_OutOfRange::Raise(); }
   else {
     Qualif1 = qualifier1(Index);
   }
}

void GccAna_Lin2dTanPar::
   Tangency1 (const Standard_Integer Index,
              Standard_Real& ParSol,
              Standard_Real& ParArg,
              gp_Pnt2d& Pnt) const {
   if (!WellDone) { StdFail_NotDone::Raise(); }
   else if (Index <= 0 ||Index > NbrSol) { Standard_OutOfRange::Raise(); }
   else {
     ParSol = par1sol(Index);
     ParArg = pararg1(Index);
     Pnt    = gp_Pnt2d(pnttg1sol(Index));
   }
 }
