// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDimen_ToolOrdinateDimension_HeaderFile
#define _IGESDimen_ToolOrdinateDimension_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_IGESDimen_OrdinateDimension_HeaderFile
#include <Handle_IGESDimen_OrdinateDimension.hxx>
#endif
#ifndef _Handle_IGESData_IGESReaderData_HeaderFile
#include <Handle_IGESData_IGESReaderData.hxx>
#endif
#ifndef _Handle_Interface_Check_HeaderFile
#include <Handle_Interface_Check.hxx>
#endif
#ifndef _Handle_Message_Messenger_HeaderFile
#include <Handle_Message_Messenger.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_DomainError;
class IGESDimen_OrdinateDimension;
class IGESData_IGESReaderData;
class IGESData_ParamReader;
class IGESData_IGESWriter;
class Interface_EntityIterator;
class IGESData_DirChecker;
class Interface_ShareTool;
class Interface_Check;
class Interface_CopyTool;
class IGESData_IGESDumper;
class Message_Messenger;


//! Tool to work on a OrdinateDimension. Called by various Modules <br>
//!           (ReadWriteModule, GeneralModule, SpecificModule) <br>
class IGESDimen_ToolOrdinateDimension  {
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

  //! Returns a ToolOrdinateDimension, ready to work <br>
  Standard_EXPORT   IGESDimen_ToolOrdinateDimension();
  //! Reads own parameters from file. <PR> gives access to them, <br>
//!           <IR> detains parameter types and values <br>
  Standard_EXPORT     void ReadOwnParams(const Handle(IGESDimen_OrdinateDimension)& ent,const Handle(IGESData_IGESReaderData)& IR,IGESData_ParamReader& PR) const;
  //! Writes own parameters to IGESWriter <br>
  Standard_EXPORT     void WriteOwnParams(const Handle(IGESDimen_OrdinateDimension)& ent,IGESData_IGESWriter& IW) const;
  //! Lists the Entities shared by a OrdinateDimension <ent>, from <br>
//!           its specific (own) parameters <br>
  Standard_EXPORT     void OwnShared(const Handle(IGESDimen_OrdinateDimension)& ent,Interface_EntityIterator& iter) const;
  //! Returns specific DirChecker <br>
  Standard_EXPORT     IGESData_DirChecker DirChecker(const Handle(IGESDimen_OrdinateDimension)& ent) const;
  //! Performs Specific Semantic Check <br>
  Standard_EXPORT     void OwnCheck(const Handle(IGESDimen_OrdinateDimension)& ent,const Interface_ShareTool& shares,Handle(Interface_Check)& ach) const;
  //! Copies Specific Parameters <br>
  Standard_EXPORT     void OwnCopy(const Handle(IGESDimen_OrdinateDimension)& entfrom,const Handle(IGESDimen_OrdinateDimension)& entto,Interface_CopyTool& TC) const;
  //! Dump of Specific Parameters <br>
  Standard_EXPORT     void OwnDump(const Handle(IGESDimen_OrdinateDimension)& ent,const IGESData_IGESDumper& dumper,const Handle(Message_Messenger)& S,const Standard_Integer own) const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
