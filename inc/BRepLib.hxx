// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepLib_HeaderFile
#define _BRepLib_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Geom_Plane_HeaderFile
#include <Handle_Geom_Plane.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Geom_Plane;
class TopoDS_Edge;
class TopoDS_Shape;
class TopoDS_Solid;
class TopoDS_Face;
class TopTools_ListOfShape;
class BRepLib_Command;
class BRepLib_MakeShape;
class BRepLib_MakeVertex;
class BRepLib_MakeEdge;
class BRepLib_MakeEdge2d;
class BRepLib_MakePolygon;
class BRepLib_MakeFace;
class BRepLib_MakeWire;
class BRepLib_MakeShell;
class BRepLib_MakeSolid;
class BRepLib_FindSurface;
class BRepLib_FuseEdges;


//! The BRepLib package provides general utilities for <br>
//!          BRep. <br>
//! <br>
//!          * FindSurface : Class to compute a surface through <br>
//!          a set of edges. <br>
//! <br>
//!          * Compute missing 3d curve on an edge. <br>
class BRepLib  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Sets the default precision.  The current Precision <br>
//!          is returned. <br>
  Standard_EXPORT   static  void Precision(const Standard_Real P) ;
  //! Returns the default precision. <br>
  Standard_EXPORT   static  Standard_Real Precision() ;
  //! Sets the current plane to P. <br>
  Standard_EXPORT   static  void Plane(const Handle(Geom_Plane)& P) ;
  //! Returns the current plane. <br>
//! <br>
  Standard_EXPORT   static const Handle_Geom_Plane& Plane() ;
  //! checks if the Edge is same range IGNORING <br>
//!          the same range flag of the edge <br>
//!          Confusion argument is to compare real numbers <br>
//!          idenpendently of any model space tolerance <br>
//! <br>
  Standard_EXPORT   static  Standard_Boolean CheckSameRange(const TopoDS_Edge& E,const Standard_Real Confusion = 1.0e-12) ;
  //! will make all the curve representation have <br>
//!          the same range domain for the parameters. <br>
//!          This will IGNORE the same range flag value <br>
//!          to proceed. <br>
//!          If there is a 3D curve there it will the <br>
//!          range of that curve. If not the first curve representation <br>
//!          encountered in the list will give its range to <br>
//!          the all the other curves. <br>
  Standard_EXPORT   static  void SameRange(const TopoDS_Edge& E,const Standard_Real Tolerance = 1.0e-5) ;
  //! Computes the 3d curve for the edge  <E> if it does <br>
//!          not exist. Returns True  if the curve was computed <br>
//!          or  existed. Returns False  if there is no  planar <br>
//!          pcurve. <br>
//!          <MaxSegment> >= 30 in approximation <br>
  Standard_EXPORT   static  Standard_Boolean BuildCurve3d(const TopoDS_Edge& E,const Standard_Real Tolerance = 1.0e-5,const GeomAbs_Shape Continuity = GeomAbs_C1,const Standard_Integer MaxDegree = 14,const Standard_Integer MaxSegment = 0) ;
  //! Computes  the 3d curves  for all the  edges of <S> <br>
//!          return False if one of the computation failed. <br>
//!          <MaxSegment> >= 30 in approximation <br>
  Standard_EXPORT   static  Standard_Boolean BuildCurves3d(const TopoDS_Shape& S,const Standard_Real Tolerance,const GeomAbs_Shape Continuity = GeomAbs_C1,const Standard_Integer MaxDegree = 14,const Standard_Integer MaxSegment = 0) ;
  //! Computes  the 3d curves  for all the  edges of <S> <br>
//!          return False if one of the computation failed. <br>
  Standard_EXPORT   static  Standard_Boolean BuildCurves3d(const TopoDS_Shape& S) ;
  
  Standard_EXPORT   static  Standard_Boolean UpdateEdgeTol(const TopoDS_Edge& E,const Standard_Real MinToleranceRequest,const Standard_Real MaxToleranceToCheck) ;
  
  Standard_EXPORT   static  Standard_Boolean UpdateEdgeTolerance(const TopoDS_Shape& S,const Standard_Real MinToleranceRequest,const Standard_Real MaxToleranceToCheck) ;
  //! Computes new 2d curve(s)  for the edge <E> to have <br>
//!          the same parameter  as  the  3d curve. <br>
//!          The algorithm is not done if the flag SameParameter <br>
//!          was True  on the  Edge. <br>
  Standard_EXPORT   static  void SameParameter(const TopoDS_Edge& E,const Standard_Real Tolerance = 1.0e-5) ;
  //! Computes new 2d curve(s) for all the edges of  <S> <br>
//!          to have the same parameter  as  the  3d curve. <br>
//!          The algorithm is not done if the flag SameParameter <br>
//!          was True  on an  Edge. <br>
  Standard_EXPORT   static  void SameParameter(const TopoDS_Shape& S,const Standard_Real Tolerance = 1.0e-5,const Standard_Boolean forced = Standard_False) ;
  //!  Replaces tolerance   of  FACE EDGE VERTEX  by  the <br>
//!          tolerance Max of their connected handling shapes. <br>
//!          It is not necessary to use this call after <br>
//!          SameParameter. (called in) <br>
  Standard_EXPORT   static  void UpdateTolerances(const TopoDS_Shape& S,const Standard_Boolean verifyFaceTolerance = Standard_False) ;
  
  Standard_EXPORT   static  Standard_Boolean OrientClosedSolid(TopoDS_Solid& solid) ;
  //! Encodes the Regularity of edges on a Shape. <br>
//!  Warning: <TolAng> is an angular tolerance, expressed in Rad. <br>
//!  Warning: If the edges's regularity are coded before, nothing <br>
//!          is done. <br>
  Standard_EXPORT   static  void EncodeRegularity(const TopoDS_Shape& S,const Standard_Real TolAng = 1.0e-10) ;
  //! Encodes the Regularity beetween <F1> and <F2> by <E> <br>
//! Warning: <TolAng> is an angular tolerance, expressed in Rad. <br>
//! Warning: If the edge's regularity is coded before, nothing <br>
//!          is done. <br>
  Standard_EXPORT   static  void EncodeRegularity(TopoDS_Edge& S,const TopoDS_Face& F1,const TopoDS_Face& F2,const Standard_Real TolAng = 1.0e-10) ;
  //! Sorts in  LF the Faces of   S on the  complexity of <br>
//!                             their                  surfaces <br>
//!          (Plane,Cylinder,Cone,Sphere,Torus,other) <br>
  Standard_EXPORT   static  void SortFaces(const TopoDS_Shape& S,TopTools_ListOfShape& LF) ;
  //!    Sorts in  LF  the   Faces  of S   on the reverse <br>
//!               complexity       of       their      surfaces <br>
//!          (other,Torus,Sphere,Cone,Cylinder,Plane) <br>
  Standard_EXPORT   static  void ReverseSortFaces(const TopoDS_Shape& S,TopTools_ListOfShape& LF) ;





protected:





private:




friend class BRepLib_Command;
friend class BRepLib_MakeShape;
friend class BRepLib_MakeVertex;
friend class BRepLib_MakeEdge;
friend class BRepLib_MakeEdge2d;
friend class BRepLib_MakePolygon;
friend class BRepLib_MakeFace;
friend class BRepLib_MakeWire;
friend class BRepLib_MakeShell;
friend class BRepLib_MakeSolid;
friend class BRepLib_FindSurface;
friend class BRepLib_FuseEdges;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
