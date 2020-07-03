// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom_Axis2Placement_HeaderFile
#define _PGeom_Axis2Placement_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PGeom_Axis2Placement_HeaderFile
#include <Handle_PGeom_Axis2Placement.hxx>
#endif

#ifndef _gp_Dir_HeaderFile
#include <gp_Dir.hxx>
#endif
#ifndef _PGeom_AxisPlacement_HeaderFile
#include <PGeom_AxisPlacement.hxx>
#endif
class gp_Ax1;
class gp_Dir;


class PGeom_Axis2Placement : public PGeom_AxisPlacement {

public:

  //! Returns an Axis2Placement with default values. <br>
  Standard_EXPORT   PGeom_Axis2Placement();
  //! Creates an Axis2Placement with <A2>. <br>
  Standard_EXPORT   PGeom_Axis2Placement(const gp_Ax1& aAxis,const gp_Dir& aXDirection);
  //! Set the value of the field xDirection with <aXDirection>. <br>
  Standard_EXPORT     void XDirection(const gp_Dir& aXDirection) ;
  //! Returns the "XDirection". This is a unit vector. <br>
  Standard_EXPORT     gp_Dir XDirection() const;

PGeom_Axis2Placement(const Storage_stCONSTclCOM& a) : PGeom_AxisPlacement(a)
{
  
}
    const gp_Dir& _CSFDB_GetPGeom_Axis2PlacementxDirection() const { return xDirection; }



  DEFINE_STANDARD_RTTI(PGeom_Axis2Placement)

protected:




private: 


gp_Dir xDirection;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
