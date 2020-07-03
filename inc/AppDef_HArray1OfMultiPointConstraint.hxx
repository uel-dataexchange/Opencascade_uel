// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AppDef_HArray1OfMultiPointConstraint_HeaderFile
#define _AppDef_HArray1OfMultiPointConstraint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AppDef_HArray1OfMultiPointConstraint_HeaderFile
#include <Handle_AppDef_HArray1OfMultiPointConstraint.hxx>
#endif

#ifndef _AppDef_Array1OfMultiPointConstraint_HeaderFile
#include <AppDef_Array1OfMultiPointConstraint.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class AppDef_MultiPointConstraint;
class AppDef_Array1OfMultiPointConstraint;



class AppDef_HArray1OfMultiPointConstraint : public MMgt_TShared {

public:

  
  Standard_EXPORT   AppDef_HArray1OfMultiPointConstraint(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   AppDef_HArray1OfMultiPointConstraint(const Standard_Integer Low,const Standard_Integer Up,const AppDef_MultiPointConstraint& V);
  
  Standard_EXPORT     void Init(const AppDef_MultiPointConstraint& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const AppDef_MultiPointConstraint& Value) ;
  
       const AppDef_MultiPointConstraint& Value(const Standard_Integer Index) const;
  
        AppDef_MultiPointConstraint& ChangeValue(const Standard_Integer Index) ;
  
       const AppDef_Array1OfMultiPointConstraint& Array1() const;
  
        AppDef_Array1OfMultiPointConstraint& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(AppDef_HArray1OfMultiPointConstraint)

protected:




private: 


AppDef_Array1OfMultiPointConstraint myArray;


};

#define ItemHArray1 AppDef_MultiPointConstraint
#define ItemHArray1_hxx <AppDef_MultiPointConstraint.hxx>
#define TheArray1 AppDef_Array1OfMultiPointConstraint
#define TheArray1_hxx <AppDef_Array1OfMultiPointConstraint.hxx>
#define TCollection_HArray1 AppDef_HArray1OfMultiPointConstraint
#define TCollection_HArray1_hxx <AppDef_HArray1OfMultiPointConstraint.hxx>
#define Handle_TCollection_HArray1 Handle_AppDef_HArray1OfMultiPointConstraint
#define TCollection_HArray1_Type_() AppDef_HArray1OfMultiPointConstraint_Type_()

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
