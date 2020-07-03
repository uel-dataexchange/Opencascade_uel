// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic2d_VectorialMarker_HeaderFile
#define _Graphic2d_VectorialMarker_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Graphic2d_VectorialMarker_HeaderFile
#include <Handle_Graphic2d_VectorialMarker.hxx>
#endif

#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif
#ifndef _Graphic2d_Line_HeaderFile
#include <Graphic2d_Line.hxx>
#endif
#ifndef _Handle_Graphic2d_GraphicObject_HeaderFile
#include <Handle_Graphic2d_GraphicObject.hxx>
#endif
#ifndef _Quantity_Length_HeaderFile
#include <Quantity_Length.hxx>
#endif
class Graphic2d_GraphicObject;


//! Groups all the primitives which behaves like <br>
//!	    geometrical marker. <br>
//!	    for example : EllipsMarker, CircleMarker ... <br>
//!	    A marker is a primitive which retains its original <br>
//!	    on-screen size no matter how the view is zoomed. <br>
//!	    For example, markers are used as symbols of dimension. <br>
//!	    Every marker takes a reference point as an argument in <br>
//!	    its constructor. CircleMarker and EllipsMarker take <br>
//!	    another point as the center and PolylineMarker takes the <br>
//!	    first point of its list as its origin. <br>
//!	    The coordinates of the centre or origin point are offsets <br>
//!	    with respect to the reference point. <br>
class Graphic2d_VectorialMarker : public Graphic2d_Line {

public:

  //! Modifies the marker position. <br>
//!  Warning: If the associated GraphicObject is transformed <br>
//!	    the position will be transformed. <br>
  Standard_EXPORT     void SetPosition(const Quantity_Length aXPosition,const Quantity_Length aYPosition) ;
  //! Returns the x position of the marker <br>
//!  Warning: If the associated GraphicObject is transformed <br>
//!	    the returned position is the transformed position. <br>
  Standard_EXPORT     Quantity_Length XPosition() const;
  //! Returns the y position of the marker <br>
//!  Warning: If the associated GraphicObject is transformed <br>
//!	    the returned position is the transformed position. <br>
  Standard_EXPORT     Quantity_Length YPosition() const;




  DEFINE_STANDARD_RTTI(Graphic2d_VectorialMarker)

protected:

  //! Creates a marker at <aXPosition>, <aYPosition> <br>
  Standard_EXPORT   Graphic2d_VectorialMarker(const Handle(Graphic2d_GraphicObject)& aGraphicObject,const Quantity_Length aXPosition,const Quantity_Length aYPosition);

Standard_ShortReal myXPosition;
Standard_ShortReal myYPosition;


private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
