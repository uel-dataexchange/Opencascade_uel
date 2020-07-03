// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_Array1OfUncertaintyMeasureWithUnit_HeaderFile
#define _StepBasic_Array1OfUncertaintyMeasureWithUnit_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_StepBasic_UncertaintyMeasureWithUnit_HeaderFile
#include <Handle_StepBasic_UncertaintyMeasureWithUnit.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepBasic_UncertaintyMeasureWithUnit;



class StepBasic_Array1OfUncertaintyMeasureWithUnit  {
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

  
  Standard_EXPORT   StepBasic_Array1OfUncertaintyMeasureWithUnit(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   StepBasic_Array1OfUncertaintyMeasureWithUnit(const Handle(StepBasic_UncertaintyMeasureWithUnit)& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const Handle(StepBasic_UncertaintyMeasureWithUnit)& V) ;
  
  Standard_EXPORT     void Destroy() ;
~StepBasic_Array1OfUncertaintyMeasureWithUnit()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const StepBasic_Array1OfUncertaintyMeasureWithUnit& Assign(const StepBasic_Array1OfUncertaintyMeasureWithUnit& Other) ;
   const StepBasic_Array1OfUncertaintyMeasureWithUnit& operator =(const StepBasic_Array1OfUncertaintyMeasureWithUnit& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(StepBasic_UncertaintyMeasureWithUnit)& Value) ;
  
       const Handle_StepBasic_UncertaintyMeasureWithUnit& Value(const Standard_Integer Index) const;
     const Handle_StepBasic_UncertaintyMeasureWithUnit& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        Handle_StepBasic_UncertaintyMeasureWithUnit& ChangeValue(const Standard_Integer Index) ;
      Handle_StepBasic_UncertaintyMeasureWithUnit& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   StepBasic_Array1OfUncertaintyMeasureWithUnit(const StepBasic_Array1OfUncertaintyMeasureWithUnit& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item Handle_StepBasic_UncertaintyMeasureWithUnit
#define Array1Item_hxx <StepBasic_UncertaintyMeasureWithUnit.hxx>
#define TCollection_Array1 StepBasic_Array1OfUncertaintyMeasureWithUnit
#define TCollection_Array1_hxx <StepBasic_Array1OfUncertaintyMeasureWithUnit.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
