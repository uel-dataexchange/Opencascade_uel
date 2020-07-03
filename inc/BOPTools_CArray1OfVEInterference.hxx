// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTools_CArray1OfVEInterference_HeaderFile
#define _BOPTools_CArray1OfVEInterference_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_OutOfRange;
class Standard_OutOfMemory;
class BOPTools_VEInterference;



class BOPTools_CArray1OfVEInterference  {
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

  
  Standard_EXPORT   BOPTools_CArray1OfVEInterference(const Standard_Integer Length = 0,const Standard_Integer BlockLength = 5);
  
  Standard_EXPORT     void Resize(const Standard_Integer theNewLength) ;
  
  Standard_EXPORT     void Destroy() ;
~BOPTools_CArray1OfVEInterference()
{
  Destroy();
}
  
  Standard_EXPORT     Standard_Integer Length() const;
  
  Standard_EXPORT     Standard_Integer Extent() const;
  
  Standard_EXPORT     Standard_Integer FactLength() const;
  
  Standard_EXPORT     Standard_Integer Append(const BOPTools_VEInterference& Value) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT    const BOPTools_VEInterference& Value(const Standard_Integer Index) const;
   const BOPTools_VEInterference& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     BOPTools_VEInterference& ChangeValue(const Standard_Integer Index) ;
    BOPTools_VEInterference& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void SetBlockLength(const Standard_Integer aBL) ;
  
  Standard_EXPORT     Standard_Integer BlockLength() const;





protected:





private:

  
  Standard_EXPORT   BOPTools_CArray1OfVEInterference(const BOPTools_CArray1OfVEInterference& AnArray);
  
  Standard_EXPORT     BOPTools_CArray1OfVEInterference& Assign(const BOPTools_CArray1OfVEInterference& Other) ;
    BOPTools_CArray1OfVEInterference& operator =(const BOPTools_CArray1OfVEInterference& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     Standard_Boolean IsInvalidIndex(const Standard_Integer Index) const;


Standard_Address myStart;
Standard_Integer myLength;
Standard_Integer myFactLength;
Standard_Integer myBlockLength;
Standard_Boolean myIsAllocated;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
