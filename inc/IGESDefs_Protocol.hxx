// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDefs_Protocol_HeaderFile
#define _IGESDefs_Protocol_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESDefs_Protocol_HeaderFile
#include <Handle_IGESDefs_Protocol.hxx>
#endif

#ifndef _IGESData_Protocol_HeaderFile
#include <IGESData_Protocol.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Interface_Protocol_HeaderFile
#include <Handle_Interface_Protocol.hxx>
#endif
#ifndef _Handle_Standard_Type_HeaderFile
#include <Handle_Standard_Type.hxx>
#endif
class Interface_Protocol;
class Standard_Type;


//! Description of Protocol for IGESDefs <br>
class IGESDefs_Protocol : public IGESData_Protocol {

public:

  
  Standard_EXPORT   IGESDefs_Protocol();
  //! Gives the count of Resource Protocol. Here, one <br>
//!           (Protocol from IGESGraph) <br>
  Standard_EXPORT   virtual  Standard_Integer NbResources() const;
  //! Returns a Resource, given a rank. <br>
  Standard_EXPORT   virtual  Handle_Interface_Protocol Resource(const Standard_Integer num) const;
  //! Returns a Case Number, specific of each recognized Type <br>
//!           This Case Number is then used in Libraries : the various <br>
//!           Modules attached to this class of Protocol must use them <br>
//!           in accordance (for a given value of TypeNumber, they must <br>
//!           consider the same Type as the Protocol defines) <br>
  Standard_EXPORT   virtual  Standard_Integer TypeNumber(const Handle(Standard_Type)& atype) const;




  DEFINE_STANDARD_RTTI(IGESDefs_Protocol)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
