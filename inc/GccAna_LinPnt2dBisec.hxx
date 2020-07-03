// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GccAna_LinPnt2dBisec_HeaderFile
#define _GccAna_LinPnt2dBisec_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_GccInt_Bisec_HeaderFile
#include <Handle_GccInt_Bisec.hxx>
#endif
class GccInt_Bisec;
class Standard_ConstructionError;
class StdFail_NotDone;
class gp_Lin2d;
class gp_Pnt2d;


//! Describes functions for building bisecting curves between a 2D line and a point. <br>
//! A bisecting curve between a line and a point is such a <br>
//! curve that each of its points is at the same distance from <br>
//! the circle and the point. It can be a parabola or a line, <br>
//! depending on the relative position of the line and the <br>
//! circle. There is always one unique solution. <br>
//! A LinPnt2dBisec object provides a framework for: <br>
//! - defining the construction of the bisecting curve, <br>
//! - implementing the construction algorithm, and <br>
//! - consulting the result. <br>
class GccAna_LinPnt2dBisec  {
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

  //! Constructs a bisecting curve between the line Line1 and the point Point2. <br>
  Standard_EXPORT   GccAna_LinPnt2dBisec(const gp_Lin2d& Line1,const gp_Pnt2d& Point2);
  //! Returns True if the algorithm succeeded. <br>
  Standard_EXPORT     Standard_Boolean IsDone() const;
  //! Returns the number of solutions. <br>//! It raises NotDone if the construction algorithm didn't succeed. <br>
  Standard_EXPORT     Handle_GccInt_Bisec ThisSolution() const;





protected:





private:



Standard_Boolean WellDone;
Handle_GccInt_Bisec bissol;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
