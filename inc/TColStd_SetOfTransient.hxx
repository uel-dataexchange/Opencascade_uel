// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_SetOfTransient_HeaderFile
#define _TColStd_SetOfTransient_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TColStd_SetListOfSetOfTransient_HeaderFile
#include <TColStd_SetListOfSetOfTransient.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_TColStd_ListNodeOfSetListOfSetOfTransient_HeaderFile
#include <Handle_TColStd_ListNodeOfSetListOfSetOfTransient.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class TColStd_SetIteratorOfSetOfTransient;
class Standard_Transient;
class TColStd_SetListOfSetOfTransient;
class TColStd_ListNodeOfSetListOfSetOfTransient;
class TColStd_ListIteratorOfSetListOfSetOfTransient;



class TColStd_SetOfTransient  {
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

  
  Standard_EXPORT   TColStd_SetOfTransient();
  
        Standard_Integer Extent() const;
  
        Standard_Boolean IsEmpty() const;
  
        void Clear() ;
  
  Standard_EXPORT     Standard_Boolean Add(const Handle(Standard_Transient)& T) ;
  
  Standard_EXPORT     Standard_Boolean Remove(const Handle(Standard_Transient)& T) ;
  
  Standard_EXPORT     void Union(const TColStd_SetOfTransient& B) ;
  
  Standard_EXPORT     void Intersection(const TColStd_SetOfTransient& B) ;
  
  Standard_EXPORT     void Difference(const TColStd_SetOfTransient& B) ;
  
  Standard_EXPORT     Standard_Boolean Contains(const Handle(Standard_Transient)& T) const;
  
  Standard_EXPORT     Standard_Boolean IsASubset(const TColStd_SetOfTransient& S) const;
  
  Standard_EXPORT     Standard_Boolean IsAProperSubset(const TColStd_SetOfTransient& S) const;


friend class TColStd_SetIteratorOfSetOfTransient;



protected:





private:

  
  Standard_EXPORT   TColStd_SetOfTransient(const TColStd_SetOfTransient& Other);


TColStd_SetListOfSetOfTransient myItems;


};

#define Item Handle_Standard_Transient
#define Item_hxx <Standard_Transient.hxx>
#define TCollection_SetList TColStd_SetListOfSetOfTransient
#define TCollection_SetList_hxx <TColStd_SetListOfSetOfTransient.hxx>
#define TCollection_ListNodeOfSetList TColStd_ListNodeOfSetListOfSetOfTransient
#define TCollection_ListNodeOfSetList_hxx <TColStd_ListNodeOfSetListOfSetOfTransient.hxx>
#define TCollection_ListIteratorOfSetList TColStd_ListIteratorOfSetListOfSetOfTransient
#define TCollection_ListIteratorOfSetList_hxx <TColStd_ListIteratorOfSetListOfSetOfTransient.hxx>
#define TCollection_ListNodeOfSetList TColStd_ListNodeOfSetListOfSetOfTransient
#define TCollection_ListNodeOfSetList_hxx <TColStd_ListNodeOfSetListOfSetOfTransient.hxx>
#define TCollection_ListIteratorOfSetList TColStd_ListIteratorOfSetListOfSetOfTransient
#define TCollection_ListIteratorOfSetList_hxx <TColStd_ListIteratorOfSetListOfSetOfTransient.hxx>
#define TCollection_SetIterator TColStd_SetIteratorOfSetOfTransient
#define TCollection_SetIterator_hxx <TColStd_SetIteratorOfSetOfTransient.hxx>
#define Handle_TCollection_ListNodeOfSetList Handle_TColStd_ListNodeOfSetListOfSetOfTransient
#define TCollection_ListNodeOfSetList_Type_() TColStd_ListNodeOfSetListOfSetOfTransient_Type_()
#define Handle_TCollection_ListNodeOfSetList Handle_TColStd_ListNodeOfSetListOfSetOfTransient
#define TCollection_ListNodeOfSetList_Type_() TColStd_ListNodeOfSetListOfSetOfTransient_Type_()
#define TCollection_Set TColStd_SetOfTransient
#define TCollection_Set_hxx <TColStd_SetOfTransient.hxx>

#include <TCollection_Set.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_SetList
#undef TCollection_SetList_hxx
#undef TCollection_ListNodeOfSetList
#undef TCollection_ListNodeOfSetList_hxx
#undef TCollection_ListIteratorOfSetList
#undef TCollection_ListIteratorOfSetList_hxx
#undef TCollection_ListNodeOfSetList
#undef TCollection_ListNodeOfSetList_hxx
#undef TCollection_ListIteratorOfSetList
#undef TCollection_ListIteratorOfSetList_hxx
#undef TCollection_SetIterator
#undef TCollection_SetIterator_hxx
#undef Handle_TCollection_ListNodeOfSetList
#undef TCollection_ListNodeOfSetList_Type_
#undef Handle_TCollection_ListNodeOfSetList
#undef TCollection_ListNodeOfSetList_Type_
#undef TCollection_Set
#undef TCollection_Set_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
