// Created on: 1999-03-10
// Created by: data exchange team
// Copyright (c) 1999 Matra Datavision
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

#ifndef _StepAP214_DocumentReferenceItem_HeaderFile
#define _StepAP214_DocumentReferenceItem_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Handle.hxx>

#include <StepData_SelectType.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Transient.hxx>
#include <StepBasic_Approval.hxx>
#include <StepRepr_DescriptiveRepresentationItem.hxx>
#include <StepRepr_MaterialDesignation.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_ProductDefinitionRelationship.hxx>
#include <StepRepr_PropertyDefinition.hxx>
#include <StepRepr_Representation.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepRepr_ShapeAspectRelationship.hxx>
#include <StepAP214_AppliedExternalIdentificationAssignment.hxx>
#include <StepRepr_AssemblyComponentUsage.hxx>
#include <StepBasic_CharacterizedObject.hxx>
#include <StepShape_DimensionalSize.hxx>
#include <StepBasic_ExternallyDefinedItem.hxx>
#include <StepBasic_Group.hxx>
#include <StepBasic_GroupRelationship.hxx>
#include <StepBasic_ProductCategory.hxx>
#include <StepRepr_MeasureRepresentationItem.hxx>
#include <StepBasic_ProductDefinitionContext.hxx>
#include <StepRepr_RepresentationItem.hxx>

class StepAP214_DocumentReferenceItem  : public StepData_SelectType
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns a DocumentReferenceItem SelectType
  Standard_EXPORT StepAP214_DocumentReferenceItem();
  
  //! Recognizes a DocumentReferenceItem Kind Entity that is :
  Standard_EXPORT Standard_Integer CaseNum (const Handle(Standard_Transient)& ent) const;
  
  //! returns Value as a Approval (Null if another type)
  Standard_EXPORT Handle(StepBasic_Approval) Approval() const;
  
  //! returns Value as a  (Null if another type)
  Standard_EXPORT Handle(StepRepr_DescriptiveRepresentationItem) DescriptiveRepresentationItem() const;
  
  //! returns Value as a MaterialDesignation (Null if another type)
  Standard_EXPORT Handle(StepRepr_MaterialDesignation) MaterialDesignation() const;
  
  //! returns Value as a ProductDefinition (Null if another type)
  Standard_EXPORT Handle(StepBasic_ProductDefinition) ProductDefinition() const;
  
  //! returns Value as aProductDefinitionRelationship (Null if another type)
  Standard_EXPORT Handle(StepBasic_ProductDefinitionRelationship) ProductDefinitionRelationship() const;
  
  //! returns Value as a PropertyDefinition (Null if another type)
  Standard_EXPORT Handle(StepRepr_PropertyDefinition) PropertyDefinition() const;
  
  //! returns Value as a Representation (Null if another type)
  Standard_EXPORT Handle(StepRepr_Representation) Representation() const;
  
  //! returns Value as a ShapeAspect (Null if another type)
  Standard_EXPORT Handle(StepRepr_ShapeAspect) ShapeAspect() const;
  
  //! returns Value as a ShapeAspectRelationship (Null if another type)
  Standard_EXPORT Handle(StepRepr_ShapeAspectRelationship) ShapeAspectRelationship() const;

  //! returns Value as a AppliedExternalIdentificationAssignment (Null if another type)
  Standard_EXPORT Handle(StepAP214_AppliedExternalIdentificationAssignment) AppliedExternalIdentificationAssignment() const;

  //! returns Value as a AssemblyComponentUsage (Null if another type)
  Standard_EXPORT Handle(StepRepr_AssemblyComponentUsage) AssemblyComponentUsage() const;

  //! returns Value as a CharacterizedObject (Null if another type)
  Standard_EXPORT Handle(StepBasic_CharacterizedObject) CharacterizedObject() const;

  //! returns Value as a DimensionalSize (Null if another type)
  Standard_EXPORT Handle(StepShape_DimensionalSize) DimensionalSize() const;

  //! returns Value as a ExternallyDefinedItem (Null if another type)
  Standard_EXPORT Handle(StepBasic_ExternallyDefinedItem) ExternallyDefinedItem() const;

  //! returns Value as a Group (Null if another type)
  Standard_EXPORT Handle(StepBasic_Group) Group() const;

  //! returns Value as a GroupRelationship (Null if another type)
  Standard_EXPORT Handle(StepBasic_GroupRelationship) GroupRelationship() const;

  //! returns Value as a MeasureRepresentationItem (Null if another type)
  Standard_EXPORT Handle(StepRepr_MeasureRepresentationItem) MeasureRepresentationItem() const;

  //! returns Value as a ProductCategory (Null if another type)
  Standard_EXPORT Handle(StepBasic_ProductCategory) ProductCategory() const;

  //! returns Value as a ProductDefinitionContext (Null if another type)
  Standard_EXPORT Handle(StepBasic_ProductDefinitionContext) ProductDefinitionContext() const;

  //! returns Value as a RepresentationItem (Null if another type)
  Standard_EXPORT Handle(StepRepr_RepresentationItem) RepresentationItem() const;

protected:





private:





};







#endif // _StepAP214_DocumentReferenceItem_HeaderFile
