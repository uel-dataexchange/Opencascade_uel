// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MoniTool_Element_HeaderFile
#define _MoniTool_Element_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MoniTool_Element_HeaderFile
#include <Handle_MoniTool_Element.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _MoniTool_AttrList_HeaderFile
#include <MoniTool_AttrList.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Standard_Type_HeaderFile
#include <Handle_Standard_Type.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
class Standard_Type;
class MoniTool_AttrList;


//! a Element allows to map any kind of object as a Key for a Map. <br>
//!           This works by defining, for a Hash Code, that of the real Key, <br>
//!           not of the Element which acts only as an intermediate. <br>
//!           When a Map asks for the HashCode of a Element, this one returns <br>
//!           the code it has determined at creation time <br>
class MoniTool_Element : public MMgt_TShared {

public:

  //! Returns the HashCode which has been stored by SetHashCode <br>
//!           (remark that HashCode could be deferred then be defined by <br>
//!            sub-classes, the result is the same) <br>
  Standard_EXPORT     Standard_Integer GetHashCode() const;
  //! Specific testof equallity : to be defined by each sub-class, <br>
//!           must be False if Elements have not the same true Type, else <br>
//!           their contents must be compared <br>
  Standard_EXPORT   virtual  Standard_Boolean Equates(const Handle(MoniTool_Element)& other) const = 0;
  //! Returns the Type of the Value. By default, returns the <br>
//!           DynamicType of <me>, but can be redefined <br>
  Standard_EXPORT   virtual  Handle_Standard_Type ValueType() const;
  //! Returns the name of the Type of the Value. Default is name <br>
//!           of ValueType, unless it is for a non-handled object <br>
  Standard_EXPORT   virtual  Standard_CString ValueTypeName() const;
  //! Returns (readonly) the Attribute List <br>
  Standard_EXPORT    const MoniTool_AttrList& ListAttr() const;
  //! Returns (modifiable) the Attribute List <br>
  Standard_EXPORT     MoniTool_AttrList& ChangeAttr() ;




  DEFINE_STANDARD_RTTI(MoniTool_Element)

protected:

  //! Stores the HashCode which corresponds to the Value given to <br>
//!           create the Mapper <br>
  Standard_EXPORT     void SetHashCode(const Standard_Integer code) ;



private: 


Standard_Integer thecode;
MoniTool_AttrList theattrib;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
