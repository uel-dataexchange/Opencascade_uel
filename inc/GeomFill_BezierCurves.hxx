// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_BezierCurves_HeaderFile
#define _GeomFill_BezierCurves_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Geom_BezierSurface_HeaderFile
#include <Handle_Geom_BezierSurface.hxx>
#endif
#ifndef _Handle_Geom_BezierCurve_HeaderFile
#include <Handle_Geom_BezierCurve.hxx>
#endif
#ifndef _GeomFill_FillingStyle_HeaderFile
#include <GeomFill_FillingStyle.hxx>
#endif
class Geom_BezierSurface;
class Standard_ConstructionError;
class Geom_BezierCurve;


//! This class provides an algorithm for constructing a Bezier surface filled from <br>
//! contiguous Bezier curves which form its boundaries. <br>
//! The algorithm accepts two, three or four Bezier curves <br>
//! as the boundaries of the target surface. <br>
//! A range of filling styles - more or less rounded, more or less flat - is available. <br>
//! A BezierCurves object provides a framework for: <br>
//! -   defining the boundaries, and the filling style of the surface <br>
//! -   implementing the construction algorithm <br>
//! -   consulting the result. <br>
//! Warning <br>
//! Some problems may show up with rational curves. <br>
class GeomFill_BezierCurves  {
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

  //! Constructs an empty framework for building a Bezier <br>
//! surface from contiguous Bezier curves. <br>
//! You use the Init function to define the boundaries of the surface. <br>
  Standard_EXPORT   GeomFill_BezierCurves();
  //! Constructs a framework for building a Bezier surface <br>
//! from the four contiguous Bezier curves, C1, C2, C3 and C4 <br>
//! Raises Standard_ConstructionError if the curves are not contiguous. <br>
  Standard_EXPORT   GeomFill_BezierCurves(const Handle(Geom_BezierCurve)& C1,const Handle(Geom_BezierCurve)& C2,const Handle(Geom_BezierCurve)& C3,const Handle(Geom_BezierCurve)& C4,const GeomFill_FillingStyle Type);
  //! Constructs a framework for building a Bezier surface <br>
//! from the three contiguous Bezier curves, C1, C2 and C3 <br>
//! Raises Standard_ConstructionError if the curves are not contiguous. <br>
  Standard_EXPORT   GeomFill_BezierCurves(const Handle(Geom_BezierCurve)& C1,const Handle(Geom_BezierCurve)& C2,const Handle(Geom_BezierCurve)& C3,const GeomFill_FillingStyle Type);
  //! Constructs a framework for building a Bezier surface <br>
//! from the two contiguous Bezier curves, C1 and C2 <br>
//! Raises Standard_ConstructionError if the curves are not contiguous. <br>
  Standard_EXPORT   GeomFill_BezierCurves(const Handle(Geom_BezierCurve)& C1,const Handle(Geom_BezierCurve)& C2,const GeomFill_FillingStyle Type);
  //! if the curves cannot be joined <br>
  Standard_EXPORT     void Init(const Handle(Geom_BezierCurve)& C1,const Handle(Geom_BezierCurve)& C2,const Handle(Geom_BezierCurve)& C3,const Handle(Geom_BezierCurve)& C4,const GeomFill_FillingStyle Type) ;
  //! if the curves cannot be joined <br>
  Standard_EXPORT     void Init(const Handle(Geom_BezierCurve)& C1,const Handle(Geom_BezierCurve)& C2,const Handle(Geom_BezierCurve)& C3,const GeomFill_FillingStyle Type) ;
  //! Initializes or reinitializes this algorithm with two, three, <br>
//! or four curves - C1, C2, C3, and C4 - and Type, one <br>
//! of the following filling styles: <br>
//! -   GeomFill_Stretch - the style with the flattest patch <br>
//! -   GeomFill_Coons - a rounded style of patch with <br>
//!   less depth than that of Curved <br>
//! -   GeomFill_Curved - the style with the most rounded patch. <br>
//!  Exceptions <br>
//! Standard_ConstructionError if the curves are not contiguous. <br>
  Standard_EXPORT     void Init(const Handle(Geom_BezierCurve)& C1,const Handle(Geom_BezierCurve)& C2,const GeomFill_FillingStyle Type) ;
  //! Returns the Bezier surface resulting from the <br>
//! computation performed by this algorithm. <br>
       const Handle_Geom_BezierSurface& Surface() const;





protected:





private:



Handle_Geom_BezierSurface mySurface;


};


#include <GeomFill_BezierCurves.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
