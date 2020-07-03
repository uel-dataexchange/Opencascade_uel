// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XSControl_SelectForTransfer_HeaderFile
#define _XSControl_SelectForTransfer_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_XSControl_SelectForTransfer_HeaderFile
#include <Handle_XSControl_SelectForTransfer.hxx>
#endif

#ifndef _Handle_XSControl_TransferReader_HeaderFile
#include <Handle_XSControl_TransferReader.hxx>
#endif
#ifndef _Handle_Transfer_ActorOfTransientProcess_HeaderFile
#include <Handle_Transfer_ActorOfTransientProcess.hxx>
#endif
#ifndef _IFSelect_SelectExtract_HeaderFile
#include <IFSelect_SelectExtract.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_Interface_InterfaceModel_HeaderFile
#include <Handle_Interface_InterfaceModel.hxx>
#endif
class XSControl_TransferReader;
class Transfer_ActorOfTransientProcess;
class Standard_Transient;
class Interface_InterfaceModel;
class TCollection_AsciiString;


//! This selection selects the entities which are recognised for <br>
//!           transfer by an Actor for Read : current one or another one. <br>
//! <br>
//!           An Actor is an operator which runs transfers from interface <br>
//!           entities to objects for Imagine. It has a method to recognize <br>
//!           the entities it can process (by default, it recognises all, <br>
//!           this method can be redefined). <br>
//! <br>
//!           A TransferReader brings an Actor, according to the currently <br>
//!           selected norm and transfer conditions. <br>
//! <br>
//!           This selection considers, either the current Actor (brought by <br>
//!           the TransferReader, updated as required), or a precise one. <br>
class XSControl_SelectForTransfer : public IFSelect_SelectExtract {

public:

  //! Creates a SelectForTransfer, non initialised <br>
//!           it sorts nothing, unless an Actor has been defined <br>
  Standard_EXPORT   XSControl_SelectForTransfer();
  //! Creates a SelectForTransfer, which will work with the <br>
//!           currently defined Actor brought by the TransferReader <br>
  Standard_EXPORT   XSControl_SelectForTransfer(const Handle(XSControl_TransferReader)& TR);
  //! Sets a TransferReader to sort entities : it brings the Actor, <br>
//!           which may change, while the TransferReader does not <br>
  Standard_EXPORT     void SetReader(const Handle(XSControl_TransferReader)& TR) ;
  //! Sets a precise actor to sort entities <br>
//!           This definition oversedes the creation with a TransferReader <br>
  Standard_EXPORT     void SetActor(const Handle(Transfer_ActorOfTransientProcess)& act) ;
  //! Returns the Actor used as precised one. <br>
//!           Returns a Null Handle for a creation from a TransferReader <br>
//!           without any further setting <br>
  Standard_EXPORT     Handle_Transfer_ActorOfTransientProcess Actor() const;
  //! Returns the Reader (if created with a Reader) <br>
//!           Returns a Null Handle if not created with a Reader <br>
  Standard_EXPORT     Handle_XSControl_TransferReader Reader() const;
  //! Returns True for an Entity which is recognized by the Actor, <br>
//!           either the precised one, or the one defined by TransferReader <br>
  Standard_EXPORT     Standard_Boolean Sort(const Standard_Integer rank,const Handle(Standard_Transient)& ent,const Handle(Interface_InterfaceModel)& model) const;
  //! Returns a text defining the criterium : "Recognized for Transfer [(current actor)]" <br>
  Standard_EXPORT     TCollection_AsciiString ExtractLabel() const;




  DEFINE_STANDARD_RTTI(XSControl_SelectForTransfer)

protected:




private: 


Handle_XSControl_TransferReader theTR;
Handle_Transfer_ActorOfTransientProcess theAC;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
