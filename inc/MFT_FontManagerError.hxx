// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MFT_FontManagerError_HeaderFile
#define _MFT_FontManagerError_HeaderFile

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

#ifndef _Standard_TypeMismatch_HeaderFile
#include <Standard_TypeMismatch.hxx>
#endif
#ifndef _Handle_MFT_FontManagerError_HeaderFile
#include <Handle_MFT_FontManagerError.hxx>
#endif

#if !defined No_Exception && !defined No_MFT_FontManagerError
#define MFT_FontManagerError_Raise_if(CONDITION,MESSAGE) \
  if (CONDITION) MFT_FontManagerError::Raise(MESSAGE);
#else
#define MFT_FontManagerError_Raise_if(CONDITION,MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(MFT_FontManagerError,Standard_TypeMismatch)

#endif
