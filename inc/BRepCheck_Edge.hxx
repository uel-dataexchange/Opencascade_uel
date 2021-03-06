// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepCheck_Edge_HeaderFile
#define _BRepCheck_Edge_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BRepCheck_Edge_HeaderFile
#include <Handle_BRepCheck_Edge.hxx>
#endif

#ifndef _Handle_BRep_CurveRepresentation_HeaderFile
#include <Handle_BRep_CurveRepresentation.hxx>
#endif
#ifndef _Handle_Adaptor3d_HCurve_HeaderFile
#include <Handle_Adaptor3d_HCurve.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _BRepCheck_Result_HeaderFile
#include <BRepCheck_Result.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class BRep_CurveRepresentation;
class Adaptor3d_HCurve;
class TopoDS_Edge;
class TopoDS_Shape;



class BRepCheck_Edge : public BRepCheck_Result {

public:

  
  Standard_EXPORT   BRepCheck_Edge(const TopoDS_Edge& E);
  
  Standard_EXPORT     void InContext(const TopoDS_Shape& ContextShape) ;
  
  Standard_EXPORT     void Minimum() ;
  
  Standard_EXPORT     void Blind() ;
  
  Standard_EXPORT     Standard_Boolean GeometricControls() const;
  
  Standard_EXPORT     void GeometricControls(const Standard_Boolean B) ;
  
  Standard_EXPORT     Standard_Real Tolerance() ;




  DEFINE_STANDARD_RTTI(BRepCheck_Edge)

protected:




private: 


Handle_BRep_CurveRepresentation myCref;
Handle_Adaptor3d_HCurve myHCurve;
Standard_Boolean myGctrl;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
