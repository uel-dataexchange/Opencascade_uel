// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GccAna_NoSolution_HeaderFile
#define _GccAna_NoSolution_HeaderFile

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
#ifndef _Handle_GccAna_NoSolution_HeaderFile
#include <Handle_GccAna_NoSolution.hxx>
#endif

#if !defined No_Exception && !defined No_GccAna_NoSolution
#define GccAna_NoSolution_Raise_if(CONDITION,MESSAGE) \
  if (CONDITION) GccAna_NoSolution::Raise(MESSAGE);
#else
#define GccAna_NoSolution_Raise_if(CONDITION,MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(GccAna_NoSolution,Standard_Failure)

#endif
