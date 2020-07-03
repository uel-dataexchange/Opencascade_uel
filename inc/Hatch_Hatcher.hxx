// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Hatch_Hatcher_HeaderFile
#define _Hatch_Hatcher_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Hatch_SequenceOfLine_HeaderFile
#include <Hatch_SequenceOfLine.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Hatch_LineForm_HeaderFile
#include <Hatch_LineForm.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_OutOfRange;
class gp_Lin2d;
class gp_Dir2d;
class gp_Pnt2d;


//! The Hatcher   is  an algorithm  to   compute cross <br>
//!          hatchings in a 2d plane. It is mainly dedicated to <br>
//!          display purpose. <br>
//! <br>
//!          Computing cross hatchings is a 3 steps process : <br>
//! <br>
//!          1.  The users stores in the   Hatcher a set  of 2d <br>
//!          lines to   be  trimmed. Methods   in  the  "Lines" <br>
//!          category. <br>
//! <br>
//!          2.  The user trims the lines with a boundary.  The <br>
//!          inside of a boundary is on the left side.  Methods <br>
//!          in the "Trimming" category. <br>
//! <br>
//!          3. The user reads  back the trimmed lines. Methods <br>
//!          in the "Results" category. <br>
//! <br>
//!          The result is a set of parameter intervals  on the <br>
//!          line. The first  parameter of an  Interval may  be <br>
//!          RealFirst() and the last may be RealLast(). <br>
//! <br>
//!          A line can be a line parallel to the axis (X  or Y <br>
//!          line or a 2D line. <br>
//! <br>
//!          The Hatcher has two modes : <br>
//! <br>
//!          *  The "Oriented" mode,  where the  orientation of <br>
//!          the trimming curves is  considered. The  hatch are <br>
//!          kept on  the left of  the  trimming curve. In this <br>
//!          mode infinite hatch can be computed. <br>
//! <br>
//!          *   The "UnOriented"  mode,  where  the  hatch are <br>
//!          always finite. <br>
//! <br>
class Hatch_Hatcher  {
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

  //! Returns a empty  hatcher.  <Tol> is the  tolerance <br>
//!          for intersections. <br>
  Standard_EXPORT   Hatch_Hatcher(const Standard_Real Tol,const Standard_Boolean Oriented = Standard_True);
  
        void Tolerance(const Standard_Real Tol) ;
  
        Standard_Real Tolerance() const;
  //! Add a line <L>  to  be trimmed.   <T> the  type is <br>
//!          only kept from information. It is not used  in the <br>
//!          computation. <br>
//! <br>
  Standard_EXPORT     void AddLine(const gp_Lin2d& L,const Hatch_LineForm T = Hatch_ANYLINE) ;
  //! Add an infinite line on  direction <D> at distance <br>
//!          <Dist> from the origin  to be  trimmed. <Dist> may <br>
//!          be negative. <br>
//! <br>
//!          If O  is the origin  of the  2D plane, and   V the <br>
//!          vector perpendicular to D (in the direct direction). <br>
//! <br>
//!          A point P is on the line if : <br>
//!            OP dot V = Dist <br>
//!          The parameter of P on the line is <br>
//!            OP dot D <br>
//! <br>
  Standard_EXPORT     void AddLine(const gp_Dir2d& D,const Standard_Real Dist) ;
  //! Add an infinite line   parallel to the Y-axis   at <br>
//!          abciss <X>. <br>
//! <br>
  Standard_EXPORT     void AddXLine(const Standard_Real X) ;
  //! Add an infinite line   parallel to the X-axis   at <br>
//!          ordinate <Y>. <br>
//! <br>
  Standard_EXPORT     void AddYLine(const Standard_Real Y) ;
  //! Trims the lines at intersections with  <L>. <br>
//! <br>
  Standard_EXPORT     void Trim(const gp_Lin2d& L,const Standard_Integer Index = 0) ;
  //! Trims the lines at intersections  with <L>  in the <br>
//!          parameter range <Start>, <End> <br>
//! <br>
  Standard_EXPORT     void Trim(const gp_Lin2d& L,const Standard_Real Start,const Standard_Real End,const Standard_Integer Index = 0) ;
  //! Trims the line at  intersection with  the oriented <br>
//!          segment P1,P2. <br>
//! <br>
  Standard_EXPORT     void Trim(const gp_Pnt2d& P1,const gp_Pnt2d& P2,const Standard_Integer Index = 0) ;
  //! Returns the total number  of intervals on  all the <br>
//!          lines. <br>
  Standard_EXPORT     Standard_Integer NbIntervals() const;
  //! Returns the number of lines. <br>
  Standard_EXPORT     Standard_Integer NbLines() const;
  //! Returns the line of index <I>. <br>
  Standard_EXPORT    const gp_Lin2d& Line(const Standard_Integer I) const;
  //! Returns  the type of the  line   of  index <I>. <br>
  Standard_EXPORT     Hatch_LineForm LineForm(const Standard_Integer I) const;
  //! Returns  True if the  line   of  index <I>  has  a <br>
//!          constant X value. <br>
        Standard_Boolean IsXLine(const Standard_Integer I) const;
  //! Returns  True if the  line   of  index <I>  has  a <br>
//!          constant Y value. <br>
        Standard_Boolean IsYLine(const Standard_Integer I) const;
  //! Returns the X or Y coordinate of the line of index <br>
//!          <I> if it is a X or a Y line. <br>
  Standard_EXPORT     Standard_Real Coordinate(const Standard_Integer I) const;
  //! Returns the number of intervals on line of index <I>. <br>
  Standard_EXPORT     Standard_Integer NbIntervals(const Standard_Integer I) const;
  //! Returns the first   parameter of  interval <J>  on <br>
//!          line  <I>. <br>
  Standard_EXPORT     Standard_Real Start(const Standard_Integer I,const Standard_Integer J) const;
  //! Returns the first Index and Par2 of  interval <J>  on <br>
//!          line  <I>. <br>
  Standard_EXPORT     void StartIndex(const Standard_Integer I,const Standard_Integer J,Standard_Integer& Index,Standard_Real& Par2) const;
  //! Returns the last   parameter of  interval <J>  on <br>
//!          line  <I>. <br>
  Standard_EXPORT     Standard_Real End(const Standard_Integer I,const Standard_Integer J) const;
  //! Returns the last Index and Par2 of  interval <J>  on <br>
//!          line  <I>. <br>
  Standard_EXPORT     void EndIndex(const Standard_Integer I,const Standard_Integer J,Standard_Integer& Index,Standard_Real& Par2) const;





protected:





private:



Standard_Real myToler;
Hatch_SequenceOfLine myLines;
Standard_Boolean myOrient;


};


#include <Hatch_Hatcher.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
