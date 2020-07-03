// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepAlgoAPI_Section_HeaderFile
#define _BRepAlgoAPI_Section_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _BRepAlgoAPI_BooleanOperation_HeaderFile
#include <BRepAlgoAPI_BooleanOperation.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
class TopoDS_Shape;
class BOPTools_DSFiller;
class gp_Pln;
class Geom_Surface;
class Geom2d_Curve;


//! Computes the intersection of two shapes or geometries. <br>
//! Geometries can be surfaces of planes. <br>
//! Geometries are converted to faces <br>
//! When a geometry has been converted to <br>
//! topology the created shape can be found using <br>
//! the methods Shape1 and Shape2 inherited from the class BooleanOperation. <br>
//! The result (Shape() method) is a compound containing <br>
//! edges built on intersection curves. <br>
//! By default, the section is performed immediatly in <br>
//! class constructors, with default values : <br>
//! - geometries built are NOT approximated. <br>
//! - PCurves are NOT computed on both parts. <br>
//! Example : giving two shapes S1,S2 accessing faces, <br>
//! let compute the section edges R on S1,S2, <br>
//! performing approximation on new curves, <br>
//! performing PCurve on part 1 but not on part 2 : <br>
//! Standard_Boolean PerformNow = Standard_False; <br>
//! BRepBoolAPI_Section S(S1,S2,PerformNow); <br>
//! S.ComputePCurveOn1(Standard_True); <br>
//! S.Approximation(Standard_True); <br>
//! S.Build(); <br>
//! TopoDS_Shape R = S.Shape(); <br>
//! On Null Shapes of geometries, NotDone() is called. <br>
class BRepAlgoAPI_Section  : public BRepAlgoAPI_BooleanOperation {
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

  
  Standard_EXPORT   BRepAlgoAPI_Section(const TopoDS_Shape& S1,const TopoDS_Shape& S2,const BOPTools_DSFiller& aDSF,const Standard_Boolean PerformNow = Standard_True);
  //! see upper <br>
  Standard_EXPORT   BRepAlgoAPI_Section(const TopoDS_Shape& Sh1,const TopoDS_Shape& Sh2,const Standard_Boolean PerformNow = Standard_True);
  //! see upper <br>
  Standard_EXPORT   BRepAlgoAPI_Section(const TopoDS_Shape& Sh,const gp_Pln& Pl,const Standard_Boolean PerformNow = Standard_True);
  //! see upper <br>
  Standard_EXPORT   BRepAlgoAPI_Section(const TopoDS_Shape& Sh,const Handle(Geom_Surface)& Sf,const Standard_Boolean PerformNow = Standard_True);
  //! see upper <br>
  Standard_EXPORT   BRepAlgoAPI_Section(const Handle(Geom_Surface)& Sf,const TopoDS_Shape& Sh,const Standard_Boolean PerformNow = Standard_True);
  //! This and the above classes construct a framework for <br>
//! computing the section lines of: <br>
//! -       two shapes Sh1 and Sh2, or <br>
//! -       shape Sh and plane Pl,  or <br>
//! -       shape Sh and surface Sf, or <br>
//! -       surface Sf and shape Sh, or <br>
//! -       two surfaces Sf1 and Sf2, <br>
//!   and builds a result if PerformNow equals true, its <br>
//! default value. If PerformNow equals false, the intersection <br>
//! will be computed later by the function Build. <br>
//!  The constructed shape will be returned by the function Shape. <br>
//! This is a compound object composed of edges. These <br>
//! intersection edges may be built: <br>
//! -      on new intersection lines, or <br>
//! -      on coincident portions of edges in the two intersected    shapes. <br>
//!   These intersection edges are independent: they are not <br>
//! chained or grouped in wires. If no intersection edge exists, the <br>
//! result is an empty compound object. <br>
//! Note that other objects than TopoDS_Shape shapes involved in <br>
//! these syntaxes are converted into faces or shells before <br>
//! performing the computation of the intersection. A shape <br>
//! resulting from this conversion can be retrieved with the <br>
//! function Shape1 or Shape2. <br>
//! Parametric 2D curves on intersection edges <br>
//! No parametric 2D curve (pcurve) is defined for each elementary <br>
//! edge of the result. To attach such parametric curves to the <br>
//! constructed edges you may use a constructor with the PerformNow <br>
//! flag equal to false; then you use: <br>
//! -      the function ComputePCurveOn1 to ask for <br>
//!    the additional computation of a pcurve in the parametric <br>
//!    space of the first shape, <br>
//! -      the function ComputePCurveOn2 to ask for <br>
//!    the additional computation of a pcurve in the parametric <br>
//!    space of the second shape, in the end, <br>
//! -      the function Build to construct the result. <br>
//!   Approximation of intersection edges <br>
//!   The underlying 3D geometry attached to each elementary edge <br>
//! of the result is: <br>
//! -       analytic where possible, provided the corresponding <br>
//!    geometry corresponds to a type of analytic curve <br>
//!    defined in the Geom package; for example, the intersection <br>
//!    of a cylindrical shape with a plane gives an ellipse or a    circle; <br>
//! -       or elsewhere, given as a succession of points grouped <br>
//!    together in a BSpline curve of degree 1. <br>
//! If you prefer to have an attached 3D geometry which is a <br>
//! BSpline approximation of the computed set of points on <br>
//! computed elementary intersection edges whose underlying geometry <br>
//! is not analytic, you may use a constructor with the PerformNow <br>
//! flag equal to false. Then you use: <br>
//! -      the function Approximation to ask for this <br>
//!    computation option, and <br>
//! -      the function Build to construct the result. <br>
//! -      Note that as a result, approximations will only be <br>
//!    computed on edges built on new intersection lines. <br>
//! -      Example <br>
//! You may also combine these computation options. In the following example: <br>
//! - each elementary edge of the computed intersection, <br>
//!   built on a new intersection line, which does not <br>
//!  correspond to an analytic Geom curve, will be approximated by <br>
//!   a BSpline curve whose degree is not greater than 8. <br>
//! - each elementary edge built on a new intersection line, will have: <br>
//! - a pcurve in the parametric space of the intersected face of shape S1, <br>
//! - no pcurve in the parametric space of the intersected face of shape S2. <br>
//!       // TopoDS_Shape S1 = ... , S2 = ... ; <br>
//! Standard_Boolean PerformNow = Standard_False; <br>
//! BRepAlgoAPI_Section S ( S1, S2, PerformNow ); <br>
//! S.ComputePCurveOn1 (Standard_True); <br>
//! S.Approximation (Standard_True); <br>
//! S.Build(); <br>
//! TopoDS_Shape R = S.Shape(); <br>
  Standard_EXPORT   BRepAlgoAPI_Section(const Handle(Geom_Surface)& Sf1,const Handle(Geom_Surface)& Sf2,const Standard_Boolean PerformNow = Standard_True);
  //! initialize first part <br>
  Standard_EXPORT     void Init1(const TopoDS_Shape& S1) ;
  //! initialize first part <br>
  Standard_EXPORT     void Init1(const gp_Pln& Pl) ;
  //! initialize first part <br>
  Standard_EXPORT     void Init1(const Handle(Geom_Surface)& Sf) ;
  //! initialize second part <br>
  Standard_EXPORT     void Init2(const TopoDS_Shape& S2) ;
  //! initialize second part <br>
  Standard_EXPORT     void Init2(const gp_Pln& Pl) ;
  //! Reinitializes the first and the <br>
//! second parts on which this algorithm is going to perform <br>
//! the intersection computation. This is done with either: the <br>
//! surface Sf, the plane Pl or the shape Sh. <br>
//! You use the function Build to construct the result. <br>
  Standard_EXPORT     void Init2(const Handle(Geom_Surface)& Sf) ;
  //! Defines an option for computation <br>
//! of further intersections. This computation will be performed by <br>
//! the function Build in this framework. <br>
//! By default, the underlying 3D geometry attached to each <br>
//! elementary edge of the result of a computed intersection is: <br>
//! - analytic where possible, provided the corresponding <br>
//!    geometry corresponds to a type of analytic curve defined in <br>
//!    the Geom package; for example the intersection of a <br>
//!    cylindrical shape with a plane gives an ellipse or a circle; <br>
//! -      or elsewhere, given as a succession of points grouped <br>
//! together in a BSpline curve of degree 1. If Approx equals <br>
//! true, when further computations are performed in this framework <br>
//! with the function Build, these edges will have an attached 3D <br>
//!    geometry which is a BSpline approximation of the computed <br>
//!    set of points. <br>
//!   Note that as a result, approximations will be computed <br>
//! on edges built only on new intersection lines. <br>
  Standard_EXPORT     void Approximation(const Standard_Boolean B) ;
  
//! Indicates if the Pcurve must be (or not) performed on first part. <br>
  Standard_EXPORT     void ComputePCurveOn1(const Standard_Boolean B) ;
  //! Define options for the computation of further <br>
//! intersections, which will be performed by the function Build <br>
//! in this framework. <br>
//! By default, no parametric 2D curve (pcurve) is defined for the <br>
//! elementary edges of the result. If ComputePCurve1 equals true, <br>
//! further computations performed in this framework with the function <br>
//! Build will attach an additional pcurve in the parametric space of <br>
//! the first shape to the constructed edges. <br>
//! If ComputePCurve2 equals true, the additional pcurve will be <br>
//! attached to the constructed edges in the parametric space of the <br>
//! second shape. <br>
//! These two functions may be used together. <br>
  Standard_EXPORT     void ComputePCurveOn2(const Standard_Boolean B) ;
  //!  Performs the computation of <br>
//! section lines between two parts defined at the time of <br>
//! construction of this framework or reinitialized with the Init1 and <br>
//! Init2 functions. <br>
//! The constructed shape will be returned by the function Shape. <br>
//! This is a compound object composed of edges. These <br>
//! intersection edges may be built: <br>
//! -      on new intersection lines, or <br>
//! -      on coincident portions of edges in the two intersected shapes. <br>
//! These intersection edges are independent: they are not chained <br>
//! or grouped into wires. <br>
//! If no intersection edge exists, the result is an empty compound object. <br>
//! The shapes involved in the construction of section lines can <br>
//! be retrieved with the function Shape1 or Shape2. Note that other <br>
//! objects than TopoDS_Shape shapes given as arguments at the <br>
//! construction time of this framework, or to the Init1 or <br>
//! Init2 function, are converted into faces or shells before <br>
//! performing the computation of the intersection. <br>
//! Parametric 2D curves on intersection edges <br>
//! No parametric 2D curve (pcurve) is defined for the elementary <br>
//! edges of the result. To attach parametric curves like this to <br>
//! the constructed edges you have to use: <br>
//! -      the function <br>
//! ComputePCurveOn1 to ask for the additional computation of a <br>
//! pcurve in the parametric space of the first shape, <br>
//! -      the function <br>
//!    ComputePCurveOn2 to ask for the additional computation of a <br>
//!    pcurve in the parametric space of the second shape. <br>
//! This must be done before calling this function. <br>
//!   Approximation of intersection edges <br>
//! The underlying 3D geometry attached to each elementary edge of the result is: <br>
//! -      analytic (where possible) provided the corresponding <br>
//! geometry corresponds to a type of analytic curve defined in <br>
//!    the Geom package; for example, the intersection of a <br>
//!    cylindrical shape with a plane gives an ellipse or a circle;    or <br>
//! -      elsewhere, given as a succession of points grouped <br>
//!    together in a BSpline curve of degree 1. <br>
//!   If, on computed elementary intersection edges whose <br>
//! underlying geometry is not analytic, you prefer to have an <br>
//! attached 3D geometry which is a Bspline approximation of the <br>
//! computed set of points, you have to use the function Approximation <br>
//! to ask for this computation option before calling this function. <br>
//! You may also have combined these computation options: look at the <br>
//! example given above to illustrate the use of the constructors. <br>
  Standard_EXPORT     void Build() ;
  
//! get the face of the first part giving section edge <E>. <br>
//! Returns True on the 3 following conditions : <br>
//! 1/ <E> is an edge returned by the Shape() method. <br>
//! 2/ First part of section performed is a shape. <br>
//! 3/ <E> is built on a intersection curve (i.e <E> <br>
//! 	 is not the result of common edges) <br>
//! When False, F remains untouched. <br>
  Standard_EXPORT     Standard_Boolean HasAncestorFaceOn1(const TopoDS_Shape& E,TopoDS_Shape& F) const;
  //!  Identifies the ancestor faces of <br>
//! the intersection edge E resulting from the last <br>
//! computation performed in this framework, that is, the faces of <br>
//! the two original shapes on which the edge E lies: <br>
//! -      HasAncestorFaceOn1 gives the ancestor face in the first shape, and <br>
//! -      HasAncestorFaceOn2 gives the ancestor face in the second shape. <br>
//!   These functions return true if an ancestor face F is found, or false if not. <br>
//!   An ancestor face is identifiable for the edge E if the following <br>
//! conditions are satisfied: <br>
//! -  the first part on which this algorithm performed its <br>
//!    last computation is a shape, that is, it was not given as <br>
//! a surface or a plane at the time of construction of this <br>
//! algorithm or at a later time by the Init1 function, <br>
//! - E is one of the elementary edges built by the <br>
//! last computation of this section algorithm. <br>
//! To use these functions properly, you have to test the returned <br>
//! Boolean value before using the ancestor face: F is significant <br>
//! only if the returned Boolean value equals true. <br>
  Standard_EXPORT     Standard_Boolean HasAncestorFaceOn2(const TopoDS_Shape& E,TopoDS_Shape& F) const;
  //! returns the PCurve connected to section edge <E> <br>
//! and lying on first part of Section. <br>
//! N.B : PCurve on first part is computed only if Section is performed <br>
//! after setting ComputePCurveOn1(Standard_True). <br>
  Standard_EXPORT     Handle_Geom2d_Curve PCurveOn1(const TopoDS_Shape& E) const;
  //! returns the PCurve connected to section edge <E> <br>
//! and lying on second part of Section. <br>
//! N.B : PCurve on second part is computed only if Section is performed <br>
//! after setting ComputePCurveOn2(Standard_True). <br>
//! Warning No pcurve is attached to an elementary edge of the <br>
//!    resulting section, and the function returns a null <br>
//!    handle, unless the function ComputePCurveOn1 or <br>
//!    ComputePCurveOn2 was previously used to define <br>
//!    this sort of option of computation. <br>
//! -      A null handle is also returned if the edge E does <br>
//!    not belong to the last computed intersection, that <br>
//!    is, if it is not one of the elementary edges of the <br>
//!    compound object returned by the function Shape. <br>
  Standard_EXPORT     Handle_Geom2d_Curve PCurveOn2(const TopoDS_Shape& E) const;





protected:





private:

  
  Standard_EXPORT     void InitParameters() ;


Standard_Boolean myshapeisnull;
Standard_Boolean myparameterschanged;
Standard_Boolean myApprox;
Standard_Boolean myComputePCurve1;
Standard_Boolean myComputePCurve2;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
