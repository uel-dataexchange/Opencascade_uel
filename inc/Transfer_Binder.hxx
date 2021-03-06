// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Transfer_Binder_HeaderFile
#define _Transfer_Binder_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Transfer_Binder_HeaderFile
#include <Handle_Transfer_Binder.hxx>
#endif

#ifndef _Transfer_StatusResult_HeaderFile
#include <Transfer_StatusResult.hxx>
#endif
#ifndef _Transfer_StatusExec_HeaderFile
#include <Transfer_StatusExec.hxx>
#endif
#ifndef _Handle_Interface_Check_HeaderFile
#include <Handle_Interface_Check.hxx>
#endif
#ifndef _Handle_Transfer_Binder_HeaderFile
#include <Handle_Transfer_Binder.hxx>
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
class Interface_Check;
class Transfer_TransferFailure;
class Standard_Type;


//! A Binder is an auxiliary object to Map the Result of the <br>
//!           Transfer of a given Object : it records the Result of the <br>
//!           Unitary Transfer (Resulting Object), status of progress and <br>
//!           error (if any) of the Process <br>
//! <br>
//!           The class Binder itself makes no definition for the Result : <br>
//!           it is defined by sub-classes : it can be either Simple (and <br>
//!           has to be typed : see generic class SimpleBinder) or Multiple <br>
//!           (see class MultipleBinder). <br>
//! <br>
//!           In principle, for a Transfer in progress, Result cannot be <br>
//!           accessed : this would cause an exception raising. <br>
//!           This is controlled by the value if StatusResult : if it is <br>
//!           "Used", the Result cannot be changed. This status is normally <br>
//!           controlled by TransferProcess but can be directly (see method <br>
//!           SetAlreadyUsed) <br>
//! <br>
//!           Checks can be completed by a record of cases, as string which <br>
//!           can be used as codes, but not to be printed <br>
//! <br>
//!           In addition to the Result, a Binder can bring a list of <br>
//!           Attributes, which are additional data, each of them has a name <br>
class Transfer_Binder : public MMgt_TShared {

public:

  //! Merges basic data (Check, ExecStatus) from another Binder but <br>
//!           keeps its result. Used when a binder is replaced by another <br>
//!           one, this allows to keep messages <br>
  Standard_EXPORT     void Merge(const Handle(Transfer_Binder)& other) ;
  //! Returns True if a Binder has several results, either by itself <br>
//!           or because it has next results <br>
//!           Can be defined by sub-classes. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsMultiple() const;
  //! Returns the Type which characterizes the Result (if known) <br>
  Standard_EXPORT   virtual  Handle_Standard_Type ResultType() const = 0;
  //! Returns the Name of the Type which characterizes the Result <br>
//!           Can be returned even if ResultType itself is unknown <br>
  Standard_EXPORT   virtual  Standard_CString ResultTypeName() const = 0;
  //! Adds a next result (at the end of the list) <br>
//!           Remark : this information is not processed by Merge <br>
  Standard_EXPORT     void AddResult(const Handle(Transfer_Binder)& next) ;
  //! Returns the next result, Null if none <br>
  Standard_EXPORT     Handle_Transfer_Binder NextResult() const;
  //! Returns True if a Result is available (StatusResult = Defined) <br>
//!           A Unique Result will be gotten by Result (which must be <br>
//!           defined in each sub-class according to result type) <br>
//!           For a Multiple Result, see class MultipleBinder <br>
//!           For other case, specific access has to be forecast <br>
  Standard_EXPORT     Standard_Boolean HasResult() const;
  //! Declares that result is now used by another one, it means that <br>
//!           it cannot be modified (by Rebind) <br>
  Standard_EXPORT     void SetAlreadyUsed() ;
  //! Returns status, which can be Initial (not yet done), Made (a <br>
//!           result is recorded, not yet shared), Used (it is shared and <br>
//!           cannot be modified) <br>
  Standard_EXPORT     Transfer_StatusResult Status() const;
  //! Returns execution status <br>
  Standard_EXPORT     Transfer_StatusExec StatusExec() const;
  //! Modifies execution status; called by TransferProcess only <br>
//!           (for StatusError, rather use SetError, below) <br>
  Standard_EXPORT     void SetStatusExec(const Transfer_StatusExec stat) ;
  //! Used to declare an individual transfer as beeing erroneous <br>
//!           (Status is set to Void, StatusExec is set to Error, <errmess> <br>
//!           is added to Check's list of Fails) <br>
//!           It is possible to record several messages of error <br>
//! <br>
//!           It has same effect for TransferProcess as raising an exception <br>
//!           during the operation of Transfer, except the Transfer tries to <br>
//!           continue (as if ErrorHandle had been set) <br>
  Standard_EXPORT     void AddFail(const Standard_CString mess,const Standard_CString orig = "") ;
  //! Used to attach a Warning Message to an individual Transfer <br>
//!           It has no effect on the Status <br>
  Standard_EXPORT     void AddWarning(const Standard_CString mess,const Standard_CString orig = "") ;
  //! Returns Check which stores Fail messages <br>
//!           Note that no Entity is associated in this Check <br>
  Standard_EXPORT    const Handle_Interface_Check Check() const;
  //! Returns Check which stores Fail messages, in order to modify <br>
//!           it (adding messages, or replacing it) <br>
  Standard_EXPORT     Handle_Interface_Check CCheck() ;




  DEFINE_STANDARD_RTTI(Transfer_Binder)

protected:

  //! Sets fields at initial values <br>
  Standard_EXPORT   Transfer_Binder();
  //! Used to declare that a result is recorded for an individual <br>
//!           transfer (works by setting StatusResult to Defined) <br>
//! <br>
//!           This Method is to be called once a Result is really recorded <br>
//!           (see sub-classes of Binder, especially SimpleBinder) : it is <br>
//!           senseless if called isolately <br>
  Standard_EXPORT     void SetResultPresent() ;



private: 

  //! Called by AddResult, to keep unicity of each item in the list <br>
  Standard_EXPORT     void CutResult(const Handle(Transfer_Binder)& next) ;

Transfer_StatusResult thestatus;
Transfer_StatusExec theexecst;
Handle_Interface_Check thecheck;
Handle_Transfer_Binder thenextr;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
