// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _V3d_PositionLight_HeaderFile
#define _V3d_PositionLight_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_V3d_PositionLight_HeaderFile
#include <Handle_V3d_PositionLight.hxx>
#endif

#ifndef _Graphic3d_Vertex_HeaderFile
#include <Graphic3d_Vertex.hxx>
#endif
#ifndef _V3d_TypeOfRepresentation_HeaderFile
#include <V3d_TypeOfRepresentation.hxx>
#endif
#ifndef _V3d_Light_HeaderFile
#include <V3d_Light.hxx>
#endif
#ifndef _Handle_V3d_Viewer_HeaderFile
#include <Handle_V3d_Viewer.hxx>
#endif
#ifndef _V3d_Coordinate_HeaderFile
#include <V3d_Coordinate.hxx>
#endif
#ifndef _Quantity_Parameter_HeaderFile
#include <Quantity_Parameter.hxx>
#endif
#ifndef _Handle_V3d_View_HeaderFile
#include <Handle_V3d_View.hxx>
#endif
#ifndef _V3d_TypeOfPickLight_HeaderFile
#include <V3d_TypeOfPickLight.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Graphic3d_Group_HeaderFile
#include <Handle_Graphic3d_Group.hxx>
#endif
class Viewer_BadValue;
class V3d_Viewer;
class V3d_View;
class Graphic3d_Group;


//! Base class for Positional, Spot and Directional Light classes <br>
class V3d_PositionLight : public V3d_Light {

public:

  //! Defines the position of the light source. Should be redefined! <br>
  Standard_EXPORT   virtual  void SetPosition(const V3d_Coordinate X,const V3d_Coordinate Y,const V3d_Coordinate Z)  = 0;
  //! Defines the target of the light (the center <br>
//!          of the sphere) <br>
  Standard_EXPORT     void SetTarget(const V3d_Coordinate X,const V3d_Coordinate Y,const V3d_Coordinate Z) ;
  //! Define the radius. <br>
  Standard_EXPORT     void SetRadius(const Quantity_Parameter Radius) ;
  //! Calculate the position of the light, on the hide face <br>
//!          of the picking sphere. <br>
  Standard_EXPORT     void OnHideFace(const Handle(V3d_View)& aView) ;
  //! Calculate the position of the light, on the seen face <br>
//!          of the picking sphere. <br>
  Standard_EXPORT     void OnSeeFace(const Handle(V3d_View)& aView) ;
  //! Tracking the light position, or the light space, <br>
//!          or the radius of the light space, that depends of <br>
//!          initial picking "WhatPick" (see the pick method). <br>
//!          If WhatPick is SPACELIGHT, then the parameters <br>
//!          Xpix, Ypix are the coordinates of a translation vector. <br>
  Standard_EXPORT     void Tracking(const Handle(V3d_View)& aView,const V3d_TypeOfPickLight WathPick,const Standard_Integer Xpix,const Standard_Integer Ypix) ;
  //! Display the graphic structure of light source <br>
//!          in the choosen view. We have three type of representation <br>
//!          - SIMPLE   : Only the light source is displayed. <br>
//!          - PARTIAL  : The light source and the light space are <br>
//!                       displayed. <br>
//!          - COMPLETE : The light source, the light space and the <br>
//!                       radius of light space are displayed. <br>
//!          We can choose the "SAMELAST" as parameter of representation <br>
//!          In this case the graphic structure representation will be <br>
//!          the last displayed. <br>
  Standard_EXPORT   virtual  void Display(const Handle(V3d_View)& aView,const V3d_TypeOfRepresentation Representation = V3d_SIMPLE) ;
  //! Erase the graphic structure of light source. <br>
  Standard_EXPORT     void Erase() ;
  //! Returns the type of pick element. <br>
//!          "POSITIONLIGHT"  : Representation of position light. <br>
//!          "SPACELIGHT"     : Representation of lighting space. <br>
//!          "RADIUSLIGHT"    : Representation of lighting space radius. <br>
//!          "NOTHING"        : Any component of light. <br>
//!          Determinate which type of tracking apply. <br>
  Standard_EXPORT   virtual  V3d_TypeOfPickLight Pick(const Handle(V3d_View)& aView,const Standard_Integer Xpix,const Standard_Integer Ypix) const;
  //! Returns the radius of the picking sphere. <br>
  Standard_EXPORT     Quantity_Parameter Radius() const;
  //! Returns the visibility status <br>
//!          If True the source is visible. <br>
//!          If False it's hidden. <br>
  Standard_EXPORT     Standard_Boolean SeeOrHide(const Handle(V3d_View)& aView) const;
  //! Returns the position of the light source. <br>
  Standard_EXPORT   virtual  void Position(V3d_Coordinate& X,V3d_Coordinate& Y,V3d_Coordinate& Z) const = 0;
  //! Returns the position of the target of the light source. <br>
  Standard_EXPORT     void Target(V3d_Coordinate& X,V3d_Coordinate& Y,V3d_Coordinate& Z) const;




  DEFINE_STANDARD_RTTI(V3d_PositionLight)

protected:

  
  Standard_EXPORT   V3d_PositionLight(const Handle(V3d_Viewer)& VM);

Graphic3d_Vertex MyTarget;
V3d_TypeOfRepresentation MyTypeOfRepresentation;


private: 

  //! Defines representation of the light source. <br>
  Standard_EXPORT   virtual  void Symbol(const Handle(Graphic3d_Group)& gsymbol,const Handle(V3d_View)& aView) const = 0;



};





// other Inline functions and methods (like "C++: function call" methods)


#endif
