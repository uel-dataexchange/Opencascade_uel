// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_ProductCategoryRelationship_HeaderFile
#define _StepBasic_ProductCategoryRelationship_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepBasic_ProductCategoryRelationship_HeaderFile
#include <Handle_StepBasic_ProductCategoryRelationship.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_StepBasic_ProductCategory_HeaderFile
#include <Handle_StepBasic_ProductCategory.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class TCollection_HAsciiString;
class StepBasic_ProductCategory;


//! Representation of STEP entity ProductCategoryRelationship <br>
class StepBasic_ProductCategoryRelationship : public MMgt_TShared {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepBasic_ProductCategoryRelationship();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const Handle(TCollection_HAsciiString)& aName,const Standard_Boolean hasDescription,const Handle(TCollection_HAsciiString)& aDescription,const Handle(StepBasic_ProductCategory)& aCategory,const Handle(StepBasic_ProductCategory)& aSubCategory) ;
  //! Returns field Name <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString Name() const;
  //! Set field Name <br>
  Standard_EXPORT     void SetName(const Handle(TCollection_HAsciiString)& Name) ;
  //! Returns field Description <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString Description() const;
  //! Set field Description <br>
  Standard_EXPORT     void SetDescription(const Handle(TCollection_HAsciiString)& Description) ;
  //! Returns True if optional field Description is defined <br>
  Standard_EXPORT     Standard_Boolean HasDescription() const;
  //! Returns field Category <br>
  Standard_EXPORT     Handle_StepBasic_ProductCategory Category() const;
  //! Set field Category <br>
  Standard_EXPORT     void SetCategory(const Handle(StepBasic_ProductCategory)& Category) ;
  //! Returns field SubCategory <br>
  Standard_EXPORT     Handle_StepBasic_ProductCategory SubCategory() const;
  //! Set field SubCategory <br>
  Standard_EXPORT     void SetSubCategory(const Handle(StepBasic_ProductCategory)& SubCategory) ;




  DEFINE_STANDARD_RTTI(StepBasic_ProductCategoryRelationship)

protected:




private: 


Handle_TCollection_HAsciiString theName;
Handle_TCollection_HAsciiString theDescription;
Handle_StepBasic_ProductCategory theCategory;
Handle_StepBasic_ProductCategory theSubCategory;
Standard_Boolean defDescription;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
