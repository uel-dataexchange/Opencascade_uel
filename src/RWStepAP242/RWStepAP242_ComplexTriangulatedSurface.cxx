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
#include <RWStepAP242_ComplexTriangulatedSurface.hxx>
#include <StepData_StepReaderData.hxx>
#include <StepData_StepWriter.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepVisual_CoordinatesList.hxx>
#include <StepAP242_ComplexTriangulatedSurface.hxx>

//=======================================================================
//function : RWStepAP242_ComplexTriangulatedSurface
//purpose  : 
//=======================================================================
RWStepAP242_ComplexTriangulatedSurface::RWStepAP242_ComplexTriangulatedSurface () {}

//=======================================================================
//function : ReadStep
//purpose  : 
//=======================================================================
void RWStepAP242_ComplexTriangulatedSurface::ReadStep
  (const Handle(StepData_StepReaderData)& data,
  const Standard_Integer num,
  Handle(Interface_Check)& ach,
  const Handle(StepAP242_ComplexTriangulatedSurface)& ent) const
{
  // Number of Parameter Control
  if (!data->CheckNbParams(num, 8, ach, "complex_triangulated_surface")) return;

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
  if(aFace.IsNull())
  {
	  return;
  }
  
  // Inherited field : pnindex
  Handle(TColStd_HSequenceOfInteger) aPnIndex = new TColStd_HSequenceOfInteger;
  if (data->ReadSubList (num,6,"pnindex",ach,nsub2)) 
  {
	  Standard_Integer nb2 = data->NbParams(nsub2);
	  if (nb2 > 0) 
	  {
		  for (Standard_Integer i = 1; i <= nb2; i++)
		  {
			  Standard_Integer aVal = 0;
			  if (data->ReadInteger(nsub2, i, "pnindex", ach, aVal))
				  aPnIndex->Append(aVal);
		  }
	  }
  }
  
  // Inherited field : triangle_strips
  NCollection_Handle<StepVisual_VectorOfHSequenceOfInteger> aTriangleStrips = new StepVisual_VectorOfHSequenceOfInteger;
  if (data->ReadSubList (num,7,"triangle_strips",ach,nsub2)) 
  {
    Standard_Integer nb2 = data->NbParams(nsub2);
	if (nb2 > 0) {

		for (Standard_Integer i = 1; i <= nb2; i++)
		{
			Handle(TColStd_HSequenceOfInteger) aTriangleStrip = new TColStd_HSequenceOfInteger;
			Standard_Integer nsub3;
			if (data->ReadSubList(nsub2, i, "number_triangle_strip", ach, nsub3)) {
				Standard_Integer nb3 = data->NbParams(nsub3);
				for (Standard_Integer j = 1; j <= nb3; j++) {
					Standard_Integer aVal = 0;
					if (data->ReadInteger(nsub3, j, "triangle_strip", ach, aVal))
						aTriangleStrip->Append(aVal);

				}
				aTriangleStrips->Append(aTriangleStrip);
			}
		}
	}
   }
   
   // Inherited field : triangle_fans
  NCollection_Handle<StepVisual_VectorOfHSequenceOfInteger> aTriangleFans = new StepVisual_VectorOfHSequenceOfInteger;
  if (data->ReadSubList (num,8,"triangle_fans",ach,nsub2)) 
  {
    Standard_Integer nb2 = data->NbParams(nsub2);
	if (nb2 > 0)
	{

		for (Standard_Integer i = 1; i <= nb2; i++)
		{
			Handle(TColStd_HSequenceOfInteger) aTriangleFan = new TColStd_HSequenceOfInteger;
			Standard_Integer nsub3;
			if (data->ReadSubList(nsub2, i, "number_triangle_fan", ach, nsub3)) {
				Standard_Integer nb3 = data->NbParams(nsub3);
				for (Standard_Integer j = 1; j <= nb3; j++) {
					Standard_Integer aVal = 0;
					if (data->ReadInteger(nsub3, j, "triangle_fan", ach, aVal))
						aTriangleFan->Append(aVal);

				}
				aTriangleFans->Append(aTriangleFan);
			}
		}
	}
   }
  if(!aFace.IsNull())
  {
	ent->Init(aName, aCoordList, nPnMax, aNormals, aFace, aPnIndex, aTriangleStrips, aTriangleFans);
  }
  
}

//=======================================================================
//function : WriteStep
//purpose  : 
//=======================================================================
void RWStepAP242_ComplexTriangulatedSurface::WriteStep
  (StepData_StepWriter& SW,
  const Handle(StepAP242_ComplexTriangulatedSurface)& ent) const
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

  // Own field : pnindex
  SW.OpenSub();
  for (Standard_Integer i = 1; i <= ent->PnIndex()->Length(); i++)
	  SW.Send(ent->PnIndex()->Value(i));
  SW.CloseSub();
  
  // Own field : triangle_strips
  SW.OpenSub();
  for (Standard_Integer tsIt = 0; tsIt < ent->TriangleStrips()->Length(); tsIt++) {
    Handle(TColStd_HSequenceOfInteger) aTs = ent->TriangleStrips()->Value(tsIt);
    SW.OpenSub();
    for (Standard_Integer i = 1; i <= aTs->Length(); i++)
        SW.Send(aTs->Value(i));
    SW.CloseSub();
  }
  SW.CloseSub();
  
  // Own field : triangle_fans
  SW.OpenSub();
  for (Standard_Integer tfIt = 0; tfIt < ent->TriangleFans()->Length(); tfIt++) {
    Handle(TColStd_HSequenceOfInteger) aTf = ent->TriangleFans()->Value(tfIt);
    SW.OpenSub();
    for (Standard_Integer i = 1; i <= aTf->Length(); i++)
        SW.Send(aTf->Value(i));
    SW.CloseSub();
  }
  SW.CloseSub();
}

//=======================================================================
//function : Share
//purpose  : 
//=======================================================================
void RWStepAP242_ComplexTriangulatedSurface::Share (const Handle(StepAP242_ComplexTriangulatedSurface) &ent,
                                                Interface_EntityIterator& iter) const
{
  // Own filed : coordinates
  iter.AddItem (ent->CoordList());
  if(!ent->Face().IsNull())
	iter.AddItem(ent->Face());
}

