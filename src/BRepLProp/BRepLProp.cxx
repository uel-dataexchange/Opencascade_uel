// File:	BRepLProp.cxx
// Created:	Thu Feb 24 17:12:04 1994
// Author:	Laurent BOURESCHE
//		<lbo@nonox>


#include <BRepLProp.ixx>
#include <Precision.hxx>
#include <BRepLProp_CLProps.hxx>
#include <gp_Dir.hxx>
#include <gp_Vec.hxx>
#include <TopoDS_Edge.hxx>
#include <TopAbs_Orientation.hxx>

//=======================================================================
//function : Continuity
//purpose  : 
//=======================================================================

GeomAbs_Shape BRepLProp::Continuity(const BRepAdaptor_Curve& C1, 
				    const BRepAdaptor_Curve& C2, 
				    const Standard_Real u1, 
				    const Standard_Real u2, 
				    const Standard_Real tl, 
				    const Standard_Real ta)
{
  GeomAbs_Shape cont = GeomAbs_C0;
  Standard_Boolean fini = Standard_False;
  gp_Vec d1,d2;
  gp_Dir dir1,dir2;
  GeomAbs_Shape cont1 = C1.Continuity(), cont2 = C2.Continuity();
  Standard_Integer n1 = 0, n2 = 0;
  if (cont1 >= 5) n1 = 3;
  else if(cont1 == 4) n1 = 2;
  else if(cont1 == 2) n1 = 1;
  if (cont2 >= 5) n2 = 3;
  else if(cont2 == 4) n2 = 2;
  else if(cont2 == 2) n2 = 1;
  BRepLProp_CLProps clp1(C1,u1,n1,tl);
  BRepLProp_CLProps clp2(C2,u2,n2,tl);
  if(!(clp1.Value().IsEqual(clp2.Value(),tl))) {
    Standard_Failure::Raise("Courbes non jointives");
  }
  Standard_Integer min = Min(n1,n2);
  if ( min >= 1 ) {
    d1 = clp1.D1();
    d2 = clp2.D1();
    if(C1.Edge().Orientation() == TopAbs_REVERSED) d1.Reverse();
    if(C2.Edge().Orientation() == TopAbs_REVERSED) d2.Reverse();
    if(d1.IsEqual(d2,tl,ta)) { 
      cont = GeomAbs_C1; 
    }
    else if(clp1.IsTangentDefined() && clp2.IsTangentDefined()){
      clp1.Tangent(dir1);
      clp2.Tangent(dir2);
      if(C1.Edge().Orientation() == TopAbs_REVERSED) dir1.Reverse();
      if(C2.Edge().Orientation() == TopAbs_REVERSED) dir2.Reverse();
      if(dir1.IsEqual(dir2,ta)){ 
	cont = GeomAbs_G1; 
      }
      fini = Standard_True;
    }
    else {fini = Standard_True; }
  }
  if ( min >= 2 && !fini ) {
    d1 = clp1.D2();
    d2 = clp2.D2();
    if(d1.IsEqual(d2,tl,ta)){
      cont = GeomAbs_C2;
    }
  }
  const TopoDS_Edge& E1 = C1.Edge();
  const TopoDS_Edge& E2 = C2.Edge();
  if (E1.IsSame(E2) && C1.IsPeriodic() && cont >= GeomAbs_G1)
    cont = GeomAbs_CN;
  return cont;
}


//=======================================================================
//function : Continuity
//purpose  : 
//=======================================================================

GeomAbs_Shape BRepLProp::Continuity(const BRepAdaptor_Curve& C1, 
				    const BRepAdaptor_Curve& C2, 
				    const Standard_Real u1, 
				    const Standard_Real u2)
{
  return Continuity(C1,C2,u1,u2,Precision::Confusion(),Precision::Angular());
}


