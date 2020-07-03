#include <HeaderSection_FileName.ixx>


HeaderSection_FileName::HeaderSection_FileName ()  {}

void HeaderSection_FileName::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(TCollection_HAsciiString)& aTimeStamp,
	const Handle(Interface_HArray1OfHAsciiString)& aAuthor,
	const Handle(Interface_HArray1OfHAsciiString)& aOrganization,
	const Handle(TCollection_HAsciiString)& aPreprocessorVersion,
	const Handle(TCollection_HAsciiString)& aOriginatingSystem,
	const Handle(TCollection_HAsciiString)& aAuthorisation)
{
	// --- class own fields ---
	name = aName;
	timeStamp = aTimeStamp;
	author = aAuthor;
	organization = aOrganization;
	preprocessorVersion = aPreprocessorVersion;
	originatingSystem = aOriginatingSystem;
	authorisation = aAuthorisation;
}


void HeaderSection_FileName::SetName(const Handle(TCollection_HAsciiString)& aName)
{
	name = aName;
}

Handle(TCollection_HAsciiString) HeaderSection_FileName::Name() const
{
	return name;
}

void HeaderSection_FileName::SetTimeStamp(const Handle(TCollection_HAsciiString)& aTimeStamp)
{
	timeStamp = aTimeStamp;
}

Handle(TCollection_HAsciiString) HeaderSection_FileName::TimeStamp() const
{
	return timeStamp;
}

void HeaderSection_FileName::SetAuthor(const Handle(Interface_HArray1OfHAsciiString)& aAuthor)
{
	author = aAuthor;
}

Handle(Interface_HArray1OfHAsciiString) HeaderSection_FileName::Author() const
{
	return author;
}

Handle(TCollection_HAsciiString) HeaderSection_FileName::AuthorValue(const Standard_Integer num) const
{
	return author->Value(num);
}

Standard_Integer HeaderSection_FileName::NbAuthor () const
{
	if (author.IsNull()) return 0;
	return author->Length();
}

void HeaderSection_FileName::SetOrganization(const Handle(Interface_HArray1OfHAsciiString)& aOrganization)
{
	organization = aOrganization;
}

Handle(Interface_HArray1OfHAsciiString) HeaderSection_FileName::Organization() const
{
	return organization;
}

Handle(TCollection_HAsciiString) HeaderSection_FileName::OrganizationValue(const Standard_Integer num) const
{
	return organization->Value(num);
}

Standard_Integer HeaderSection_FileName::NbOrganization () const
{
	if (organization.IsNull()) return 0;
	return organization->Length();
}

void HeaderSection_FileName::SetPreprocessorVersion(const Handle(TCollection_HAsciiString)& aPreprocessorVersion)
{
	preprocessorVersion = aPreprocessorVersion;
}

Handle(TCollection_HAsciiString) HeaderSection_FileName::PreprocessorVersion() const
{
	return preprocessorVersion;
}

void HeaderSection_FileName::SetOriginatingSystem(const Handle(TCollection_HAsciiString)& aOriginatingSystem)
{
	originatingSystem = aOriginatingSystem;
}

Handle(TCollection_HAsciiString) HeaderSection_FileName::OriginatingSystem() const
{
	return originatingSystem;
}

void HeaderSection_FileName::SetAuthorisation(const Handle(TCollection_HAsciiString)& aAuthorisation)
{
	authorisation = aAuthorisation;
}

Handle(TCollection_HAsciiString) HeaderSection_FileName::Authorisation() const
{
	return authorisation;
}
