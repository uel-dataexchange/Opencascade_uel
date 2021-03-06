// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRep_CurveOnSurface_HeaderFile
#define _BRep_CurveOnSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BRep_CurveOnSurface_HeaderFile
#include <Handle_BRep_CurveOnSurface.hxx>
#endif

#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _gp_Pnt2d_HeaderFile
#include <gp_Pnt2d.hxx>
#endif
#ifndef _BRep_GCurve_HeaderFile
#include <BRep_GCurve.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_BRep_CurveRepresentation_HeaderFile
#include <Handle_BRep_CurveRepresentation.hxx>
#endif
class Geom2d_Curve;
class Geom_Surface;
class TopLoc_Location;
class gp_Pnt2d;
class gp_Pnt;
class BRep_CurveRepresentation;


//! Representation  of a  curve   by a   curve  in the <br>
//!          parametric space of a surface. <br>
class BRep_CurveOnSurface : public BRep_GCurve {

public:

  
  Standard_EXPORT   BRep_CurveOnSurface(const Handle(Geom2d_Curve)& PC,const Handle(Geom_Surface)& S,const TopLoc_Location& L);
  
        void SetUVPoints(const gp_Pnt2d& P1,const gp_Pnt2d& P2) ;
  
        void UVPoints(gp_Pnt2d& P1,gp_Pnt2d& P2) const;
  //! Computes the point at parameter U. <br>
  Standard_EXPORT     void D0(const Standard_Real U,gp_Pnt& P) const;
  //! Returns True. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsCurveOnSurface() const;
  //! A curve in the parametric space of a surface. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsCurveOnSurface(const Handle(Geom_Surface)& S,const TopLoc_Location& L) const;
  
  Standard_EXPORT   virtual const Handle_Geom_Surface& Surface() const;
  
  Standard_EXPORT   virtual const Handle_Geom2d_Curve& PCurve() const;
  
  Standard_EXPORT   virtual  void PCurve(const Handle(Geom2d_Curve)& C) ;
  //! Return a copy of this representation. <br>
  Standard_EXPORT   virtual  Handle_BRep_CurveRepresentation Copy() const;
  //! Recomputes any derived data after a modification. <br>
//!          This is called when the range is modified. <br>
  Standard_EXPORT   virtual  void Update() ;




  DEFINE_STANDARD_RTTI(BRep_CurveOnSurface)

protected:


gp_Pnt2d myUV1;
gp_Pnt2d myUV2;


private: 


Handle_Geom2d_Curve myPCurve;
Handle_Geom_Surface mySurface;


};


#include <BRep_CurveOnSurface.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
