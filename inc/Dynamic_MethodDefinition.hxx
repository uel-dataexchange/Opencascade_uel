// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Dynamic_MethodDefinition_HeaderFile
#define _Dynamic_MethodDefinition_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Dynamic_MethodDefinition_HeaderFile
#include <Handle_Dynamic_MethodDefinition.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Dynamic_Method_HeaderFile
#include <Dynamic_Method.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Handle_Dynamic_Parameter_HeaderFile
#include <Handle_Dynamic_Parameter.hxx>
#endif
#ifndef _Dynamic_ModeEnum_HeaderFile
#include <Dynamic_ModeEnum.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class TCollection_HAsciiString;
class TCollection_AsciiString;
class Dynamic_Parameter;


//! This  inherited class   is   for  describing   the <br>
//!          definition  of    a  method.   This  definition is <br>
//!          composed by its name which is readable by the type <br>
//!          function   and a  collection   of  variables which <br>
//!          defines the signature  of the method definition in <br>
//!          term of arguments passed  to the function and also <br>
//!          the useful  internal or constant  variables if the <br>
//!          function is a composite method. This class is also <br>
//!          a  deferred  class and can   not be  used directly <br>
//!          because it is  necessary to specify if the  method <br>
//!          is compiled, interpreted or composite. <br>
class Dynamic_MethodDefinition : public Dynamic_Method {

public:

  //! Returns the name of the method definition. <br>
  Standard_EXPORT   virtual  TCollection_AsciiString Type() const;
  //! Adds  a  new  variable   created from    the parameter <br>
//!          <aparameter>, which  defines the  name of the variable <br>
//!          its type and if necessary its  default value, the mode <br>
//!          <amode> which  precise  if it is  an  in,  out, inout, <br>
//!          internal or   constant variable and the  flag <agroup> <br>
//!          for accepting  a  set of homogeneous variables.   with <br>
//!          the parameter value <aparameter>. <br>
  Standard_EXPORT     void AddVariable(const Handle(Dynamic_Parameter)& aparameter,const Dynamic_ModeEnum amode,const Standard_Boolean agroup = Standard_False) ;
  //! Useful for debugging. <br>
  Standard_EXPORT   virtual  void Dump(Standard_OStream& astream) const;




  DEFINE_STANDARD_RTTI(Dynamic_MethodDefinition)

protected:

  //! Creates a MethodDefinition with <aname> as type. <br>
  Standard_EXPORT   Dynamic_MethodDefinition(const Standard_CString aname);



private: 


Handle_TCollection_HAsciiString thename;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
