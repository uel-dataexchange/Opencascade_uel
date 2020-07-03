// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Transfer_TransferIterator_HeaderFile
#define _Transfer_TransferIterator_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Transfer_HSequenceOfBinder_HeaderFile
#include <Handle_Transfer_HSequenceOfBinder.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfInteger_HeaderFile
#include <Handle_TColStd_HSequenceOfInteger.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Transfer_Binder_HeaderFile
#include <Handle_Transfer_Binder.hxx>
#endif
#ifndef _Handle_Standard_Type_HeaderFile
#include <Handle_Standard_Type.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Transfer_StatusExec_HeaderFile
#include <Transfer_StatusExec.hxx>
#endif
#ifndef _Handle_Interface_Check_HeaderFile
#include <Handle_Interface_Check.hxx>
#endif
class Transfer_HSequenceOfBinder;
class TColStd_HSequenceOfInteger;
class Standard_NoSuchObject;
class Transfer_Binder;
class Standard_Type;
class Standard_Transient;
class Interface_Check;


//! Defines an Iterator on the result of a Transfer <br>
//!           Available for Normal Results or not (Erroneous Transfer) <br>
//!           It gives several kinds of Informations, and allows to consider <br>
//!           various criteria (criteria are cumulative) <br>
class Transfer_TransferIterator  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Creates an empty Iterator <br>
  Standard_EXPORT   Transfer_TransferIterator();
  //! Adds a Binder to the iteration list (construction) <br>
  Standard_EXPORT     void AddItem(const Handle(Transfer_Binder)& atr) ;
  //! Selects Items on the Type of Binder : keep only <br>
//!           Binders which are of a given Type (if keep is True) or <br>
//!           reject only them (if keep is False) <br>
  Standard_EXPORT     void SelectBinder(const Handle(Standard_Type)& atype,const Standard_Boolean keep) ;
  //! Selects Items on the Type of Result. Considers only Unique <br>
//!           Results. Considers Dynamic Type for Transient Result, <br>
//!           Static Type (the one given to define the Binder) else. <br>
//! <br>
//!           Results which are of a given Type (if keep is True) or reject <br>
//!           only them (if keep is False) <br>
  Standard_EXPORT     void SelectResult(const Handle(Standard_Type)& atype,const Standard_Boolean keep) ;
  //! Select Items according Unicity : keep only Unique Results (if <br>
//!           keep is True) or keep only Multiple Results (if keep is False) <br>
  Standard_EXPORT     void SelectUnique(const Standard_Boolean keep) ;
  //! Selects/Unselect (according to <keep> an item designated by <br>
//!           its rank <num> in the list <br>
//!           Used by sub-classes which have specific criteria <br>
  Standard_EXPORT     void SelectItem(const Standard_Integer num,const Standard_Boolean keep) ;
  //! Returns count of Binders to be iterated <br>
  Standard_EXPORT     Standard_Integer Number() const;
  //! Clears Iteration in progress, to allow it to be restarted <br>
  Standard_EXPORT     void Start() ;
  //! Returns True if there are other Items to iterate <br>
  Standard_EXPORT     Standard_Boolean More() ;
  //! Sets Iteration to the next Item <br>
  Standard_EXPORT     void Next() ;
  //! Returns the current Binder <br>
  Standard_EXPORT    const Handle_Transfer_Binder& Value() const;
  //! Returns True if current Item brings a Result, Transient <br>
//!           (Handle) or not or Multiple. That is to say, if it corresponds <br>
//!           to a normally acheived Transfer, Transient Result is read by <br>
//!           specific TransientResult below. <br>
//!           Other kind of Result must be read specifically from its Binder <br>
  Standard_EXPORT     Standard_Boolean HasResult() const;
  //! Returns True if Current Item has a Unique Result <br>
  Standard_EXPORT     Standard_Boolean HasUniqueResult() const;
  //! Returns the Type of the Result of the current Item, if Unique. <br>
//!           If No Unique Result (Error Transfert or Multiple Result), <br>
//!           returns a Null Handle <br>
//!           The Type is : the Dynamic Type for a Transient Result, <br>
//!           the Type defined by the Binder Class else <br>
  Standard_EXPORT     Handle_Standard_Type ResultType() const;
  //! Returns True if the current Item has a Transient Unique <br>
//!           Result (if yes, use TransientResult to get it) <br>
  Standard_EXPORT     Standard_Boolean HasTransientResult() const;
  //! Returns the Transient Result of the current Item if there is <br>
//!           (else, returns a null Handle) <br>
//!           Supposes that Binding is done by a SimpleBinderOfTransient <br>
  Standard_EXPORT    const Handle_Standard_Transient& TransientResult() const;
  //! Returns Execution Status of current Binder <br>
//!           Normal transfer corresponds to StatusDone <br>
  Standard_EXPORT     Transfer_StatusExec Status() const;
  //! Returns True if Fail Messages are recorded with the current <br>
//!           Binder. They can then be read through Check (see below) <br>
  Standard_EXPORT     Standard_Boolean HasFails() const;
  //! Returns True if Warning Messages are recorded with the current <br>
//!           Binder. They can then be read through Check (see below) <br>
  Standard_EXPORT     Standard_Boolean HasWarnings() const;
  //! Returns Check associated to current Binder <br>
//!           (in case of error, it brings Fail messages) <br>
//!           (in case of warnings, it brings Warning messages) <br>
  Standard_EXPORT    const Handle_Interface_Check Check() const;





protected:



Standard_Integer thecurr;


private:



Handle_Transfer_HSequenceOfBinder theitems;
Handle_TColStd_HSequenceOfInteger theselect;
Standard_Integer themaxi;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
