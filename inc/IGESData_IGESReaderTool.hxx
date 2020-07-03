// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESData_IGESReaderTool_HeaderFile
#define _IGESData_IGESReaderTool_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Interface_ParamList_HeaderFile
#include <Handle_Interface_ParamList.hxx>
#endif
#ifndef _Handle_IGESData_FileRecognizer_HeaderFile
#include <Handle_IGESData_FileRecognizer.hxx>
#endif
#ifndef _Interface_GeneralLib_HeaderFile
#include <Interface_GeneralLib.hxx>
#endif
#ifndef _Interface_ReaderLib_HeaderFile
#include <Interface_ReaderLib.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _IGESData_IGESType_HeaderFile
#include <IGESData_IGESType.hxx>
#endif
#ifndef _IGESData_ReadStage_HeaderFile
#include <IGESData_ReadStage.hxx>
#endif
#ifndef _Handle_Interface_Check_HeaderFile
#include <Handle_Interface_Check.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Interface_FileReaderTool_HeaderFile
#include <Interface_FileReaderTool.hxx>
#endif
#ifndef _Handle_IGESData_IGESReaderData_HeaderFile
#include <Handle_IGESData_IGESReaderData.hxx>
#endif
#ifndef _Handle_IGESData_Protocol_HeaderFile
#include <Handle_IGESData_Protocol.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_Interface_InterfaceModel_HeaderFile
#include <Handle_Interface_InterfaceModel.hxx>
#endif
#ifndef _Handle_IGESData_IGESEntity_HeaderFile
#include <Handle_IGESData_IGESEntity.hxx>
#endif
class Interface_ParamList;
class IGESData_FileRecognizer;
class Interface_Check;
class IGESData_IGESReaderData;
class IGESData_Protocol;
class Standard_Transient;
class Interface_InterfaceModel;
class IGESData_IGESEntity;
class IGESData_DirPart;
class IGESData_ParamReader;


//! specific FileReaderTool for IGES <br>
//!           Parameters are accessed through specific objects, ParamReaders <br>
class IGESData_IGESReaderTool  : public Interface_FileReaderTool {
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

  //! creates IGESReaderTool to work with an IGESReaderData and an <br>
//!           IGES Protocol. <br>
//!           Actually, no Lib is used <br>
  Standard_EXPORT   IGESData_IGESReaderTool(const Handle(IGESData_IGESReaderData)& reader,const Handle(IGESData_Protocol)& protocol);
  //! binds empty entities to records, works with the Protocol <br>
//!           (from IGESData) stored and later used <br>
//!           RQ : Actually, sets DNum into IGES Entities <br>
//!           Also loads the list of parameters for ParamReader <br>
  Standard_EXPORT     void Prepare(const Handle(IGESData_FileRecognizer)& reco) ;
  //! recognizes records by asking Protocol (on data of DirType) <br>
  Standard_EXPORT     Standard_Boolean Recognize(const Standard_Integer num,Handle(Interface_Check)& ach,Handle(Standard_Transient)& ent) ;
  //! fills model's header, that is, its GlobalSection <br>
  Standard_EXPORT     void BeginRead(const Handle(Interface_InterfaceModel)& amodel) ;
  //! fills an entity, given record no; works by calling ReadDirPart <br>
//!           then ReadParams (with help of a ParamReader), then if required <br>
//!           ReadProps and ReadAssocs, from IGESEntity <br>
//!           Returns True if no fail has been recorded <br>
  Standard_EXPORT     Standard_Boolean AnalyseRecord(const Standard_Integer num,const Handle(Standard_Transient)& anent,Handle(Interface_Check)& acheck) ;
  //! after reading entities, true line weights can be computed <br>
  Standard_EXPORT   virtual  void EndRead(const Handle(Interface_InterfaceModel)& amodel) ;
  //! Reads directory part componants from file; DP is the litteral <br>
//!           directory part, IR detains entities referenced by DP <br>
  Standard_EXPORT     void ReadDir(const Handle(IGESData_IGESEntity)& ent,const Handle(IGESData_IGESReaderData)& IR,const IGESData_DirPart& DP,Handle(Interface_Check)& ach) const;
  //! Performs Reading of own Parameters for each IGESEntity <br>
//!           Works with the ReaderLib loaded with ReadWriteModules for IGES <br>
//!           In case of failure, tries UndefinedEntity from IGES <br>
  Standard_EXPORT     void ReadOwnParams(const Handle(IGESData_IGESEntity)& ent,const Handle(IGESData_IGESReaderData)& IR,IGESData_ParamReader& PR) const;
  //! Reads Property List, if there is (if not, does nothing) <br>
//!           criterium is : current parameter of PR remains inside params <br>
//!           list, and Stage is "Own" <br>
//!           Current parameter must be a positive integer, which value <br>
//!           gives the length of the list; else, a Fail is produced (into <br>
//!           Check of PR) and reading process is stopped <br>
  Standard_EXPORT     void ReadProps(const Handle(IGESData_IGESEntity)& ent,const Handle(IGESData_IGESReaderData)& IR,IGESData_ParamReader& PR) const;
  //! Reads Associativity List, if there is (if not, does nothing) <br>
//!           criterium is : current parameter of PR remains inside params <br>
//!           list, and Stage is "Own" <br>
//!           Same conditions as above; in addition, no parameter must be <br>
//!           let after the list once read <br>
//!           Note that "Associated" entities are not declared "Shared" <br>
  Standard_EXPORT     void ReadAssocs(const Handle(IGESData_IGESEntity)& ent,const Handle(IGESData_IGESReaderData)& IR,IGESData_ParamReader& PR) const;





protected:





private:



Handle_Interface_ParamList thelist;
Handle_IGESData_FileRecognizer thereco;
Interface_GeneralLib theglib;
Interface_ReaderLib therlib;
Standard_Integer thecnum;
IGESData_IGESType thectyp;
IGESData_ReadStage thestep;
Handle_Interface_Check thechk;
Standard_Integer thegradweight;
Standard_Real themaxweight;
Standard_Real thedefweight;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
