// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESData_FreeFormatEntity_HeaderFile
#define _IGESData_FreeFormatEntity_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESData_FreeFormatEntity_HeaderFile
#include <Handle_IGESData_FreeFormatEntity.hxx>
#endif

#ifndef _Handle_TColStd_HSequenceOfInteger_HeaderFile
#include <Handle_TColStd_HSequenceOfInteger.hxx>
#endif
#ifndef _IGESData_UndefinedEntity_HeaderFile
#include <IGESData_UndefinedEntity.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Interface_ParamType_HeaderFile
#include <Interface_ParamType.hxx>
#endif
#ifndef _Handle_IGESData_IGESEntity_HeaderFile
#include <Handle_IGESData_IGESEntity.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Handle_IGESData_HArray1OfIGESEntity_HeaderFile
#include <Handle_IGESData_HArray1OfIGESEntity.hxx>
#endif
class TColStd_HSequenceOfInteger;
class Standard_OutOfRange;
class Interface_InterfaceError;
class IGESData_IGESEntity;
class TCollection_HAsciiString;
class IGESData_HArray1OfIGESEntity;
class IGESData_IGESWriter;


//! This class allows to create IGES Entities in a literal form : <br>
//!           their definition is free, but they are not recognized as <br>
//!           instances of specific classes. <br>
//! <br>
//!           This is a way to define test files without having to create <br>
//!           and fill specific classes of Entities, or creating an IGES <br>
//!           File ex nihilo, with respect for all format constraints <br>
//!           (such a way is very difficult to run and to master). <br>
//! <br>
//!           This class has the same content as an UndefinedEntity, only <br>
//!           it gives way to act on its content <br>
class IGESData_FreeFormatEntity : public IGESData_UndefinedEntity {

public:

  //! Creates a completely empty FreeFormatEntity <br>
  Standard_EXPORT   IGESData_FreeFormatEntity();
  //! Sets Type Number to a new Value, and Form Number to Zero <br>
  Standard_EXPORT     void SetTypeNumber(const Standard_Integer typenum) ;
  //! Sets Form Number to a new Value (to called after SetTypeNumber) <br>
  Standard_EXPORT     void SetFormNumber(const Standard_Integer formnum) ;
  //! Gives count of recorded parameters <br>
  Standard_EXPORT     Standard_Integer NbParams() const;
  //! Returns data of a Parameter : its type, and the entity if it <br>
//!           designates en entity ("ent") or its literal value else ("str") <br>
//!           Returned value (Boolean) : True if it is an Entity, False else <br>
  Standard_EXPORT     Standard_Boolean ParamData(const Standard_Integer num,Interface_ParamType& ptype,Handle(IGESData_IGESEntity)& ent,Handle(TCollection_HAsciiString)& val) const;
  //! Returns the ParamType of a Param, given its rank <br>
//!           Error if num is not between 1 and NbParams <br>
  Standard_EXPORT     Interface_ParamType ParamType(const Standard_Integer num) const;
  //! Returns True if a Parameter is recorded as an entity <br>
//!           Error if num is not between 1 and NbParams <br>
  Standard_EXPORT     Standard_Boolean IsParamEntity(const Standard_Integer num) const;
  //! Returns Entity corresponding to a Param, given its rank <br>
//!           Error if out of range or if Param num does not designate <br>
//!           an Entity <br>
  Standard_EXPORT     Handle_IGESData_IGESEntity ParamEntity(const Standard_Integer num) const;
  //! Returns True if <num> is noted as for a "Negative Pointer" <br>
//!           (see AddEntity for details). Senseful only if IsParamEntity <br>
//!           answers True for <num>, else returns False. <br>
  Standard_EXPORT     Standard_Boolean IsNegativePointer(const Standard_Integer num) const;
  //! Returns litteral value of a Parameter, given its rank <br>
//!           Error if num is out of range, or if Parameter is not literal <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString ParamValue(const Standard_Integer num) const;
  //! Returns the complete list of Ramks of Parameters which have <br>
//!           been noted as Negative Pointers <br>
//!  Warning : It is returned as a Null Handle if none was noted <br>
  Standard_EXPORT     Handle_TColStd_HSequenceOfInteger NegativePointers() const;
  //! Adds a literal Parameter to the list (as such) <br>
  Standard_EXPORT     void AddLiteral(const Interface_ParamType ptype,const Handle(TCollection_HAsciiString)& val) ;
  //! Adds a literal Parameter to the list (builds an HAsciiString) <br>
  Standard_EXPORT     void AddLiteral(const Interface_ParamType ptype,const Standard_CString val) ;
  //! Adds a Parameter which references an Entity. If the Entity is <br>
//!           Null, the added parameter will define a "Null Pointer" (0) <br>
//!           If <negative> is given True, this will command Sending to File <br>
//!           (see IGESWriter) to produce a "Negative Pointer" <br>
//!           (Default is False) <br>
  Standard_EXPORT     void AddEntity(const Interface_ParamType ptype,const Handle(IGESData_IGESEntity)& ent,const Standard_Boolean negative = Standard_False) ;
  //! Adds a set of Entities, given as a HArray1OfIGESEntity <br>
//!           Causes creation of : an Integer Parameter which gives count <br>
//!           of Entities, then the list of Entities of the Array <br>
//!           Error if an Entity is not an IGESEntity <br>
//!           All these Entities will be interpreted as "Positive Pointers" <br>
//!           by IGESWriter <br>
  Standard_EXPORT     void AddEntities(const Handle(IGESData_HArray1OfIGESEntity)& ents) ;
  //! Adds a list of Ranks of Parameters to be noted as Negative <br>
//!           Pointers (this will be taken into account for Parameters <br>
//!           which are Entities) <br>
  Standard_EXPORT     void AddNegativePointers(const Handle(TColStd_HSequenceOfInteger)& list) ;
  //! Clears all informations about Negative Pointers, hence every <br>
//!           Entity kind Parameter will be send normally, as Positive <br>
  Standard_EXPORT     void ClearNegativePointers() ;
  //! WriteOwnParams is redefined for FreeFormatEntity to take <br>
//!           into account the supplementary information "Negative Pointer" <br>
  Standard_EXPORT   virtual  void WriteOwnParams(IGESData_IGESWriter& IW) const;




  DEFINE_STANDARD_RTTI(IGESData_FreeFormatEntity)

protected:




private: 


Handle_TColStd_HSequenceOfInteger thenegptrs;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
