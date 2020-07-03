// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MoniTool_SignText_HeaderFile
#define _MoniTool_SignText_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MoniTool_SignText_HeaderFile
#include <Handle_MoniTool_SignText.hxx>
#endif

#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
class TCollection_AsciiString;
class Standard_Transient;


//! Provides the basic service to get a text which identifies <br>
//!           an object in a context <br>
//!           It can be used for other classes (general signatures ...) <br>
//!           It can also be used to build a message in which an object <br>
//!           is to be identified <br>
class MoniTool_SignText : public MMgt_TShared {

public:

  //! Returns an identification of the Signature (a word), given at <br>
//!           initialization time <br>
  Standard_EXPORT   virtual  Standard_CString Name() const = 0;
  //! Gives a text as a signature for a transient object alone, i.e. <br>
//!           without defined context. <br>
//!           By default, calls Text with undefined context (Null Handle) and <br>
//!           if empty, then returns DynamicType <br>
  Standard_EXPORT   virtual  TCollection_AsciiString TextAlone(const Handle(Standard_Transient)& ent) const;
  //! Gives a text as a signature for a transient object in a context <br>
//!           If the context is senseless, it can be given as Null Handle <br>
//!           empty result if nothing to give (at least the DynamicType could <br>
//!           be sent ?) <br>
  Standard_EXPORT   virtual  TCollection_AsciiString Text(const Handle(Standard_Transient)& ent,const Handle(Standard_Transient)& context) const = 0;




  DEFINE_STANDARD_RTTI(MoniTool_SignText)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
