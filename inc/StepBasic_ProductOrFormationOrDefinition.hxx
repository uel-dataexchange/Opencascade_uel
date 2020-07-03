// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_ProductOrFormationOrDefinition_HeaderFile
#define _StepBasic_ProductOrFormationOrDefinition_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _StepData_SelectType_HeaderFile
#include <StepData_SelectType.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_StepBasic_Product_HeaderFile
#include <Handle_StepBasic_Product.hxx>
#endif
#ifndef _Handle_StepBasic_ProductDefinitionFormation_HeaderFile
#include <Handle_StepBasic_ProductDefinitionFormation.hxx>
#endif
#ifndef _Handle_StepBasic_ProductDefinition_HeaderFile
#include <Handle_StepBasic_ProductDefinition.hxx>
#endif
class Standard_Transient;
class StepBasic_Product;
class StepBasic_ProductDefinitionFormation;
class StepBasic_ProductDefinition;


//! Representation of STEP SELECT type ProductOrFormationOrDefinition <br>
class StepBasic_ProductOrFormationOrDefinition  : public StepData_SelectType {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Empty constructor <br>
  Standard_EXPORT   StepBasic_ProductOrFormationOrDefinition();
  //! Recognizes a kind of ProductOrFormationOrDefinition select type <br>
//!          1 -> Product from StepBasic <br>
//!          2 -> ProductDefinitionFormation from StepBasic <br>
//!          3 -> ProductDefinition from StepBasic <br>
//!          0 else <br>
  Standard_EXPORT     Standard_Integer CaseNum(const Handle(Standard_Transient)& ent) const;
  //! Returns Value as Product (or Null if another type) <br>
  Standard_EXPORT     Handle_StepBasic_Product Product() const;
  //! Returns Value as ProductDefinitionFormation (or Null if another type) <br>
  Standard_EXPORT     Handle_StepBasic_ProductDefinitionFormation ProductDefinitionFormation() const;
  //! Returns Value as ProductDefinition (or Null if another type) <br>
  Standard_EXPORT     Handle_StepBasic_ProductDefinition ProductDefinition() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
