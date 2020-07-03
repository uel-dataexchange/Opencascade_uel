// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MoniTool_DataMapOfTimer_HeaderFile
#define _MoniTool_DataMapOfTimer_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Handle_MoniTool_Timer_HeaderFile
#include <Handle_MoniTool_Timer.hxx>
#endif
#ifndef _Handle_MoniTool_DataMapNodeOfDataMapOfTimer_HeaderFile
#include <Handle_MoniTool_DataMapNodeOfDataMapOfTimer.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class MoniTool_Timer;
class MoniTool_MTHasher;
class MoniTool_DataMapNodeOfDataMapOfTimer;
class MoniTool_DataMapIteratorOfDataMapOfTimer;



class MoniTool_DataMapOfTimer  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   MoniTool_DataMapOfTimer(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     MoniTool_DataMapOfTimer& Assign(const MoniTool_DataMapOfTimer& Other) ;
    MoniTool_DataMapOfTimer& operator =(const MoniTool_DataMapOfTimer& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~MoniTool_DataMapOfTimer()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const Standard_CString& K,const Handle(MoniTool_Timer)& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const Standard_CString& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const Standard_CString& K) ;
  
  Standard_EXPORT    const Handle_MoniTool_Timer& Find(const Standard_CString& K) const;
   const Handle_MoniTool_Timer& operator()(const Standard_CString& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     Handle_MoniTool_Timer& ChangeFind(const Standard_CString& K) ;
    Handle_MoniTool_Timer& operator()(const Standard_CString& K) 
{
  return ChangeFind(K);
}





protected:





private:

  
  Standard_EXPORT   MoniTool_DataMapOfTimer(const MoniTool_DataMapOfTimer& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
