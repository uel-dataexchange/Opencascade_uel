// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Bnd_HArray1OfBox2d_HeaderFile
#define _Bnd_HArray1OfBox2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Bnd_HArray1OfBox2d_HeaderFile
#include <Handle_Bnd_HArray1OfBox2d.hxx>
#endif

#ifndef _Bnd_Array1OfBox2d_HeaderFile
#include <Bnd_Array1OfBox2d.hxx>
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
class Bnd_Box2d;
class Bnd_Array1OfBox2d;



class Bnd_HArray1OfBox2d : public MMgt_TShared {

public:

  
  Standard_EXPORT   Bnd_HArray1OfBox2d(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   Bnd_HArray1OfBox2d(const Standard_Integer Low,const Standard_Integer Up,const Bnd_Box2d& V);
  
  Standard_EXPORT     void Init(const Bnd_Box2d& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Bnd_Box2d& Value) ;
  
       const Bnd_Box2d& Value(const Standard_Integer Index) const;
  
        Bnd_Box2d& ChangeValue(const Standard_Integer Index) ;
  
       const Bnd_Array1OfBox2d& Array1() const;
  
        Bnd_Array1OfBox2d& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(Bnd_HArray1OfBox2d)

protected:




private: 


Bnd_Array1OfBox2d myArray;


};

#define ItemHArray1 Bnd_Box2d
#define ItemHArray1_hxx <Bnd_Box2d.hxx>
#define TheArray1 Bnd_Array1OfBox2d
#define TheArray1_hxx <Bnd_Array1OfBox2d.hxx>
#define TCollection_HArray1 Bnd_HArray1OfBox2d
#define TCollection_HArray1_hxx <Bnd_HArray1OfBox2d.hxx>
#define Handle_TCollection_HArray1 Handle_Bnd_HArray1OfBox2d
#define TCollection_HArray1_Type_() Bnd_HArray1OfBox2d_Type_()

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
