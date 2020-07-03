// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_Product_HeaderFile
#define _StepBasic_Product_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepBasic_Product_HeaderFile
#include <Handle_StepBasic_Product.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_StepBasic_HArray1OfProductContext_HeaderFile
#include <Handle_StepBasic_HArray1OfProductContext.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_StepBasic_ProductContext_HeaderFile
#include <Handle_StepBasic_ProductContext.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class TCollection_HAsciiString;
class StepBasic_HArray1OfProductContext;
class StepBasic_ProductContext;



class StepBasic_Product : public MMgt_TShared {

public:

  //! Returns a Product <br>
  Standard_EXPORT   StepBasic_Product();
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aId,const Handle(TCollection_HAsciiString)& aName,const Handle(TCollection_HAsciiString)& aDescription,const Handle(StepBasic_HArray1OfProductContext)& aFrameOfReference) ;
  
  Standard_EXPORT     void SetId(const Handle(TCollection_HAsciiString)& aId) ;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString Id() const;
  
  Standard_EXPORT     void SetName(const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString Name() const;
  
  Standard_EXPORT     void SetDescription(const Handle(TCollection_HAsciiString)& aDescription) ;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString Description() const;
  
  Standard_EXPORT     void SetFrameOfReference(const Handle(StepBasic_HArray1OfProductContext)& aFrameOfReference) ;
  
  Standard_EXPORT     Handle_StepBasic_HArray1OfProductContext FrameOfReference() const;
  
  Standard_EXPORT     Handle_StepBasic_ProductContext FrameOfReferenceValue(const Standard_Integer num) const;
  
  Standard_EXPORT     Standard_Integer NbFrameOfReference() const;




  DEFINE_STANDARD_RTTI(StepBasic_Product)

protected:




private: 


Handle_TCollection_HAsciiString id;
Handle_TCollection_HAsciiString name;
Handle_TCollection_HAsciiString description;
Handle_StepBasic_HArray1OfProductContext frameOfReference;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
