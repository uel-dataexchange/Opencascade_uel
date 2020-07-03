
#include <RWHeaderSection_RWFileName.ixx>
#include <Interface_HArray1OfHAsciiString.hxx>


RWHeaderSection_RWFileName::RWHeaderSection_RWFileName () {}

void RWHeaderSection_RWFileName::ReadStep
	(const Handle(StepData_StepReaderData)& data,
	 const Standard_Integer num,
	 Handle(Interface_Check)& ach,
	 const Handle(HeaderSection_FileName)& ent) const
{


	// --- Number of Parameter Control ---

	if (!data->CheckNbParams(num,7,ach,"file_name has not 7 parameter(s)")) return;

	// --- own field : name ---

	Handle(TCollection_HAsciiString) aName;
	Standard_Boolean stat1;
	stat1 = data->ReadString (num,1,"name",ach,aName);
	if (!stat1 || aName.IsNull()) {
		aName = new TCollection_HAsciiString("");
		stat1 = Standard_True;
	}
	// --- own field : timeStamp ---

	Handle(TCollection_HAsciiString) aTimeStamp;
	Standard_Boolean stat2;
	stat2 = data->ReadString (num,2,"time_stamp",ach,aTimeStamp);
	if (!stat2 || aTimeStamp.IsNull()) {
		aTimeStamp = new TCollection_HAsciiString("");
		stat2 = Standard_True;
	}
	// --- own field : author ---

	Handle(Interface_HArray1OfHAsciiString) aAuthor;
	Handle(TCollection_HAsciiString) aAuthorItem;
	Standard_Integer nsub3;
	nsub3 = data->SubListNumber(num, 3, Standard_False);
	if (nsub3 !=0) {
	  Standard_Integer nb3 = data->NbParams(nsub3);
	  aAuthor = new Interface_HArray1OfHAsciiString (1, nb3);
	  for (Standard_Integer i3 = 1; i3 <= nb3; i3 ++) {
	    Standard_Boolean stat3 = data->ReadString
	         (nsub3,i3,"author",ach,aAuthorItem);
	    if (stat3) aAuthor->SetValue(i3,aAuthorItem);
	    else aAuthor->SetValue(i3,new TCollection_HAsciiString(""));
	  }
	}
	else {
		aAuthor = new Interface_HArray1OfHAsciiString(1, 1);
		aAuthorItem = new TCollection_HAsciiString("");
		aAuthor->SetValue(1, aAuthorItem);
	  //ach->AddFail("Parameter #3 (author) is not a LIST");
	}

	// --- own field : organization ---

	Handle(Interface_HArray1OfHAsciiString) aOrganization;
	Handle(TCollection_HAsciiString) aOrganizationItem;
	Standard_Integer nsub4;
	nsub4 = data->SubListNumber(num, 4, Standard_False);
	if (nsub4 !=0) {
	  Standard_Integer nb4 = data->NbParams(nsub4);
	  aOrganization = new Interface_HArray1OfHAsciiString (1, nb4);
	  for (Standard_Integer i4 = 1; i4 <= nb4; i4 ++) {
	    Standard_Boolean stat4 = data->ReadString
	         (nsub4,i4,"organization",ach,aOrganizationItem);
	    if (stat4) aOrganization->SetValue(i4,aOrganizationItem);
	    else aOrganization->SetValue(i4,new TCollection_HAsciiString(""));
	  }
	}
	else {
		aOrganization = new Interface_HArray1OfHAsciiString(1, 1);
		aOrganizationItem = new TCollection_HAsciiString("");
		aOrganization->SetValue(1, aOrganizationItem);
	  //ach->AddFail("Parameter #4 (organization) is not a LIST");
	}

	// --- own field : preprocessorVersion ---

	Handle(TCollection_HAsciiString) aPreprocessorVersion;
	Standard_Boolean stat5;
	stat5 = data->ReadString (num,5,"preprocessor_version",ach,aPreprocessorVersion);
	if (!stat5 || aPreprocessorVersion.IsNull()) {
		aPreprocessorVersion = new TCollection_HAsciiString("");
		stat5 = Standard_True;
	}
	// --- own field : originatingSystem ---

	Handle(TCollection_HAsciiString) aOriginatingSystem;
	Standard_Boolean stat6;
	stat6 = data->ReadString (num,6,"originating_system",ach,aOriginatingSystem);
	if (!stat6 || aOriginatingSystem.IsNull()) {
		aOriginatingSystem = new TCollection_HAsciiString("");
		stat6 = Standard_True;
	}
	// --- own field : authorisation ---

	Handle(TCollection_HAsciiString) aAuthorisation;
	Standard_Boolean stat7;
	stat7 = data->ReadString (num,7,"authorisation",ach,aAuthorisation);
	if (!stat7 || aAuthorisation.IsNull()) {
		aAuthorisation = new TCollection_HAsciiString("");
		stat7 = Standard_True;
	}
	//--- Initialisation of the read entity ---


	ent->Init(aName, aTimeStamp, aAuthor, aOrganization, aPreprocessorVersion, aOriginatingSystem, aAuthorisation);
}


void RWHeaderSection_RWFileName::WriteStep
	(StepData_StepWriter& SW,
	 const Handle(HeaderSection_FileName)& ent) const
{

	// --- own field : name ---

	SW.Send(ent->Name());

	// --- own field : timeStamp ---

	SW.Send(ent->TimeStamp());

	// --- own field : author ---

	SW.OpenSub();
	for (Standard_Integer i3 = 1;  i3 <= ent->NbAuthor();  i3 ++) {
	  SW.Send(ent->AuthorValue(i3));
	}
	SW.CloseSub();

	// --- own field : organization ---

	SW.OpenSub();
	for (Standard_Integer i4 = 1;  i4 <= ent->NbOrganization();  i4 ++) {
	  SW.Send(ent->OrganizationValue(i4));
	}
	SW.CloseSub();

	// --- own field : preprocessorVersion ---

	SW.Send(ent->PreprocessorVersion());

	// --- own field : originatingSystem ---

	SW.Send(ent->OriginatingSystem());

	// --- own field : authorisation ---

	SW.Send(ent->Authorisation());
}
