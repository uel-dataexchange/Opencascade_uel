// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ChFiDS_Regularities_HeaderFile
#define _ChFiDS_Regularities_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_ChFiDS_ListNodeOfRegularities_HeaderFile
#include <Handle_ChFiDS_ListNodeOfRegularities.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class ChFiDS_ListIteratorOfRegularities;
class ChFiDS_Regul;
class ChFiDS_ListNodeOfRegularities;



class ChFiDS_Regularities  {
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

  
  Standard_EXPORT   ChFiDS_Regularities();
  
  Standard_EXPORT     void Assign(const ChFiDS_Regularities& Other) ;
    void operator=(const ChFiDS_Regularities& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     Standard_Integer Extent() const;
  
  Standard_EXPORT     void Clear() ;
~ChFiDS_Regularities()
{
  Clear();
}
  
        Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     void Prepend(const ChFiDS_Regul& I) ;
  
  Standard_EXPORT     void Prepend(const ChFiDS_Regul& I,ChFiDS_ListIteratorOfRegularities& theIt) ;
  
  Standard_EXPORT     void Prepend(ChFiDS_Regularities& Other) ;
  
  Standard_EXPORT     void Append(const ChFiDS_Regul& I) ;
  
  Standard_EXPORT     void Append(const ChFiDS_Regul& I,ChFiDS_ListIteratorOfRegularities& theIt) ;
  
  Standard_EXPORT     void Append(ChFiDS_Regularities& Other) ;
  
  Standard_EXPORT     ChFiDS_Regul& First() const;
  
  Standard_EXPORT     ChFiDS_Regul& Last() const;
  
  Standard_EXPORT     void RemoveFirst() ;
  
  Standard_EXPORT     void Remove(ChFiDS_ListIteratorOfRegularities& It) ;
  
  Standard_EXPORT     void InsertBefore(const ChFiDS_Regul& I,ChFiDS_ListIteratorOfRegularities& It) ;
  
  Standard_EXPORT     void InsertBefore(ChFiDS_Regularities& Other,ChFiDS_ListIteratorOfRegularities& It) ;
  
  Standard_EXPORT     void InsertAfter(const ChFiDS_Regul& I,ChFiDS_ListIteratorOfRegularities& It) ;
  
  Standard_EXPORT     void InsertAfter(ChFiDS_Regularities& Other,ChFiDS_ListIteratorOfRegularities& It) ;


friend class ChFiDS_ListIteratorOfRegularities;



protected:





private:

  
  Standard_EXPORT   ChFiDS_Regularities(const ChFiDS_Regularities& Other);


Standard_Address myFirst;
Standard_Address myLast;


};

#define Item ChFiDS_Regul
#define Item_hxx <ChFiDS_Regul.hxx>
#define TCollection_ListNode ChFiDS_ListNodeOfRegularities
#define TCollection_ListNode_hxx <ChFiDS_ListNodeOfRegularities.hxx>
#define TCollection_ListIterator ChFiDS_ListIteratorOfRegularities
#define TCollection_ListIterator_hxx <ChFiDS_ListIteratorOfRegularities.hxx>
#define Handle_TCollection_ListNode Handle_ChFiDS_ListNodeOfRegularities
#define TCollection_ListNode_Type_() ChFiDS_ListNodeOfRegularities_Type_()
#define TCollection_List ChFiDS_Regularities
#define TCollection_List_hxx <ChFiDS_Regularities.hxx>

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
