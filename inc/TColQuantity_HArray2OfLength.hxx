// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColQuantity_HArray2OfLength_HeaderFile
#define _TColQuantity_HArray2OfLength_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TColQuantity_HArray2OfLength_HeaderFile
#include <Handle_TColQuantity_HArray2OfLength.hxx>
#endif

#ifndef _TColQuantity_Array2OfLength_HeaderFile
#include <TColQuantity_Array2OfLength.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Quantity_Length_HeaderFile
#include <Quantity_Length.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_DimensionMismatch;
class TColQuantity_Array2OfLength;



class TColQuantity_HArray2OfLength : public MMgt_TShared {

public:

  
  Standard_EXPORT   TColQuantity_HArray2OfLength(const Standard_Integer R1,const Standard_Integer R2,const Standard_Integer C1,const Standard_Integer C2);
  
  Standard_EXPORT   TColQuantity_HArray2OfLength(const Standard_Integer R1,const Standard_Integer R2,const Standard_Integer C1,const Standard_Integer C2,const Quantity_Length& V);
  
  Standard_EXPORT     void Init(const Quantity_Length& V) ;
  
        Standard_Integer ColLength() const;
  
        Standard_Integer RowLength() const;
  
        Standard_Integer LowerCol() const;
  
        Standard_Integer LowerRow() const;
  
        Standard_Integer UpperCol() const;
  
        Standard_Integer UpperRow() const;
  
        void SetValue(const Standard_Integer Row,const Standard_Integer Col,const Quantity_Length& Value) ;
  
  Standard_EXPORT    const Quantity_Length& Value(const Standard_Integer Row,const Standard_Integer Col) const;
  
  Standard_EXPORT     Quantity_Length& ChangeValue(const Standard_Integer Row,const Standard_Integer Col) ;
  
       const TColQuantity_Array2OfLength& Array2() const;
  
        TColQuantity_Array2OfLength& ChangeArray2() ;




  DEFINE_STANDARD_RTTI(TColQuantity_HArray2OfLength)

protected:




private: 


TColQuantity_Array2OfLength myArray;


};

#define ItemHArray2 Quantity_Length
#define ItemHArray2_hxx <Quantity_Length.hxx>
#define TheArray2 TColQuantity_Array2OfLength
#define TheArray2_hxx <TColQuantity_Array2OfLength.hxx>
#define TCollection_HArray2 TColQuantity_HArray2OfLength
#define TCollection_HArray2_hxx <TColQuantity_HArray2OfLength.hxx>
#define Handle_TCollection_HArray2 Handle_TColQuantity_HArray2OfLength
#define TCollection_HArray2_Type_() TColQuantity_HArray2OfLength_Type_()

#include <TCollection_HArray2.lxx>

#undef ItemHArray2
#undef ItemHArray2_hxx
#undef TheArray2
#undef TheArray2_hxx
#undef TCollection_HArray2
#undef TCollection_HArray2_hxx
#undef Handle_TCollection_HArray2
#undef TCollection_HArray2_Type_


// other Inline functions and methods (like "C++: function call" methods)


#endif
