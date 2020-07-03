// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_Array1OfVector_HeaderFile
#define _Graphic3d_Array1OfVector_HeaderFile

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
class Graphic3d_Vector;



class Graphic3d_Array1OfVector  {
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

  
  Standard_EXPORT   Graphic3d_Array1OfVector(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   Graphic3d_Array1OfVector(const Graphic3d_Vector& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const Graphic3d_Vector& V) ;
  
  Standard_EXPORT     void Destroy() ;
~Graphic3d_Array1OfVector()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const Graphic3d_Array1OfVector& Assign(const Graphic3d_Array1OfVector& Other) ;
   const Graphic3d_Array1OfVector& operator =(const Graphic3d_Array1OfVector& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Graphic3d_Vector& Value) ;
  
       const Graphic3d_Vector& Value(const Standard_Integer Index) const;
     const Graphic3d_Vector& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        Graphic3d_Vector& ChangeValue(const Standard_Integer Index) ;
      Graphic3d_Vector& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   Graphic3d_Array1OfVector(const Graphic3d_Array1OfVector& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item Graphic3d_Vector
#define Array1Item_hxx <Graphic3d_Vector.hxx>
#define TCollection_Array1 Graphic3d_Array1OfVector
#define TCollection_Array1_hxx <Graphic3d_Array1OfVector.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
