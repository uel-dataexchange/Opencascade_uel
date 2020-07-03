// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_HArray1OfCharacter_HeaderFile
#define _TColStd_HArray1OfCharacter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfCharacter_HeaderFile
#include <Handle_TColStd_HArray1OfCharacter.hxx>
#endif

#ifndef _TColStd_Array1OfCharacter_HeaderFile
#include <TColStd_Array1OfCharacter.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Character_HeaderFile
#include <Standard_Character.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class TColStd_Array1OfCharacter;



class TColStd_HArray1OfCharacter : public MMgt_TShared {

public:

  
  Standard_EXPORT   TColStd_HArray1OfCharacter(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   TColStd_HArray1OfCharacter(const Standard_Integer Low,const Standard_Integer Up,const Standard_Character& V);
  
  Standard_EXPORT     void Init(const Standard_Character& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Standard_Character& Value) ;
  
       const Standard_Character& Value(const Standard_Integer Index) const;
  
        Standard_Character& ChangeValue(const Standard_Integer Index) ;
  
       const TColStd_Array1OfCharacter& Array1() const;
  
        TColStd_Array1OfCharacter& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(TColStd_HArray1OfCharacter)

protected:




private: 


TColStd_Array1OfCharacter myArray;


};

#define ItemHArray1 Standard_Character
#define ItemHArray1_hxx <Standard_Character.hxx>
#define TheArray1 TColStd_Array1OfCharacter
#define TheArray1_hxx <TColStd_Array1OfCharacter.hxx>
#define TCollection_HArray1 TColStd_HArray1OfCharacter
#define TCollection_HArray1_hxx <TColStd_HArray1OfCharacter.hxx>
#define Handle_TCollection_HArray1 Handle_TColStd_HArray1OfCharacter
#define TCollection_HArray1_Type_() TColStd_HArray1OfCharacter_Type_()

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
