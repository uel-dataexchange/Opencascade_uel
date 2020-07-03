// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_CurveExplorer_HeaderFile
#define _TopOpeBRepDS_CurveExplorer_HeaderFile

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
class TopOpeBRepDS_DataStructure;
class TopOpeBRepDS_Curve;



class TopOpeBRepDS_CurveExplorer  {
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

  
  Standard_EXPORT   TopOpeBRepDS_CurveExplorer();
  
  Standard_EXPORT   TopOpeBRepDS_CurveExplorer(const TopOpeBRepDS_DataStructure& DS,const Standard_Boolean FindOnlyKeep = Standard_True);
  
  Standard_EXPORT     void Init(const TopOpeBRepDS_DataStructure& DS,const Standard_Boolean FindOnlyKeep = Standard_True) ;
  
  Standard_EXPORT     Standard_Boolean More() const;
  
  Standard_EXPORT     void Next() ;
  
  Standard_EXPORT    const TopOpeBRepDS_Curve& Curve() const;
  
  Standard_EXPORT     Standard_Boolean IsCurve(const Standard_Integer I) const;
  
  Standard_EXPORT     Standard_Boolean IsCurveKeep(const Standard_Integer I) const;
  
  Standard_EXPORT    const TopOpeBRepDS_Curve& Curve(const Standard_Integer I) const;
  
  Standard_EXPORT     Standard_Integer NbCurve() ;
  
  Standard_EXPORT     Standard_Integer Index() const;





protected:





private:

  
  Standard_EXPORT     void Find() ;


Standard_Integer myIndex;
Standard_Integer myMax;
Standard_Address myDS;
Standard_Boolean myFound;
Standard_Boolean myFindKeep;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
