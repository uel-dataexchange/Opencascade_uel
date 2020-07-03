// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Transfer_BinderOfTransientInteger_HeaderFile
#define _Transfer_BinderOfTransientInteger_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Transfer_BinderOfTransientInteger_HeaderFile
#include <Handle_Transfer_BinderOfTransientInteger.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Transfer_SimpleBinderOfTransient_HeaderFile
#include <Transfer_SimpleBinderOfTransient.hxx>
#endif


//! This type of Binder allows to attach as result, besides a <br>
//!           Transient Object, an Integer Value, which can be an Index <br>
//!           in the Object if it defines a List, for instance <br>
//! <br>
//!           This Binder is otherwise a kind of SimpleBinderOfTransient, <br>
//!           i.e. its basic result (for iterators, etc) is the Transient <br>
class Transfer_BinderOfTransientInteger : public Transfer_SimpleBinderOfTransient {

public:

  //! Creates an empty BinderOfTransientInteger; Default value for <br>
//!           the integer part is zero <br>
  Standard_EXPORT   Transfer_BinderOfTransientInteger();
  //! Sets a value for the integer part <br>
  Standard_EXPORT     void SetInteger(const Standard_Integer value) ;
  //! Returns the value set for the integer part <br>
  Standard_EXPORT     Standard_Integer Integer() const;




  DEFINE_STANDARD_RTTI(Transfer_BinderOfTransientInteger)

protected:




private: 


Standard_Integer theintval;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
