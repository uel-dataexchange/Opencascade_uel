// Created on: 1995-12-01
// Created by: EXPRESS->CDL V0.2 Translator
// Copyright (c) 1995-1999 Matra Datavision
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

#ifndef _StepAP214_HeaderFile
#define _StepAP214_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Handle.hxx>

#include <StepAP214_Protocol.hxx>
#include <StepAP214_AutoDesignDateAndPersonItem.hxx>
#include <StepAP214_AutoDesignDateAndTimeItem.hxx>
#include <StepAP214_AutoDesignDatedItem.hxx>
#include <StepAP214_AutoDesignGeneralOrgItem.hxx>
#include <StepAP214_AutoDesignOrganizationItem.hxx>
#include <StepAP214_AutoDesignGroupedItem.hxx>
#include <StepAP214_AutoDesignPresentedItemSelect.hxx>
#include <StepAP214_AutoDesignReferencingItem.hxx>
#include <StepAP214_DateAndTimeItem.hxx>
#include <StepAP214_DateItem.hxx>
#include <StepAP214_ApprovalItem.hxx>
#include <StepAP214_OrganizationItem.hxx>
#include <StepAP214_DocumentReferenceItem.hxx>
#include <StepAP214_GroupItem.hxx>
#include <StepAP214_PersonAndOrganizationItem.hxx>
#include <StepAP214_PresentedItemSelect.hxx>
#include <StepAP214_SecurityClassificationItem.hxx>
#include <StepAP214_Protocol.hxx>
#include <StepAP214_AutoDesignApprovalAssignment.hxx>
#include <StepAP214_AutoDesignActualDateAndTimeAssignment.hxx>
#include <StepAP214_AutoDesignNominalDateAndTimeAssignment.hxx>
#include <StepAP214_AutoDesignActualDateAssignment.hxx>
#include <StepAP214_AutoDesignNominalDateAssignment.hxx>
#include <StepAP214_AutoDesignGroupAssignment.hxx>
#include <StepAP214_AutoDesignOrganizationAssignment.hxx>
#include <StepAP214_AutoDesignDateAndPersonAssignment.hxx>
#include <StepAP214_AutoDesignPersonAndOrganizationAssignment.hxx>
#include <StepAP214_AutoDesignPresentedItem.hxx>
#include <StepAP214_AutoDesignSecurityClassificationAssignment.hxx>
#include <StepAP214_AutoDesignDocumentReference.hxx>
#include <StepAP214_AppliedApprovalAssignment.hxx>
#include <StepAP214_AppliedDateAndTimeAssignment.hxx>
#include <StepAP214_AppliedDateAssignment.hxx>
#include <StepAP214_AppliedGroupAssignment.hxx>
#include <StepAP214_AppliedOrganizationAssignment.hxx>
#include <StepAP214_AppliedPersonAndOrganizationAssignment.hxx>
#include <StepAP214_AppliedPresentedItem.hxx>
#include <StepAP214_AppliedSecurityClassificationAssignment.hxx>
#include <StepAP214_AppliedDocumentReference.hxx>
#include <StepAP214_AppliedExternalIdentificationAssignment.hxx>
#include <StepAP214_Class.hxx>
#include <StepAP214_ExternalIdentificationItem.hxx>
#include <StepAP214_ExternallyDefinedClass.hxx>
#include <StepAP214_ExternallyDefinedGeneralProperty.hxx>
#include <StepAP214_RepItemGroup.hxx>


//! Complete AP214 CC1 , Revision 4
//! Upgrading from Revision 2 to Revision 4 : 26 Mar 1997
//! Splitting in sub-schemas : 5 Nov 1997
class StepAP214 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! creates a Protocol
  Standard_EXPORT static Handle(StepAP214_Protocol) Protocol();




protected:





private:




friend class StepAP214_AutoDesignDateAndPersonItem;
friend class StepAP214_AutoDesignDateAndTimeItem;
friend class StepAP214_AutoDesignDatedItem;
friend class StepAP214_AutoDesignGeneralOrgItem;
friend class StepAP214_AutoDesignOrganizationItem;
friend class StepAP214_AutoDesignGroupedItem;
friend class StepAP214_AutoDesignPresentedItemSelect;
friend class StepAP214_AutoDesignReferencingItem;
friend class StepAP214_DateAndTimeItem;
friend class StepAP214_DateItem;
friend class StepAP214_ApprovalItem;
friend class StepAP214_OrganizationItem;
friend class StepAP214_DocumentReferenceItem;
friend class StepAP214_GroupItem;
friend class StepAP214_PersonAndOrganizationItem;
friend class StepAP214_PresentedItemSelect;
friend class StepAP214_SecurityClassificationItem;
friend class StepAP214_Protocol;
friend class StepAP214_AutoDesignApprovalAssignment;
friend class StepAP214_AutoDesignActualDateAndTimeAssignment;
friend class StepAP214_AutoDesignNominalDateAndTimeAssignment;
friend class StepAP214_AutoDesignActualDateAssignment;
friend class StepAP214_AutoDesignNominalDateAssignment;
friend class StepAP214_AutoDesignGroupAssignment;
friend class StepAP214_AutoDesignOrganizationAssignment;
friend class StepAP214_AutoDesignDateAndPersonAssignment;
friend class StepAP214_AutoDesignPersonAndOrganizationAssignment;
friend class StepAP214_AutoDesignPresentedItem;
friend class StepAP214_AutoDesignSecurityClassificationAssignment;
friend class StepAP214_AutoDesignDocumentReference;
friend class StepAP214_AppliedApprovalAssignment;
friend class StepAP214_AppliedDateAndTimeAssignment;
friend class StepAP214_AppliedDateAssignment;
friend class StepAP214_AppliedGroupAssignment;
friend class StepAP214_AppliedOrganizationAssignment;
friend class StepAP214_AppliedPersonAndOrganizationAssignment;
friend class StepAP214_AppliedPresentedItem;
friend class StepAP214_AppliedSecurityClassificationAssignment;
friend class StepAP214_AppliedDocumentReference;
friend class StepAP214_AppliedExternalIdentificationAssignment;
friend class StepAP214_Class;
friend class StepAP214_ExternalIdentificationItem;
friend class StepAP214_ExternallyDefinedClass;
friend class StepAP214_ExternallyDefinedGeneralProperty;
friend class StepAP214_RepItemGroup;

};







#endif // _StepAP214_HeaderFile
