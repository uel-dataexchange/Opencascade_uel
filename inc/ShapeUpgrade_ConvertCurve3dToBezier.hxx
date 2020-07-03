// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeUpgrade_ConvertCurve3dToBezier_HeaderFile
#define _ShapeUpgrade_ConvertCurve3dToBezier_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_ShapeUpgrade_ConvertCurve3dToBezier_HeaderFile
#include <Handle_ShapeUpgrade_ConvertCurve3dToBezier.hxx>
#endif

#ifndef _Handle_TColGeom_HSequenceOfCurve_HeaderFile
#include <Handle_TColGeom_HSequenceOfCurve.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfReal_HeaderFile
#include <Handle_TColStd_HSequenceOfReal.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _ShapeUpgrade_SplitCurve3d_HeaderFile
#include <ShapeUpgrade_SplitCurve3d.hxx>
#endif
class TColGeom_HSequenceOfCurve;
class TColStd_HSequenceOfReal;


//! converts/splits a 3d curve of any type to a list of beziers <br>
class ShapeUpgrade_ConvertCurve3dToBezier : public ShapeUpgrade_SplitCurve3d {

public:

  //! Empty constructor <br>
  Standard_EXPORT   ShapeUpgrade_ConvertCurve3dToBezier();
  //! Sets mode for conversion Geom_Line to bezier. <br>
        void SetLineMode(const Standard_Boolean mode) ;
  //! Returns the Geom_Line conversion mode. <br>
        Standard_Boolean GetLineMode() const;
  //! Sets mode for conversion Geom_Circle to bezier. <br>
        void SetCircleMode(const Standard_Boolean mode) ;
  //! Returns the Geom_Circle conversion mode. <br>
        Standard_Boolean GetCircleMode() const;
  //! Returns the Geom_Conic conversion mode. <br>
        void SetConicMode(const Standard_Boolean mode) ;
  //! Performs converting and computes the resulting shape. <br>
        Standard_Boolean GetConicMode() const;
  //! Converts curve into a list of beziers, and stores the <br>
//!          splitting parameters on original curve. <br>
  Standard_EXPORT   virtual  void Compute() ;
  //! Splits a list of beziers computed by Compute method according <br>
//!          the split values and splitting parameters. <br>
  Standard_EXPORT   virtual  void Build(const Standard_Boolean Segment) ;
  //! Returns the list of splitted parameters in original curve <br>
//!          parametrisation. <br>
  Standard_EXPORT     Handle_TColStd_HSequenceOfReal SplitParams() const;




  DEFINE_STANDARD_RTTI(ShapeUpgrade_ConvertCurve3dToBezier)

protected:




private: 

  //! Returns the list of bezier curves correspondent to original <br>
//!          curve. <br>
  Standard_EXPORT     Handle_TColGeom_HSequenceOfCurve Segments() const;

Handle_TColGeom_HSequenceOfCurve mySegments;
Handle_TColStd_HSequenceOfReal mySplitParams;
Standard_Boolean myLineMode;
Standard_Boolean myCircleMode;
Standard_Boolean myConicMode;


};


#include <ShapeUpgrade_ConvertCurve3dToBezier.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
