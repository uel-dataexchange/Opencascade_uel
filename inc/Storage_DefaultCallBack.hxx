// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Storage_DefaultCallBack_HeaderFile
#define _Storage_DefaultCallBack_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Storage_DefaultCallBack_HeaderFile
#include <Handle_Storage_DefaultCallBack.hxx>
#endif

#ifndef _Storage_CallBack_HeaderFile
#include <Storage_CallBack.hxx>
#endif
#ifndef _Handle_Standard_Persistent_HeaderFile
#include <Handle_Standard_Persistent.hxx>
#endif
#ifndef _Handle_Storage_Schema_HeaderFile
#include <Handle_Storage_Schema.hxx>
#endif
class Standard_Persistent;
class Storage_Schema;
class Storage_BaseDriver;



class Storage_DefaultCallBack : public Storage_CallBack {

public:

  
  Standard_EXPORT   Storage_DefaultCallBack();
  
  Standard_EXPORT     Handle_Standard_Persistent New() const;
  
  Standard_EXPORT     void Add(const Handle(Standard_Persistent)& aPers,const Handle(Storage_Schema)& aSchema) const;
  
  Standard_EXPORT     void Write(const Handle(Standard_Persistent)& aPers,Storage_BaseDriver& aDriver,const Handle(Storage_Schema)& aSchema) const;
  
  Standard_EXPORT     void Read(const Handle(Standard_Persistent)& aPers,Storage_BaseDriver& aDriver,const Handle(Storage_Schema)& aSchema) const;




  DEFINE_STANDARD_RTTI(Storage_DefaultCallBack)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
