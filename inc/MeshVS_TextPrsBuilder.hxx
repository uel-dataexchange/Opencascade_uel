// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_TextPrsBuilder_HeaderFile
#define _MeshVS_TextPrsBuilder_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MeshVS_TextPrsBuilder_HeaderFile
#include <Handle_MeshVS_TextPrsBuilder.hxx>
#endif

#ifndef _MeshVS_DataMapOfIntegerAsciiString_HeaderFile
#include <MeshVS_DataMapOfIntegerAsciiString.hxx>
#endif
#ifndef _MeshVS_PrsBuilder_HeaderFile
#include <MeshVS_PrsBuilder.hxx>
#endif
#ifndef _Handle_MeshVS_Mesh_HeaderFile
#include <Handle_MeshVS_Mesh.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _MeshVS_DisplayModeFlags_HeaderFile
#include <MeshVS_DisplayModeFlags.hxx>
#endif
#ifndef _Handle_MeshVS_DataSource_HeaderFile
#include <Handle_MeshVS_DataSource.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _MeshVS_BuilderPriority_HeaderFile
#include <MeshVS_BuilderPriority.hxx>
#endif
#ifndef _Handle_Prs3d_Presentation_HeaderFile
#include <Handle_Prs3d_Presentation.hxx>
#endif
#ifndef _TColStd_PackedMapOfInteger_HeaderFile
#include <TColStd_PackedMapOfInteger.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class MeshVS_Mesh;
class Quantity_Color;
class MeshVS_DataSource;
class Prs3d_Presentation;
class MeshVS_DataMapOfIntegerAsciiString;
class TCollection_AsciiString;


//! This class provides methods to create text data presentation. <br>
//! It store map of texts assigned with nodes or elements. <br>
class MeshVS_TextPrsBuilder : public MeshVS_PrsBuilder {

public:

  
  Standard_EXPORT   MeshVS_TextPrsBuilder(const Handle(MeshVS_Mesh)& Parent,const Standard_Real Height,const Quantity_Color& Color,const MeshVS_DisplayModeFlags& Flags = MeshVS_DMF_TextDataPrs,const Handle(MeshVS_DataSource)& DS = 0,const Standard_Integer Id = -1,const MeshVS_BuilderPriority& Priority = MeshVS_BP_Text);
  //! Builds presentation of text data <br>
  Standard_EXPORT   virtual  void Build(const Handle(Prs3d_Presentation)& Prs,const TColStd_PackedMapOfInteger& IDs,TColStd_PackedMapOfInteger& IDsToExclude,const Standard_Boolean IsElement,const Standard_Integer theDisplayMode) const;
  //! Returns map of text assigned with nodes ( IsElement = False ) or elements ( IsElement = True ) <br>
  Standard_EXPORT    const MeshVS_DataMapOfIntegerAsciiString& GetTexts(const Standard_Boolean IsElement) const;
  //! Sets map of text assigned with nodes or elements <br>
  Standard_EXPORT     void SetTexts(const Standard_Boolean IsElement,const MeshVS_DataMapOfIntegerAsciiString& Map) ;
  //! Returns True if map isn't empty <br>
  Standard_EXPORT     Standard_Boolean HasTexts(const Standard_Boolean IsElement) const;
  //! Returns text assigned with single node or element <br>
  Standard_EXPORT     Standard_Boolean GetText(const Standard_Boolean IsElement,const Standard_Integer ID,TCollection_AsciiString& Text) const;
  //! Sets text assigned with single node or element <br>
  Standard_EXPORT     void SetText(const Standard_Boolean IsElement,const Standard_Integer ID,const TCollection_AsciiString& Text) ;




  DEFINE_STANDARD_RTTI(MeshVS_TextPrsBuilder)

protected:




private: 


MeshVS_DataMapOfIntegerAsciiString myNodeTextMap;
MeshVS_DataMapOfIntegerAsciiString myElemTextMap;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
