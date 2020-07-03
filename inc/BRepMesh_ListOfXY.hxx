// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepMesh_ListOfXY_HeaderFile
#define _BRepMesh_ListOfXY_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_BRepMesh_ListNodeOfListOfXY_HeaderFile
#include <Handle_BRepMesh_ListNodeOfListOfXY.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class BRepMesh_ListIteratorOfListOfXY;
class gp_XY;
class BRepMesh_ListNodeOfListOfXY;



class BRepMesh_ListOfXY  {
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

  
  Standard_EXPORT   BRepMesh_ListOfXY();
  
  Standard_EXPORT     void Assign(const BRepMesh_ListOfXY& Other) ;
    void operator=(const BRepMesh_ListOfXY& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     Standard_Integer Extent() const;
  
  Standard_EXPORT     void Clear() ;
~BRepMesh_ListOfXY()
{
  Clear();
}
  
        Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     void Prepend(const gp_XY& I) ;
  
  Standard_EXPORT     void Prepend(const gp_XY& I,BRepMesh_ListIteratorOfListOfXY& theIt) ;
  
  Standard_EXPORT     void Prepend(BRepMesh_ListOfXY& Other) ;
  
  Standard_EXPORT     void Append(const gp_XY& I) ;
  
  Standard_EXPORT     void Append(const gp_XY& I,BRepMesh_ListIteratorOfListOfXY& theIt) ;
  
  Standard_EXPORT     void Append(BRepMesh_ListOfXY& Other) ;
  
  Standard_EXPORT     gp_XY& First() const;
  
  Standard_EXPORT     gp_XY& Last() const;
  
  Standard_EXPORT     void RemoveFirst() ;
  
  Standard_EXPORT     void Remove(BRepMesh_ListIteratorOfListOfXY& It) ;
  
  Standard_EXPORT     void InsertBefore(const gp_XY& I,BRepMesh_ListIteratorOfListOfXY& It) ;
  
  Standard_EXPORT     void InsertBefore(BRepMesh_ListOfXY& Other,BRepMesh_ListIteratorOfListOfXY& It) ;
  
  Standard_EXPORT     void InsertAfter(const gp_XY& I,BRepMesh_ListIteratorOfListOfXY& It) ;
  
  Standard_EXPORT     void InsertAfter(BRepMesh_ListOfXY& Other,BRepMesh_ListIteratorOfListOfXY& It) ;


friend class BRepMesh_ListIteratorOfListOfXY;



protected:





private:

  
  Standard_EXPORT   BRepMesh_ListOfXY(const BRepMesh_ListOfXY& Other);


Standard_Address myFirst;
Standard_Address myLast;


};

#define Item gp_XY
#define Item_hxx <gp_XY.hxx>
#define TCollection_ListNode BRepMesh_ListNodeOfListOfXY
#define TCollection_ListNode_hxx <BRepMesh_ListNodeOfListOfXY.hxx>
#define TCollection_ListIterator BRepMesh_ListIteratorOfListOfXY
#define TCollection_ListIterator_hxx <BRepMesh_ListIteratorOfListOfXY.hxx>
#define Handle_TCollection_ListNode Handle_BRepMesh_ListNodeOfListOfXY
#define TCollection_ListNode_Type_() BRepMesh_ListNodeOfListOfXY_Type_()
#define TCollection_List BRepMesh_ListOfXY
#define TCollection_List_hxx <BRepMesh_ListOfXY.hxx>

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
