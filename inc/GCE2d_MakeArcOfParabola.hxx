// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GCE2d_MakeArcOfParabola_HeaderFile
#define _GCE2d_MakeArcOfParabola_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Geom2d_TrimmedCurve_HeaderFile
#include <Handle_Geom2d_TrimmedCurve.hxx>
#endif
#ifndef _GCE2d_Root_HeaderFile
#include <GCE2d_Root.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Geom2d_TrimmedCurve;
class StdFail_NotDone;
class gp_Parab2d;
class gp_Pnt2d;


//! Implements construction algorithms for an arc of <br>
//! parabola in the plane. The result is a Geom2d_TrimmedCurve curve. <br>
//! A MakeArcOfParabola object provides a framework for: <br>
//! -   defining the construction of the arc of parabola, <br>
//! -   implementing the construction algorithm, and <br>
//! -   consulting the results. In particular, the Value <br>
//!   function returns the constructed arc of parabola. <br>
class GCE2d_MakeArcOfParabola  : public GCE2d_Root {
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

  //! Make an arc of Parabola (TrimmedCurve from Geom2d) from <br>
//!          a Parabola between two parameters Alpha1 and Alpha2. <br>
  Standard_EXPORT   GCE2d_MakeArcOfParabola(const gp_Parab2d& Parab,const Standard_Real Alpha1,const Standard_Real Alpha2,const Standard_Boolean Sense = Standard_True);
  //! Make an arc of Parabola (TrimmedCurve from Geom2d) from <br>
//!          a Parabola between point <P> and the parameter <br>
//!          Alpha. <br>
  Standard_EXPORT   GCE2d_MakeArcOfParabola(const gp_Parab2d& Parab,const gp_Pnt2d& P,const Standard_Real Alpha,const Standard_Boolean Sense = Standard_True);
  //! Make an arc of Parabola (TrimmedCurve from Geom2d) from <br>
//!          a Parabola between two points P1 and P2. <br>
//! Please, note: the orientation of the arc of parabola is: <br>
//!   -   the trigonometric sense if Sense is not defined <br>
//!    or is true (default value), or <br>
//!   -   the opposite sense if Sense is false. <br>
//! - IsDone always returns true. <br>
  Standard_EXPORT   GCE2d_MakeArcOfParabola(const gp_Parab2d& Parab,const gp_Pnt2d& P1,const gp_Pnt2d& P2,const Standard_Boolean Sense = Standard_True);
  //! Returns the constructed arc of parabola. <br>
  Standard_EXPORT    const Handle_Geom2d_TrimmedCurve& Value() const;
  
  Standard_EXPORT    const Handle_Geom2d_TrimmedCurve& Operator() const;
Standard_EXPORT operator Handle_Geom2d_TrimmedCurve() const;





protected:





private:



Handle_Geom2d_TrimmedCurve TheArc;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
