// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeUpgrade_ConvertSurfaceToBezierBasis_HeaderFile
#define _ShapeUpgrade_ConvertSurfaceToBezierBasis_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_ShapeUpgrade_ConvertSurfaceToBezierBasis_HeaderFile
#include <Handle_ShapeUpgrade_ConvertSurfaceToBezierBasis.hxx>
#endif

#ifndef _Handle_ShapeExtend_CompositeSurface_HeaderFile
#include <Handle_ShapeExtend_CompositeSurface.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _ShapeUpgrade_SplitSurface_HeaderFile
#include <ShapeUpgrade_SplitSurface.hxx>
#endif
class ShapeExtend_CompositeSurface;


//! Converts a plane, bspline surface, surface of revolution, surface <br>
//!          of extrusion, offset surface to grid of bezier basis surface ( <br>
//!           bezier surface, <br>
//!           surface of revolution based on bezier curve, <br>
//!           offset surface based on any previous type). <br>
class ShapeUpgrade_ConvertSurfaceToBezierBasis : public ShapeUpgrade_SplitSurface {

public:

  //! Empty constructor. <br>
  Standard_EXPORT   ShapeUpgrade_ConvertSurfaceToBezierBasis();
  //! Splits a list of beziers computed by Compute method according <br>
//!          the split values and splitting parameters. <br>
  Standard_EXPORT   virtual  void Build(const Standard_Boolean Segment) ;
  //! Converts surface into a grid of bezier based surfaces, and <br>
//!          stores this grid. <br>
  Standard_EXPORT   virtual  void Compute(const Standard_Boolean Segment) ;
  //! Returns the grid of bezier based surfaces correspondent to <br>
//!          original surface. <br>
  Standard_EXPORT     Handle_ShapeExtend_CompositeSurface Segments() const;
  //! Sets mode for conversion Geom_Plane to Bezier <br>
        void SetPlaneMode(const Standard_Boolean mode) ;
  //! Returns the Geom_Pline conversion mode. <br>
        Standard_Boolean GetPlaneMode() const;
  //! Sets mode for conversion Geom_SurfaceOfRevolution to Bezier <br>
        void SetRevolutionMode(const Standard_Boolean mode) ;
  //! Returns the Geom_SurfaceOfRevolution conversion mode. <br>
        Standard_Boolean GetRevolutionMode() const;
  //! Sets mode for conversion Geom_SurfaceOfLinearExtrusion to Bezier <br>
        void SetExtrusionMode(const Standard_Boolean mode) ;
  //! Returns the Geom_SurfaceOfLinearExtrusion conversion mode. <br>
        Standard_Boolean GetExtrusionMode() const;
  //! Sets mode for conversion Geom_BSplineSurface to Bezier <br>
        void SetBSplineMode(const Standard_Boolean mode) ;
  //! Returns the Geom_BSplineSurface conversion mode. <br>
        Standard_Boolean GetBSplineMode() const;




  DEFINE_STANDARD_RTTI(ShapeUpgrade_ConvertSurfaceToBezierBasis)

protected:




private: 


Handle_ShapeExtend_CompositeSurface mySegments;
Standard_Boolean myPlaneMode;
Standard_Boolean myRevolutionMode;
Standard_Boolean myExtrusionMode;
Standard_Boolean myBSplineMode;


};


#include <ShapeUpgrade_ConvertSurfaceToBezierBasis.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
