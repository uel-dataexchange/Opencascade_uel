// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDefs_HArray1OfTabularData_HeaderFile
#define _IGESDefs_HArray1OfTabularData_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESDefs_HArray1OfTabularData_HeaderFile
#include <Handle_IGESDefs_HArray1OfTabularData.hxx>
#endif

#ifndef _IGESDefs_Array1OfTabularData_HeaderFile
#include <IGESDefs_Array1OfTabularData.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_IGESDefs_TabularData_HeaderFile
#include <Handle_IGESDefs_TabularData.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class IGESDefs_TabularData;
class IGESDefs_Array1OfTabularData;



class IGESDefs_HArray1OfTabularData : public MMgt_TShared {

public:

  
  Standard_EXPORT   IGESDefs_HArray1OfTabularData(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   IGESDefs_HArray1OfTabularData(const Standard_Integer Low,const Standard_Integer Up,const Handle(IGESDefs_TabularData)& V);
  
  Standard_EXPORT     void Init(const Handle(IGESDefs_TabularData)& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(IGESDefs_TabularData)& Value) ;
  
       const Handle_IGESDefs_TabularData& Value(const Standard_Integer Index) const;
  
        Handle_IGESDefs_TabularData& ChangeValue(const Standard_Integer Index) ;
  
       const IGESDefs_Array1OfTabularData& Array1() const;
  
        IGESDefs_Array1OfTabularData& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(IGESDefs_HArray1OfTabularData)

protected:




private: 


IGESDefs_Array1OfTabularData myArray;


};

#define ItemHArray1 Handle_IGESDefs_TabularData
#define ItemHArray1_hxx <IGESDefs_TabularData.hxx>
#define TheArray1 IGESDefs_Array1OfTabularData
#define TheArray1_hxx <IGESDefs_Array1OfTabularData.hxx>
#define TCollection_HArray1 IGESDefs_HArray1OfTabularData
#define TCollection_HArray1_hxx <IGESDefs_HArray1OfTabularData.hxx>
#define Handle_TCollection_HArray1 Handle_IGESDefs_HArray1OfTabularData
#define TCollection_HArray1_Type_() IGESDefs_HArray1OfTabularData_Type_()

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
