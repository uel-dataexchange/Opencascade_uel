// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColPGeom_HArray1OfBezierCurve_HeaderFile
#define _PColPGeom_HArray1OfBezierCurve_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PColPGeom_HArray1OfBezierCurve_HeaderFile
#include <Handle_PColPGeom_HArray1OfBezierCurve.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_PGeom_BezierCurve_HeaderFile
#include <Handle_PGeom_BezierCurve.hxx>
#endif
#ifndef _Handle_Standard_Persistent_HeaderFile
#include <Handle_Standard_Persistent.hxx>
#endif
#ifndef _PColPGeom_FieldOfHArray1OfBezierCurve_HeaderFile
#include <PColPGeom_FieldOfHArray1OfBezierCurve.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Persistent_HeaderFile
#include <Standard_Persistent.hxx>
#endif
#ifndef _Handle_PColPGeom_VArrayNodeOfFieldOfHArray1OfBezierCurve_HeaderFile
#include <Handle_PColPGeom_VArrayNodeOfFieldOfHArray1OfBezierCurve.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class PGeom_BezierCurve;
class Standard_Persistent;
class Standard_OutOfRange;
class Standard_RangeError;
class PColPGeom_FieldOfHArray1OfBezierCurve;
class PColPGeom_VArrayNodeOfFieldOfHArray1OfBezierCurve;
class PColPGeom_VArrayTNodeOfFieldOfHArray1OfBezierCurve;


class PColPGeom_HArray1OfBezierCurve : public Standard_Persistent {

public:

  
  Standard_EXPORT   PColPGeom_HArray1OfBezierCurve(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   PColPGeom_HArray1OfBezierCurve(const Standard_Integer Low,const Standard_Integer Up,const Handle(PGeom_BezierCurve)& V);
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(PGeom_BezierCurve)& Value) ;
  
        Standard_Integer Upper() const;
  
  Standard_EXPORT     Handle_PGeom_BezierCurve Value(const Standard_Integer Index) const;
  
  Standard_EXPORT   virtual  Handle_Standard_Persistent ShallowCopy() const;
  
  Standard_EXPORT   virtual  void ShallowDump(Standard_OStream& s) const;

  PColPGeom_HArray1OfBezierCurve( )
{
  
}
PColPGeom_HArray1OfBezierCurve(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    Standard_Integer _CSFDB_GetPColPGeom_HArray1OfBezierCurveLowerBound() const { return LowerBound; }
    void _CSFDB_SetPColPGeom_HArray1OfBezierCurveLowerBound(const Standard_Integer p) { LowerBound = p; }
    Standard_Integer _CSFDB_GetPColPGeom_HArray1OfBezierCurveUpperBound() const { return UpperBound; }
    void _CSFDB_SetPColPGeom_HArray1OfBezierCurveUpperBound(const Standard_Integer p) { UpperBound = p; }
    const PColPGeom_FieldOfHArray1OfBezierCurve& _CSFDB_GetPColPGeom_HArray1OfBezierCurveData() const { return Data; }



  DEFINE_STANDARD_RTTI(PColPGeom_HArray1OfBezierCurve)

protected:




private: 

  
  Standard_EXPORT     PColPGeom_FieldOfHArray1OfBezierCurve Field() const;
  
  Standard_EXPORT     Standard_Address Datas() const;

Standard_Integer LowerBound;
Standard_Integer UpperBound;
PColPGeom_FieldOfHArray1OfBezierCurve Data;


};

#define Item Handle_PGeom_BezierCurve
#define Item_hxx <PGeom_BezierCurve.hxx>
#define PCollection_FieldOfHArray1 PColPGeom_FieldOfHArray1OfBezierCurve
#define PCollection_FieldOfHArray1_hxx <PColPGeom_FieldOfHArray1OfBezierCurve.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray1 PColPGeom_VArrayNodeOfFieldOfHArray1OfBezierCurve
#define PCollection_VArrayNodeOfFieldOfHArray1_hxx <PColPGeom_VArrayNodeOfFieldOfHArray1OfBezierCurve.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray1 PColPGeom_VArrayTNodeOfFieldOfHArray1OfBezierCurve
#define PCollection_VArrayTNodeOfFieldOfHArray1_hxx <PColPGeom_VArrayTNodeOfFieldOfHArray1OfBezierCurve.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray1 PColPGeom_VArrayNodeOfFieldOfHArray1OfBezierCurve
#define PCollection_VArrayNodeOfFieldOfHArray1_hxx <PColPGeom_VArrayNodeOfFieldOfHArray1OfBezierCurve.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray1 PColPGeom_VArrayTNodeOfFieldOfHArray1OfBezierCurve
#define PCollection_VArrayTNodeOfFieldOfHArray1_hxx <PColPGeom_VArrayTNodeOfFieldOfHArray1OfBezierCurve.hxx>
#define Handle_PCollection_VArrayNodeOfFieldOfHArray1 Handle_PColPGeom_VArrayNodeOfFieldOfHArray1OfBezierCurve
#define PCollection_VArrayNodeOfFieldOfHArray1_Type_() PColPGeom_VArrayNodeOfFieldOfHArray1OfBezierCurve_Type_()
#define Handle_PCollection_VArrayNodeOfFieldOfHArray1 Handle_PColPGeom_VArrayNodeOfFieldOfHArray1OfBezierCurve
#define PCollection_VArrayNodeOfFieldOfHArray1_Type_() PColPGeom_VArrayNodeOfFieldOfHArray1OfBezierCurve_Type_()
#define PCollection_HArray1 PColPGeom_HArray1OfBezierCurve
#define PCollection_HArray1_hxx <PColPGeom_HArray1OfBezierCurve.hxx>
#define Handle_PCollection_HArray1 Handle_PColPGeom_HArray1OfBezierCurve
#define PCollection_HArray1_Type_() PColPGeom_HArray1OfBezierCurve_Type_()

#include <PCollection_HArray1.lxx>

#undef Item
#undef Item_hxx
#undef PCollection_FieldOfHArray1
#undef PCollection_FieldOfHArray1_hxx
#undef PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_hxx
#undef PCollection_VArrayTNodeOfFieldOfHArray1
#undef PCollection_VArrayTNodeOfFieldOfHArray1_hxx
#undef PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_hxx
#undef PCollection_VArrayTNodeOfFieldOfHArray1
#undef PCollection_VArrayTNodeOfFieldOfHArray1_hxx
#undef Handle_PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_Type_
#undef Handle_PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_Type_
#undef PCollection_HArray1
#undef PCollection_HArray1_hxx
#undef Handle_PCollection_HArray1
#undef PCollection_HArray1_Type_


// other Inline functions and methods (like "C++: function call" methods)
inline void ShallowDump(const Handle_PColPGeom_HArray1OfBezierCurve& me,Standard_OStream& s) {
 me->ShallowDump(s);
}



#endif
