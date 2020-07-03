// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_SiUnitAndVolumeUnit_HeaderFile
#define _StepBasic_SiUnitAndVolumeUnit_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepBasic_SiUnitAndVolumeUnit_HeaderFile
#include <Handle_StepBasic_SiUnitAndVolumeUnit.hxx>
#endif

#ifndef _Handle_StepBasic_VolumeUnit_HeaderFile
#include <Handle_StepBasic_VolumeUnit.hxx>
#endif
#ifndef _StepBasic_SiUnit_HeaderFile
#include <StepBasic_SiUnit.hxx>
#endif
#ifndef _Handle_StepBasic_DimensionalExponents_HeaderFile
#include <Handle_StepBasic_DimensionalExponents.hxx>
#endif
class StepBasic_VolumeUnit;
class StepBasic_DimensionalExponents;



class StepBasic_SiUnitAndVolumeUnit : public StepBasic_SiUnit {

public:

  //! Returns a SiUnitAndVolumeUnit <br>
  Standard_EXPORT   StepBasic_SiUnitAndVolumeUnit();
  
  Standard_EXPORT     void SetVolumeUnit(const Handle(StepBasic_VolumeUnit)& aVolumeUnit) ;
  
  Standard_EXPORT     Handle_StepBasic_VolumeUnit VolumeUnit() const;
  
  Standard_EXPORT   virtual  void SetDimensions(const Handle(StepBasic_DimensionalExponents)& aDimensions) ;
  
  Standard_EXPORT   virtual  Handle_StepBasic_DimensionalExponents Dimensions() const;




  DEFINE_STANDARD_RTTI(StepBasic_SiUnitAndVolumeUnit)

protected:




private: 


Handle_StepBasic_VolumeUnit volumeUnit;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
