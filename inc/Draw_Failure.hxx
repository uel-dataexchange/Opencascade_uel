// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Draw_Failure_HeaderFile
#define _Draw_Failure_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_DefineException_HeaderFile
#include <Standard_DefineException.hxx>
#endif
#ifndef _Standard_SStream_HeaderFile
#include <Standard_SStream.hxx>
#endif

#ifndef _Standard_Failure_HeaderFile
#include <Standard_Failure.hxx>
#endif
#ifndef _Handle_Draw_Failure_HeaderFile
#include <Handle_Draw_Failure.hxx>
#endif

#if !defined No_Exception && !defined No_Draw_Failure
#define Draw_Failure_Raise_if(CONDITION,MESSAGE) \
  if (CONDITION) Draw_Failure::Raise(MESSAGE);
#else
#define Draw_Failure_Raise_if(CONDITION,MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(Draw_Failure,Standard_Failure)

#endif
