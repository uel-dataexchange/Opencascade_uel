// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_Array1OfPnt2d_HeaderFile
#define _TColgp_Array1OfPnt2d_HeaderFile

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
class gp_Pnt2d;



class TColgp_Array1OfPnt2d  {
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

  
  Standard_EXPORT   TColgp_Array1OfPnt2d(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   TColgp_Array1OfPnt2d(const gp_Pnt2d& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const gp_Pnt2d& V) ;
  
  Standard_EXPORT     void Destroy() ;
~TColgp_Array1OfPnt2d()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const TColgp_Array1OfPnt2d& Assign(const TColgp_Array1OfPnt2d& Other) ;
   const TColgp_Array1OfPnt2d& operator =(const TColgp_Array1OfPnt2d& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const gp_Pnt2d& Value) ;
  
       const gp_Pnt2d& Value(const Standard_Integer Index) const;
     const gp_Pnt2d& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        gp_Pnt2d& ChangeValue(const Standard_Integer Index) ;
      gp_Pnt2d& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   TColgp_Array1OfPnt2d(const TColgp_Array1OfPnt2d& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item gp_Pnt2d
#define Array1Item_hxx <gp_Pnt2d.hxx>
#define TCollection_Array1 TColgp_Array1OfPnt2d
#define TCollection_Array1_hxx <TColgp_Array1OfPnt2d.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
