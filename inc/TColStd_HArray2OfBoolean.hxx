// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_HArray2OfBoolean_HeaderFile
#define _TColStd_HArray2OfBoolean_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TColStd_HArray2OfBoolean_HeaderFile
#include <Handle_TColStd_HArray2OfBoolean.hxx>
#endif

#ifndef _TColStd_Array2OfBoolean_HeaderFile
#include <TColStd_Array2OfBoolean.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_DimensionMismatch;
class TColStd_Array2OfBoolean;



class TColStd_HArray2OfBoolean : public MMgt_TShared {

public:

  
  Standard_EXPORT   TColStd_HArray2OfBoolean(const Standard_Integer R1,const Standard_Integer R2,const Standard_Integer C1,const Standard_Integer C2);
  
  Standard_EXPORT   TColStd_HArray2OfBoolean(const Standard_Integer R1,const Standard_Integer R2,const Standard_Integer C1,const Standard_Integer C2,const Standard_Boolean& V);
  
  Standard_EXPORT     void Init(const Standard_Boolean& V) ;
  
        Standard_Integer ColLength() const;
  
        Standard_Integer RowLength() const;
  
        Standard_Integer LowerCol() const;
  
        Standard_Integer LowerRow() const;
  
        Standard_Integer UpperCol() const;
  
        Standard_Integer UpperRow() const;
  
        void SetValue(const Standard_Integer Row,const Standard_Integer Col,const Standard_Boolean& Value) ;
  
  Standard_EXPORT    const Standard_Boolean& Value(const Standard_Integer Row,const Standard_Integer Col) const;
  
  Standard_EXPORT     Standard_Boolean& ChangeValue(const Standard_Integer Row,const Standard_Integer Col) ;
  
       const TColStd_Array2OfBoolean& Array2() const;
  
        TColStd_Array2OfBoolean& ChangeArray2() ;




  DEFINE_STANDARD_RTTI(TColStd_HArray2OfBoolean)

protected:




private: 


TColStd_Array2OfBoolean myArray;


};

#define ItemHArray2 Standard_Boolean
#define ItemHArray2_hxx <Standard_Boolean.hxx>
#define TheArray2 TColStd_Array2OfBoolean
#define TheArray2_hxx <TColStd_Array2OfBoolean.hxx>
#define TCollection_HArray2 TColStd_HArray2OfBoolean
#define TCollection_HArray2_hxx <TColStd_HArray2OfBoolean.hxx>
#define Handle_TCollection_HArray2 Handle_TColStd_HArray2OfBoolean
#define TCollection_HArray2_Type_() TColStd_HArray2OfBoolean_Type_()

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
