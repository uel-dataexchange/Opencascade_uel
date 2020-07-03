// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom_CartesianPoint_HeaderFile
#define _PGeom_CartesianPoint_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PGeom_CartesianPoint_HeaderFile
#include <Handle_PGeom_CartesianPoint.hxx>
#endif

#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _PGeom_Point_HeaderFile
#include <PGeom_Point.hxx>
#endif
class gp_Pnt;


class PGeom_CartesianPoint : public PGeom_Point {

public:

  //! Returns a CartesianPoint with default values.. <br>
  Standard_EXPORT   PGeom_CartesianPoint();
  //! Returns a CartesianPoint built with <aPnt>. <br>
  Standard_EXPORT   PGeom_CartesianPoint(const gp_Pnt& aPnt);
  //! Set the field pnt. <br>
  Standard_EXPORT     void Pnt(const gp_Pnt& aPnt) ;
  //! Returns the value of the field pnt. <br>
  Standard_EXPORT     gp_Pnt Pnt() const;

PGeom_CartesianPoint(const Storage_stCONSTclCOM& a) : PGeom_Point(a)
{
  
}
    const gp_Pnt& _CSFDB_GetPGeom_CartesianPointpnt() const { return pnt; }



  DEFINE_STANDARD_RTTI(PGeom_CartesianPoint)

protected:




private: 


gp_Pnt pnt;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
