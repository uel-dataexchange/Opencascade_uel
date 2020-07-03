// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSelect_ModelModifier_HeaderFile
#define _IGESSelect_ModelModifier_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESSelect_ModelModifier_HeaderFile
#include <Handle_IGESSelect_ModelModifier.hxx>
#endif

#ifndef _IFSelect_Modifier_HeaderFile
#include <IFSelect_Modifier.hxx>
#endif
#ifndef _Handle_IGESData_IGESModel_HeaderFile
#include <Handle_IGESData_IGESModel.hxx>
#endif
#ifndef _Handle_IGESData_Protocol_HeaderFile
#include <Handle_IGESData_Protocol.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Interface_InterfaceModel_HeaderFile
#include <Handle_Interface_InterfaceModel.hxx>
#endif
#ifndef _Handle_Interface_Protocol_HeaderFile
#include <Handle_Interface_Protocol.hxx>
#endif
class IGESData_IGESModel;
class IGESData_Protocol;
class IFSelect_ContextModif;
class Interface_InterfaceModel;
class Interface_Protocol;
class Interface_CopyTool;



class IGESSelect_ModelModifier : public IFSelect_Modifier {

public:

  
  Standard_EXPORT     void Perform(IFSelect_ContextModif& ctx,const Handle(Interface_InterfaceModel)& target,const Handle(Interface_Protocol)& protocol,Interface_CopyTool& TC) const;
  
  Standard_EXPORT   virtual  void PerformProtocol(IFSelect_ContextModif& ctx,const Handle(IGESData_IGESModel)& target,const Handle(IGESData_Protocol)& proto,Interface_CopyTool& TC) const;
  
  Standard_EXPORT   virtual  void Performing(IFSelect_ContextModif& ctx,const Handle(IGESData_IGESModel)& target,Interface_CopyTool& TC) const = 0;




  DEFINE_STANDARD_RTTI(IGESSelect_ModelModifier)

protected:

  
  Standard_EXPORT   IGESSelect_ModelModifier(const Standard_Boolean maychangegraph);



private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
