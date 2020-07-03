// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSolid_HArray1OfVertexList_HeaderFile
#define _IGESSolid_HArray1OfVertexList_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESSolid_HArray1OfVertexList_HeaderFile
#include <Handle_IGESSolid_HArray1OfVertexList.hxx>
#endif

#ifndef _IGESSolid_Array1OfVertexList_HeaderFile
#include <IGESSolid_Array1OfVertexList.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_IGESSolid_VertexList_HeaderFile
#include <Handle_IGESSolid_VertexList.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class IGESSolid_VertexList;
class IGESSolid_Array1OfVertexList;



class IGESSolid_HArray1OfVertexList : public MMgt_TShared {

public:

  
  Standard_EXPORT   IGESSolid_HArray1OfVertexList(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   IGESSolid_HArray1OfVertexList(const Standard_Integer Low,const Standard_Integer Up,const Handle(IGESSolid_VertexList)& V);
  
  Standard_EXPORT     void Init(const Handle(IGESSolid_VertexList)& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(IGESSolid_VertexList)& Value) ;
  
       const Handle_IGESSolid_VertexList& Value(const Standard_Integer Index) const;
  
        Handle_IGESSolid_VertexList& ChangeValue(const Standard_Integer Index) ;
  
       const IGESSolid_Array1OfVertexList& Array1() const;
  
        IGESSolid_Array1OfVertexList& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(IGESSolid_HArray1OfVertexList)

protected:




private: 


IGESSolid_Array1OfVertexList myArray;


};

#define ItemHArray1 Handle_IGESSolid_VertexList
#define ItemHArray1_hxx <IGESSolid_VertexList.hxx>
#define TheArray1 IGESSolid_Array1OfVertexList
#define TheArray1_hxx <IGESSolid_Array1OfVertexList.hxx>
#define TCollection_HArray1 IGESSolid_HArray1OfVertexList
#define TCollection_HArray1_hxx <IGESSolid_HArray1OfVertexList.hxx>
#define Handle_TCollection_HArray1 Handle_IGESSolid_HArray1OfVertexList
#define TCollection_HArray1_Type_() IGESSolid_HArray1OfVertexList_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_


// other Inline functions and methods (like "C++: function call" methods)


#endif
