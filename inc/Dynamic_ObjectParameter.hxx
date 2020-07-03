// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Dynamic_ObjectParameter_HeaderFile
#define _Dynamic_ObjectParameter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Dynamic_ObjectParameter_HeaderFile
#include <Handle_Dynamic_ObjectParameter.hxx>
#endif

#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Dynamic_Parameter_HeaderFile
#include <Dynamic_Parameter.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class Standard_Transient;


//! This  inherited class from Parameter describes all <br>
//!          the parameters, which   are characterized   by  an <br>
//!          object value. <br>
class Dynamic_ObjectParameter : public Dynamic_Parameter {

public:

  //! Creates an ObjectParameter with <aparameter> as name. <br>
  Standard_EXPORT   Dynamic_ObjectParameter(const Standard_CString aparameter);
  //! With  the name of  the  Parameter <aparameter> and the <br>
//!          object  <anobject>,      creates an   instance      of <br>
//!          ObjectParameter. <br>
  Standard_EXPORT   Dynamic_ObjectParameter(const Standard_CString aparameter,const Handle(Standard_Transient)& anobject);
  //! Returns the value of the parameter which is an object. <br>
  Standard_EXPORT     Handle_Standard_Transient Value() const;
  //! Sets the object <anobject> in <me>. <br>
  Standard_EXPORT     void Value(const Handle(Standard_Transient)& anobject) ;
  //! Useful for debugging. <br>
  Standard_EXPORT   virtual  void Dump(Standard_OStream& astream) const;




  DEFINE_STANDARD_RTTI(Dynamic_ObjectParameter)

protected:




private: 


Handle_Standard_Transient theobject;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
