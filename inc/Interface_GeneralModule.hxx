// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Interface_GeneralModule_HeaderFile
#define _Interface_GeneralModule_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Interface_GeneralModule_HeaderFile
#include <Handle_Interface_GeneralModule.hxx>
#endif

#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_Interface_InterfaceModel_HeaderFile
#include <Handle_Interface_InterfaceModel.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_Interface_Check_HeaderFile
#include <Handle_Interface_Check.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class Interface_InterfaceModel;
class Standard_Transient;
class Interface_EntityIterator;
class Interface_ShareTool;
class Interface_Check;
class Interface_CopyTool;
class TCollection_HAsciiString;


//! This class defines general services, which must be provided <br>
//!           for each type of Entity (i.e. of Transient Object processed <br>
//!           by an Interface) : Shared List, Check, Copy, Delete, Category <br>
//! <br>
//!           To optimise processing (e.g. firstly bind an Entity to a Module <br>
//!           then calls  Module), each recognized Entity Type corresponds <br>
//!           to a Case Number, determined by the Protocol each class of <br>
//!           GeneralModule belongs to. <br>
class Interface_GeneralModule : public MMgt_TShared {

public:

  //! Specific filling of the list of Entities shared by an Entity <br>
//!           <ent>, according a Case Number <CN> (formerly computed by <br>
//!           CaseNum), considered in the context of a Model <model> <br>
//!           Default calls FillSharedCase (i.e., ignores the model) <br>
//!           Can be redefined to use the model for working <br>
  Standard_EXPORT   virtual  void FillShared(const Handle(Interface_InterfaceModel)& model,const Standard_Integer CN,const Handle(Standard_Transient)& ent,Interface_EntityIterator& iter) const;
  //! Specific filling of the list of Entities shared by an Entity <br>
//!           <ent>, according a Case Number <CN> (formerly computed by <br>
//!           CaseNum). Can use the internal utility method Share, below <br>
  Standard_EXPORT   virtual  void FillSharedCase(const Standard_Integer CN,const Handle(Standard_Transient)& ent,Interface_EntityIterator& iter) const = 0;
  //! Adds an Entity to a Shared List (uses GetOneItem on <iter>) <br>
  Standard_EXPORT     void Share(Interface_EntityIterator& iter,const Handle(Standard_Transient)& shared) const;
  //! List the Implied References of <ent> considered in the context <br>
//!           of a Model <model> : i.e. the Entities which are Referenced <br>
//!           while not considered as Shared (not copied if <ent> is, <br>
//!           references not renewed by CopyCase but by ImpliedCase, only <br>
//!           if referenced Entities have been Copied too) <br>
//!           FillShared + ListImplied give the complete list of References <br>
//!           Default calls ListImpliedCase (i.e. ignores the model) <br>
//!           Can be redefined to use the model for working <br>
  Standard_EXPORT   virtual  void ListImplied(const Handle(Interface_InterfaceModel)& model,const Standard_Integer CN,const Handle(Standard_Transient)& ent,Interface_EntityIterator& iter) const;
  //! List the Implied References of <ent> (see above) <br>
//!           are Referenced while not considered as Shared (not copied if <br>
//!           <ent> is, references not renewed by CopyCase but by <br>
//!           ImpliedCase, only if referenced Entities have been Copied too) <br>
//!           FillSharedCase + ListImpliedCase give the complete list of <br>
//!           Referenced Entities <br>
//!           The provided default method does nothing (Implied References <br>
//!           are specific of a little amount of Entity Classes). <br>
  Standard_EXPORT   virtual  void ListImpliedCase(const Standard_Integer CN,const Handle(Standard_Transient)& ent,Interface_EntityIterator& iter) const;
  //! Specific Checking of an Entity <ent> <br>
//!           Can check context queried through a ShareTool, as required <br>
  Standard_EXPORT   virtual  void CheckCase(const Standard_Integer CN,const Handle(Standard_Transient)& ent,const Interface_ShareTool& shares,Handle(Interface_Check)& ach) const = 0;
  //! Specific answer to the question "is Copy properly implemented" <br>
//!           Remark that it should be in phase with the implementation of <br>
//!           NewVoid+CopyCase/NewCopyCase <br>
//!           Default returns always False, can be redefined <br>
  Standard_EXPORT   virtual  Standard_Boolean CanCopy(const Standard_Integer CN,const Handle(Standard_Transient)& ent) const;
  //! Dispatches an entity <br>
//!           Returns True if it works by copy, False if it just duplicates <br>
//!           the starting Handle <br>
//! <br>
//!           Dispatching means producing a new entity, image of the <br>
//!           starting one, in order to be put into a new Model, this Model <br>
//!           being itself the result of a dispatch from an original Model <br>
//! <br>
//!           According to the cases, dispatch can either <br>
//!           * just return <entto> as equating <entfrom> <br>
//!             -> the new model designates the starting entity : it is <br>
//!             lighter, but the dispatched entity being shared might not be <br>
//!             modified for dispatch <br>
//!           * copy <entfrom> to <entto> <br>
//!             by calling NewVoid+CopyCase (two steps) or NewCopiedCase (1) <br>
//!             -> the dispatched entity is a COPY, hence it can be modified <br>
//! <br>
//!           The provided default just duplicates the handle without <br>
//!           copying, then returns False. Can be redefined <br>
  Standard_EXPORT   virtual  Standard_Boolean Dispatch(const Standard_Integer CN,const Handle(Standard_Transient)& entfrom,Handle(Standard_Transient)& entto,Interface_CopyTool& TC) const;
  //! Creates a new void entity <entto> according to a Case Number <br>
//!           This entity remains to be filled, by reading from a file or <br>
//!           by copying from another entity of same type (see CopyCase) <br>
  Standard_EXPORT   virtual  Standard_Boolean NewVoid(const Standard_Integer CN,Handle(Standard_Transient)& entto) const = 0;
  //! Specific Copy ("Deep") from <entfrom> to <entto> (same type) <br>
//!           by using a CopyTool which provides its working Map. <br>
//!           Use method Transferred from CopyTool to work <br>
  Standard_EXPORT   virtual  void CopyCase(const Standard_Integer CN,const Handle(Standard_Transient)& entfrom,const Handle(Standard_Transient)& entto,Interface_CopyTool& TC) const = 0;
  //! Specific operator (create+copy) defaulted to do nothing. <br>
//!           It can be redefined : When it is not possible to work in two <br>
//!           steps (NewVoid then CopyCase). This can occur when there is <br>
//!           no default constructor : hence the result <entto> must be <br>
//!           created with an effective definition. <br>
//!           Remark : if NewCopiedCase is defined, CopyCase has nothing to do <br>
//!           Returns True if it has produced something, false else <br>
  Standard_EXPORT   virtual  Standard_Boolean NewCopiedCase(const Standard_Integer CN,const Handle(Standard_Transient)& entfrom,Handle(Standard_Transient)& entto,Interface_CopyTool& TC) const;
  //! Specific Copying of Implied References <br>
//!           A Default is provided which does nothing (must current case !) <br>
//!           Already copied references (by CopyFrom) must remain unchanged <br>
//!           Use method Search from CopyTool to work <br>
  Standard_EXPORT   virtual  void RenewImpliedCase(const Standard_Integer CN,const Handle(Standard_Transient)& entfrom,const Handle(Standard_Transient)& entto,const Interface_CopyTool& TC) const;
  //! Prepares an entity to be deleted. What does it mean : <br>
//!           Basically, any class of entity may define its own destructor <br>
//!           By default, it does nothing but calling destructors on fields <br>
//!           With the Memory Manager, it is useless to call destructor, <br>
//!           it is done automatically when the Handle is nullified(cleared) <br>
//!           BUT this is ineffective in looping structures (whatever these <br>
//!           are "Implied" references or not). <br>
//! <br>
//!           THUS : if no loop may appear in definitions, a class which <br>
//!           inherits from TShared is correctly managed by automatic way <br>
//!           BUT if there can be loops (or simply back pointers), they must <br>
//!           be broken, for instance by clearing fields of one of the nodes <br>
//!           The default does nothing, to be redefined if a loop can occur <br>
//!           (Implied generally requires WhenDelete, but other cases can <br>
//!           occur) <br>
//! <br>
//!  Warning : <dispatched> tells if the entity to be deleted has been <br>
//!           produced by Dispatch or not. Hence WhenDelete must be in <br>
//!           coherence with Dispatch <br>
//!           Dispatch can either copy or not. <br>
//!           If it copies the entity, this one should be deleted <br>
//!           If it doesnt (i.e. duplicates the handle) nothing to do <br>
//! <br>
//!           If <dispatch> is False, normal deletion is to be performed <br>
  Standard_EXPORT   virtual  void WhenDeleteCase(const Standard_Integer CN,const Handle(Standard_Transient)& ent,const Standard_Boolean dispatched) const;
  //! Returns a category number which characterizes an entity <br>
//!           Category Numbers are managed by the class Category <br>
//!           <shares> can be used to evaluate this number in the context <br>
//!           Default returns 0 which means "unspecified" <br>
  Standard_EXPORT   virtual  Standard_Integer CategoryNumber(const Standard_Integer CN,const Handle(Standard_Transient)& ent,const Interface_ShareTool& shares) const;
  //! Determines if an entity brings a Name (or widerly, if a Name <br>
//!           can be attached to it, through the ShareTool <br>
//!           By default, returns a Null Handle (no name can be produced) <br>
//!           Can be redefined <br>
//! <br>
//!  Warning : While this string may be edited on the spot, if it is a read <br>
//!           field, the returned value must be copied before. <br>
  Standard_EXPORT   virtual  Handle_TCollection_HAsciiString Name(const Standard_Integer CN,const Handle(Standard_Transient)& ent,const Interface_ShareTool& shares) const;




  DEFINE_STANDARD_RTTI(Interface_GeneralModule)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
