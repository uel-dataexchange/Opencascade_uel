// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFilletAPI_MakeChamfer_HeaderFile
#define _BRepFilletAPI_MakeChamfer_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _ChFi3d_ChBuilder_HeaderFile
#include <ChFi3d_ChBuilder.hxx>
#endif
#ifndef _TopTools_MapOfShape_HeaderFile
#include <TopTools_MapOfShape.hxx>
#endif
#ifndef _BRepFilletAPI_LocalOperation_HeaderFile
#include <BRepFilletAPI_LocalOperation.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TopOpeBRepBuild_HBuilder_HeaderFile
#include <Handle_TopOpeBRepBuild_HBuilder.hxx>
#endif
#ifndef _Handle_ChFiDS_SecHArray1_HeaderFile
#include <Handle_ChFiDS_SecHArray1.hxx>
#endif
class StdFail_NotDone;
class TopoDS_Shape;
class TopoDS_Edge;
class TopoDS_Face;
class TopoDS_Vertex;
class TopOpeBRepBuild_HBuilder;
class TopTools_ListOfShape;
class ChFiDS_SecHArray1;


//! Describes functions to build chamfers on edges of a shell or solid. <br>
//!  Chamfered Edge of a Shell or Solid <br>
//! A MakeChamfer object provides a framework for: <br>
//! -   initializing the construction algorithm with a given shape, <br>
//! -   acquiring the data characterizing the chamfers, <br>
//! -   building the chamfers and constructing the resulting shape, and <br>
//! -   consulting the result. <br>
class BRepFilletAPI_MakeChamfer  : public BRepFilletAPI_LocalOperation {
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

  //! Initializes an algorithm for computing chamfers on the shape S. <br>
//! The edges on which chamfers are built are defined using the Add function. <br>
  Standard_EXPORT   BRepFilletAPI_MakeChamfer(const TopoDS_Shape& S);
  //! Adds edge E to the table of edges used by this <br>
//! algorithm to build chamfers, where the parameters <br>
//!      of the chamfer must be set after the <br>
  Standard_EXPORT     void Add(const TopoDS_Edge& E) ;
  //! Adds edge E to the table of edges used by this <br>
//! algorithm to build chamfers, where <br>
//!        the parameters of the chamfer are given by the two <br>
//!   distances Dis1 and Dis2; the face F identifies the side <br>
//!   where Dis1 is measured. <br>
//! The Add function results in a contour being built by <br>
//! propagation from the edge E (i.e. the contour contains at <br>
//! least this edge). This contour is composed of edges of <br>
//! the shape which are tangential to one another and <br>
//! which delimit two series of tangential faces, with one <br>
//! series of faces being located on either side of the contour. <br>
//! Warning <br>
//! Nothing is done if edge E or the face F does not belong to the initial shape. <br>
  Standard_EXPORT     void Add(const Standard_Real Dis,const TopoDS_Edge& E,const TopoDS_Face& F) ;
  //! Sets the distances Dis1 and Dis2 which give the <br>
//! parameters of the chamfer along the contour of index <br>
//! IC generated using the Add function in the internal <br>
//! data structure of this algorithm. The face F identifies <br>
//! the side where Dis1 is measured. <br>
//! Warning <br>
//! Nothing is done if either the edge E or the face F <br>
//! does not belong to the initial shape. <br>
  Standard_EXPORT     void SetDist(const Standard_Real Dis,const Standard_Integer IC,const TopoDS_Face& F) ;
  
  Standard_EXPORT     void GetDist(const Standard_Integer IC,Standard_Real& Dis) const;
  //! Adds a  fillet contour in  the  builder  (builds a <br>
//!           contour  of tangent edges to <E> and sets the two <br>
//!           distances <Dis1> and <Dis2> ( parameters of the chamfer ) ). <br>
  Standard_EXPORT     void Add(const Standard_Real Dis1,const Standard_Real Dis2,const TopoDS_Edge& E,const TopoDS_Face& F) ;
  //! Sets the distances Dis1 and Dis2 which give the <br>
//! parameters of the chamfer along the contour of index <br>
//! IC generated using the Add function in the internal <br>
//! data structure of this algorithm. The face F identifies <br>
//! the side where Dis1 is measured. <br>
//! Warning <br>
//! Nothing is done if either the edge E or the face F <br>
//! does not belong to the initial shape. <br>
  Standard_EXPORT     void SetDists(const Standard_Real Dis1,const Standard_Real Dis2,const Standard_Integer IC,const TopoDS_Face& F) ;
  //! Returns the distances Dis1 and Dis2 which give the <br>
//! parameters of the chamfer along the contour of index IC <br>
//! in the internal data structure of this algorithm. <br>
//! Warning <br>
//! -1. is returned if IC is outside the bounds of the table of contours. <br>
  Standard_EXPORT     void Dists(const Standard_Integer IC,Standard_Real& Dis1,Standard_Real& Dis2) const;
  //! Adds a  fillet contour in  the  builder  (builds a <br>
//!           contour  of tangent edges to <E> and sets the <br>
//!           distance <Dis1> and angle <Angle> ( parameters of the chamfer ) ). <br>
  Standard_EXPORT     void AddDA(const Standard_Real Dis,const Standard_Real Angle,const TopoDS_Edge& E,const TopoDS_Face& F) ;
  //! set the distance <Dis> and <Angle> of the fillet <br>
//!          contour of index <IC> in the DS with <Dis> on <F>. <br>//! if the face <F> is not one of common faces <br>
//!          of an edge of the contour <IC> <br>
  Standard_EXPORT     void SetDistAngle(const Standard_Real Dis,const Standard_Real Angle,const Standard_Integer IC,const TopoDS_Face& F) ;
  //! gives the distances <Dis> and <Angle> of the fillet <br>
//!          contour of index <IC> in the DS <br>
  Standard_EXPORT     void GetDistAngle(const Standard_Integer IC,Standard_Real& Dis,Standard_Real& Angle,Standard_Boolean& DisOnFace1) const;
  //! return True if chamfer symetric false else. <br>
  Standard_EXPORT     Standard_Boolean IsSymetric(const Standard_Integer IC) const;
  //! return True if chamfer is made with two distances false else. <br>
  Standard_EXPORT     Standard_Boolean IsTwoDistances(const Standard_Integer IC) const;
  //! return True if chamfer is made with distance and angle false else. <br>
  Standard_EXPORT     Standard_Boolean IsDistanceAngle(const Standard_Integer IC) const;
  //! Erases the chamfer parameters on the contour of <br>
//! index IC in the internal data structure of this algorithm. <br>
//! Use the SetDists function to reset this data. <br>
//! Warning <br>
//! Nothing is done if IC is outside the bounds of the table of contours. <br>
  Standard_EXPORT     void ResetContour(const Standard_Integer IC) ;
  //! Returns the number of contours generated using the <br>
//! Add function in the internal data structure of this algorithm. <br>
  Standard_EXPORT     Standard_Integer NbContours() const;
  //! Returns the index of the contour in the internal data <br>
//! structure of this algorithm, which contains the edge E of the shape. <br>
//! This function returns 0 if the edge E does not belong to any contour. <br>
//! Warning <br>
//! This index can change if a contour is removed from the <br>
//! internal data structure of this algorithm using the function Remove. <br>
  Standard_EXPORT     Standard_Integer Contour(const TopoDS_Edge& E) const;
  //! Returns the number of edges in the contour of index I in <br>
//! the internal data structure of this algorithm. <br>
//! Warning <br>
//! Returns 0 if I is outside the bounds of the table of contours. <br>
  Standard_EXPORT     Standard_Integer NbEdges(const Standard_Integer I) const;
  //! Returns the edge of index J in the contour of index I in <br>
//! the internal data structure of this algorithm. <br>
//! Warning <br>
//! Returns a null shape if: <br>
//! -   I is outside the bounds of the table of contours, or <br>
//! -   J is outside the bounds of the table of edges of the contour of index I. <br>
  Standard_EXPORT    const TopoDS_Edge& Edge(const Standard_Integer I,const Standard_Integer J) const;
  //! Removes the contour in the internal data structure of <br>
//! this algorithm which contains the edge E of the shape. <br>
//! Warning <br>
//! Nothing is done if the edge E does not belong to the <br>
//! contour in the internal data structure of this algorithm. <br>
  Standard_EXPORT     void Remove(const TopoDS_Edge& E) ;
  //! Returns the length of the contour of index IC in the <br>
//! internal data structure of this algorithm. <br>
//! Warning <br>
//! Returns -1. if IC is outside the bounds of the table of contours. <br>
  Standard_EXPORT     Standard_Real Length(const Standard_Integer IC) const;
  //! Returns the first vertex of the contour of index IC <br>
//! in the internal data structure of this algorithm. <br>
//! Warning <br>
//! Returns a null shape if IC is outside the bounds of the table of contours. <br>
  Standard_EXPORT     TopoDS_Vertex FirstVertex(const Standard_Integer IC) const;
  //! Returns the last vertex of the contour of index IC <br>
//! in the internal data structure of this algorithm. <br>
//! Warning <br>
//! Returns a null shape if IC is outside the bounds of the table of contours. <br>
  Standard_EXPORT     TopoDS_Vertex LastVertex(const Standard_Integer IC) const;
  //! Returns the curvilinear abscissa of the vertex V on the <br>
//! contour of index IC in the internal data structure of this algorithm. <br>
//! Warning <br>
//! Returns -1. if: <br>
//! -   IC is outside the bounds of the table of contours, or <br>
//! -   V is not on the contour of index IC. <br>
  Standard_EXPORT     Standard_Real Abscissa(const Standard_Integer IC,const TopoDS_Vertex& V) const;
  //! Returns the relative curvilinear abscissa (i.e. between 0 <br>
//! and 1) of the vertex V on the contour of index IC in the <br>
//! internal data structure of this algorithm. <br>
//! Warning <br>
//! Returns -1. if: <br>
//! -   IC is outside the bounds of the table of contours, or <br>
//! -   V is not on the contour of index IC. <br>
  Standard_EXPORT     Standard_Real RelativeAbscissa(const Standard_Integer IC,const TopoDS_Vertex& V) const;
  //! eturns true if the contour of index IC in the internal <br>
//! data structure of this algorithm is closed and tangential at the point of closure. <br>
//! Warning <br>
//! Returns false if IC is outside the bounds of the table of contours. <br>
  Standard_EXPORT     Standard_Boolean ClosedAndTangent(const Standard_Integer IC) const;
  //! Returns true if the contour of index IC in the internal <br>
//! data structure of this algorithm is closed. <br>
//! Warning <br>
//! Returns false if IC is outside the bounds of the table of contours. <br>
  Standard_EXPORT     Standard_Boolean Closed(const Standard_Integer IC) const;
  //! Builds the chamfers on all the contours in the internal <br>
//! data structure of this algorithm and constructs the resulting shape. <br>
//! Use the function IsDone to verify that the chamfered <br>
//! shape is built. Use the function Shape to retrieve the chamfered shape. <br>
//! Warning <br>
//! The construction of chamfers implements highly complex <br>
//! construction algorithms. Consequently, there may be <br>
//! instances where the algorithm fails, for example if the <br>
//! data defining the parameters of the chamfer is not <br>
//! compatible with the geometry of the initial shape. There <br>
//! is no initial analysis of errors and these only become <br>
//! evident at the construction stage. <br>
//! Additionally, in the current software release, the following <br>
//! cases are not handled: <br>
//! -   the end point of the contour is the point of <br>
//!   intersection of 4 or more edges of the shape, or <br>
//! -   the intersection of the chamfer with a face which <br>
//!   limits the contour is not fully contained in this face. <br>
  Standard_EXPORT   virtual  void Build() ;
  //! Reinitializes this algorithm, thus canceling the effects of the Build function. <br>
//! This function allows modifications to be made to the <br>
//! contours and chamfer parameters in order to rebuild the shape. <br>
  Standard_EXPORT     void Reset() ;
  //! Returns the internal filleting algorithm. <br>
  Standard_EXPORT     Handle_TopOpeBRepBuild_HBuilder Builder() const;
  //! Returns the  list   of shapes generated   from the <br>
//!          shape <EorV>. <br>
  Standard_EXPORT   virtual const TopTools_ListOfShape& Generated(const TopoDS_Shape& EorV) ;
  //! Returns the list  of shapes modified from the shape <br>
//!          <F>. <br>
  Standard_EXPORT   virtual const TopTools_ListOfShape& Modified(const TopoDS_Shape& F) ;
  
  Standard_EXPORT   virtual  Standard_Boolean IsDeleted(const TopoDS_Shape& F) ;
  
  Standard_EXPORT     void Simulate(const Standard_Integer IC) ;
  
  Standard_EXPORT     Standard_Integer NbSurf(const Standard_Integer IC) const;
  
  Standard_EXPORT     Handle_ChFiDS_SecHArray1 Sect(const Standard_Integer IC,const Standard_Integer IS) const;





protected:





private:



ChFi3d_ChBuilder myBuilder;
TopTools_MapOfShape myMap;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
