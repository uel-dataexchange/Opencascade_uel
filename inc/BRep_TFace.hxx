// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRep_TFace_HeaderFile
#define _BRep_TFace_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BRep_TFace_HeaderFile
#include <Handle_BRep_TFace.hxx>
#endif

#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _Handle_Poly_Triangulation_HeaderFile
#include <Handle_Poly_Triangulation.hxx>
#endif
#ifndef _TopLoc_Location_HeaderFile
#include <TopLoc_Location.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopoDS_TFace_HeaderFile
#include <TopoDS_TFace.hxx>
#endif
#ifndef _Handle_TopoDS_TShape_HeaderFile
#include <Handle_TopoDS_TShape.hxx>
#endif
class Geom_Surface;
class Poly_Triangulation;
class TopLoc_Location;
class TopoDS_TShape;


//! The Tface from BRep  is  based  on the TFace  from <br>
//!          TopoDS. The TFace contains : <br>
//! <br>
//!          * A suface, a tolerance and a Location. <br>
//! <br>
//!          * A NaturalRestriction flag,   when this  flag  is <br>
//!          True the  boundary of the  face is known to be the <br>
//!          parametric space (Umin, UMax, VMin, VMax). <br>
//! <br>
//!          *  An    optional Triangulation.   If  there  is a <br>
//!          triangulation the surface can be absent. <br>
//! <br>
//!          The  Location is  used   for the Surface. <br>
//! <br>
//!          The triangulation  is in the same reference system <br>
//!          than the TFace.     A point on mySurface must   be <br>
//!          transformed with myLocation,  but  not a point  on <br>
//!          the triangulation. <br>
//! <br>
//!          The Surface may  be shared by different TFaces but <br>
//!          not the  Triangulation, because the  Triangulation <br>
//!          may be modified by  the edges. <br>
//! <br>
class BRep_TFace : public TopoDS_TFace {

public:

  //! Creates an empty TFace. <br>
  Standard_EXPORT   BRep_TFace();
  
       const Handle_Geom_Surface& Surface() const;
  
       const Handle_Poly_Triangulation& Triangulation() const;
  
       const TopLoc_Location& Location() const;
  
        Standard_Real Tolerance() const;
  
        void Surface(const Handle(Geom_Surface)& S) ;
  
        void Triangulation(const Handle(Poly_Triangulation)& T) ;
  
        void Location(const TopLoc_Location& L) ;
  
        void Tolerance(const Standard_Real T) ;
  
        Standard_Boolean NaturalRestriction() const;
  
        void NaturalRestriction(const Standard_Boolean N) ;
  //! Returns a copy  of the  TShape  with no sub-shapes. <br>
//!          The new Face has no triangulation. <br>
  Standard_EXPORT   virtual  Handle_TopoDS_TShape EmptyCopy() const;




  DEFINE_STANDARD_RTTI(BRep_TFace)

protected:




private: 


Handle_Geom_Surface mySurface;
Handle_Poly_Triangulation myTriangulation;
TopLoc_Location myLocation;
Standard_Real myTolerance;
Standard_Boolean myNaturalRestriction;


};


#include <BRep_TFace.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
