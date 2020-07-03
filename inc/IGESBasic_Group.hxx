// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESBasic_Group_HeaderFile
#define _IGESBasic_Group_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESBasic_Group_HeaderFile
#include <Handle_IGESBasic_Group.hxx>
#endif

#ifndef _Handle_IGESData_HArray1OfIGESEntity_HeaderFile
#include <Handle_IGESData_HArray1OfIGESEntity.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_IGESData_IGESEntity_HeaderFile
#include <Handle_IGESData_IGESEntity.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
class IGESData_HArray1OfIGESEntity;
class Standard_OutOfRange;
class IGESData_IGESEntity;
class Standard_Transient;


//! defines Group, Type <402> Form <1> <br>
//!          in package IGESBasic <br>
//!          The Group Associativity allows a collection of a set <br>
//!          of entities to be maintained as a single, logical <br>
//!          entity <br>
//! <br>
//!          Group, OrderedGroup, GroupWithoutBackP, OrderedGroupWithoutBackP <br>
//!          share the same definition (class Group), form number changes <br>
//! <br>
//!          non Ordered, non WithoutBackP : form  1 <br>
//!          non Ordered,     WithoutBackP : form  7 <br>
//!              Ordered, non WithoutBackP : form 14 <br>
//!              Ordered,     WithoutBackP : form 15 <br>
class IGESBasic_Group : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESBasic_Group();
  //! Creates a Group with a predefined count of items <br>
//!           (which all start as null) <br>
  Standard_EXPORT   IGESBasic_Group(const Standard_Integer nb);
  //! This method is used to set the fields of the class Group <br>
//!       - allEntities : Used to store pointers to members of <br>
//!                       the Group. <br>
  Standard_EXPORT     void Init(const Handle(IGESData_HArray1OfIGESEntity)& allEntities) ;
  //! Sets a Group to be, or not to be  Ordered (according mode) <br>
  Standard_EXPORT     void SetOrdered(const Standard_Boolean mode) ;
  //! Sets a Group to be, or not to be  WithoutBackP <br>
  Standard_EXPORT     void SetWithoutBackP(const Standard_Boolean mode) ;
  //! Returns True if <me> is Ordered <br>
  Standard_EXPORT     Standard_Boolean IsOrdered() const;
  //! Returns True if <me> is WithoutBackP <br>
  Standard_EXPORT     Standard_Boolean IsWithoutBackP() const;
  //! Enforce a new value for the type and form <br>
  Standard_EXPORT     void SetUser(const Standard_Integer type,const Standard_Integer form) ;
  //! Changes the count of item <br>
//!           If greater, new items are null <br>
//!           If lower, old items are lost <br>
  Standard_EXPORT     void SetNb(const Standard_Integer nb) ;
  //! returns the number of IGESEntities in the Group <br>
  Standard_EXPORT     Standard_Integer NbEntities() const;
  //! returns the specific entity from the Group <br>
  Standard_EXPORT     Handle_IGESData_IGESEntity Entity(const Standard_Integer Index) const;
  //! returns the specific entity from the Group <br>
  Standard_EXPORT     Handle_Standard_Transient Value(const Standard_Integer Index) const;
  //! Sets a new value for item <Index> <br>
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(IGESData_IGESEntity)& ent) ;




  DEFINE_STANDARD_RTTI(IGESBasic_Group)

protected:




private: 


Handle_IGESData_HArray1OfIGESEntity theEntities;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
