// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.


#include <Standard_Type.hxx>
#include <StepAP242_TessellatedShell.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>


IMPLEMENT_STANDARD_RTTIEXT_1(StepAP242_TessellatedShell,StepShape_TopologicalRepresentationItem)

StepAP242_TessellatedShell::StepAP242_TessellatedShell ()  {}

void StepAP242_TessellatedShell::Init(const Handle(TCollection_HAsciiString)& aName, const NCollection_Handle<StepAP242_ArrayOfTessellatedSurface>& aComplexTriangulatedSurfaces,
									  const StepShape_Shell& aShell)
{
	StepShape_TopologicalRepresentationItem::Init(aName);
    mySurfaces = aComplexTriangulatedSurfaces;
    myShell = aShell;
}


NCollection_Handle<StepAP242_ArrayOfTessellatedSurface> StepAP242_TessellatedShell::TesslatedSurfaces() const
{
	return mySurfaces;
}
  
Handle_StepAP242_TessellatedSurface StepAP242_TessellatedShell::TesslatedSurface(const Standard_Integer num) const
{
	if (mySurfaces.IsNull()) {
		Standard_Failure::Raise("Null Tessellated Surface");
	}

	if (num > mySurfaces->Length()) {
		Standard_Failure::Raise("Index Error");
	}

	return mySurfaces->Value(num);
}
  
Standard_Integer StepAP242_TessellatedShell::NbTesslatedSurface() const
{
	if (mySurfaces.IsNull()) {
		Standard_Failure::Raise("Null Tessellated Surface");
	}

	return mySurfaces->Length();
}

StepShape_Shell StepAP242_TessellatedShell::Shell() const
{
	return myShell;
}



