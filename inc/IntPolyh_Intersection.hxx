// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPolyh_Intersection_HeaderFile
#define _IntPolyh_Intersection_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _IntPolyh_ArrayOfSectionLines_HeaderFile
#include <IntPolyh_ArrayOfSectionLines.hxx>
#endif
#ifndef _IntPolyh_ArrayOfTangentZones_HeaderFile
#include <IntPolyh_ArrayOfTangentZones.hxx>
#endif
#ifndef _Handle_Adaptor3d_HSurface_HeaderFile
#include <Handle_Adaptor3d_HSurface.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _IntPolyh_PMaillageAffinage_HeaderFile
#include <IntPolyh_PMaillageAffinage.hxx>
#endif
class Adaptor3d_HSurface;
class TColStd_Array1OfReal;
class IntPolyh_ArrayOfCouples;



class IntPolyh_Intersection  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Constructor <br>
//! <br>
//! <br>
  Standard_EXPORT   IntPolyh_Intersection(const Handle(Adaptor3d_HSurface)& S1,const Handle(Adaptor3d_HSurface)& S2);
  //! NbSU1 ... NbSV2 are used to compute the initial <br>
//!          samples of  the  iso parametric  meshes  on the <br>
//!          surfaces. <br>
  Standard_EXPORT   IntPolyh_Intersection(const Handle(Adaptor3d_HSurface)& S1,const Standard_Integer NbSU1,const Standard_Integer NbSV1,const Handle(Adaptor3d_HSurface)& S2,const Standard_Integer NbSU2,const Standard_Integer NbSV2);
  //! D1,  D2 are used to compute the initial <br>
//!          samples of  the  iso parametric  meshes  on the <br>
//!          surfaces. <br>
  Standard_EXPORT   IntPolyh_Intersection(const Handle(Adaptor3d_HSurface)& S1,const TColStd_Array1OfReal& anUpars1,const TColStd_Array1OfReal& aVpars1,const Handle(Adaptor3d_HSurface)& S2,const TColStd_Array1OfReal& anUpars2,const TColStd_Array1OfReal& aVpars2);
  //! Compute the intersection. <br>
  Standard_EXPORT     void Perform() ;
  //! Compute the intersection. <br>
  Standard_EXPORT     void Perform(const TColStd_Array1OfReal& Upars1,const TColStd_Array1OfReal& Vpars1,const TColStd_Array1OfReal& Upars2,const TColStd_Array1OfReal& Vpars2) ;
  
  Standard_EXPORT     Standard_Boolean IsDone() const;
  
  Standard_EXPORT     Standard_Integer NbSectionLines() const;
  
  Standard_EXPORT     Standard_Integer NbPointsInLine(const Standard_Integer IndexLine) const;
  
  Standard_EXPORT     void GetLinePoint(const Standard_Integer IndexLine,const Standard_Integer IndexPoint,Standard_Real& x,Standard_Real& y,Standard_Real& z,Standard_Real& u1,Standard_Real& v1,Standard_Real& u2,Standard_Real& v2,Standard_Real& incidence) const;
  
  Standard_EXPORT     Standard_Integer NbTangentZones() const;
  
  Standard_EXPORT     Standard_Integer NbPointsInTangentZone(const Standard_Integer IndexLine) const;
  
  Standard_EXPORT     void GetTangentZonePoint(const Standard_Integer IndexLine,const Standard_Integer IndexPoint,Standard_Real& x,Standard_Real& y,Standard_Real& z,Standard_Real& u1,Standard_Real& v1,Standard_Real& u2,Standard_Real& v2) const;





protected:





private:

  //! Computes MaillageAffinage <br>
  Standard_EXPORT     Standard_Boolean PerformMaillage(const Standard_Boolean isFirstFwd,const Standard_Boolean isSecondFwd,IntPolyh_PMaillageAffinage& MaillageS) ;
  //! The method PerformMaillage(..) is used to compute MaillageAffinage. It is <br>
//! called four times (two times for each surface) for creation of inscribed <br>
//! and circumscribed mesh for each surface. <br>
  Standard_EXPORT     Standard_Boolean PerformMaillage(IntPolyh_PMaillageAffinage& MaillageS) ;
  //! Computes MaillageAffinage <br>
  Standard_EXPORT     Standard_Boolean PerformMaillage(const Standard_Boolean isFirstFwd,const Standard_Boolean isSecondFwd,const TColStd_Array1OfReal& Upars1,const TColStd_Array1OfReal& Vpars1,const TColStd_Array1OfReal& Upars2,const TColStd_Array1OfReal& Vpars2,IntPolyh_PMaillageAffinage& MaillageS) ;
  //! The method PerformMaillage(..) is used to compute MaillageAffinage. It is <br>
//! called four times (two times for each surface) for creation of inscribed <br>
//! and circumscribed mesh for each surface. <br>
  Standard_EXPORT     Standard_Boolean PerformMaillage(const TColStd_Array1OfReal& Upars1,const TColStd_Array1OfReal& Vpars1,const TColStd_Array1OfReal& Upars2,const TColStd_Array1OfReal& Vpars2,IntPolyh_PMaillageAffinage& MaillageS) ;
  //! This method analyzes arrays to find same couples. If some <br>
//!          are detected it leaves the couple in only one array <br>
//!          deleting from others. <br>
  Standard_EXPORT     void MergeCouples(IntPolyh_ArrayOfCouples& anArrayFF,IntPolyh_ArrayOfCouples& anArrayFR,IntPolyh_ArrayOfCouples& anArrayRF,IntPolyh_ArrayOfCouples& anArrayRR) const;
  //! Process default interference <br>
  Standard_EXPORT     Standard_Boolean PerformStd(IntPolyh_PMaillageAffinage& MaillageS,Standard_Integer& NbCouples) ;
  //! Process advanced interference <br>
  Standard_EXPORT     Standard_Boolean PerformAdv(IntPolyh_PMaillageAffinage& MaillageFF,IntPolyh_PMaillageAffinage& MaillageFR,IntPolyh_PMaillageAffinage& MaillageRF,IntPolyh_PMaillageAffinage& MaillageRR,Standard_Integer& NbCouples) ;
  //! Process default interference <br>
  Standard_EXPORT     Standard_Boolean PerformStd(const TColStd_Array1OfReal& Upars1,const TColStd_Array1OfReal& Vpars1,const TColStd_Array1OfReal& Upars2,const TColStd_Array1OfReal& Vpars2,IntPolyh_PMaillageAffinage& MaillageS,Standard_Integer& NbCouples) ;
  //! Process advanced interference <br>
  Standard_EXPORT     Standard_Boolean PerformAdv(const TColStd_Array1OfReal& Upars1,const TColStd_Array1OfReal& Vpars1,const TColStd_Array1OfReal& Upars2,const TColStd_Array1OfReal& Vpars2,IntPolyh_PMaillageAffinage& MaillageFF,IntPolyh_PMaillageAffinage& MaillageFR,IntPolyh_PMaillageAffinage& MaillageRF,IntPolyh_PMaillageAffinage& MaillageRR,Standard_Integer& NbCouples) ;


Standard_Boolean done;
Standard_Integer nbsectionlines;
Standard_Integer nbtangentzones;
IntPolyh_ArrayOfSectionLines TSectionLines;
IntPolyh_ArrayOfTangentZones TTangentZones;
Standard_Integer myNbSU1;
Standard_Integer myNbSV1;
Standard_Integer myNbSU2;
Standard_Integer myNbSV2;
Handle_Adaptor3d_HSurface mySurf1;
Handle_Adaptor3d_HSurface mySurf2;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
