// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSolid_Torus_HeaderFile
#define _IGESSolid_Torus_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESSolid_Torus_HeaderFile
#include <Handle_IGESSolid_Torus.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _gp_XYZ_HeaderFile
#include <gp_XYZ.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
class gp_XYZ;
class gp_Pnt;
class gp_Dir;


//! defines Torus, Type <160> Form Number <0> <br>
//!          in package IGESSolid <br>
//!          A Torus is a solid formed by revolving a circular disc <br>
//!          about a specified coplanar axis. <br>
class IGESSolid_Torus : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESSolid_Torus();
  //! This method is used to set the fields of the class Torus <br>
//!       - R1     : distance from center of torus to center <br>
//!                  of circular disc to be revolved <br>
//!       - R2     : radius of circular disc <br>
//!       - aPoint : center point coordinates (default (0,0,0)) <br>
//!       - anAxis : unit vector in axis direction (default (0,0,1)) <br>
  Standard_EXPORT     void Init(const Standard_Real R1,const Standard_Real R2,const gp_XYZ& aPoint,const gp_XYZ& anAxisdir) ;
  //! returns the distance from the center of torus to the center of <br>
//! the disc to be revolved <br>
  Standard_EXPORT     Standard_Real MajorRadius() const;
  //! returns the radius of the disc to be revolved <br>
  Standard_EXPORT     Standard_Real DiscRadius() const;
  //! returns the center of torus <br>
  Standard_EXPORT     gp_Pnt AxisPoint() const;
  //! returns the center of torus after applying TransformationMatrix <br>
  Standard_EXPORT     gp_Pnt TransformedAxisPoint() const;
  //! returns direction of the axis <br>
  Standard_EXPORT     gp_Dir Axis() const;
  //! returns direction of the axis after applying TransformationMatrix <br>
  Standard_EXPORT     gp_Dir TransformedAxis() const;




  DEFINE_STANDARD_RTTI(IGESSolid_Torus)

protected:




private: 


Standard_Real theR1;
Standard_Real theR2;
gp_XYZ thePoint;
gp_XYZ theAxis;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
