// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_CurveOnSurface_HeaderFile
#define _StepGeom_CurveOnSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _StepData_SelectType_HeaderFile
#include <StepData_SelectType.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_StepGeom_Pcurve_HeaderFile
#include <Handle_StepGeom_Pcurve.hxx>
#endif
#ifndef _Handle_StepGeom_SurfaceCurve_HeaderFile
#include <Handle_StepGeom_SurfaceCurve.hxx>
#endif
#ifndef _Handle_StepGeom_CompositeCurveOnSurface_HeaderFile
#include <Handle_StepGeom_CompositeCurveOnSurface.hxx>
#endif
class Standard_Transient;
class StepGeom_Pcurve;
class StepGeom_SurfaceCurve;
class StepGeom_CompositeCurveOnSurface;



class StepGeom_CurveOnSurface  : public StepData_SelectType {
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

  //! Returns a CurveOnSurface SelectType <br>
  Standard_EXPORT   StepGeom_CurveOnSurface();
  //! Recognizes a CurveOnSurface Kind Entity that is : <br>
//!        1 -> Pcurve <br>
//!        2 -> SurfaceCurve <br>
//!        3 -> CompositeCurveOnSurface <br>
//!        0 else <br>
  Standard_EXPORT     Standard_Integer CaseNum(const Handle(Standard_Transient)& ent) const;
  //! returns Value as a Pcurve (Null if another type) <br>
  Standard_EXPORT     Handle_StepGeom_Pcurve Pcurve() const;
  //! returns Value as a SurfaceCurve (Null if another type) <br>
  Standard_EXPORT     Handle_StepGeom_SurfaceCurve SurfaceCurve() const;
  //! returns Value as a CompositeCurveOnSurface (Null if another type) <br>
  Standard_EXPORT     Handle_StepGeom_CompositeCurveOnSurface CompositeCurveOnSurface() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
