// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSelect_UpdateFileName_HeaderFile
#define _IGESSelect_UpdateFileName_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESSelect_UpdateFileName_HeaderFile
#include <Handle_IGESSelect_UpdateFileName.hxx>
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


//! Sets the File Name in Header to be the actual name of the file <br>
//!           If new file name is unknown, the former one is kept <br>
//!           Remark : this works well only when it is Applied and send time <br>
//!           If it is run immediately, new file name is unknown and nothing <br>
//!           is done <br>
//!           The Selection of the Modifier is not used : it simply acts as <br>
//!           a criterium to select IGES Files to touch up <br>
class IGESSelect_UpdateFileName : public IGESSelect_ModelModifier {

public:

  //! Creates an UpdateFileName, which uses the system Date <br>
  Standard_EXPORT   IGESSelect_UpdateFileName();
  //! Specific action : only <target> is used : the system Date <br>
//!           is set to Global Section Item n0 18. <br>
  Standard_EXPORT     void Performing(IFSelect_ContextModif& ctx,const Handle(IGESData_IGESModel)& target,Interface_CopyTool& TC) const;
  //! Returns a text which is <br>
//!           "Updates IGES File Name to new current one" <br>
  Standard_EXPORT     TCollection_AsciiString Label() const;




  DEFINE_STANDARD_RTTI(IGESSelect_UpdateFileName)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
