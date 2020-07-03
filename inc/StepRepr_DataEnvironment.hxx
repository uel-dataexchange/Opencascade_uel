// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepRepr_DataEnvironment_HeaderFile
#define _StepRepr_DataEnvironment_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepRepr_DataEnvironment_HeaderFile
#include <Handle_StepRepr_DataEnvironment.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_StepRepr_HArray1OfPropertyDefinitionRepresentation_HeaderFile
#include <Handle_StepRepr_HArray1OfPropertyDefinitionRepresentation.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class TCollection_HAsciiString;
class StepRepr_HArray1OfPropertyDefinitionRepresentation;


//! Representation of STEP entity DataEnvironment <br>
class StepRepr_DataEnvironment : public MMgt_TShared {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepRepr_DataEnvironment();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const Handle(TCollection_HAsciiString)& aName,const Handle(TCollection_HAsciiString)& aDescription,const Handle(StepRepr_HArray1OfPropertyDefinitionRepresentation)& aElements) ;
  //! Returns field Name <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString Name() const;
  //! Set field Name <br>
  Standard_EXPORT     void SetName(const Handle(TCollection_HAsciiString)& Name) ;
  //! Returns field Description <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString Description() const;
  //! Set field Description <br>
  Standard_EXPORT     void SetDescription(const Handle(TCollection_HAsciiString)& Description) ;
  //! Returns field Elements <br>
  Standard_EXPORT     Handle_StepRepr_HArray1OfPropertyDefinitionRepresentation Elements() const;
  //! Set field Elements <br>
  Standard_EXPORT     void SetElements(const Handle(StepRepr_HArray1OfPropertyDefinitionRepresentation)& Elements) ;




  DEFINE_STANDARD_RTTI(StepRepr_DataEnvironment)

protected:




private: 


Handle_TCollection_HAsciiString theName;
Handle_TCollection_HAsciiString theDescription;
Handle_StepRepr_HArray1OfPropertyDefinitionRepresentation theElements;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
