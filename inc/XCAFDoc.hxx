// Created on: 2000-08-08
// Created by: data exchange team
// Copyright (c) 2000-2014 OPEN CASCADE SAS
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

#ifndef _XCAFDoc_HeaderFile
#define _XCAFDoc_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Handle.hxx>

#include <XCAFDoc_ColorType.hxx>
#include <Standard_GUID.hxx>
#include <XCAFDoc_DocumentTool.hxx>
#include <XCAFDoc_Location.hxx>
#include <XCAFDoc_Color.hxx>
#include <XCAFDoc_DimTol.hxx>
#include <XCAFDoc_Dimension.hxx>
#include <XCAFDoc_GeomTolerance.hxx>
#include <XCAFDoc_Datum.hxx>
#include <XCAFDoc_Material.hxx>
#include <XCAFDoc_Volume.hxx>
#include <XCAFDoc_Area.hxx>
#include <XCAFDoc_Centroid.hxx>
#include <XCAFDoc_ClippingPlaneTool.hxx>
#include <XCAFDoc_ShapeTool.hxx>
#include <XCAFDoc_ShapeMapTool.hxx>
#include <XCAFDoc_ColorTool.hxx>
#include <XCAFDoc_DimTolTool.hxx>
#include <XCAFDoc_LayerTool.hxx>
#include <XCAFDoc_MaterialTool.hxx>
#include <XCAFDoc_GraphNode.hxx>
#include <XCAFDoc_Editor.hxx>
#include <XCAFDoc_ViewTool.hxx>


//! Definition of general structure of DECAF document
//! and tools to work with it
//!
//! The document is composed of sections, each section
//! storing its own kind of data and managing by corresponding
//! tool
//! Some properties can be attached directly to shapes. These properties are:
//! * Name (the standard definition from OCAF) - class TDataStd_Name
//! * Centroid (for the validation of transfer) - class XCAFDoc_Centroid
//! * Volume (for the validation of transfer) - class XCAFDoc_Volume
//! * Area (for the validation of transfer) - class XCafDoc_Area
//! Management of these attributes is realized by OCAF. For getting
//! the attributes attached to a label the method class
//! TDF_Label::FindAttribute() should be used.
class XCAFDoc 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! class for containing GraphNodes.
  //! Returns GUID for UAttribute identifying assembly
  Standard_EXPORT static Standard_GUID AssemblyGUID();
  
  //! Returns GUID for TreeNode representing assembly link
  Standard_EXPORT static Standard_GUID ShapeRefGUID();
  
  //! Return GUIDs for TreeNode representing specified types of colors
  Standard_EXPORT static Standard_GUID ColorRefGUID (const XCAFDoc_ColorType type);
  
  //! Return GUIDs for TreeNode representing specified types of DGT
  Standard_EXPORT static Standard_GUID DimTolRefGUID();

  //! Return GUIDs for TreeNode representing specified types of Dimension
  Standard_EXPORT static Standard_GUID DimensionRefFirstGUID() ;

  //! Return GUIDs for TreeNode representing specified types of Dimension
  Standard_EXPORT static Standard_GUID DimensionRefSecondGUID() ;

  //! Return GUIDs for TreeNode representing specified types of GeomTolerance
  Standard_EXPORT static Standard_GUID GeomToleranceRefGUID() ;
  
  //! Return GUIDs for TreeNode representing specified types of datum
  Standard_EXPORT static Standard_GUID DatumRefGUID();
  
  //! Return GUIDs for TreeNode representing connections Datum-Toler
  Standard_EXPORT static Standard_GUID DatumTolRefGUID();
  
  Standard_EXPORT static Standard_GUID LayerRefGUID();
  
  Standard_EXPORT static Standard_GUID MaterialRefGUID();

  //! Return GUIDs for representing notes
  Standard_EXPORT static Standard_GUID NoteRefGUID();

  Standard_EXPORT static Standard_GUID InvisibleGUID();

  Standard_EXPORT static Standard_GUID ColorByLayerGUID();
  
  //! Returns GUID for UAttribute identifying external reference on no-step file
  Standard_EXPORT static Standard_GUID ExternRefGUID();
  
  //! Returns GUID for UAttribute identifying specified higher usage occurrence
  Standard_EXPORT static Standard_GUID SHUORefGUID();

  //! Return GUIDs for TreeNode representing specified types of View
  Standard_EXPORT static Standard_GUID ViewRefGUID();

  //! Return GUIDs for TreeNode representing specified types of View
  Standard_EXPORT static Standard_GUID ViewRefShapeGUID();

  //! Return GUIDs for TreeNode representing specified types of View
  Standard_EXPORT static Standard_GUID ViewRefGDTGUID();
  
  //! Return GUIDs for TreeNode representing specified types of View
  Standard_EXPORT static Standard_GUID ViewRefPlaneGUID();

  //! Return GUIDs for GraphNode representing specified types of View
  Standard_EXPORT static Standard_GUID ViewRefNoteGUID();
  Standard_EXPORT static Standard_GUID ViewRefAnnotationGUID();

  //! Returns GUID for UAttribute identifying lock flag
  Standard_EXPORT static Standard_GUID LockGUID();

protected:





private:




friend class XCAFDoc_DocumentTool;
friend class XCAFDoc_Location;
friend class XCAFDoc_Color;
friend class XCAFDoc_DimTol;
friend class XCAFDoc_Datum;
friend class XCAFDoc_Material;
friend class XCAFDoc_Volume;
friend class XCAFDoc_Area;
friend class XCAFDoc_Centroid;
friend class XCAFDoc_ClippingPlaneTool;
friend class XCAFDoc_ShapeTool;
friend class XCAFDoc_ShapeMapTool;
friend class XCAFDoc_ColorTool;
friend class XCAFDoc_DimTolTool;
friend class XCAFDoc_LayerTool;
friend class XCAFDoc_MaterialTool;
friend class XCAFDoc_GraphNode;
friend class XCAFDoc_Editor;
friend class XCAFDoc_ViewTool;

};







#endif // _XCAFDoc_HeaderFile
