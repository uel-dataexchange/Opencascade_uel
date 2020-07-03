// File:	RWStepRepr_RWGeneralPropertyAssociation.cxx
// Created:	Wed May 10 15:09:09 2000 
// Author:	Andrey BETENEV
// Generator:	ExpToCas (EXPRESS -> CASCADE/XSTEP Translator) V1.1
// Copyright:	Matra Datavision 2000

#include <RWStepRepr_RWGeneralPropertyAssociation.hxx>

//=======================================================================
//function : RWStepRepr_RWGeneralPropertyAssociation
//purpose  : 
//=======================================================================

RWStepRepr_RWGeneralPropertyAssociation::RWStepRepr_RWGeneralPropertyAssociation ()
{
}

//=======================================================================
//function : ReadStep
//purpose  : 
//=======================================================================

void RWStepRepr_RWGeneralPropertyAssociation::ReadStep (const Handle(StepData_StepReaderData)& data,
                                              const Standard_Integer num,
                                              Handle(Interface_Check)& ach,
                                              const Handle(StepRepr_GeneralPropertyAssociation) &ent) const
{
  // Check number of parameters
  if ( ! data->CheckNbParams(num,4,ach,"role_association") ) return;

  // Own fields of RoleAssociation
  Handle(TCollection_HAsciiString) aName;
  data->ReadString(num, 1, "name", ach, aName);

  Handle(TCollection_HAsciiString) aDesc;
  data->ReadString(num, 2, "desc", ach, aDesc);

  Handle(StepBasic_GeneralProperty) aProperty;
  data->ReadEntity (num, 3, "property", ach, STANDARD_TYPE(StepBasic_GeneralProperty), aProperty);

  StepRepr_PropertySelect aItemWithProperty;
  data->ReadEntity (num, 4, "item_with_property", ach, aItemWithProperty);

  // Initialize entity
  ent->Init(aName, aDesc, aProperty,
            aItemWithProperty);
}

//=======================================================================
//function : WriteStep
//purpose  : 
//=======================================================================

void RWStepRepr_RWGeneralPropertyAssociation::WriteStep (StepData_StepWriter& SW,
                                               const Handle(StepRepr_GeneralPropertyAssociation) &ent) const
{
  // Own fields of RoleAssociation
	SW.Send(ent->Name());
	SW.Send(ent->Desc());
  SW.Send (ent->Property());

  SW.Send (ent->ItemWithProperty().Value());
}

//=======================================================================
//function : Share
//purpose  : 
//=======================================================================

void RWStepRepr_RWGeneralPropertyAssociation::Share (const Handle(StepRepr_GeneralPropertyAssociation) &ent,
                                           Interface_EntityIterator& iter) const
{

  // Own fields of RoleAssociation

  iter.AddItem (ent->Property());

  iter.AddItem (ent->ItemWithProperty().Value());
}
