// File:	StepRepr_PropertySelect.cxx
// Created:	Wed May 10 15:09:05 2000 
// Author:	Andrey BETENEV
// Generator:	ExpToCas (EXPRESS -> CASCADE/XSTEP Translator) V1.1
// Copyright:	Matra Datavision 2000

#include <StepRepr_PropertySelect.hxx>

//=======================================================================
//function : StepRepr_PropertySelect
//purpose  : 
//=======================================================================

StepRepr_PropertySelect::StepRepr_PropertySelect ()
{
}

//=======================================================================
//function : CaseNum
//purpose  : 
//=======================================================================

Standard_Integer StepRepr_PropertySelect::CaseNum (const Handle(Standard_Transient)& ent) const
{
  if (ent.IsNull()) return 0;
  if (ent->IsKind(STANDARD_TYPE(StepRepr_PropertyDefinition))) return 1;
  return 0;
}

//=======================================================================
//function : PropertyDefinition
//purpose  : 
//=======================================================================

Handle(StepRepr_PropertyDefinition) StepRepr_PropertySelect::PropertyDefinition () const
{
  return Handle(StepRepr_PropertyDefinition)::DownCast(Value());
}
