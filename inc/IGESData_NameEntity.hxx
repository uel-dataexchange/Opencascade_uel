// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESData_NameEntity_HeaderFile
#define _IGESData_NameEntity_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESData_NameEntity_HeaderFile
#include <Handle_IGESData_NameEntity.hxx>
#endif

#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class TCollection_HAsciiString;


//! a NameEntity is a kind of IGESEntity which can provide a Name <br>
//!           under alphanumeric (String) form, from Properties list <br>
//!           an effective Name entity must inherit it <br>
class IGESData_NameEntity : public IGESData_IGESEntity {

public:

  //! Retyrns the alphanumeric value of the Name, to be defined <br>
  Standard_EXPORT   virtual  Handle_TCollection_HAsciiString Value() const = 0;




  DEFINE_STANDARD_RTTI(IGESData_NameEntity)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
