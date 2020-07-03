// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSelect_SetLabel_HeaderFile
#define _IGESSelect_SetLabel_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESSelect_SetLabel_HeaderFile
#include <Handle_IGESSelect_SetLabel.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
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


//! Sets/Clears Short Label of Entities, those designated by the <br>
//!           Selection. No Selection means all the file <br>
//! <br>
//!           May enforce, else it sets only if no label is yet set <br>
//!           Mode : 0 to clear (always enforced) <br>
//!                  1 to set label to DE number (changes it if already set) <br>
class IGESSelect_SetLabel : public IGESSelect_ModelModifier {

public:

  //! Creates a SetLabel for IGESEntity <br>
//!           Mode : see Purpose of the class <br>
  Standard_EXPORT   IGESSelect_SetLabel(const Standard_Integer mode,const Standard_Boolean enforce);
  //! Specific action : Sets or Clears the Label <br>
  Standard_EXPORT     void Performing(IFSelect_ContextModif& ctx,const Handle(IGESData_IGESModel)& target,Interface_CopyTool& TC) const;
  //! Returns a text which is <br>
//!           "Clear Short Label"  or  "Set Label to DE" <br>
//!           With possible additional information " (enforced)" <br>
  Standard_EXPORT     TCollection_AsciiString Label() const;




  DEFINE_STANDARD_RTTI(IGESSelect_SetLabel)

protected:




private: 


Standard_Integer themode;
Standard_Boolean theforce;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
