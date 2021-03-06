// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Message_Messenger_HeaderFile
#define _Message_Messenger_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Message_Messenger_HeaderFile
#include <Handle_Message_Messenger.hxx>
#endif

#ifndef _Message_SequenceOfPrinters_HeaderFile
#include <Message_SequenceOfPrinters.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_Message_Printer_HeaderFile
#include <Handle_Message_Printer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Type_HeaderFile
#include <Handle_Standard_Type.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Message_Gravity_HeaderFile
#include <Message_Gravity.hxx>
#endif
class Message_Printer;
class Standard_Type;
class Message_SequenceOfPrinters;
class TCollection_AsciiString;
class TCollection_ExtendedString;


//! Messenger is API class providing general-purpose interface for <br>
//!          libraries that may issue text messages without knowledge <br>
//!          of how these messages will be further processed. <br>
//! <br>
//!          The messenger contains a sequence of "printers" which can be <br>
//!          customized by the application, and dispatches every received <br>
//!          message to all the printers. <br>
//! <br>
//!          For convenience, a number of operators << are defined with left <br>
//!          argument being Handle(Message_Messenger); thus it can be used <br>
//!          with syntax similar to C++ streams. <br>
//!          Note that all these operators use trace level Warning. <br>
class Message_Messenger : public MMgt_TShared {

public:

  //! Empty constructor; initializes by single printer directed to cout. <br>
//!          Note: the default messenger is not empty but directed to cout <br>
//!          in order to protect against possibility to forget defining printers. <br>
//!          If printing to cout is not needed, clear messenger by GetPrinters().Clear() <br>
  Standard_EXPORT   Message_Messenger();
  //! Create messenger with single printer <br>
  Standard_EXPORT   Message_Messenger(const Handle(Message_Printer)& thePrinter);
  //! Add a printer to the messenger. <br>
//!          The printer will be added only if it is not yet in the list. <br>
//!          Returns True if printer has been added. <br>
  Standard_EXPORT     Standard_Boolean AddPrinter(const Handle(Message_Printer)& thePrinter) ;
  //! Removes specified printer from the messenger. <br>
//!          Returns True if this printer has been found in the list <br>
//!          and removed. <br>
  Standard_EXPORT     Standard_Boolean RemovePrinter(const Handle(Message_Printer)& thePrinter) ;
  //! Removes printers of specified type (including derived classes) <br>
//!          from the messenger. <br>
//!          Returns number of removed printers. <br>
  Standard_EXPORT     Standard_Integer RemovePrinters(const Handle(Standard_Type)& theType) ;
  //! Returns current sequence of printers <br>
       const Message_SequenceOfPrinters& Printers() const;
  //! Returns sequence of printers <br>
//!          The sequence can be modified. <br>
        Message_SequenceOfPrinters& ChangePrinters() ;
  //! Dispatch a message to all the printers in the list. <br>
//!          Three versions of string representations are accepted for <br>
//!          convenience, by default all are converted to ExtendedString. <br>
//!          The parameter putEndl specifies whether the new line should <br>
//!          be started after this message (default) or not (may have <br>
//!          sense in some conditions). <br>
  Standard_EXPORT     void Send(const Standard_CString theString,const Message_Gravity theGravity = Message_Warning,const Standard_Boolean putEndl = Standard_True) const;
  //! See above <br>
  Standard_EXPORT     void Send(const TCollection_AsciiString& theString,const Message_Gravity theGravity = Message_Warning,const Standard_Boolean putEndl = Standard_True) const;
  //! See above <br>
  Standard_EXPORT     void Send(const TCollection_ExtendedString& theString,const Message_Gravity theGravity = Message_Warning,const Standard_Boolean putEndl = Standard_True) const;




  DEFINE_STANDARD_RTTI(Message_Messenger)

protected:




private: 


Message_SequenceOfPrinters myPrinters;


};


#include <Message_Messenger.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
