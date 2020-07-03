// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_Edge3dInterferenceTool_HeaderFile
#define _TopOpeBRepDS_Edge3dInterferenceTool_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TopTrans_SurfaceTransition_HeaderFile
#include <TopTrans_SurfaceTransition.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _gp_Dir_HeaderFile
#include <gp_Dir.hxx>
#endif
#ifndef _Handle_TopOpeBRepDS_Interference_HeaderFile
#include <Handle_TopOpeBRepDS_Interference.hxx>
#endif
class TopoDS_Shape;
class TopOpeBRepDS_Interference;


//! a tool computing edge / face complex transition, <br>
//!          Interferences of edge reference are given by <br>
//!          I = (T on face, G = point or vertex, S = edge) <br>
class TopOpeBRepDS_Edge3dInterferenceTool  {
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

  
  Standard_EXPORT   TopOpeBRepDS_Edge3dInterferenceTool();
  
  Standard_EXPORT     void InitPointVertex(const Standard_Integer IsVertex,const TopoDS_Shape& VonOO) ;
  
  Standard_EXPORT     void Init(const TopoDS_Shape& Eref,const TopoDS_Shape& E,const TopoDS_Shape& F,const Handle(TopOpeBRepDS_Interference)& I) ;
  
  Standard_EXPORT     void Add(const TopoDS_Shape& Eref,const TopoDS_Shape& E,const TopoDS_Shape& F,const Handle(TopOpeBRepDS_Interference)& I) ;
  
  Standard_EXPORT     void Transition(const Handle(TopOpeBRepDS_Interference)& I) const;





protected:





private:



Standard_Integer myFaceOriented;
TopTrans_SurfaceTransition myTool;
Standard_Real myTole;
Standard_Boolean myrefdef;
Standard_Integer myIsVertex;
TopoDS_Shape myVonOO;
gp_Pnt myP3d;
gp_Dir myTgtref;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
