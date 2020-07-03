// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_ConversionBasedUnitAndAreaUnit_HeaderFile
#define _StepBasic_ConversionBasedUnitAndAreaUnit_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepBasic_ConversionBasedUnitAndAreaUnit_HeaderFile
#include <Handle_StepBasic_ConversionBasedUnitAndAreaUnit.hxx>
#endif

#ifndef _Handle_StepBasic_AreaUnit_HeaderFile
#include <Handle_StepBasic_AreaUnit.hxx>
#endif
#ifndef _StepBasic_ConversionBasedUnit_HeaderFile
#include <StepBasic_ConversionBasedUnit.hxx>
#endif
class StepBasic_AreaUnit;



class StepBasic_ConversionBasedUnitAndAreaUnit : public StepBasic_ConversionBasedUnit {

public:

  //! Returns a ConversionBasedUnitAndAreaUnit <br>
  Standard_EXPORT   StepBasic_ConversionBasedUnitAndAreaUnit();
  
  Standard_EXPORT     void SetAreaUnit(const Handle(StepBasic_AreaUnit)& anAreaUnit) ;
  
  Standard_EXPORT     Handle_StepBasic_AreaUnit AreaUnit() const;




  DEFINE_STANDARD_RTTI(StepBasic_ConversionBasedUnitAndAreaUnit)

protected:




private: 


Handle_StepBasic_AreaUnit areaUnit;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
