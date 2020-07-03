// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepRepr_HArray1OfMaterialPropertyRepresentation_HeaderFile
#define _StepRepr_HArray1OfMaterialPropertyRepresentation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepRepr_HArray1OfMaterialPropertyRepresentation_HeaderFile
#include <Handle_StepRepr_HArray1OfMaterialPropertyRepresentation.hxx>
#endif

#ifndef _StepRepr_Array1OfMaterialPropertyRepresentation_HeaderFile
#include <StepRepr_Array1OfMaterialPropertyRepresentation.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_StepRepr_MaterialPropertyRepresentation_HeaderFile
#include <Handle_StepRepr_MaterialPropertyRepresentation.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepRepr_MaterialPropertyRepresentation;
class StepRepr_Array1OfMaterialPropertyRepresentation;



class StepRepr_HArray1OfMaterialPropertyRepresentation : public MMgt_TShared {

public:

  
  Standard_EXPORT   StepRepr_HArray1OfMaterialPropertyRepresentation(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   StepRepr_HArray1OfMaterialPropertyRepresentation(const Standard_Integer Low,const Standard_Integer Up,const Handle(StepRepr_MaterialPropertyRepresentation)& V);
  
  Standard_EXPORT     void Init(const Handle(StepRepr_MaterialPropertyRepresentation)& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(StepRepr_MaterialPropertyRepresentation)& Value) ;
  
       const Handle_StepRepr_MaterialPropertyRepresentation& Value(const Standard_Integer Index) const;
  
        Handle_StepRepr_MaterialPropertyRepresentation& ChangeValue(const Standard_Integer Index) ;
  
       const StepRepr_Array1OfMaterialPropertyRepresentation& Array1() const;
  
        StepRepr_Array1OfMaterialPropertyRepresentation& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepRepr_HArray1OfMaterialPropertyRepresentation)

protected:




private: 


StepRepr_Array1OfMaterialPropertyRepresentation myArray;


};

#define ItemHArray1 Handle_StepRepr_MaterialPropertyRepresentation
#define ItemHArray1_hxx <StepRepr_MaterialPropertyRepresentation.hxx>
#define TheArray1 StepRepr_Array1OfMaterialPropertyRepresentation
#define TheArray1_hxx <StepRepr_Array1OfMaterialPropertyRepresentation.hxx>
#define TCollection_HArray1 StepRepr_HArray1OfMaterialPropertyRepresentation
#define TCollection_HArray1_hxx <StepRepr_HArray1OfMaterialPropertyRepresentation.hxx>
#define Handle_TCollection_HArray1 Handle_StepRepr_HArray1OfMaterialPropertyRepresentation
#define TCollection_HArray1_Type_() StepRepr_HArray1OfMaterialPropertyRepresentation_Type_()

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
