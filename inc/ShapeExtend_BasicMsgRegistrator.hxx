// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeExtend_BasicMsgRegistrator_HeaderFile
#define _ShapeExtend_BasicMsgRegistrator_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_ShapeExtend_BasicMsgRegistrator_HeaderFile
#include <Handle_ShapeExtend_BasicMsgRegistrator.hxx>
#endif

#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Message_Gravity_HeaderFile
#include <Message_Gravity.hxx>
#endif
class Standard_Transient;
class Message_Msg;
class TopoDS_Shape;


//! Abstract class that can be used for attaching messages <br>
//!          to the objects (e.g. shapes). <br>
//!          It is used by ShapeHealing algorithms to attach a message <br>
//!          describing encountered case (e.g. removing small edge from <br>
//!          a wire). <br>
class ShapeExtend_BasicMsgRegistrator : public MMgt_TShared {

public:

  //! Empty constructor. <br>
  Standard_EXPORT   ShapeExtend_BasicMsgRegistrator();
  //! Sends a message to be attached to the object. <br>
//!          Object can be of any type interpreted by redefined MsgRegistrator. <br>
  Standard_EXPORT   virtual  void Send(const Handle(Standard_Transient)& object,const Message_Msg& message,const Message_Gravity gravity) ;
  //! Sends a message to be attached to the shape. <br>
  Standard_EXPORT   virtual  void Send(const TopoDS_Shape& shape,const Message_Msg& message,const Message_Gravity gravity) ;
  //! Calls Send method with Null Transient. <br>
  Standard_EXPORT   virtual  void Send(const Message_Msg& message,const Message_Gravity gravity) ;




  DEFINE_STANDARD_RTTI(ShapeExtend_BasicMsgRegistrator)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
