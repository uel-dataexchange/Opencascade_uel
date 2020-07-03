// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepPrim_Torus_HeaderFile
#define _BRepPrim_Torus_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _BRepPrim_Revolution_HeaderFile
#include <BRepPrim_Revolution.hxx>
#endif
class Standard_DomainError;
class gp_Ax2;
class gp_Pnt;
class TopoDS_Face;


//! Implements the torus primitive <br>
class BRepPrim_Torus  : public BRepPrim_Revolution {
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

  //! the STEP definition <br>
//!          Position : center and axes <br>
//!          Major, Minor : Radii <br>
//! <br>
//!          Errors : Major < Resolution <br>
//!                   Minor < Resolution <br>
  Standard_EXPORT   BRepPrim_Torus(const gp_Ax2& Position,const Standard_Real Major,const Standard_Real Minor);
  //! Torus centered at origin <br>
  Standard_EXPORT   BRepPrim_Torus(const Standard_Real Major,const Standard_Real Minor);
  //! Torus at Center <br>
  Standard_EXPORT   BRepPrim_Torus(const gp_Pnt& Center,const Standard_Real Major,const Standard_Real Minor);
  //! The surface normal should be directed  towards the <br>
//!          outside. <br>
  Standard_EXPORT   virtual  TopoDS_Face MakeEmptyLateralFace() const;





protected:





private:

  
  Standard_EXPORT     void SetMeridian() ;


Standard_Real myMajor;
Standard_Real myMinor;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
