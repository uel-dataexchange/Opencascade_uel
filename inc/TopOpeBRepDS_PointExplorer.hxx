// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_PointExplorer_HeaderFile
#define _TopOpeBRepDS_PointExplorer_HeaderFile

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
#ifndef _TopOpeBRepDS_Point_HeaderFile
#include <TopOpeBRepDS_Point.hxx>
#endif
class TopOpeBRepDS_DataStructure;
class TopOpeBRepDS_Point;



class TopOpeBRepDS_PointExplorer  {
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

  
  Standard_EXPORT   TopOpeBRepDS_PointExplorer();
  
  Standard_EXPORT   TopOpeBRepDS_PointExplorer(const TopOpeBRepDS_DataStructure& DS,const Standard_Boolean FindOnlyKeep = Standard_True);
  
  Standard_EXPORT     void Init(const TopOpeBRepDS_DataStructure& DS,const Standard_Boolean FindOnlyKeep = Standard_True) ;
  
  Standard_EXPORT     Standard_Boolean More() const;
  
  Standard_EXPORT     void Next() ;
  
  Standard_EXPORT    const TopOpeBRepDS_Point& Point() const;
  
  Standard_EXPORT     Standard_Boolean IsPoint(const Standard_Integer I) const;
  
  Standard_EXPORT     Standard_Boolean IsPointKeep(const Standard_Integer I) const;
  
  Standard_EXPORT    const TopOpeBRepDS_Point& Point(const Standard_Integer I) const;
  
  Standard_EXPORT     Standard_Integer NbPoint() ;
  
  Standard_EXPORT     Standard_Integer Index() const;





protected:





private:

  
  Standard_EXPORT     void Find() ;


Standard_Integer myIndex;
Standard_Integer myMax;
Standard_Address myDS;
Standard_Boolean myFound;
TopOpeBRepDS_Point myEmpty;
Standard_Boolean myFindKeep;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
