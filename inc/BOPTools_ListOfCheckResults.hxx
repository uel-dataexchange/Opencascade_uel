// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTools_ListOfCheckResults_HeaderFile
#define _BOPTools_ListOfCheckResults_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_BOPTools_ListNodeOfListOfCheckResults_HeaderFile
#include <Handle_BOPTools_ListNodeOfListOfCheckResults.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class BOPTools_ListIteratorOfListOfCheckResults;
class BOPTools_CheckResult;
class BOPTools_ListNodeOfListOfCheckResults;



class BOPTools_ListOfCheckResults  {
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

  
  Standard_EXPORT   BOPTools_ListOfCheckResults();
  
  Standard_EXPORT     void Assign(const BOPTools_ListOfCheckResults& Other) ;
    void operator=(const BOPTools_ListOfCheckResults& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     Standard_Integer Extent() const;
  
  Standard_EXPORT     void Clear() ;
~BOPTools_ListOfCheckResults()
{
  Clear();
}
  
        Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     void Prepend(const BOPTools_CheckResult& I) ;
  
  Standard_EXPORT     void Prepend(const BOPTools_CheckResult& I,BOPTools_ListIteratorOfListOfCheckResults& theIt) ;
  
  Standard_EXPORT     void Prepend(BOPTools_ListOfCheckResults& Other) ;
  
  Standard_EXPORT     void Append(const BOPTools_CheckResult& I) ;
  
  Standard_EXPORT     void Append(const BOPTools_CheckResult& I,BOPTools_ListIteratorOfListOfCheckResults& theIt) ;
  
  Standard_EXPORT     void Append(BOPTools_ListOfCheckResults& Other) ;
  
  Standard_EXPORT     BOPTools_CheckResult& First() const;
  
  Standard_EXPORT     BOPTools_CheckResult& Last() const;
  
  Standard_EXPORT     void RemoveFirst() ;
  
  Standard_EXPORT     void Remove(BOPTools_ListIteratorOfListOfCheckResults& It) ;
  
  Standard_EXPORT     void InsertBefore(const BOPTools_CheckResult& I,BOPTools_ListIteratorOfListOfCheckResults& It) ;
  
  Standard_EXPORT     void InsertBefore(BOPTools_ListOfCheckResults& Other,BOPTools_ListIteratorOfListOfCheckResults& It) ;
  
  Standard_EXPORT     void InsertAfter(const BOPTools_CheckResult& I,BOPTools_ListIteratorOfListOfCheckResults& It) ;
  
  Standard_EXPORT     void InsertAfter(BOPTools_ListOfCheckResults& Other,BOPTools_ListIteratorOfListOfCheckResults& It) ;


friend class BOPTools_ListIteratorOfListOfCheckResults;



protected:





private:

  
  Standard_EXPORT   BOPTools_ListOfCheckResults(const BOPTools_ListOfCheckResults& Other);


Standard_Address myFirst;
Standard_Address myLast;


};

#define Item BOPTools_CheckResult
#define Item_hxx <BOPTools_CheckResult.hxx>
#define TCollection_ListNode BOPTools_ListNodeOfListOfCheckResults
#define TCollection_ListNode_hxx <BOPTools_ListNodeOfListOfCheckResults.hxx>
#define TCollection_ListIterator BOPTools_ListIteratorOfListOfCheckResults
#define TCollection_ListIterator_hxx <BOPTools_ListIteratorOfListOfCheckResults.hxx>
#define Handle_TCollection_ListNode Handle_BOPTools_ListNodeOfListOfCheckResults
#define TCollection_ListNode_Type_() BOPTools_ListNodeOfListOfCheckResults_Type_()
#define TCollection_List BOPTools_ListOfCheckResults
#define TCollection_List_hxx <BOPTools_ListOfCheckResults.hxx>

#include <TCollection_List.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
