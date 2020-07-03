// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRep_VPointInterIterator_HeaderFile
#define _TopOpeBRep_VPointInterIterator_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopOpeBRep_PLineInter_HeaderFile
#include <TopOpeBRep_PLineInter.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TopOpeBRep_LineInter;
class TopOpeBRep_VPointInter;



class TopOpeBRep_VPointInterIterator  {
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

  
  Standard_EXPORT   TopOpeBRep_VPointInterIterator();
  
  Standard_EXPORT   TopOpeBRep_VPointInterIterator(const TopOpeBRep_LineInter& LI);
  
  Standard_EXPORT     void Init(const TopOpeBRep_LineInter& LI,const Standard_Boolean checkkeep = Standard_False) ;
  
  Standard_EXPORT     void Init() ;
  
  Standard_EXPORT     Standard_Boolean More() const;
  
  Standard_EXPORT     void Next() ;
  
  Standard_EXPORT    const TopOpeBRep_VPointInter& CurrentVP() ;
  
  Standard_EXPORT     Standard_Integer CurrentVPIndex() const;
  
  Standard_EXPORT     TopOpeBRep_VPointInter& ChangeCurrentVP() ;
  
  Standard_EXPORT     TopOpeBRep_PLineInter PLineInterDummy() const;





protected:





private:



TopOpeBRep_PLineInter myLineInter;
Standard_Integer myVPointIndex;
Standard_Integer myVPointNb;
Standard_Boolean mycheckkeep;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
