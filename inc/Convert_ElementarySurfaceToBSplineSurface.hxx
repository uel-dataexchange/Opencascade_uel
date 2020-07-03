// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Convert_ElementarySurfaceToBSplineSurface_HeaderFile
#define _Convert_ElementarySurfaceToBSplineSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TColgp_Array2OfPnt_HeaderFile
#include <TColgp_Array2OfPnt.hxx>
#endif
#ifndef _TColStd_Array2OfReal_HeaderFile
#include <TColStd_Array2OfReal.hxx>
#endif
#ifndef _TColStd_Array1OfReal_HeaderFile
#include <TColStd_Array1OfReal.hxx>
#endif
#ifndef _TColStd_Array1OfInteger_HeaderFile
#include <TColStd_Array1OfInteger.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Standard_OutOfRange;
class gp_Pnt;


//!Root class for algorithms which convert an elementary <br>
//! surface (cylinder, cone, sphere or torus) into a BSpline <br>
//! surface (CylinderToBSplineSurface, ConeToBSplineSurface, <br>
//!  SphereToBSplineSurface, TorusToBSplineSurface). <br>
//! These algorithms all work on elementary surfaces from <br>
//! the gp package and compute all the data needed to <br>
//! construct a BSpline surface equivalent to the cylinder, <br>
//! cone, sphere or torus. This data consists of the following: <br>
//! -   degrees in the u and v parametric directions, <br>
//! -   periodic characteristics in the u and v parametric directions, <br>
//! -   a poles table with associated weights, <br>
//! -   a knots table (for the u and v parametric directions) <br>
//!  with associated multiplicities. <br>
//! The abstract class <br>
//! ElementarySurfaceToBSplineSurface provides a <br>
//! framework for storing and consulting this computed data. <br>
//! This data may then be used to construct a <br>
//! Geom_BSplineSurface surface, for example. <br>
//!  All those classes define algorithmes to convert an <br>
//!  ElementarySurface into a B-spline surface. <br>
//!  This abstract class implements the methods to get <br>
//!  the geometric representation of the B-spline surface. <br>
//!  The B-spline representation is computed at the creation <br>
//!  time in the sub classes. <br>
//!  The B-spline surface is defined with its degree in the <br>
//!  parametric U and V directions, its control points (Poles), <br>
//!  its weights, its knots and their multiplicity. <br>
//!  KeyWords : <br>
//!  Convert, ElementarySurface, BSplineSurface. <br>
class Convert_ElementarySurfaceToBSplineSurface  {
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

  
  Standard_EXPORT     Standard_Integer UDegree() const;
  //! Returns the degree for the u or v parametric direction of <br>
//! the BSpline surface whose data is computed in this framework. <br>
  Standard_EXPORT     Standard_Integer VDegree() const;
  
  Standard_EXPORT     Standard_Integer NbUPoles() const;
  //! Returns the number of poles for the u or v parametric <br>
//! direction of the BSpline surface whose data is computed in this framework. <br>
  Standard_EXPORT     Standard_Integer NbVPoles() const;
  
  Standard_EXPORT     Standard_Integer NbUKnots() const;
  //! Returns the number of knots for the u or v parametric <br>
//! direction of the BSpline surface whose data is computed in this framework . <br>
  Standard_EXPORT     Standard_Integer NbVKnots() const;
  
  Standard_EXPORT     Standard_Boolean IsUPeriodic() const;
  //! Returns true if the BSpline surface whose data is computed <br>
//! in this framework is periodic in the u or v parametric direction. <br>
  Standard_EXPORT     Standard_Boolean IsVPeriodic() const;
  //!  Returns the pole of index (UIndex,VIndex) to the poles <br>
//! table of the BSpline surface whose data is computed in this framework. <br>
//! Exceptions <br>
//! Standard_OutOfRange if, for the BSpline surface whose <br>
//! data is computed in this framework: <br>
//! -   UIndex is outside the bounds of the poles table in the u <br>
//!  parametric direction, or <br>
//! -   VIndex is outside the bounds of the poles table in the v <br>
//!  parametric direction. <br>
  Standard_EXPORT     gp_Pnt Pole(const Standard_Integer UIndex,const Standard_Integer VIndex) const;
  //!  Returns the weight of the pole of index (UIndex,VIndex) to <br>
//! the poles table of the BSpline surface whose data is computed in this framework. <br>
//! Exceptions <br>
//! Standard_OutOfRange if, for the BSpline surface whose <br>
//! data is computed in this framework: <br>
//! -   UIndex is outside the bounds of the poles table in the u <br>
//!  parametric direction, or <br>
//! -   VIndex is outside the bounds of the poles table in the v <br>
//!  parametric direction. <br>
  Standard_EXPORT     Standard_Real Weight(const Standard_Integer UIndex,const Standard_Integer VIndex) const;
  //!  Returns the U-knot of range UIndex. <br>//! Raised if UIndex < 1 or UIndex > NbUKnots. <br>
  Standard_EXPORT     Standard_Real UKnot(const Standard_Integer UIndex) const;
  //! Returns the V-knot of range VIndex. <br>//! Raised if VIndex < 1 or VIndex > NbVKnots. <br>
  Standard_EXPORT     Standard_Real VKnot(const Standard_Integer UIndex) const;
  //! Returns the multiplicity of the U-knot of range UIndex. <br>//! Raised if UIndex < 1 or UIndex > NbUKnots. <br>
  Standard_EXPORT     Standard_Integer UMultiplicity(const Standard_Integer UIndex) const;
  //! Returns the multiplicity of the V-knot of range VIndex. <br>//! Raised if VIndex < 1 or VIndex > NbVKnots. <br>
  Standard_EXPORT     Standard_Integer VMultiplicity(const Standard_Integer VIndex) const;





protected:

  
  Standard_EXPORT   Convert_ElementarySurfaceToBSplineSurface(const Standard_Integer NumberOfUPoles,const Standard_Integer NumberOfVPoles,const Standard_Integer NumberOfUKnots,const Standard_Integer NumberOfVKnots,const Standard_Integer UDegree,const Standard_Integer VDegree);


TColgp_Array2OfPnt poles;
TColStd_Array2OfReal weights;
TColStd_Array1OfReal uknots;
TColStd_Array1OfInteger umults;
TColStd_Array1OfReal vknots;
TColStd_Array1OfInteger vmults;
Standard_Integer udegree;
Standard_Integer vdegree;
Standard_Integer nbUPoles;
Standard_Integer nbVPoles;
Standard_Integer nbUKnots;
Standard_Integer nbVKnots;
Standard_Boolean isuperiodic;
Standard_Boolean isvperiodic;


private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
