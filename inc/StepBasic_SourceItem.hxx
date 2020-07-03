// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_SourceItem_HeaderFile
#define _StepBasic_SourceItem_HeaderFile

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
#ifndef _Handle_StepData_SelectMember_HeaderFile
#include <Handle_StepData_SelectMember.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class Standard_Transient;
class StepData_SelectMember;
class TCollection_HAsciiString;


//! Representation of STEP SELECT type SourceItem <br>
class StepBasic_SourceItem  : public StepData_SelectType {
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
  Standard_EXPORT   StepBasic_SourceItem();
  //! Recognizes a kind of SourceItem select type <br>
//!          1 -> HAsciiString from TCollection <br>
//!          0 else <br>
  Standard_EXPORT     Standard_Integer CaseNum(const Handle(Standard_Transient)& ent) const;
  
  Standard_EXPORT   virtual  Handle_StepData_SelectMember NewMember() const;
  //! Returns Value as Identifier (or Null if another type) <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString Identifier() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
