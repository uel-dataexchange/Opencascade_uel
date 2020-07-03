// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDimen_SpecificModule_HeaderFile
#define _IGESDimen_SpecificModule_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESDimen_SpecificModule_HeaderFile
#include <Handle_IGESDimen_SpecificModule.hxx>
#endif

#ifndef _IGESData_SpecificModule_HeaderFile
#include <IGESData_SpecificModule.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_IGESData_IGESEntity_HeaderFile
#include <Handle_IGESData_IGESEntity.hxx>
#endif
#ifndef _Handle_Message_Messenger_HeaderFile
#include <Handle_Message_Messenger.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class IGESData_IGESEntity;
class IGESData_IGESDumper;
class Message_Messenger;


//! Defines Services attached to IGES Entities : <br>
//!           Dump & OwnCorrect, for IGESDimen <br>
class IGESDimen_SpecificModule : public IGESData_SpecificModule {

public:

  //! Creates a SpecificModule from IGESDimen & puts it into SpecificLib <br>
  Standard_EXPORT   IGESDimen_SpecificModule();
  //! Specific Dump (own parameters) for IGESDimen <br>
  Standard_EXPORT     void OwnDump(const Standard_Integer CN,const Handle(IGESData_IGESEntity)& ent,const IGESData_IGESDumper& dumper,const Handle(Message_Messenger)& S,const Standard_Integer own) const;
  //! Performs non-ambiguous Corrections on Entities which support <br>
//!           them (BasicDimension,CenterLine,DimensionDisplayData, <br>
//!           DimensionTolerance,DimensionUnits,DimensionedGeometry, <br>
//!           NewDimensionedGeometry,Section,WitnessLine) <br>
  Standard_EXPORT   virtual  Standard_Boolean OwnCorrect(const Standard_Integer CN,const Handle(IGESData_IGESEntity)& ent) const;




  DEFINE_STANDARD_RTTI(IGESDimen_SpecificModule)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
