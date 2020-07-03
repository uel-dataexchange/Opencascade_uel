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
#include <StepAP242_TessellatedSolid.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>


IMPLEMENT_STANDARD_RTTIEXT_1(StepAP242_TessellatedSolid,StepShape_TopologicalRepresentationItem)

StepAP242_TessellatedSolid::StepAP242_TessellatedSolid ()  {}

void StepAP242_TessellatedSolid::Init(const Handle(TCollection_HAsciiString)& aName, const NCollection_Handle<StepAP242_ArrayOfTessellatedSurface>& aComplexTriangulatedSurfaces,
									  const Handle(StepShape_ManifoldSolidBrep)& aSolid)
{
	StepShape_TopologicalRepresentationItem::Init(aName);
    mySurfaces = aComplexTriangulatedSurfaces;
    mySolid = aSolid;
}

Handle(StepShape_ManifoldSolidBrep) StepAP242_TessellatedSolid::Solid() const
{
	return mySolid;
}



