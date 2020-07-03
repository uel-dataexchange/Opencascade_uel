// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESControl_Writer_HeaderFile
#define _IGESControl_Writer_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Transfer_FinderProcess_HeaderFile
#include <Handle_Transfer_FinderProcess.hxx>
#endif
#ifndef _Handle_IGESData_IGESModel_HeaderFile
#include <Handle_IGESData_IGESModel.hxx>
#endif
#ifndef _IGESData_BasicEditor_HeaderFile
#include <IGESData_BasicEditor.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_IGESData_IGESEntity_HeaderFile
#include <Handle_IGESData_IGESEntity.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class Transfer_FinderProcess;
class IGESData_IGESModel;
class TopoDS_Shape;
class Standard_Transient;
class IGESData_IGESEntity;


//! This class creates and writes <br>
//! IGES files from CAS.CADE models. An IGES file can be written to <br>
//! an existing IGES file or to a new one. <br>
//! The translation can be performed in one or several <br>
//! operations. Each translation operation <br>
//! outputs a distinct root entity in the IGES file. <br>
//!   To write an IGES file it is possible to use the following sequence: <br>
//! To modify the IGES file header or to change translation <br>
//! parameters it is necessary to use class Interface_Static (see <br>
//! IGESParameters and GeneralParameters). <br>
class IGESControl_Writer  {
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

  //! Creates a writer object with the <br>
//! default unit (millimeters) and write mode (Face). <br>
//! IGESControl_Writer (const Standard_CString unit, <br>
//! const Standard_Integer modecr = 0); <br>
  Standard_EXPORT   IGESControl_Writer();
  //! Creates a writer with given <br>
//! values for units and for write mode. <br>
//! unit may be any unit that is accepted by the IGES standard. <br>
//! By default, it is the millimeter. <br>
//! modecr defines the write mode and may be: <br>
//! - 0: Faces (default) <br>
//! - 1: BRep. <br>
  Standard_EXPORT   IGESControl_Writer(const Standard_CString unit,const Standard_Integer modecr = 0);
  //! Creates a writer object with the <br>
//! prepared IGES model model in write mode. <br>
//! modecr defines the write mode and may be: <br>
//! - 0: Faces (default) <br>
//! - 1: BRep. <br>
  Standard_EXPORT   IGESControl_Writer(const Handle(IGESData_IGESModel)& model,const Standard_Integer modecr = 0);
  //! Returns the IGES model to be written in output. <br>
  Standard_EXPORT     Handle_IGESData_IGESModel Model() const;
  
  Standard_EXPORT     Handle_Transfer_FinderProcess TransferProcess() const;
  //! Returns/Sets the TransferProcess : it contains final results <br>
//!           and if some, check messages <br>
  Standard_EXPORT     void SetTransferProcess(const Handle(Transfer_FinderProcess)& TP) ;
  //! Translates a Shape to IGES Entities and adds them to the model <br>
//!           Returns True if done, False if Shape not suitable for IGES or null <br>
  Standard_EXPORT     Standard_Boolean AddShape(const TopoDS_Shape& sh) ;
  //! Translates a Geometry (Surface or Curve) to IGES Entities and <br>
//!           adds them to the model <br>
//!           Returns True if done, False if geom is neither a Surface or <br>
//!           a Curve suitable for IGES or is null <br>
  Standard_EXPORT     Standard_Boolean AddGeom(const Handle(Standard_Transient)& geom) ;
  //! Adds an IGES entity (and the ones it references) to the model <br>
  Standard_EXPORT     Standard_Boolean AddEntity(const Handle(IGESData_IGESEntity)& ent) ;
  //! Computes the entities found in <br>
//! the model, which is ready to be written. <br>
//! This contrasts with the default computation of headers only. <br>
  Standard_EXPORT     void ComputeModel() ;
  //! Computes then writes the model to an OStream <br>
//!           Returns True when done, false in case of error <br>
  Standard_EXPORT     Standard_Boolean Write(Standard_OStream& S,const Standard_Boolean fnes = Standard_False) ;
  //! Prepares and writes an IGES model <br>
//! either to an OStream, S or to a file name,CString. <br>
//! Returns True if the operation was performed correctly and <br>
//! False if an error occurred (for instance, <br>
//! if the processor could not create the file). <br>
  Standard_EXPORT     Standard_Boolean Write(const Standard_CString file,const Standard_Boolean fnes = Standard_False) ;
  //! Prints Statistics about Transfer <br>
  Standard_EXPORT     void PrintStatsTransfer(const Standard_Integer what,const Standard_Integer mode = 0) const;





protected:





private:



Handle_Transfer_FinderProcess theTP;
Handle_IGESData_IGESModel themod;
IGESData_BasicEditor thedit;
Standard_Integer thecr;
Standard_Boolean thest;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
