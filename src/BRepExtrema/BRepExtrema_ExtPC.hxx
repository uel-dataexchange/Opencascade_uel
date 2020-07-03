// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepExtrema_ExtPC_HeaderFile
#define _BRepExtrema_ExtPC_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Extrema_ExtPC_HeaderFile
#include <Extrema_ExtPC.hxx>
#endif
#ifndef _Handle_BRepAdaptor_HCurve_HeaderFile
#include <Handle_BRepAdaptor_HCurve.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class BRepAdaptor_HCurve;
class TopoDS_Vertex;
class TopoDS_Edge;
class gp_Pnt;


class BRepExtrema_ExtPC
{
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

  
  Standard_EXPORT BRepExtrema_ExtPC()
  {
  }
  //! It calculates all the distances. <br>
  Standard_EXPORT BRepExtrema_ExtPC(const TopoDS_Vertex& V,const TopoDS_Edge& E);
  
  Standard_EXPORT void Initialize(const TopoDS_Edge& E);
  //! An exception is raised if the fields have not been initialized. <br>
  Standard_EXPORT void Perform(const TopoDS_Vertex& V);
  //! True if the distances are found. <br>
  Standard_EXPORT Standard_Boolean IsDone() const
  {
    return myExtPC.IsDone();
  }
  //! Returns the number of extremum distances. <br>
  Standard_EXPORT Standard_Integer NbExt() const
  {
    return myExtPC.NbExt();
  }
  //! Returns True if the <N>th extremum distance is a minimum. <br>
  Standard_EXPORT Standard_Boolean IsMin(const Standard_Integer N) const
  {
    return myExtPC.IsMin(N);
  }
  //! Returns the value of the <N>th extremum square distance. <br>
  Standard_EXPORT Standard_Real SquareDistance(const Standard_Integer N) const
  {
    return myExtPC.SquareDistance(N);
  }
  //! Returns the parameter on the edge of the <N>th extremum distance. <br>
  Standard_EXPORT Standard_Real Parameter(const Standard_Integer N) const
  {
    return myExtPC.Point(N).Parameter();
  }
  //! Returns the Point of the <N>th extremum distance. <br>
  Standard_EXPORT gp_Pnt Point(const Standard_Integer N) const
  {
    return myExtPC.Point(N).Value();
  }
  //! if the curve is a trimmed curve, <br>
  //! dist1 is a square distance between <P> and the point <br>
  //! of parameter FirstParameter <pnt1> and <br>
  //! dist2 is a square distance between <P> and the point <br>
  //! of parameter LastParameter <pnt2>. <br>
  Standard_EXPORT void TrimmedSquareDistances(Standard_Real& dist1,Standard_Real& dist2,gp_Pnt& pnt1,gp_Pnt& pnt2) const
  {
    myExtPC.TrimmedSquareDistances(dist1,dist2,pnt1,pnt2);
  }

 private:

  Extrema_ExtPC myExtPC;
  Handle_BRepAdaptor_HCurve myHC;
};

#endif
