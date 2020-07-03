// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRep_FacesIntersector_HeaderFile
#define _TopOpeBRep_FacesIntersector_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _IntPatch_Intersection_HeaderFile
#include <IntPatch_Intersection.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_TopOpeBRep_HArray1OfLineInter_HeaderFile
#include <Handle_TopOpeBRep_HArray1OfLineInter.hxx>
#endif
#ifndef _TopOpeBRep_LineInter_HeaderFile
#include <TopOpeBRep_LineInter.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
#ifndef _Handle_BRepAdaptor_HSurface_HeaderFile
#include <Handle_BRepAdaptor_HSurface.hxx>
#endif
#ifndef _GeomAbs_SurfaceType_HeaderFile
#include <GeomAbs_SurfaceType.hxx>
#endif
#ifndef _Handle_BRepTopAdaptor_TopolTool_HeaderFile
#include <Handle_BRepTopAdaptor_TopolTool.hxx>
#endif
#ifndef _TopTools_IndexedMapOfShape_HeaderFile
#include <TopTools_IndexedMapOfShape.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _TopAbs_ShapeEnum_HeaderFile
#include <TopAbs_ShapeEnum.hxx>
#endif
class TopOpeBRep_HArray1OfLineInter;
class BRepAdaptor_HSurface;
class BRepTopAdaptor_TopolTool;
class TopoDS_Shape;
class Bnd_Box;
class TopTools_IndexedMapOfShape;
class TopOpeBRep_LineInter;



class TopOpeBRep_FacesIntersector  {
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

  
  Standard_EXPORT   TopOpeBRep_FacesIntersector();
  //! Computes the intersection of faces S1 and S2. <br>
  Standard_EXPORT     void Perform(const TopoDS_Shape& S1,const TopoDS_Shape& S2) ;
  //! Computes the intersection of faces S1 and S2. <br>
  Standard_EXPORT     void Perform(const TopoDS_Shape& S1,const TopoDS_Shape& S2,const Bnd_Box& B1,const Bnd_Box& B2) ;
  
  Standard_EXPORT     Standard_Boolean IsEmpty() ;
  
  Standard_EXPORT     Standard_Boolean IsDone() const;
  //! Returns True if Perform() arguments are two faces with the <br>
//!          same surface. <br>
  Standard_EXPORT     Standard_Boolean SameDomain() const;
  //! returns first or second intersected face. <br>
  Standard_EXPORT    const TopoDS_Shape& Face(const Standard_Integer Index) const;
  //! Returns True if Perform() arguments are two faces <br>
//!          SameDomain() and normals on both side. <br>
//!          Raise if SameDomain is False <br>
  Standard_EXPORT     Standard_Boolean SurfacesSameOriented() const;
  //! returns true if edge <E> is found as same as the edge <br>
//!          associated with a RESTRICTION line. <br>
  Standard_EXPORT     Standard_Boolean IsRestriction(const TopoDS_Shape& E) const;
  //! returns the map of edges found as TopeBRepBRep_RESTRICTION <br>
  Standard_EXPORT    const TopTools_IndexedMapOfShape& Restrictions() const;
  
  Standard_EXPORT     void PrepareLines() ;
  
  Standard_EXPORT     Handle_TopOpeBRep_HArray1OfLineInter Lines() ;
  
  Standard_EXPORT     Standard_Integer NbLines() const;
  
  Standard_EXPORT     void InitLine() ;
  
  Standard_EXPORT     Standard_Boolean MoreLine() const;
  
  Standard_EXPORT     void NextLine() ;
  
  Standard_EXPORT     TopOpeBRep_LineInter& CurrentLine() ;
  
  Standard_EXPORT     Standard_Integer CurrentLineIndex() const;
  
  Standard_EXPORT     TopOpeBRep_LineInter& ChangeLine(const Standard_Integer IL) ;
  
//! Force the tolerance values used by the next Perform(S1,S2) call. <br>
  Standard_EXPORT     void ForceTolerances(const Standard_Real tolarc,const Standard_Real toltang) ;
  
//! Return the tolerance values used in the last Perform() call <br>
//! If ForceTolerances() has been called, return the given values. <br>
//! If not, return values extracted from shapes. <br>
  Standard_EXPORT     void GetTolerances(Standard_Real& tolarc,Standard_Real& toltang) const;





protected:





private:

  
  Standard_EXPORT     void FindLine() ;
  
  Standard_EXPORT     void ResetIntersection() ;
  //! extract tolerance values from shapes <S1>,<S2>, <br>
//!          in order to perform intersection between <S1> and <S2> <br>
//!          with tolerance values "fitting" the shape tolerances. <br>
//! (called by Perform() by default, when ForceTolerances() has not <br>
//!  been called) <br>
  Standard_EXPORT     void ShapeTolerances(const TopoDS_Shape& S1,const TopoDS_Shape& S2) ;
  //! returns the max tolerance of sub-shapes of type <T> <br>
//!           found in shape <S>. If no such sub-shape found, return <br>
//!           Precision::Intersection() <br>
//! (called by ShapeTolerances()) <br>
  Standard_EXPORT     Standard_Real ToleranceMax(const TopoDS_Shape& S,const TopAbs_ShapeEnum T) const;


IntPatch_Intersection myIntersector;
Standard_Boolean myIntersectionDone;
Standard_Real myTol1;
Standard_Real myTol2;
Standard_Boolean myForceTolerances;
Handle_TopOpeBRep_HArray1OfLineInter myHAL;
TopOpeBRep_LineInter myLine;
Standard_Integer myLineIndex;
Standard_Boolean myLineFound;
Standard_Integer myLineNb;
TopoDS_Face myFace1;
TopoDS_Face myFace2;
Handle_BRepAdaptor_HSurface mySurface1;
Handle_BRepAdaptor_HSurface mySurface2;
GeomAbs_SurfaceType mySurfaceType1;
GeomAbs_SurfaceType mySurfaceType2;
Standard_Boolean mySurfacesSameOriented;
Handle_BRepTopAdaptor_TopolTool myDomain1;
Handle_BRepTopAdaptor_TopolTool myDomain2;
TopTools_IndexedMapOfShape myEdgeRestrictionMap;
TopoDS_Shape myNullShape;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
