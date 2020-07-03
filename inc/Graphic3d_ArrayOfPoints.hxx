// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_ArrayOfPoints_HeaderFile
#define _Graphic3d_ArrayOfPoints_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Graphic3d_ArrayOfPoints_HeaderFile
#include <Handle_Graphic3d_ArrayOfPoints.hxx>
#endif

#ifndef _Graphic3d_ArrayOfPrimitives_HeaderFile
#include <Graphic3d_ArrayOfPrimitives.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif



class Graphic3d_ArrayOfPoints : public Graphic3d_ArrayOfPrimitives {

public:

  //! Creates an array of points, <br>
//! a single pixel point is drawn at each vertex. <br>
//! The array must be filled using only <br>
//!     the AddVertex(Point) method. <br>
  Standard_EXPORT   Graphic3d_ArrayOfPoints(const Standard_Integer maxVertexs);




  DEFINE_STANDARD_RTTI(Graphic3d_ArrayOfPoints)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
