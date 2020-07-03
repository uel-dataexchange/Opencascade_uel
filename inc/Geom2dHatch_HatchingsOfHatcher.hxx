// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dHatch_HatchingsOfHatcher_HeaderFile
#define _Geom2dHatch_HatchingsOfHatcher_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Geom2dHatch_DataMapNodeOfHatchingsOfHatcher_HeaderFile
#include <Handle_Geom2dHatch_DataMapNodeOfHatchingsOfHatcher.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class Geom2dHatch_HatchingOfHatcher;
class TColStd_MapIntegerHasher;
class Geom2dHatch_DataMapNodeOfHatchingsOfHatcher;
class Geom2dHatch_DataMapIteratorOfHatchingsOfHatcher;



class Geom2dHatch_HatchingsOfHatcher  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   Geom2dHatch_HatchingsOfHatcher(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     Geom2dHatch_HatchingsOfHatcher& Assign(const Geom2dHatch_HatchingsOfHatcher& Other) ;
    Geom2dHatch_HatchingsOfHatcher& operator =(const Geom2dHatch_HatchingsOfHatcher& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~Geom2dHatch_HatchingsOfHatcher()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const Standard_Integer& K,const Geom2dHatch_HatchingOfHatcher& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const Standard_Integer& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const Standard_Integer& K) ;
  
  Standard_EXPORT    const Geom2dHatch_HatchingOfHatcher& Find(const Standard_Integer& K) const;
   const Geom2dHatch_HatchingOfHatcher& operator()(const Standard_Integer& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     Geom2dHatch_HatchingOfHatcher& ChangeFind(const Standard_Integer& K) ;
    Geom2dHatch_HatchingOfHatcher& operator()(const Standard_Integer& K) 
{
  return ChangeFind(K);
}





protected:





private:

  
  Standard_EXPORT   Geom2dHatch_HatchingsOfHatcher(const Geom2dHatch_HatchingsOfHatcher& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
