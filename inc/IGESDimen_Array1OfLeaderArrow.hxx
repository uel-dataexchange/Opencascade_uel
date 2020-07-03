// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDimen_Array1OfLeaderArrow_HeaderFile
#define _IGESDimen_Array1OfLeaderArrow_HeaderFile

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
#ifndef _Handle_IGESDimen_LeaderArrow_HeaderFile
#include <Handle_IGESDimen_LeaderArrow.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class IGESDimen_LeaderArrow;



class IGESDimen_Array1OfLeaderArrow  {
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

  
  Standard_EXPORT   IGESDimen_Array1OfLeaderArrow(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   IGESDimen_Array1OfLeaderArrow(const Handle(IGESDimen_LeaderArrow)& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const Handle(IGESDimen_LeaderArrow)& V) ;
  
  Standard_EXPORT     void Destroy() ;
~IGESDimen_Array1OfLeaderArrow()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const IGESDimen_Array1OfLeaderArrow& Assign(const IGESDimen_Array1OfLeaderArrow& Other) ;
   const IGESDimen_Array1OfLeaderArrow& operator =(const IGESDimen_Array1OfLeaderArrow& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(IGESDimen_LeaderArrow)& Value) ;
  
       const Handle_IGESDimen_LeaderArrow& Value(const Standard_Integer Index) const;
     const Handle_IGESDimen_LeaderArrow& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        Handle_IGESDimen_LeaderArrow& ChangeValue(const Standard_Integer Index) ;
      Handle_IGESDimen_LeaderArrow& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   IGESDimen_Array1OfLeaderArrow(const IGESDimen_Array1OfLeaderArrow& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item Handle_IGESDimen_LeaderArrow
#define Array1Item_hxx <IGESDimen_LeaderArrow.hxx>
#define TCollection_Array1 IGESDimen_Array1OfLeaderArrow
#define TCollection_Array1_hxx <IGESDimen_Array1OfLeaderArrow.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
