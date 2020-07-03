// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESGeom_Array1OfBoundary_HeaderFile
#define _IGESGeom_Array1OfBoundary_HeaderFile

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
#ifndef _Handle_IGESGeom_Boundary_HeaderFile
#include <Handle_IGESGeom_Boundary.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class IGESGeom_Boundary;



class IGESGeom_Array1OfBoundary  {
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

  
  Standard_EXPORT   IGESGeom_Array1OfBoundary(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   IGESGeom_Array1OfBoundary(const Handle(IGESGeom_Boundary)& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const Handle(IGESGeom_Boundary)& V) ;
  
  Standard_EXPORT     void Destroy() ;
~IGESGeom_Array1OfBoundary()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const IGESGeom_Array1OfBoundary& Assign(const IGESGeom_Array1OfBoundary& Other) ;
   const IGESGeom_Array1OfBoundary& operator =(const IGESGeom_Array1OfBoundary& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(IGESGeom_Boundary)& Value) ;
  
       const Handle_IGESGeom_Boundary& Value(const Standard_Integer Index) const;
     const Handle_IGESGeom_Boundary& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        Handle_IGESGeom_Boundary& ChangeValue(const Standard_Integer Index) ;
      Handle_IGESGeom_Boundary& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   IGESGeom_Array1OfBoundary(const IGESGeom_Array1OfBoundary& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item Handle_IGESGeom_Boundary
#define Array1Item_hxx <IGESGeom_Boundary.hxx>
#define TCollection_Array1 IGESGeom_Array1OfBoundary
#define TCollection_Array1_hxx <IGESGeom_Array1OfBoundary.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
