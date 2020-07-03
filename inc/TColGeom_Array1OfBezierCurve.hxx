// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColGeom_Array1OfBezierCurve_HeaderFile
#define _TColGeom_Array1OfBezierCurve_HeaderFile

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
#ifndef _Handle_Geom_BezierCurve_HeaderFile
#include <Handle_Geom_BezierCurve.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Geom_BezierCurve;



class TColGeom_Array1OfBezierCurve  {
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

  
  Standard_EXPORT   TColGeom_Array1OfBezierCurve(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   TColGeom_Array1OfBezierCurve(const Handle(Geom_BezierCurve)& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const Handle(Geom_BezierCurve)& V) ;
  
  Standard_EXPORT     void Destroy() ;
~TColGeom_Array1OfBezierCurve()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const TColGeom_Array1OfBezierCurve& Assign(const TColGeom_Array1OfBezierCurve& Other) ;
   const TColGeom_Array1OfBezierCurve& operator =(const TColGeom_Array1OfBezierCurve& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(Geom_BezierCurve)& Value) ;
  
       const Handle_Geom_BezierCurve& Value(const Standard_Integer Index) const;
     const Handle_Geom_BezierCurve& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        Handle_Geom_BezierCurve& ChangeValue(const Standard_Integer Index) ;
      Handle_Geom_BezierCurve& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   TColGeom_Array1OfBezierCurve(const TColGeom_Array1OfBezierCurve& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item Handle_Geom_BezierCurve
#define Array1Item_hxx <Geom_BezierCurve.hxx>
#define TCollection_Array1 TColGeom_Array1OfBezierCurve
#define TCollection_Array1_hxx <TColGeom_Array1OfBezierCurve.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
