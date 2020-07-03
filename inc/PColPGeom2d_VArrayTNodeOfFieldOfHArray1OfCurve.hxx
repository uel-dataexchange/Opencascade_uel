// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColPGeom2d_VArrayTNodeOfFieldOfHArray1OfCurve_HeaderFile
#define _PColPGeom2d_VArrayTNodeOfFieldOfHArray1OfCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_PGeom2d_Curve_HeaderFile
#include <Handle_PGeom2d_Curve.hxx>
#endif
#ifndef _Handle_PColPGeom2d_VArrayNodeOfFieldOfHArray1OfCurve_HeaderFile
#include <Handle_PColPGeom2d_VArrayNodeOfFieldOfHArray1OfCurve.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class PGeom2d_Curve;
class PColPGeom2d_FieldOfHArray1OfCurve;
class PColPGeom2d_VArrayNodeOfFieldOfHArray1OfCurve;



class PColPGeom2d_VArrayTNodeOfFieldOfHArray1OfCurve  {
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

  
      PColPGeom2d_VArrayTNodeOfFieldOfHArray1OfCurve();
  
      PColPGeom2d_VArrayTNodeOfFieldOfHArray1OfCurve(const Handle(PGeom2d_Curve)& aValue);
  
        void SetValue(const Handle(PGeom2d_Curve)& aValue) ;
  
        Standard_Address Value() const;





protected:





private:



Handle_PGeom2d_Curve myValue;


};

#define Item Handle_PGeom2d_Curve
#define Item_hxx <PGeom2d_Curve.hxx>
#define DBC_VArrayNode PColPGeom2d_VArrayNodeOfFieldOfHArray1OfCurve
#define DBC_VArrayNode_hxx <PColPGeom2d_VArrayNodeOfFieldOfHArray1OfCurve.hxx>
#define DBC_VArrayTNode PColPGeom2d_VArrayTNodeOfFieldOfHArray1OfCurve
#define DBC_VArrayTNode_hxx <PColPGeom2d_VArrayTNodeOfFieldOfHArray1OfCurve.hxx>
#define Handle_DBC_VArrayNode Handle_PColPGeom2d_VArrayNodeOfFieldOfHArray1OfCurve
#define DBC_VArrayNode_Type_() PColPGeom2d_VArrayNodeOfFieldOfHArray1OfCurve_Type_()
#define DBC_VArray PColPGeom2d_FieldOfHArray1OfCurve
#define DBC_VArray_hxx <PColPGeom2d_FieldOfHArray1OfCurve.hxx>

#include <DBC_VArrayTNode.lxx>

#undef Item
#undef Item_hxx
#undef DBC_VArrayNode
#undef DBC_VArrayNode_hxx
#undef DBC_VArrayTNode
#undef DBC_VArrayTNode_hxx
#undef Handle_DBC_VArrayNode
#undef DBC_VArrayNode_Type_
#undef DBC_VArray
#undef DBC_VArray_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
