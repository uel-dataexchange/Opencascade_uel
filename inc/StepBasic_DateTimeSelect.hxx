// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_DateTimeSelect_HeaderFile
#define _StepBasic_DateTimeSelect_HeaderFile

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
#ifndef _Handle_StepBasic_Date_HeaderFile
#include <Handle_StepBasic_Date.hxx>
#endif
#ifndef _Handle_StepBasic_LocalTime_HeaderFile
#include <Handle_StepBasic_LocalTime.hxx>
#endif
#ifndef _Handle_StepBasic_DateAndTime_HeaderFile
#include <Handle_StepBasic_DateAndTime.hxx>
#endif
class Standard_Transient;
class StepBasic_Date;
class StepBasic_LocalTime;
class StepBasic_DateAndTime;



class StepBasic_DateTimeSelect  : public StepData_SelectType {
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

  //! Returns a DateTimeSelect SelectType <br>
  Standard_EXPORT   StepBasic_DateTimeSelect();
  //! Recognizes a DateTimeSelect Kind Entity that is : <br>
//!        1 -> Date <br>
//!        2 -> LocalTime <br>
//!        3 -> DateAndTime <br>
//!        0 else <br>
  Standard_EXPORT     Standard_Integer CaseNum(const Handle(Standard_Transient)& ent) const;
  //! returns Value as a Date (Null if another type) <br>
  Standard_EXPORT     Handle_StepBasic_Date Date() const;
  //! returns Value as a LocalTime (Null if another type) <br>
  Standard_EXPORT     Handle_StepBasic_LocalTime LocalTime() const;
  //! returns Value as a DateAndTime (Null if another type) <br>
  Standard_EXPORT     Handle_StepBasic_DateAndTime DateAndTime() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
