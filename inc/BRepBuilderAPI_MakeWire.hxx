// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepBuilderAPI_MakeWire_HeaderFile
#define _BRepBuilderAPI_MakeWire_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BRepLib_MakeWire_HeaderFile
#include <BRepLib_MakeWire.hxx>
#endif
#ifndef _BRepBuilderAPI_MakeShape_HeaderFile
#include <BRepBuilderAPI_MakeShape.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _BRepBuilderAPI_WireError_HeaderFile
#include <BRepBuilderAPI_WireError.hxx>
#endif
class StdFail_NotDone;
class TopoDS_Edge;
class TopoDS_Wire;
class TopTools_ListOfShape;
class TopoDS_Vertex;


//! Describes functions to build wires from edges. A wire can <br>
//! be built from any number of edges. <br>
//! To build a wire you first initialize the construction, then <br>
//! add edges in sequence. An unlimited number of edges <br>
//! can be added. The initialization of construction is done with: <br>
//! -   no edge (an empty wire), or <br>
//! -   edges of an existing wire, or <br>
//! -   up to four connectable edges. <br>
//! In order to be added to a wire under construction, an <br>
//! edge (unless it is the first one) must satisfy the following <br>
//! condition: one of its vertices must be geometrically <br>
//! coincident with one of the vertices of the wire (provided <br>
//! that the highest tolerance factor is assigned to the two <br>
//! vertices). It could also be the same vertex. <br>
//! -   The given edge is shared by the wire if it contains: <br>
//!   -   two vertices, identical to two vertices of the wire <br>
//!    under construction (a general case of the wire closure), or <br>
//!   -   one vertex, identical to a vertex of the wire under <br>
//!    construction; the other vertex not being <br>
//!    geometrically coincident with another vertex of the wire. <br>
//! -   In other cases, when one of the vertices of the edge <br>
//!   is simply geometrically coincident with a vertex of the <br>
//!   wire under construction (provided that the highest <br>
//!   tolerance factor is assigned to the two vertices), the <br>
//!   given edge is first copied and the coincident vertex is <br>
//! replaced in this new edge, by the coincident vertex of the wire. <br>
//!  Note: it is possible to build non manifold wires using this construction tool. <br>
//! A MakeWire object provides a framework for: <br>
//! -   initializing the construction of a wire, <br>
//! -   adding edges to the wire under construction, and <br>
//! -   consulting the result. <br>
class BRepBuilderAPI_MakeWire  : public BRepBuilderAPI_MakeShape {
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

  //! Constructs an empty wire framework, to which edges <br>
//! are added using the Add function. <br>
//! As soon as the wire contains one edge, it can return <br>
//! with the use of the function Wire. <br>
//! Warning <br>
//! The function Error will return <br>
//! BRepBuilderAPI_EmptyWire if it is called before at <br>
//! least one edge is added to the wire under construction. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeWire();
  //! Make a Wire from an edge. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeWire(const TopoDS_Edge& E);
  //! Make a Wire from two edges. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeWire(const TopoDS_Edge& E1,const TopoDS_Edge& E2);
  //! Make a Wire from three edges. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeWire(const TopoDS_Edge& E1,const TopoDS_Edge& E2,const TopoDS_Edge& E3);
  //! Make a Wire from four edges. <br>//! Constructs a wire <br>
//! -   from the TopoDS_Wire W composed of the edge E, or <br>
//! -   from edge E, or <br>
//! -   from two edges E1 and E2, or <br>
//! -   from three edges E1, E2 and E3, or <br>
//! -   from four edges E1, E2, E3 and E4. <br>
//! Further edges can be added using the function Add. <br>
//! Given edges are added in a sequence. Each of them <br>
//! must be connectable to the wire under construction, <br>
//! and so must satisfy the following condition (unless it is <br>
//! the first edge of the wire): one of its vertices must be <br>
//! geometrically coincident with one of the vertices of the <br>
//! wire (provided that the highest tolerance factor is <br>
//! assigned to the two vertices). It could also be the same vertex. <br>
//! Warning <br>
//! If an edge is not connectable to the wire under <br>
//! construction it is not added. The function Error will <br>
//! return BRepBuilderAPI_DisconnectedWire, the <br>
//! function IsDone will return false and the function Wire <br>
//! will raise an error, until a new connectable edge is added. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeWire(const TopoDS_Edge& E1,const TopoDS_Edge& E2,const TopoDS_Edge& E3,const TopoDS_Edge& E4);
  //! Make a Wire from a Wire. Usefull for adding later. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeWire(const TopoDS_Wire& W);
  //! Add an edge to a wire. <br>
  Standard_EXPORT   BRepBuilderAPI_MakeWire(const TopoDS_Wire& W,const TopoDS_Edge& E);
  //!  Adds the edge E to the wire under construction. <br>
//! E must be connectable to the wire under construction, and, unless it <br>
//! is the first edge of the wire, must satisfy the following <br>
//! condition: one of its vertices must be geometrically coincident <br>
//! with one of the vertices of the wire (provided that the highest <br>
//! tolerance factor is assigned to the two vertices). It could also <br>
//! be the same vertex. <br>
//! Warning <br>
//! If E is not connectable to the wire under construction it is not <br>
//! added. The function Error will return <br>
//! BRepBuilderAPI_DisconnectedWire, the function IsDone will return <br>
//! false and the function Wire will raise an error, until a new <br>
//! connectable edge is added. <br>
  Standard_EXPORT     void Add(const TopoDS_Edge& E) ;
  //! Add the edges of <W> to the current wire. <br>
  Standard_EXPORT     void Add(const TopoDS_Wire& W) ;
  //! Adds  the edges of <L>   to the current  wire.  The <br>
//!          edges are not to be consecutive.   But they are to <br>
//!          be  all  connected geometrically or topologically. <br>
//!          If some of them are  not connected the Status give <br>
//!          DisconnectedWire but the "Maker" is Done() and you <br>
//!          can get the  partial result. (ie connected to  the <br>
//!          first edgeof the list <L>) <br>
  Standard_EXPORT     void Add(const TopTools_ListOfShape& L) ;
  //! Returns true if this algorithm contains a valid wire. <br>
//! IsDone returns false if: <br>
//! -   there are no edges in the wire, or <br>
//! -   the last edge which you tried to add was not connectable. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsDone() const;
  //! Returns the construction status <br>
//! -   BRepBuilderAPI_WireDone if the wire is built, or <br>
//! -   another value of the BRepBuilderAPI_WireError <br>
//!   enumeration indicating why the construction failed. <br>
  Standard_EXPORT     BRepBuilderAPI_WireError Error() const;
  //! Returns the constructed wire; or the part of the wire <br>
//! under construction already built. <br>
//! Exceptions StdFail_NotDone if a wire is not built. <br>
  Standard_EXPORT    const TopoDS_Wire& Wire() const;
Standard_EXPORT operator TopoDS_Wire() const;
  //! Returns the last edge added to the wire under construction. <br>
//! Warning <br>
//! -   This edge can be different from the original one (the <br>
//!   argument of the function Add, for instance,) <br>
//! -   A null edge is returned if there are no edges in the <br>
//!   wire under construction, or if the last edge which you <br>
//!   tried to add was not connectable.. <br>
  Standard_EXPORT    const TopoDS_Edge& Edge() const;
  //! Returns the last vertex of the last edge added to the <br>
//! wire under construction. <br>
//! Warning <br>
//! A null vertex is returned if there are no edges in the wire <br>
//! under construction, or if the last edge which you tried to <br>
//! add was not connectableR <br>
  Standard_EXPORT    const TopoDS_Vertex& Vertex() const;





protected:





private:



BRepLib_MakeWire myMakeWire;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
