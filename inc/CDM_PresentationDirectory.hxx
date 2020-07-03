// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _CDM_PresentationDirectory_HeaderFile
#define _CDM_PresentationDirectory_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_CDM_Document_HeaderFile
#include <Handle_CDM_Document.hxx>
#endif
#ifndef _Handle_CDM_DataMapNodeOfPresentationDirectory_HeaderFile
#include <Handle_CDM_DataMapNodeOfPresentationDirectory.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class TCollection_ExtendedString;
class CDM_Document;
class CDM_DataMapNodeOfPresentationDirectory;
class CDM_DataMapIteratorOfPresentationDirectory;



class CDM_PresentationDirectory  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   CDM_PresentationDirectory(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     CDM_PresentationDirectory& Assign(const CDM_PresentationDirectory& Other) ;
    CDM_PresentationDirectory& operator =(const CDM_PresentationDirectory& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~CDM_PresentationDirectory()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const TCollection_ExtendedString& K,const Handle(CDM_Document)& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const TCollection_ExtendedString& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const TCollection_ExtendedString& K) ;
  
  Standard_EXPORT    const Handle_CDM_Document& Find(const TCollection_ExtendedString& K) const;
   const Handle_CDM_Document& operator()(const TCollection_ExtendedString& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     Handle_CDM_Document& ChangeFind(const TCollection_ExtendedString& K) ;
    Handle_CDM_Document& operator()(const TCollection_ExtendedString& K) 
{
  return ChangeFind(K);
}





protected:





private:

  
  Standard_EXPORT   CDM_PresentationDirectory(const CDM_PresentationDirectory& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
