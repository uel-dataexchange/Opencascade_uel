// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_SignatureList_HeaderFile
#define _IFSelect_SignatureList_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IFSelect_SignatureList_HeaderFile
#include <Handle_IFSelect_SignatureList.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _Handle_Dico_DictionaryOfInteger_HeaderFile
#include <Handle_Dico_DictionaryOfInteger.hxx>
#endif
#ifndef _Handle_Dico_DictionaryOfTransient_HeaderFile
#include <Handle_Dico_DictionaryOfTransient.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfHAsciiString_HeaderFile
#include <Handle_TColStd_HSequenceOfHAsciiString.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfTransient_HeaderFile
#include <Handle_TColStd_HSequenceOfTransient.hxx>
#endif
#ifndef _Handle_Message_Messenger_HeaderFile
#include <Handle_Message_Messenger.hxx>
#endif
#ifndef _Handle_Interface_InterfaceModel_HeaderFile
#include <Handle_Interface_InterfaceModel.hxx>
#endif
#ifndef _IFSelect_PrintCount_HeaderFile
#include <IFSelect_PrintCount.hxx>
#endif
class TCollection_HAsciiString;
class Dico_DictionaryOfInteger;
class Dico_DictionaryOfTransient;
class Standard_Transient;
class TColStd_HSequenceOfHAsciiString;
class TColStd_HSequenceOfTransient;
class Message_Messenger;
class Interface_InterfaceModel;


//! A SignatureList is given as result from a Counter (any kind) <br>
//!           It gives access to a list of signatures, with counts, and <br>
//!           optionally with list of corresponding entities <br>
//! <br>
//!           It can also be used only to give a signature, through SignOnly <br>
//!           Mode. This can be useful for a specific counter (used in a <br>
//!           Selection), while it remains better to use a Signature <br>
//!           whenever possible <br>
class IFSelect_SignatureList : public MMgt_TShared {

public:

  //! Creates a SignatureList. If <withlist> is True, entities will <br>
//!           be not only counted per signature, but also listed. <br>
  Standard_EXPORT   IFSelect_SignatureList(const Standard_Boolean withlist = Standard_False);
  //! Changes the record-list status. The list is not cleared but <br>
//!           its use changes <br>
  Standard_EXPORT     void SetList(const Standard_Boolean withlist) ;
  //! Returns modifiable the SignOnly Mode <br>
//!           If False (D), the counter normally counts <br>
//!           If True, the counting work is turned off, Add only fills the <br>
//!           LastValue, which can be used as signature, when a counter <br>
//!           works from data which are not available from a Signature <br>
  Standard_EXPORT     Standard_Boolean& ModeSignOnly() ;
  
  Standard_EXPORT   virtual  void Clear() ;
  //! Adds an entity with its signature, i.e. : <br>
//!           - counts an item more for <sign> <br>
//!           - if record-list status is set, records the entity <br>
//!           Accepts a null entity (the signature is then for the global <br>
//!           model). But if the string is empty, counts a Null item. <br>
//! <br>
//!           If SignOnly Mode is set, this work is replaced by just <br>
//!           setting LastValue <br>
  Standard_EXPORT     void Add(const Handle(Standard_Transient)& ent,const Standard_CString sign) ;
  //! Returns the last value recorded by Add (only if SignMode set) <br>
//!           Cleared by Clear or Init <br>
  Standard_EXPORT     Standard_CString LastValue() const;
  //! Aknowledges the list in once. Name identifies the Signature <br>
  Standard_EXPORT     void Init(const Standard_CString name,const Handle(Dico_DictionaryOfInteger)& count,const Handle(Dico_DictionaryOfTransient)& list,const Standard_Integer nbnuls) ;
  //! Returns the list of signatures, as a sequence of strings <br>
//!           (but without their respective counts). It is ordered. <br>
//!           By default, for all the signatures. <br>
//!           If <root> is given non empty, for the signatures which <br>
//!           begin by <root> <br>
  Standard_EXPORT     Handle_TColStd_HSequenceOfHAsciiString List(const Standard_CString root = "") const;
  //! Returns True if the list of Entities is aknowledged, else <br>
//!           the method Entities will always return a Null Handle <br>
  Standard_EXPORT     Standard_Boolean HasEntities() const;
  //! Returns the count of null entities <br>
  Standard_EXPORT     Standard_Integer NbNulls() const;
  //! Returns the number of times a signature was counted, <br>
//!           0 if it has not been recorded at all <br>
  Standard_EXPORT     Standard_Integer NbTimes(const Standard_CString sign) const;
  //! Returns the list of entities attached to a signature <br>
//!           It is empty if <sign> has not been recorded <br>
//!           It is a Null Handle if the list of entities is not known <br>
  Standard_EXPORT     Handle_TColStd_HSequenceOfTransient Entities(const Standard_CString sign) const;
  //! Defines a name for a SignatureList (used to print it) <br>
  Standard_EXPORT     void SetName(const Standard_CString name) ;
  //! Returns the recorded Name. <br>
//!           Remark : default is "..." (no SetName called) <br>
  Standard_EXPORT   virtual  Standard_CString Name() const;
  //! Prints the counts of items (not the list) <br>
  Standard_EXPORT   virtual  void PrintCount(const Handle(Message_Messenger)& S) const;
  //! Prints the lists of items, if they are present (else, prints <br>
//!           a message "no list available") <br>
//!           Uses <model> to determine for each entity to be listed, its <br>
//!           number, and its specific identifier (by PrintLabel) <br>
//!           <mod> gives a mode for printing : <br>
//!           - CountByItem : just count (as PrintCount) <br>
//!           - ShortByItem : minimum i.e. count plus 5 first entity numbers <br>
//!           - ShortByItem(D) complete list of entity numbers (0: "Global") <br>
//!           - EntitiesByItem : list of (entity number/PrintLabel from the model) <br>
//!           other modes are ignored <br>
  Standard_EXPORT   virtual  void PrintList(const Handle(Message_Messenger)& S,const Handle(Interface_InterfaceModel)& model,const IFSelect_PrintCount mod = IFSelect_ListByItem) const;
  //! Prints a summary <br>
//!           Item which has the greatest count of entities <br>
//!           For items which are numeric values : their count, maximum, <br>
//!           minimum values, cumul, average <br>
  Standard_EXPORT   virtual  void PrintSum(const Handle(Message_Messenger)& S) const;




  DEFINE_STANDARD_RTTI(IFSelect_SignatureList)

protected:




private: 


Standard_Boolean thesignonly;
Standard_Boolean thelistat;
Standard_Integer thenbnuls;
Handle_TCollection_HAsciiString thename;
TCollection_AsciiString thelastval;
Handle_Dico_DictionaryOfInteger thedicount;
Handle_Dico_DictionaryOfTransient thediclist;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
