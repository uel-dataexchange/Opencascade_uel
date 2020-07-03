// File:	StepRepr_GeneralPropertyAssociation.cxx
// Created:	Wed May 10 15:09:08 2000 
// Author:	Andrey BETENEV
// Generator:	ExpToCas (EXPRESS -> CASCADE/XSTEP Translator) V1.1
// Copyright:	Matra Datavision 2000
#include <StepRepr_GeneralPropertyAssociation.hxx>

//=======================================================================
//function : StepRepr_GeneralPropertyAssociation
//purpose  : 
//=======================================================================
IMPLEMENT_STANDARD_RTTIEXT_1(StepRepr_GeneralPropertyAssociation,MMgt_TShared)

StepRepr_GeneralPropertyAssociation::StepRepr_GeneralPropertyAssociation ()
{
}

//=======================================================================
//function : Init
//purpose  : 
//=======================================================================

void StepRepr_GeneralPropertyAssociation::Init(const Handle(TCollection_HAsciiString)& theName, 
	const Handle(TCollection_HAsciiString)& theDesc, const Handle(StepBasic_GeneralProperty)& aProperty,
                                      const StepRepr_PropertySelect& aItemWithProperty)
{
	myName = theName;
	myDesc = theDesc;
  myProperty = aProperty;

  myItemWithProperty = aItemWithProperty;
}

//=======================================================================
//function : Property
//purpose  : 
//=======================================================================

Handle(StepBasic_GeneralProperty) StepRepr_GeneralPropertyAssociation::Property () const
{
  return myProperty;
}

//=======================================================================
//function : SetProperty
//purpose  : 
//=======================================================================

void StepRepr_GeneralPropertyAssociation::SetProperty (const Handle(StepBasic_GeneralProperty)& aProperty)
{
  myProperty = aProperty;
}

//=======================================================================
//function : ItemWithProperty
//purpose  : 
//=======================================================================

StepRepr_PropertySelect StepRepr_GeneralPropertyAssociation::ItemWithProperty() const
{
  return myItemWithProperty;
}

//=======================================================================
//function : SetItemWithRole
//purpose  : 
//=======================================================================

void StepRepr_GeneralPropertyAssociation::SetItemWithProperty (const StepRepr_PropertySelect& aItemWithProperty)
{
  myItemWithProperty = aItemWithProperty;
}

Handle(TCollection_HAsciiString) StepRepr_GeneralPropertyAssociation::Name() const
{
	return myName;
}

Handle(TCollection_HAsciiString) StepRepr_GeneralPropertyAssociation::Desc() const
{
	return myDesc;
}
