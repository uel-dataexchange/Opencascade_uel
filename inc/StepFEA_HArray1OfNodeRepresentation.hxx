// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_HArray1OfNodeRepresentation_HeaderFile
#define _StepFEA_HArray1OfNodeRepresentation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepFEA_HArray1OfNodeRepresentation_HeaderFile
#include <Handle_StepFEA_HArray1OfNodeRepresentation.hxx>
#endif

#ifndef _StepFEA_Array1OfNodeRepresentation_HeaderFile
#include <StepFEA_Array1OfNodeRepresentation.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_StepFEA_NodeRepresentation_HeaderFile
#include <Handle_StepFEA_NodeRepresentation.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepFEA_NodeRepresentation;
class StepFEA_Array1OfNodeRepresentation;



class StepFEA_HArray1OfNodeRepresentation : public MMgt_TShared {

public:

  
  Standard_EXPORT   StepFEA_HArray1OfNodeRepresentation(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   StepFEA_HArray1OfNodeRepresentation(const Standard_Integer Low,const Standard_Integer Up,const Handle(StepFEA_NodeRepresentation)& V);
  
  Standard_EXPORT     void Init(const Handle(StepFEA_NodeRepresentation)& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(StepFEA_NodeRepresentation)& Value) ;
  
       const Handle_StepFEA_NodeRepresentation& Value(const Standard_Integer Index) const;
  
        Handle_StepFEA_NodeRepresentation& ChangeValue(const Standard_Integer Index) ;
  
       const StepFEA_Array1OfNodeRepresentation& Array1() const;
  
        StepFEA_Array1OfNodeRepresentation& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepFEA_HArray1OfNodeRepresentation)

protected:




private: 


StepFEA_Array1OfNodeRepresentation myArray;


};

#define ItemHArray1 Handle_StepFEA_NodeRepresentation
#define ItemHArray1_hxx <StepFEA_NodeRepresentation.hxx>
#define TheArray1 StepFEA_Array1OfNodeRepresentation
#define TheArray1_hxx <StepFEA_Array1OfNodeRepresentation.hxx>
#define TCollection_HArray1 StepFEA_HArray1OfNodeRepresentation
#define TCollection_HArray1_hxx <StepFEA_HArray1OfNodeRepresentation.hxx>
#define Handle_TCollection_HArray1 Handle_StepFEA_HArray1OfNodeRepresentation
#define TCollection_HArray1_Type_() StepFEA_HArray1OfNodeRepresentation_Type_()

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
