// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopClass_Intersection3d_HeaderFile
#define _TopClass_Intersection3d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopAbs_State_HeaderFile
#include <TopAbs_State.hxx>
#endif
class gp_Lin;
class TopoDS_Face;
class IntCurveSurface_IntersectionPoint;


//! Template class for the intersection algorithm required <br>
//!          by the 3D classifications. <br>
//! <br>
//!          (a intersection point near the origin of the line, ie. <br>
//!          at a distance less or equal than <tolerance>, will be <br>
//!          returned even if it has a negative parameter.) <br>
//! <br>
class TopClass_Intersection3d  {
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

  //! Perform the intersection between the <br>
//!          segment L(0) ... L(Prm) and the Face <Face>. <br>
//! <br>
//!          Only the point with the smallest parameter on the <br>
//!          line is returned. <br>
//! <br>
//!          The Tolerance <Tol> is used to determine if the <br>
//!          first point of the segment is near the face. In <br>
//!          that case, the parameter of the intersection point <br>
//!          on the line can be a negative value (greater than -Tol). <br>
  Standard_EXPORT   virtual  void Perform(const gp_Lin& L,const Standard_Real Prm,const Standard_Real Tol,const TopoDS_Face& Face)  = 0;
  //! True is returned when the intersection have been computed. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsDone() const = 0;
  //! True is returned if a point has been found. <br>
  Standard_EXPORT   virtual  Standard_Boolean HasAPoint() const = 0;
  //! Returns the Intersection Point. <br>
  Standard_EXPORT   virtual const IntCurveSurface_IntersectionPoint& Point() const = 0;
  //! Returns the state of the point on the face. <br>
//!          The values can be either TopAbs_IN <br>
//!             ( the point is in the face) <br>
//!           or TopAbs_ON <br>
//!             ( the point is on a boudary of the face). <br>
  Standard_EXPORT   virtual  TopAbs_State State() const = 0;





protected:

  //! Empty constructor. <br>
  Standard_EXPORT   TopClass_Intersection3d();




private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
