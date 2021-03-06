// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOP_FaceInfo_HeaderFile
#define _BOP_FaceInfo_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _gp_Pnt2d_HeaderFile
#include <gp_Pnt2d.hxx>
#endif
#ifndef _gp_Dir_HeaderFile
#include <gp_Dir.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class TopoDS_Face;
class gp_Pnt;
class gp_Pnt2d;
class gp_Dir;



//!  The  auxiliary class to store data about faces on a  shell <br>
//!  that have common edge <br>
//! <br>
class BOP_FaceInfo  {
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

  
//! Empty constructor; <br>
  Standard_EXPORT   BOP_FaceInfo();
  
//! Modifier <br>
  Standard_EXPORT     void SetFace(const TopoDS_Face& aF) ;
  
//! Modifier <br>
  Standard_EXPORT     void SetPassed(const Standard_Boolean aFlag) ;
  
//! Modifier <br>
  Standard_EXPORT     void SetPOnEdge(const gp_Pnt& aP) ;
  
//! Modifier <br>
  Standard_EXPORT     void SetPInFace(const gp_Pnt& aP) ;
  
//! Modifier <br>
  Standard_EXPORT     void SetPInFace2D(const gp_Pnt2d& aP) ;
  
//! Modifier <br>
  Standard_EXPORT     void SetNormal(const gp_Dir& aD) ;
  
//! Modifier <br>
  Standard_EXPORT     void SetAngle(const Standard_Real A) ;
  
//! Selector <br>
  Standard_EXPORT    const TopoDS_Face& Face() const;
  
//! Selector <br>
  Standard_EXPORT    const gp_Pnt& POnEdge() const;
  
//! Selector <br>
  Standard_EXPORT    const gp_Pnt& PInFace() const;
  
//! Selector <br>
  Standard_EXPORT    const gp_Pnt2d& PInFace2D() const;
  
//! Selector <br>
  Standard_EXPORT    const gp_Dir& Normal() const;
  
//! Selector <br>
  Standard_EXPORT     Standard_Boolean IsPassed() const;
  
//! Selector <br>
  Standard_EXPORT     Standard_Real Angle() const;





protected:





private:



TopoDS_Face myFace;
Standard_Boolean myPassed;
gp_Pnt myPOnEdge;
gp_Pnt myPInFace;
gp_Pnt2d myPInFace2D;
gp_Dir myNormal;
Standard_Real myAngle;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
