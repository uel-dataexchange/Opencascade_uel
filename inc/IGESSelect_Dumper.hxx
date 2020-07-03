// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSelect_Dumper_HeaderFile
#define _IGESSelect_Dumper_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESSelect_Dumper_HeaderFile
#include <Handle_IGESSelect_Dumper.hxx>
#endif

#ifndef _IFSelect_SessionDumper_HeaderFile
#include <IFSelect_SessionDumper.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
class IFSelect_SessionFile;
class Standard_Transient;
class TCollection_AsciiString;


//! Dumper from IGESSelect takes into account, for SessionFile, the <br>
//!           classes defined in the package IGESSelect : Selections, <br>
//!           Dispatches, Modifiers <br>
class IGESSelect_Dumper : public IFSelect_SessionDumper {

public:

  //! Creates a Dumper and puts it into the Library of Dumper <br>
  Standard_EXPORT   IGESSelect_Dumper();
  //! Write the Own Parameters of Types defined in package IGESSelect <br>
//!           Returns True if <item> has been processed, False else <br>
  Standard_EXPORT     Standard_Boolean WriteOwn(IFSelect_SessionFile& file,const Handle(Standard_Transient)& item) const;
  //! Recognizes and Read Own Parameters for Types of package <br>
//!           IGESSelect. Returns True if done and <item> created, False else <br>
  Standard_EXPORT     Standard_Boolean ReadOwn(IFSelect_SessionFile& file,const TCollection_AsciiString& type,Handle(Standard_Transient)& item) const;




  DEFINE_STANDARD_RTTI(IGESSelect_Dumper)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
