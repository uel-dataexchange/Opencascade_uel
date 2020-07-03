// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Transfer_TransferDeadLoop_HeaderFile
#define _Transfer_TransferDeadLoop_HeaderFile

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

#ifndef _Transfer_TransferFailure_HeaderFile
#include <Transfer_TransferFailure.hxx>
#endif
#ifndef _Handle_Transfer_TransferDeadLoop_HeaderFile
#include <Handle_Transfer_TransferDeadLoop.hxx>
#endif

#if !defined No_Exception && !defined No_Transfer_TransferDeadLoop
#define Transfer_TransferDeadLoop_Raise_if(CONDITION,MESSAGE) \
  if (CONDITION) Transfer_TransferDeadLoop::Raise(MESSAGE);
#else
#define Transfer_TransferDeadLoop_Raise_if(CONDITION,MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(Transfer_TransferDeadLoop,Transfer_TransferFailure)

#endif
