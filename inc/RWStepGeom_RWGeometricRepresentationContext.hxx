// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _RWStepGeom_RWGeometricRepresentationContext_HeaderFile
#define _RWStepGeom_RWGeometricRepresentationContext_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_StepData_StepReaderData_HeaderFile
#include <Handle_StepData_StepReaderData.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Interface_Check_HeaderFile
#include <Handle_Interface_Check.hxx>
#endif
#ifndef _Handle_StepGeom_GeometricRepresentationContext_HeaderFile
#include <Handle_StepGeom_GeometricRepresentationContext.hxx>
#endif
class StepData_StepReaderData;
class Interface_Check;
class StepGeom_GeometricRepresentationContext;
class StepData_StepWriter;


//! Read & Write Module for GeometricRepresentationContext <br>
class RWStepGeom_RWGeometricRepresentationContext  {
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

  
  Standard_EXPORT   RWStepGeom_RWGeometricRepresentationContext();
  
  Standard_EXPORT     void ReadStep(const Handle(StepData_StepReaderData)& data,const Standard_Integer num,Handle(Interface_Check)& ach,const Handle(StepGeom_GeometricRepresentationContext)& ent) const;
  
  Standard_EXPORT     void WriteStep(StepData_StepWriter& SW,const Handle(StepGeom_GeometricRepresentationContext)& ent) const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
