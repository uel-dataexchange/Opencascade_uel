
#include <RWStepBasic_RWConversionBasedUnitAndLengthUnit.ixx>
#include <StepBasic_ConversionBasedUnit.hxx>
#include <StepBasic_LengthUnit.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <StepBasic_MeasureWithUnit.hxx>


#include <Interface_EntityIterator.hxx>


#include <StepBasic_ConversionBasedUnitAndLengthUnit.hxx>


RWStepBasic_RWConversionBasedUnitAndLengthUnit::RWStepBasic_RWConversionBasedUnitAndLengthUnit () {}

void RWStepBasic_RWConversionBasedUnitAndLengthUnit::ReadStep
	(const Handle(StepData_StepReaderData)& data,
	 const Standard_Integer num0,
	 Handle(Interface_Check)& ach,
	 const Handle(StepBasic_ConversionBasedUnitAndLengthUnit)& ent) const
{

	Standard_Integer num = num0;


	// --- Instance of plex componant ConversionBasedUnit ---

	if (!data->CheckNbParams(num,2,ach,"conversion_based_unit")) return;

	// --- field : name ---

	Handle(TCollection_HAsciiString) aName;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat1 =` not needed
	data->ReadString (num,1,"name",ach,aName);

	// --- field : conversionFactor ---

	Handle(StepBasic_MeasureWithUnit) aConversionFactor;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat2 =` not needed
	data->ReadEntity(num, 2,"conversion_factor", ach, STANDARD_TYPE(StepBasic_MeasureWithUnit), aConversionFactor);

	num = data->NextForComplex(num);

	// --- Instance of plex componant LengthUnit ---

	if (!data->CheckNbParams(num,0,ach,"length_unit")) return;

	num = data->NextForComplex(num);

	// --- Instance of common supertype NamedUnit ---

	if (!data->CheckNbParams(num,1,ach,"named_unit")) return;
	// --- field : dimensions ---


	Handle(StepBasic_DimensionalExponents) aDimensions;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat3 =` not needed
	data->ReadEntity(num, 1,"dimensions", ach, STANDARD_TYPE(StepBasic_DimensionalExponents), aDimensions);

	//--- Initialisation of the red entity ---

	ent->Init(aDimensions,aName,aConversionFactor);
}


void RWStepBasic_RWConversionBasedUnitAndLengthUnit::WriteStep
	(StepData_StepWriter& SW,
	 const Handle(StepBasic_ConversionBasedUnitAndLengthUnit)& ent) const
{

	// --- Instance of plex componant ConversionBasedUnit ---

	SW.StartEntity("CONVERSION_BASED_UNIT");
	// --- field : name ---

	SW.Send(ent->Name());
	// --- field : conversionFactor ---

	SW.Send(ent->ConversionFactor());

	// --- Instance of plex componant LengthUnit ---

	SW.StartEntity("LENGTH_UNIT");

	// --- Instance of common supertype NamedUnit ---

	SW.StartEntity("NAMED_UNIT");
	// --- field : dimensions ---

	SW.Send(ent->Dimensions());
}


void RWStepBasic_RWConversionBasedUnitAndLengthUnit::Share(const Handle(StepBasic_ConversionBasedUnitAndLengthUnit)& ent, Interface_EntityIterator& iter) const
{

	iter.GetOneItem(ent->Dimensions());


	iter.GetOneItem(ent->ConversionFactor());
}

