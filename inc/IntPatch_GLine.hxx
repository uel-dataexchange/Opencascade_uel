// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPatch_GLine_HeaderFile
#define _IntPatch_GLine_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IntPatch_GLine_HeaderFile
#include <Handle_IntPatch_GLine.hxx>
#endif

#ifndef _gp_Ax2_HeaderFile
#include <gp_Ax2.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _IntPatch_SequenceOfPoint_HeaderFile
#include <IntPatch_SequenceOfPoint.hxx>
#endif
#ifndef _IntPatch_Line_HeaderFile
#include <IntPatch_Line.hxx>
#endif
#ifndef _IntSurf_TypeTrans_HeaderFile
#include <IntSurf_TypeTrans.hxx>
#endif
#ifndef _IntSurf_Situation_HeaderFile
#include <IntSurf_Situation.hxx>
#endif
#ifndef _gp_Lin_HeaderFile
#include <gp_Lin.hxx>
#endif
#ifndef _gp_Circ_HeaderFile
#include <gp_Circ.hxx>
#endif
#ifndef _gp_Elips_HeaderFile
#include <gp_Elips.hxx>
#endif
#ifndef _gp_Parab_HeaderFile
#include <gp_Parab.hxx>
#endif
#ifndef _gp_Hypr_HeaderFile
#include <gp_Hypr.hxx>
#endif
class Standard_DomainError;
class Standard_OutOfRange;
class gp_Lin;
class gp_Circ;
class gp_Elips;
class gp_Parab;
class gp_Hypr;
class IntPatch_Point;


//! Implementation of an intersection line represented <br>
//!          by a conic. <br>
class IntPatch_GLine : public IntPatch_Line {

public:

  //! Creates a Line as intersection line <br>
//!          when the transitions are In or Out. <br>
  Standard_EXPORT   IntPatch_GLine(const gp_Lin& L,const Standard_Boolean Tang,const IntSurf_TypeTrans Trans1,const IntSurf_TypeTrans Trans2);
  //! Creates a Line as intersection line <br>
//!          when the transitions are Touch. <br>
  Standard_EXPORT   IntPatch_GLine(const gp_Lin& L,const Standard_Boolean Tang,const IntSurf_Situation Situ1,const IntSurf_Situation Situ2);
  //! Creates a Line as intersection line <br>
//!          when the transitions are Undecided. <br>
  Standard_EXPORT   IntPatch_GLine(const gp_Lin& L,const Standard_Boolean Tang);
  //! Creates a circle as intersection line <br>
//!          when the transitions are In or Out. <br>
  Standard_EXPORT   IntPatch_GLine(const gp_Circ& C,const Standard_Boolean Tang,const IntSurf_TypeTrans Trans1,const IntSurf_TypeTrans Trans2);
  //! Creates a circle as intersection line <br>
//!          when the transitions are Touch. <br>
  Standard_EXPORT   IntPatch_GLine(const gp_Circ& C,const Standard_Boolean Tang,const IntSurf_Situation Situ1,const IntSurf_Situation Situ2);
  //! Creates a circle as intersection line <br>
//!          when the transitions are Undecided. <br>
  Standard_EXPORT   IntPatch_GLine(const gp_Circ& C,const Standard_Boolean Tang);
  //! Creates an ellipse as intersection line <br>
//!          when the transitions are In or Out. <br>
  Standard_EXPORT   IntPatch_GLine(const gp_Elips& E,const Standard_Boolean Tang,const IntSurf_TypeTrans Trans1,const IntSurf_TypeTrans Trans2);
  //! Creates an ellispe as intersection line <br>
//!          when the transitions are Touch. <br>
  Standard_EXPORT   IntPatch_GLine(const gp_Elips& E,const Standard_Boolean Tang,const IntSurf_Situation Situ1,const IntSurf_Situation Situ2);
  //! Creates an ellipse as intersection line <br>
//!          when the transitions are Undecided. <br>
  Standard_EXPORT   IntPatch_GLine(const gp_Elips& E,const Standard_Boolean Tang);
  //! Creates a parabola as intersection line <br>
//!          when the transitions are In or Out. <br>
  Standard_EXPORT   IntPatch_GLine(const gp_Parab& P,const Standard_Boolean Tang,const IntSurf_TypeTrans Trans1,const IntSurf_TypeTrans Trans2);
  //! Creates a parabola as intersection line <br>
//!          when the transitions are Touch. <br>
  Standard_EXPORT   IntPatch_GLine(const gp_Parab& P,const Standard_Boolean Tang,const IntSurf_Situation Situ1,const IntSurf_Situation Situ2);
  //! Creates a parabola as intersection line <br>
//!          when the transitions are Undecided. <br>
  Standard_EXPORT   IntPatch_GLine(const gp_Parab& P,const Standard_Boolean Tang);
  //! Creates an hyperbola as intersection line <br>
//!          when the transitions are In or Out. <br>
  Standard_EXPORT   IntPatch_GLine(const gp_Hypr& H,const Standard_Boolean Tang,const IntSurf_TypeTrans Trans1,const IntSurf_TypeTrans Trans2);
  //! Creates an hyperbola as intersection line <br>
//!          when the transitions are Touch. <br>
  Standard_EXPORT   IntPatch_GLine(const gp_Hypr& H,const Standard_Boolean Tang,const IntSurf_Situation Situ1,const IntSurf_Situation Situ2);
  //! Creates an hyperbola as  intersection line <br>
//!          when the transitions are Undecided. <br>
  Standard_EXPORT   IntPatch_GLine(const gp_Hypr& H,const Standard_Boolean Tang);
  //! To add a vertex in the list. <br>
  Standard_EXPORT     void AddVertex(const IntPatch_Point& Pnt) ;
  //! To replace the element of range Index in the list <br>
//!          of points. <br>
  Standard_EXPORT     void Replace(const Standard_Integer Index,const IntPatch_Point& Pnt) ;
  
        void SetFirstPoint(const Standard_Integer IndFirst) ;
  
        void SetLastPoint(const Standard_Integer IndLast) ;
  //! Returns the Lin from gp corresponding to the intersection <br>
//!          when ArcType returns IntPatch_Line. <br>
        gp_Lin Line() const;
  //! Returns the Circ from gp corrsponding to the intersection <br>
//!          when ArcType returns IntPatch_Circle. <br>
        gp_Circ Circle() const;
  //! Returns the Elips from gp corrsponding to the intersection <br>
//!          when ArcType returns IntPatch_Ellipse. <br>
        gp_Elips Ellipse() const;
  //! Returns the Parab from gp corrsponding to the intersection <br>
//!          when ArcType returns IntPatch_Parabola. <br>
        gp_Parab Parabola() const;
  //! Returns the Hypr from gp corrsponding to the intersection <br>
//!          when ArcType returns IntPatch_Hyperbola. <br>
        gp_Hypr Hyperbola() const;
  //! Returns True if the line has a known First point. <br>
//!          This point is given by the method FirstPoint(). <br>
        Standard_Boolean HasFirstPoint() const;
  //! Returns True if the line has a known Last point. <br>
//!          This point is given by the method LastPoint(). <br>
        Standard_Boolean HasLastPoint() const;
  //! Returns the IntPoint corresponding to the FirstPoint. <br>
//!          An exception is raised when HasFirstPoint returns False. <br>
       const IntPatch_Point& FirstPoint() const;
  //! Returns the IntPoint corresponding to the LastPoint. <br>
//!          An exception is raised when HasLastPoint returns False. <br>
       const IntPatch_Point& LastPoint() const;
  
        Standard_Integer NbVertex() const;
  //! Returns the vertex of range Index on the line. <br>
       const IntPatch_Point& Vertex(const Standard_Integer Index) const;
  //! Set the parameters of all the vertex on the line. <br>
//!          if a vertex is already in the line, <br>
//!             its parameter is modified <br>
//!          else a new point in the line is inserted. <br>
  Standard_EXPORT     void ComputeVertexParameters(const Standard_Real Tol) ;




  DEFINE_STANDARD_RTTI(IntPatch_GLine)

protected:




private: 


gp_Ax2 pos;
Standard_Real par1;
Standard_Real par2;
Standard_Boolean fipt;
Standard_Boolean lapt;
Standard_Integer indf;
Standard_Integer indl;
IntPatch_SequenceOfPoint svtx;


};


#include <IntPatch_GLine.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
