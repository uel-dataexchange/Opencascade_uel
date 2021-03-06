// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Message_Gravity_HeaderFile
#define _Message_Gravity_HeaderFile

//! Defines gravity level of messages <br>
//! - Trace: low-level details on algorithm execution (usually for debug purposes) <br>
//! - Info: informative message <br>
//! - Warning: warning message <br>
//! - Alarm: non-critical error <br>
//! - Fail: fatal error <br>
enum Message_Gravity {
Message_Trace,
Message_Info,
Message_Warning,
Message_Alarm,
Message_Fail
};

#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif

#endif
