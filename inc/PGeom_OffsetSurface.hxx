// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom_OffsetSurface_HeaderFile
#define _PGeom_OffsetSurface_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PGeom_OffsetSurface_HeaderFile
#include <Handle_PGeom_OffsetSurface.hxx>
#endif

#ifndef _Handle_PGeom_Surface_HeaderFile
#include <Handle_PGeom_Surface.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _PGeom_Surface_HeaderFile
#include <PGeom_Surface.hxx>
#endif
class PGeom_Surface;


class PGeom_OffsetSurface : public PGeom_Surface {

public:

  //! Creates an OffsetSurface with default values. <br>
  Standard_EXPORT   PGeom_OffsetSurface();
  //!  <aBasisSurface>    is  the   basis      surface, <br>
//!         <aOffsetValue> is the distance between <me> and the <br>
//!         basis  surface at any  point.    <aOffsetDirection> <br>
//!         defines  the  fixed  reference  direction   (offset <br>
//!         direction). <br>
  Standard_EXPORT   PGeom_OffsetSurface(const Handle(PGeom_Surface)& aBasisSurface,const Standard_Real aOffsetValue);
  //! Set the field basisSurface with <aBasisSurface>. <br>
  Standard_EXPORT     void BasisSurface(const Handle(PGeom_Surface)& aBasisSurface) ;
  //! The basis surface can be an offset surface. <br>
  Standard_EXPORT     Handle_PGeom_Surface BasisSurface() const;
  //! Set the field offsetValue with <aOffsetValue>. <br>
  Standard_EXPORT     void OffsetValue(const Standard_Real aOffsetValue) ;
  //! Returns the value of the field offsetValue. <br>
  Standard_EXPORT     Standard_Real OffsetValue() const;

PGeom_OffsetSurface(const Storage_stCONSTclCOM& a) : PGeom_Surface(a)
{
  
}
    Handle(PGeom_Surface) _CSFDB_GetPGeom_OffsetSurfacebasisSurface() const { return basisSurface; }
    void _CSFDB_SetPGeom_OffsetSurfacebasisSurface(const Handle(PGeom_Surface)& p) { basisSurface = p; }
    Standard_Real _CSFDB_GetPGeom_OffsetSurfaceoffsetValue() const { return offsetValue; }
    void _CSFDB_SetPGeom_OffsetSurfaceoffsetValue(const Standard_Real p) { offsetValue = p; }



  DEFINE_STANDARD_RTTI(PGeom_OffsetSurface)

protected:




private: 


Handle_PGeom_Surface basisSurface;
Standard_Real offsetValue;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
