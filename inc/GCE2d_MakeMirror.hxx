// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GCE2d_MakeMirror_HeaderFile
#define _GCE2d_MakeMirror_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Geom2d_Transformation_HeaderFile
#include <Handle_Geom2d_Transformation.hxx>
#endif
class Geom2d_Transformation;
class gp_Pnt2d;
class gp_Ax2d;
class gp_Lin2d;
class gp_Dir2d;


//! This class implements elementary construction algorithms for a <br>
//! symmetrical transformation in 2D space about a point <br>
//! or axis. The result is a Geom2d_Transformation transformation. <br>
//! A MakeMirror object provides a framework for: <br>
//! -   defining the construction of the transformation, <br>
//! -   implementing the construction algorithm, and <br>
//! -   consulting the result. <br>
class GCE2d_MakeMirror  {
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

  
  Standard_EXPORT   GCE2d_MakeMirror(const gp_Pnt2d& Point);
  
  Standard_EXPORT   GCE2d_MakeMirror(const gp_Ax2d& Axis);
  
  Standard_EXPORT   GCE2d_MakeMirror(const gp_Lin2d& Line);
  //! Make a symetry transformation af axis defined by <br>
//!          <Point> and <Direc>. <br>
  Standard_EXPORT   GCE2d_MakeMirror(const gp_Pnt2d& Point,const gp_Dir2d& Direc);
  //! Returns the constructed transformation. <br>
  Standard_EXPORT    const Handle_Geom2d_Transformation& Value() const;
  
  Standard_EXPORT    const Handle_Geom2d_Transformation& Operator() const;
Standard_EXPORT operator Handle_Geom2d_Transformation() const;





protected:





private:



Handle_Geom2d_Transformation TheMirror;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
