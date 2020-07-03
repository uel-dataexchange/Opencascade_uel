// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSolid_CylindricalSurface_HeaderFile
#define _IGESSolid_CylindricalSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESSolid_CylindricalSurface_HeaderFile
#include <Handle_IGESSolid_CylindricalSurface.hxx>
#endif

#ifndef _Handle_IGESGeom_Point_HeaderFile
#include <Handle_IGESGeom_Point.hxx>
#endif
#ifndef _Handle_IGESGeom_Direction_HeaderFile
#include <Handle_IGESGeom_Direction.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class IGESGeom_Point;
class IGESGeom_Direction;


//! defines CylindricalSurface, Type <192> Form Number <0,1> <br>
//!          in package IGESSolid <br>
class IGESSolid_CylindricalSurface : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESSolid_CylindricalSurface();
  //! This method is used to set the fields of the class <br>
//!           CylindricalSurface <br>
//!       - aLocation : the location of the point on axis <br>
//!       - anAxis    : the direction of the axis <br>
//!       - aRadius   : the radius at the axis point <br>
//!       - aRefdir   : the reference direction (parametrised surface) <br>
//!                     default NULL (unparametrised surface) <br>
  Standard_EXPORT     void Init(const Handle(IGESGeom_Point)& aLocation,const Handle(IGESGeom_Direction)& anAxis,const Standard_Real aRadius,const Handle(IGESGeom_Direction)& aRefdir) ;
  //! returns the point on the axis <br>
  Standard_EXPORT     Handle_IGESGeom_Point LocationPoint() const;
  //! returns the direction on the axis <br>
  Standard_EXPORT     Handle_IGESGeom_Direction Axis() const;
  //! returns the radius at the axis point <br>
  Standard_EXPORT     Standard_Real Radius() const;
  //! returns whether the surface is parametrised or not <br>
  Standard_EXPORT     Standard_Boolean IsParametrised() const;
  //! returns the reference direction only for parametrised surface <br>
//! else returns NULL <br>
  Standard_EXPORT     Handle_IGESGeom_Direction ReferenceDir() const;




  DEFINE_STANDARD_RTTI(IGESSolid_CylindricalSurface)

protected:




private: 


Handle_IGESGeom_Point theLocationPoint;
Handle_IGESGeom_Direction theAxis;
Standard_Real theRadius;
Handle_IGESGeom_Direction theRefDir;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
