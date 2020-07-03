// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_PolyLoop_HeaderFile
#define _StepShape_PolyLoop_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepShape_PolyLoop_HeaderFile
#include <Handle_StepShape_PolyLoop.hxx>
#endif

#ifndef _Handle_StepGeom_HArray1OfCartesianPoint_HeaderFile
#include <Handle_StepGeom_HArray1OfCartesianPoint.hxx>
#endif
#ifndef _StepShape_Loop_HeaderFile
#include <StepShape_Loop.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_StepGeom_CartesianPoint_HeaderFile
#include <Handle_StepGeom_CartesianPoint.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class StepGeom_HArray1OfCartesianPoint;
class TCollection_HAsciiString;
class StepGeom_CartesianPoint;



class StepShape_PolyLoop : public StepShape_Loop {

public:

  //! Returns a PolyLoop <br>
  Standard_EXPORT   StepShape_PolyLoop();
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const Handle(StepGeom_HArray1OfCartesianPoint)& aPolygon) ;
  
  Standard_EXPORT     void SetPolygon(const Handle(StepGeom_HArray1OfCartesianPoint)& aPolygon) ;
  
  Standard_EXPORT     Handle_StepGeom_HArray1OfCartesianPoint Polygon() const;
  
  Standard_EXPORT     Handle_StepGeom_CartesianPoint PolygonValue(const Standard_Integer num) const;
  
  Standard_EXPORT     Standard_Integer NbPolygon() const;




  DEFINE_STANDARD_RTTI(StepShape_PolyLoop)

protected:




private: 


Handle_StepGeom_HArray1OfCartesianPoint polygon;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
