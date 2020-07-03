// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_DataMapIteratorOfMapOfPoint_HeaderFile
#define _TopOpeBRepDS_DataMapIteratorOfMapOfPoint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TopOpeBRepDS_DataMapNodeOfMapOfPoint_HeaderFile
#include <Handle_TopOpeBRepDS_DataMapNodeOfMapOfPoint.hxx>
#endif
class Standard_NoSuchObject;
class TopOpeBRepDS_PointData;
class TColStd_MapIntegerHasher;
class TopOpeBRepDS_MapOfPoint;
class TopOpeBRepDS_DataMapNodeOfMapOfPoint;



class TopOpeBRepDS_DataMapIteratorOfMapOfPoint  : public TCollection_BasicMapIterator {
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

  
  Standard_EXPORT   TopOpeBRepDS_DataMapIteratorOfMapOfPoint();
  
  Standard_EXPORT   TopOpeBRepDS_DataMapIteratorOfMapOfPoint(const TopOpeBRepDS_MapOfPoint& aMap);
  
  Standard_EXPORT     void Initialize(const TopOpeBRepDS_MapOfPoint& aMap) ;
  
  Standard_EXPORT    const Standard_Integer& Key() const;
  
  Standard_EXPORT    const TopOpeBRepDS_PointData& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
