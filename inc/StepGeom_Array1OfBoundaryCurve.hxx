// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_Array1OfBoundaryCurve_HeaderFile
#define _StepGeom_Array1OfBoundaryCurve_HeaderFile

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
#ifndef _Handle_StepGeom_BoundaryCurve_HeaderFile
#include <Handle_StepGeom_BoundaryCurve.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepGeom_BoundaryCurve;



class StepGeom_Array1OfBoundaryCurve  {
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

  
  Standard_EXPORT   StepGeom_Array1OfBoundaryCurve(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   StepGeom_Array1OfBoundaryCurve(const Handle(StepGeom_BoundaryCurve)& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const Handle(StepGeom_BoundaryCurve)& V) ;
  
  Standard_EXPORT     void Destroy() ;
~StepGeom_Array1OfBoundaryCurve()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const StepGeom_Array1OfBoundaryCurve& Assign(const StepGeom_Array1OfBoundaryCurve& Other) ;
   const StepGeom_Array1OfBoundaryCurve& operator =(const StepGeom_Array1OfBoundaryCurve& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(StepGeom_BoundaryCurve)& Value) ;
  
       const Handle_StepGeom_BoundaryCurve& Value(const Standard_Integer Index) const;
     const Handle_StepGeom_BoundaryCurve& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        Handle_StepGeom_BoundaryCurve& ChangeValue(const Standard_Integer Index) ;
      Handle_StepGeom_BoundaryCurve& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   StepGeom_Array1OfBoundaryCurve(const StepGeom_Array1OfBoundaryCurve& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item Handle_StepGeom_BoundaryCurve
#define Array1Item_hxx <StepGeom_BoundaryCurve.hxx>
#define TCollection_Array1 StepGeom_Array1OfBoundaryCurve
#define TCollection_Array1_hxx <StepGeom_Array1OfBoundaryCurve.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
