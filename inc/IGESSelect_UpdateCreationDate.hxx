// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSelect_UpdateCreationDate_HeaderFile
#define _IGESSelect_UpdateCreationDate_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESSelect_UpdateCreationDate_HeaderFile
#include <Handle_IGESSelect_UpdateCreationDate.hxx>
#endif

#ifndef _IGESSelect_ModelModifier_HeaderFile
#include <IGESSelect_ModelModifier.hxx>
#endif
#ifndef _Handle_IGESData_IGESModel_HeaderFile
#include <Handle_IGESData_IGESModel.hxx>
#endif
class IFSelect_ContextModif;
class IGESData_IGESModel;
class Interface_CopyTool;
class TCollection_AsciiString;


//! Allows to Change the Creation Date indication in the Header <br>
//!           (Global Section) of IGES File. It is taken from the operating <br>
//!           system (time of application of the Modifier). <br>
//!           The Selection of the Modifier is not used : it simply acts as <br>
//!           a criterium to select IGES Files to touch up <br>
class IGESSelect_UpdateCreationDate : public IGESSelect_ModelModifier {

public:

  //! Creates an UpdateCreationDate, which uses the system Date <br>
  Standard_EXPORT   IGESSelect_UpdateCreationDate();
  //! Specific action : only <target> is used : the system Date <br>
//!           is set to Global Section Item n0 18. <br>
  Standard_EXPORT     void Performing(IFSelect_ContextModif& ctx,const Handle(IGESData_IGESModel)& target,Interface_CopyTool& TC) const;
  //! Returns a text which is <br>
//!           "Update IGES Header Creation Date" <br>
  Standard_EXPORT     TCollection_AsciiString Label() const;




  DEFINE_STANDARD_RTTI(IGESSelect_UpdateCreationDate)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
