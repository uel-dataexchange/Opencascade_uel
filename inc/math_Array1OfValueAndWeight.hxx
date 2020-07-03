// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _math_Array1OfValueAndWeight_HeaderFile
#define _math_Array1OfValueAndWeight_HeaderFile

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
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class math_ValueAndWeight;



class math_Array1OfValueAndWeight  {
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

  
  Standard_EXPORT   math_Array1OfValueAndWeight(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   math_Array1OfValueAndWeight(const math_ValueAndWeight& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const math_ValueAndWeight& V) ;
  
  Standard_EXPORT     void Destroy() ;
~math_Array1OfValueAndWeight()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const math_Array1OfValueAndWeight& Assign(const math_Array1OfValueAndWeight& Other) ;
   const math_Array1OfValueAndWeight& operator =(const math_Array1OfValueAndWeight& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const math_ValueAndWeight& Value) ;
  
       const math_ValueAndWeight& Value(const Standard_Integer Index) const;
     const math_ValueAndWeight& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        math_ValueAndWeight& ChangeValue(const Standard_Integer Index) ;
      math_ValueAndWeight& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   math_Array1OfValueAndWeight(const math_Array1OfValueAndWeight& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item math_ValueAndWeight
#define Array1Item_hxx <math_ValueAndWeight.hxx>
#define TCollection_Array1 math_Array1OfValueAndWeight
#define TCollection_Array1_hxx <math_Array1OfValueAndWeight.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
