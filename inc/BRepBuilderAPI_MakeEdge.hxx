// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepBuilderAPI_MakeEdge_HeaderFile
#define _BRepBuilderAPI_MakeEdge_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BRepLib_MakeEdge_HeaderFile
#include <BRepLib_MakeEdge.hxx>
#endif
#ifndef _BRepBuilderAPI_MakeShape_HeaderFile
#include <BRepBuilderAPI_MakeShape.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _BRepBuilderAPI_EdgeError_HeaderFile
#include <BRepBuilderAPI_EdgeError.hxx>
#endif
class StdFail_NotDone;
class TopoDS_Vertex;
class gp_Pnt;
class gp_Lin;
class gp_Circ;
class gp_Elips;
class gp_Hypr;
class gp_Parab;
class Geom_Curve;
class Geom2d_Curve;
class Geom_Surface;
class TopoDS_Edge;


//! Provides methods to build edges. <br>
//! <br>
//!          The   methods have  the  following   syntax, where <br>
//!          TheCurve is one of Lin, Circ, ... <br>
//! <br>
//!          Create(C : TheCurve) <br>
//! <br>
//!            Makes an edge on  the whole curve.  Add vertices <br>
//!            on finite curves. <br>
//! <br>
//!          Create(C : TheCurve; p1,p2 : Real) <br>
//! <br>
//!            Make an edge  on the curve between parameters p1 <br>
//!            and p2. if p2 < p1 the edge will be REVERSED. If <br>
//!            p1  or p2 is infinite the  curve will be open in <br>
//!            that  direction. Vertices are created for finite <br>
//!            values of p1 and p2. <br>
//! <br>
//!          Create(C : TheCurve; P1, P2 : Pnt from gp) <br>
//! <br>
//!            Make an edge on the curve  between the points P1 <br>
//!            and P2. The  points are projected on   the curve <br>
//!            and the   previous method is  used. An  error is <br>
//!            raised if the points are not on the curve. <br>
//! <br>
//!          Create(C : TheCurve; V1, V2 : Vertex from TopoDS) <br>
//! <br>
//!            Make an edge  on the curve  between the vertices <br>
//!            V1 and V2. Same as the  previous but no vertices <br>
//!            are created. If a vertex is  Null the curve will <br>
//!            be open in this direction. <br>
class BRepBuilderAPI_MakeEdge  : public BRepBuilderAPI_MakeShape {
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

  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge();
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const TopoDS_Vertex& V1,const TopoDS_Vertex& V2);
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const gp_Pnt& P1,const gp_Pnt& P2);
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const gp_Lin& L);
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const gp_Lin& L,const Standard_Real p1,const Standard_Real p2);
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const gp_Lin& L,const gp_Pnt& P1,const gp_Pnt& P2);
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const gp_Lin& L,const TopoDS_Vertex& V1,const TopoDS_Vertex& V2);
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const gp_Circ& L);
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const gp_Circ& L,const Standard_Real p1,const Standard_Real p2);
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const gp_Circ& L,const gp_Pnt& P1,const gp_Pnt& P2);
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const gp_Circ& L,const TopoDS_Vertex& V1,const TopoDS_Vertex& V2);
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const gp_Elips& L);
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const gp_Elips& L,const Standard_Real p1,const Standard_Real p2);
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const gp_Elips& L,const gp_Pnt& P1,const gp_Pnt& P2);
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const gp_Elips& L,const TopoDS_Vertex& V1,const TopoDS_Vertex& V2);
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const gp_Hypr& L);
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const gp_Hypr& L,const Standard_Real p1,const Standard_Real p2);
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const gp_Hypr& L,const gp_Pnt& P1,const gp_Pnt& P2);
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const gp_Hypr& L,const TopoDS_Vertex& V1,const TopoDS_Vertex& V2);
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const gp_Parab& L);
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const gp_Parab& L,const Standard_Real p1,const Standard_Real p2);
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const gp_Parab& L,const gp_Pnt& P1,const gp_Pnt& P2);
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const gp_Parab& L,const TopoDS_Vertex& V1,const TopoDS_Vertex& V2);
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const Handle(Geom_Curve)& L);
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const Handle(Geom_Curve)& L,const Standard_Real p1,const Standard_Real p2);
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const Handle(Geom_Curve)& L,const gp_Pnt& P1,const gp_Pnt& P2);
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const Handle(Geom_Curve)& L,const TopoDS_Vertex& V1,const TopoDS_Vertex& V2);
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const Handle(Geom_Curve)& L,const gp_Pnt& P1,const gp_Pnt& P2,const Standard_Real p1,const Standard_Real p2);
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const Handle(Geom_Curve)& L,const TopoDS_Vertex& V1,const TopoDS_Vertex& V2,const Standard_Real p1,const Standard_Real p2);
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const Handle(Geom2d_Curve)& L,const Handle(Geom_Surface)& S);
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const Handle(Geom2d_Curve)& L,const Handle(Geom_Surface)& S,const Standard_Real p1,const Standard_Real p2);
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const Handle(Geom2d_Curve)& L,const Handle(Geom_Surface)& S,const gp_Pnt& P1,const gp_Pnt& P2);
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const Handle(Geom2d_Curve)& L,const Handle(Geom_Surface)& S,const TopoDS_Vertex& V1,const TopoDS_Vertex& V2);
  
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const Handle(Geom2d_Curve)& L,const Handle(Geom_Surface)& S,const gp_Pnt& P1,const gp_Pnt& P2,const Standard_Real p1,const Standard_Real p2);
  //! The general method to directly create an edge is to give <br>
//! -      a 3D curve C as the support (geometric domain) of the edge, <br>
//! -      two vertices V1 and V2 to limit the curve (definition of the restriction of <br>
//!    the edge), and <br>
//! -      two real values p1 and p2 which are the parameters for the vertices V1 and V2 <br>
//!    on the curve. <br>
//! The curve may be defined as a 2d curve in the parametric space of a surface: a <br>
//! pcurve. The surface on which the edge is built is then kept at the level of the edge. <br>
//! The default tolerance will be associated with this edge. <br>
//! Rules applied to the arguments: <br>
//! For the curve: <br>
//! -      The curve must not be a 'null handle'. <br>
//! -      If the curve is a trimmed curve the basis curve is used. <br>
//! For the vertices: <br>
//! -      Vertices may be null shapes. When V1 or V2 is null the edge is open in the <br>
//!    corresponding direction and the parameter value p1 or p2 must be infinite <br>
//!    (remember that Precision::Infinite() defines an infinite value). <br>
//! -      The two vertices must be identical if they have the same 3D location. <br>
//!    Identical vertices are used in particular when the curve is closed. <br>
//! For the parameters: <br>
//! -      The parameters must be in the parametric range of the curve (or the basis <br>
//!    curve if the curve is trimmed). If this condition is not satisfied the edge is not <br>
//!    built, and the Error function will return BRepAPI_ParameterOutOfRange. <br>
//! -      Parameter values must not be equal. If this condition is not satisfied (i.e. <br>
//!    if | p1 - p2 | ) the edge is not built, and the Error function will return <br>
//!    BRepAPI_LineThroughIdenticPoints. <br>
//! Parameter values are expected to be given in increasing order: <br>
//!      C->FirstParameter() <br>
//! - If the parameter values are given in decreasing order the vertices are switched, <br>
//! i.e. the "first vertex" is on the point of parameter p2 and the "second vertex" is <br>
//! on the point of parameter p1. In such a case, to keep the original intent of the <br>
//! construction, the edge will be oriented "reversed". <br>
//! - On a periodic curve the parameter values p1 and p2 are adjusted by adding or <br>
//! subtracting the period to obtain p1 in the parametric range of the curve, and p2] <br>
//! such that [ p1 , where Period is the period of the curve. <br>
//! - A parameter value may be infinite. The edge is open in the corresponding <br>
//! direction. However the corresponding vertex must be a null shape. If this condition <br>
//! is not satisfied the edge is not built, and the Error function will return <br>
//! BRepAPI_PointWithInfiniteParameter. <br>
//! - The distance between the vertex and the point evaluated on the curve with the <br>
//! parameter, must be lower than the precision of the vertex. If this condition is not <br>
//! satisfied the edge is not built, and the Error function will return <br>
//! BRepAPI_DifferentsPointAndParameter. <br>
//!  Other edge constructions <br>
//! - The parameter values can be omitted, they will be computed by projecting the <br>
//! vertices on the curve. Note that projection is the only way to evaluate the <br>
//! parameter values of the vertices on the curve: vertices must be given on the curve, <br>
//! i.e. the distance from a vertex to the curve must be less than or equal to the <br>
//! precision of the vertex. If this condition is not satisfied the edge is not built, <br>
//! and the Error function will return BRepAPI_PointProjectionFailed. <br>
//! -      3D points can be given in place of vertices. Vertices will be created from the <br>
//!    points (with the default topological precision Precision::Confusion()). <br>
//! Note: <br>
//! -      Giving vertices is useful when creating a connected edge. <br>
//! -      If the parameter values correspond to the extremities of a closed curve, <br>
//!    points must be identical, or at least coincident. If this condition is not <br>
//!    satisfied the edge is not built, and the Error function will return <br>
//!   BRepAPI_DifferentPointsOnClosedCurve. <br>
//! -      The vertices or points can be omitted if the parameter values are given. The <br>
//!    points will be computed from the parameters on the curve. <br>
//! The vertices or points and the parameter values can be omitted. The first and last <br>
//!   parameters of the curve will then be used. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeEdge(const Handle(Geom2d_Curve)& L,const Handle(Geom_Surface)& S,const TopoDS_Vertex& V1,const TopoDS_Vertex& V2,const Standard_Real p1,const Standard_Real p2);
  
  Standard_EXPORT     void Init(const Handle(Geom_Curve)& C) ;
  
  Standard_EXPORT     void Init(const Handle(Geom_Curve)& C,const Standard_Real p1,const Standard_Real p2) ;
  
  Standard_EXPORT     void Init(const Handle(Geom_Curve)& C,const gp_Pnt& P1,const gp_Pnt& P2) ;
  
  Standard_EXPORT     void Init(const Handle(Geom_Curve)& C,const TopoDS_Vertex& V1,const TopoDS_Vertex& V2) ;
  
  Standard_EXPORT     void Init(const Handle(Geom_Curve)& C,const gp_Pnt& P1,const gp_Pnt& P2,const Standard_Real p1,const Standard_Real p2) ;
  
  Standard_EXPORT     void Init(const Handle(Geom_Curve)& C,const TopoDS_Vertex& V1,const TopoDS_Vertex& V2,const Standard_Real p1,const Standard_Real p2) ;
  
  Standard_EXPORT     void Init(const Handle(Geom2d_Curve)& C,const Handle(Geom_Surface)& S) ;
  
  Standard_EXPORT     void Init(const Handle(Geom2d_Curve)& C,const Handle(Geom_Surface)& S,const Standard_Real p1,const Standard_Real p2) ;
  
  Standard_EXPORT     void Init(const Handle(Geom2d_Curve)& C,const Handle(Geom_Surface)& S,const gp_Pnt& P1,const gp_Pnt& P2) ;
  
  Standard_EXPORT     void Init(const Handle(Geom2d_Curve)& C,const Handle(Geom_Surface)& S,const TopoDS_Vertex& V1,const TopoDS_Vertex& V2) ;
  
  Standard_EXPORT     void Init(const Handle(Geom2d_Curve)& C,const Handle(Geom_Surface)& S,const gp_Pnt& P1,const gp_Pnt& P2,const Standard_Real p1,const Standard_Real p2) ;
  //! Defines or redefines the arguments for the construction of an edge. <br>
//! This function is currently used after the empty constructor BRepAPI_MakeEdge(). <br>
  Standard_EXPORT     void Init(const Handle(Geom2d_Curve)& C,const Handle(Geom_Surface)& S,const TopoDS_Vertex& V1,const TopoDS_Vertex& V2,const Standard_Real p1,const Standard_Real p2) ;
  //! Returns true if the edge is built. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsDone() const;
  //! Returns the construction status <br>
//! -   BRepBuilderAPI_EdgeDone if the edge is built, or <br>
//! -   another value of the BRepBuilderAPI_EdgeError <br>
//!   enumeration indicating the reason of construction failure. <br>
  Standard_EXPORT     BRepBuilderAPI_EdgeError Error() const;
  
//! Returns the constructed edge. <br>
//! Exceptions StdFail_NotDone if the edge is not built. <br>
  Standard_EXPORT    const TopoDS_Edge& Edge() const;
Standard_EXPORT operator TopoDS_Edge() const;
  //! Returns the first vertex of the edge. May be Null. <br>
//! <br>
  Standard_EXPORT    const TopoDS_Vertex& Vertex1() const;
  //! Returns the second vertex of the edge. May be Null. <br>
//! <br>
//! Warning <br>
//! The returned vertex in each function corresponds respectively to <br>
//! -   the lowest, or <br>
//! -   the highest parameter on the curve along which the edge is built. <br>
//!  It does not correspond to the first or second vertex <br>
//! given at the time of the construction, if the edge is oriented reversed. <br>
//! Exceptions <br>
//! StdFail_NotDone if the edge is not built. <br>
  Standard_EXPORT    const TopoDS_Vertex& Vertex2() const;





protected:





private:



BRepLib_MakeEdge myMakeEdge;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
