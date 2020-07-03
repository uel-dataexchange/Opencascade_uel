// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepRepr_MaterialDesignation_HeaderFile
#define _StepRepr_MaterialDesignation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepRepr_MaterialDesignation_HeaderFile
#include <Handle_StepRepr_MaterialDesignation.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _StepRepr_CharacterizedDefinition_HeaderFile
#include <StepRepr_CharacterizedDefinition.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class TCollection_HAsciiString;
class StepRepr_CharacterizedDefinition;



class StepRepr_MaterialDesignation : public MMgt_TShared {

public:

  
  Standard_EXPORT   StepRepr_MaterialDesignation();
  
  Standard_EXPORT     void Init(const Handle(TCollection_HAsciiString)& aName,const StepRepr_CharacterizedDefinition& aOfDefinition) ;
  
  Standard_EXPORT     void SetName(const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString Name() const;
  
  Standard_EXPORT     void SetOfDefinition(const StepRepr_CharacterizedDefinition& aOfDefinition) ;
  
  Standard_EXPORT     StepRepr_CharacterizedDefinition OfDefinition() const;




  DEFINE_STANDARD_RTTI(StepRepr_MaterialDesignation)

protected:




private: 


Handle_TCollection_HAsciiString name;
StepRepr_CharacterizedDefinition ofDefinition;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
