// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_HArray1OfConnectedFaceSet_HeaderFile
#define _StepShape_HArray1OfConnectedFaceSet_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepShape_HArray1OfConnectedFaceSet_HeaderFile
#include <Handle_StepShape_HArray1OfConnectedFaceSet.hxx>
#endif

#ifndef _StepShape_Array1OfConnectedFaceSet_HeaderFile
#include <StepShape_Array1OfConnectedFaceSet.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_StepShape_ConnectedFaceSet_HeaderFile
#include <Handle_StepShape_ConnectedFaceSet.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepShape_ConnectedFaceSet;
class StepShape_Array1OfConnectedFaceSet;



class StepShape_HArray1OfConnectedFaceSet : public MMgt_TShared {

public:

  
  Standard_EXPORT   StepShape_HArray1OfConnectedFaceSet(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   StepShape_HArray1OfConnectedFaceSet(const Standard_Integer Low,const Standard_Integer Up,const Handle(StepShape_ConnectedFaceSet)& V);
  
  Standard_EXPORT     void Init(const Handle(StepShape_ConnectedFaceSet)& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(StepShape_ConnectedFaceSet)& Value) ;
  
       const Handle_StepShape_ConnectedFaceSet& Value(const Standard_Integer Index) const;
  
        Handle_StepShape_ConnectedFaceSet& ChangeValue(const Standard_Integer Index) ;
  
       const StepShape_Array1OfConnectedFaceSet& Array1() const;
  
        StepShape_Array1OfConnectedFaceSet& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepShape_HArray1OfConnectedFaceSet)

protected:




private: 


StepShape_Array1OfConnectedFaceSet myArray;


};

#define ItemHArray1 Handle_StepShape_ConnectedFaceSet
#define ItemHArray1_hxx <StepShape_ConnectedFaceSet.hxx>
#define TheArray1 StepShape_Array1OfConnectedFaceSet
#define TheArray1_hxx <StepShape_Array1OfConnectedFaceSet.hxx>
#define TCollection_HArray1 StepShape_HArray1OfConnectedFaceSet
#define TCollection_HArray1_hxx <StepShape_HArray1OfConnectedFaceSet.hxx>
#define Handle_TCollection_HArray1 Handle_StepShape_HArray1OfConnectedFaceSet
#define TCollection_HArray1_Type_() StepShape_HArray1OfConnectedFaceSet_Type_()

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
