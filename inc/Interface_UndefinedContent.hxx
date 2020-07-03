// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Interface_UndefinedContent_HeaderFile
#define _Interface_UndefinedContent_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Interface_UndefinedContent_HeaderFile
#include <Handle_Interface_UndefinedContent.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfInteger_HeaderFile
#include <Handle_TColStd_HArray1OfInteger.hxx>
#endif
#ifndef _Handle_Interface_HArray1OfHAsciiString_HeaderFile
#include <Handle_Interface_HArray1OfHAsciiString.hxx>
#endif
#ifndef _Interface_EntityList_HeaderFile
#include <Interface_EntityList.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Interface_ParamType_HeaderFile
#include <Interface_ParamType.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class TColStd_HArray1OfInteger;
class Interface_HArray1OfHAsciiString;
class Standard_OutOfRange;
class Standard_NoSuchObject;
class Interface_InterfaceMismatch;
class Interface_InterfaceError;
class Standard_Transient;
class TCollection_HAsciiString;
class Interface_EntityList;
class Interface_CopyTool;


//! Defines resources for an "Undefined Entity" : such an Entity <br>
//!           is used to describe an Entity which complies with the Norm, <br>
//!           but of an Unknown Type : hence it is kept under a literal <br>
//!           form (avoiding to loose data). UndefinedContent offers a way <br>
//!           to store a list of Parameters, as literals or references to <br>
//!           other Entities <br>
//! <br>
//!           Each Interface must provide one "UndefinedEntity", which must <br>
//!           have same basic description as all its types of entities : <br>
//!           the best way would be double inheritance : on the Entity Root <br>
//!           of the Norm and on an general "UndefinedEntity" <br>
//! <br>
//!           While it is not possible to do so, the UndefinedEntity of each <br>
//!           Interface can define its own UndefinedEntity by INCLUDING <br>
//!           (in a field) this UndefinedContent <br>
//! <br>
//!           Hence, for that UndefinedEntity, define a Constructor which <br>
//!           creates this UndefinedContent, plus access methods to it <br>
//!           (or to its data, calling methods defined here). <br>
//! <br>
//!           Finally, the Protocols of each norm have to Create and <br>
//!           Recognize Unknown Entities of this norm <br>
class Interface_UndefinedContent : public MMgt_TShared {

public:

  //! Defines an empty UndefinedContent <br>
  Standard_EXPORT   Interface_UndefinedContent();
  //! Gives count of recorded parameters <br>
  Standard_EXPORT     Standard_Integer NbParams() const;
  //! Gives count of Literal Parameters <br>
  Standard_EXPORT     Standard_Integer NbLiterals() const;
  //! Returns data of a Parameter : its type, and the entity if it <br>
//!           designates en entity ("ent") or its literal value else ("str") <br>
//!           Returned value (Boolean) : True if it is an Entity, False else <br>
  Standard_EXPORT     Standard_Boolean ParamData(const Standard_Integer num,Interface_ParamType& ptype,Handle(Standard_Transient)& ent,Handle(TCollection_HAsciiString)& val) const;
  //! Returns the ParamType of a Param, given its rank <br>
//!           Error if num is not between 1 and NbParams <br>
  Standard_EXPORT     Interface_ParamType ParamType(const Standard_Integer num) const;
  //! Returns True if a Parameter is recorded as an entity <br>
//!           Error if num is not between 1 and NbParams <br>
  Standard_EXPORT     Standard_Boolean IsParamEntity(const Standard_Integer num) const;
  //! Returns Entity corresponding to a Param, given its rank <br>
  Standard_EXPORT     Handle_Standard_Transient ParamEntity(const Standard_Integer num) const;
  //! Returns litteral value of a Parameter, given its rank <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString ParamValue(const Standard_Integer num) const;
  //! Manages reservation for parameters (internal use) <br>
//!           (nb : total count of parameters, nblit : count of literals) <br>
  Standard_EXPORT     void Reservate(const Standard_Integer nb,const Standard_Integer nblit) ;
  //! Adds a literal Parameter to the list <br>
  Standard_EXPORT     void AddLiteral(const Interface_ParamType ptype,const Handle(TCollection_HAsciiString)& val) ;
  //! Adds a Parameter which references an Entity <br>
  Standard_EXPORT     void AddEntity(const Interface_ParamType ptype,const Handle(Standard_Transient)& ent) ;
  //! Removes a Parameter given its rank <br>
  Standard_EXPORT     void RemoveParam(const Standard_Integer num) ;
  //! Sets a new value for the Parameter <num>, to a literal value <br>
//!           (if it referenced formerly an Entity, this Entity is removed) <br>
  Standard_EXPORT     void SetLiteral(const Standard_Integer num,const Interface_ParamType ptype,const Handle(TCollection_HAsciiString)& val) ;
  //! Sets a new value for the Parameter <num>, to reference an <br>
//!           Entity. To simply change the Entity, see the variant below <br>
  Standard_EXPORT     void SetEntity(const Standard_Integer num,const Interface_ParamType ptype,const Handle(Standard_Transient)& ent) ;
  //! Changes the Entity referenced by the Parameter <num> <br>
//!           (with same ParamType) <br>
  Standard_EXPORT     void SetEntity(const Standard_Integer num,const Handle(Standard_Transient)& ent) ;
  //! Returns globally the list of param entities. Note that it can <br>
//!           be used as shared entity list for the UndefinedEntity <br>
  Standard_EXPORT     Interface_EntityList EntityList() const;
  //! Copies contents of undefined entities; deigned to be called by <br>
//!           GetFromAnother method from Undefined entity of each Interface <br>
//!           (the basic operation is the same regardless the norm) <br>
  Standard_EXPORT     void GetFromAnother(const Handle(Interface_UndefinedContent)& other,Interface_CopyTool& TC) ;




  DEFINE_STANDARD_RTTI(Interface_UndefinedContent)

protected:




private: 


Standard_Integer thenbparams;
Standard_Integer thenbstr;
Handle_TColStd_HArray1OfInteger theparams;
Handle_Interface_HArray1OfHAsciiString thevalues;
Interface_EntityList theentities;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
