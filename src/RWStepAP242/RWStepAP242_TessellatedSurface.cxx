// Created on: 2015-10-29
// Created by: Irina KRYLOVA
// Copyright (c) 2015 OPEN CASCADE SAS
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


#include <Interface_Check.hxx>
#include <Interface_EntityIterator.hxx>
#include <RWStepAP242_TessellatedSurface.hxx>
#include <StepData_StepReaderData.hxx>
#include <StepData_StepWriter.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepVisual_CoordinatesList.hxx>
#include <StepAP242_TessellatedSurface.hxx>

//=======================================================================
//function : RWStepAP242_TessellatedSurface
//purpose  : 
//=======================================================================
RWStepAP242_TessellatedSurface::RWStepAP242_TessellatedSurface () {}

//=======================================================================
//function : ReadStep
//purpose  : 
//=======================================================================
void RWStepAP242_TessellatedSurface::ReadStep
  (const Handle(StepData_StepReaderData)& data,
  const Standard_Integer num,
  Handle(Interface_Check)& ach,
  const Handle(StepAP242_TessellatedSurface)& ent) const
{
  // Number of Parameter Control
  if (!data->CheckNbParams(num, 5, ach, "tessellated_face")) return;

  // Inherited field : name
  Handle(TCollection_HAsciiString) aName;
  data->ReadString (num, 1, "name", ach, aName);

  Handle(StepVisual_CoordinatesList) aCoordList;
  data->ReadEntity (num, 2,"coord_list",ach,STANDARD_TYPE(StepVisual_CoordinatesList), aCoordList);
  
  // Inherited field : pnmax
  Standard_Integer nPnMax;
  data->ReadInteger(num, 3, "pnmax", ach, nPnMax);
  
  //--- Initialisation of the read entity ---
  Standard_Integer nsub2;
  NCollection_Handle<StepVisual_VectorOfHSequenceOfReal> aNormals = new StepVisual_VectorOfHSequenceOfReal;
  if (data->ReadSubList (num,4,"normals",ach,nsub2)) 
  {
    Standard_Integer nb2 = data->NbParams(nsub2);
    if( !nb2)
      return;

    for (Standard_Integer i = 1; i <= nb2; i++) 
    {
      Handle(TColStd_HSequenceOfReal) aNormal = new TColStd_HSequenceOfReal;
      Standard_Integer nsub3;
      if (data->ReadSubList (nsub2,i,"number_normals",ach,nsub3)) {
        Standard_Integer nb3 = data->NbParams(nsub3);
        for (Standard_Integer j = 1; j <= nb3; j++) {
          Standard_Real aVal =0.0;
          if (data->ReadReal (nsub3,j,"normals",ach,aVal)) 
            aNormal->Append(aVal);

        }
        aNormals->Append(aNormal);
      }
    }
  }
  
  Handle(StepShape_Face) aFace;
  data->ReadEntity (num, 5,"face",ach,STANDARD_TYPE(StepShape_Face), aFace);
  if(!aFace.IsNull())
  {
	ent->Init(aName, aCoordList, nPnMax, aNormals, aFace);
  }
  
}

//=======================================================================
//function : WriteStep
//purpose  : 
//=======================================================================
void RWStepAP242_TessellatedSurface::WriteStep
  (StepData_StepWriter& SW,
  const Handle(StepAP242_TessellatedSurface)& ent) const
{
  // Inherited field : name
  SW.Send(ent->Name());

  // Own filed : coordinates
  SW.Send(ent->CoordList());

  // Own filed : pnmax
  SW.Send(ent->PnMax());
  // Own field : normals
  SW.OpenSub();
  for (Standard_Integer normalIt = 0; normalIt < ent->Normals()->Length(); normalIt++) {
    Handle(TColStd_HSequenceOfReal) aNormal = ent->Normals()->Value(normalIt);
    SW.OpenSub();
    for (Standard_Integer i = 1; i <= aNormal->Length(); i++)
        SW.Send(aNormal->Value(i));
    SW.CloseSub();
  }
  SW.CloseSub();
  
  SW.Send(ent->Face());

}

//=======================================================================
//function : Share
//purpose  : 
//=======================================================================
void RWStepAP242_TessellatedSurface::Share (const Handle(StepAP242_TessellatedSurface) &ent,
                                                Interface_EntityIterator& iter) const
{
  // Own filed : coordinates
  iter.AddItem (ent->CoordList());
  if(!ent->Face().IsNull())
  {
	iter.AddItem (ent->Face());
  }
}

