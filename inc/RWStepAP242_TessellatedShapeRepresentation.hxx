// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _RWStepAP242_TessellatedShapeRepresentation_HeaderFile
#define _RWStepAP242_TessellatedShapeRepresentation_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Handle.hxx>

#include <Standard_Integer.hxx>
#include <StepData_StepReaderData.hxx>

#include <StepAP242_TessellatedShapeRepresentation.hxx>


class StepData_StepReaderData;
class Interface_Check;
class StepData_StepWriter;
class Interface_EntityIterator;


//! Read & Write Module for AdvancedBrepShapeRepresentation <br>
class RWStepAP242_TessellatedShapeRepresentation  {
public:

  DEFINE_STANDARD_ALLOC
  
  Standard_EXPORT   RWStepAP242_TessellatedShapeRepresentation();
  
  Standard_EXPORT     void ReadStep(const Handle(StepData_StepReaderData)& data,const Standard_Integer num,Handle(Interface_Check)& ach,const Handle(StepAP242_TessellatedShapeRepresentation)& ent) const;
  
  Standard_EXPORT     void WriteStep(StepData_StepWriter& SW,const Handle(StepAP242_TessellatedShapeRepresentation)& ent) const;
  
  Standard_EXPORT     void Share(const Handle(StepAP242_TessellatedShapeRepresentation)& ent,Interface_EntityIterator& iter) const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
