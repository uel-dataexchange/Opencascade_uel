// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_PrsBuilder_HeaderFile
#define _MeshVS_PrsBuilder_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MeshVS_PrsBuilder_HeaderFile
#include <Handle_MeshVS_PrsBuilder.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _MeshVS_MeshPtr_HeaderFile
#include <MeshVS_MeshPtr.hxx>
#endif
#ifndef _Handle_MeshVS_DataSource_HeaderFile
#include <Handle_MeshVS_DataSource.hxx>
#endif
#ifndef _Handle_MeshVS_Drawer_HeaderFile
#include <Handle_MeshVS_Drawer.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_PrsMgr_PresentationManager3d_HeaderFile
#include <Handle_PrsMgr_PresentationManager3d.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_MeshVS_Mesh_HeaderFile
#include <Handle_MeshVS_Mesh.hxx>
#endif
#ifndef _MeshVS_DisplayModeFlags_HeaderFile
#include <MeshVS_DisplayModeFlags.hxx>
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
#ifndef _Handle_SelectBasics_SensitiveEntity_HeaderFile
#include <Handle_SelectBasics_SensitiveEntity.hxx>
#endif
#ifndef _Handle_SelectBasics_EntityOwner_HeaderFile
#include <Handle_SelectBasics_EntityOwner.hxx>
#endif
class MeshVS_DataSource;
class MeshVS_Drawer;
class PrsMgr_PresentationManager3d;
class MeshVS_Mesh;
class Prs3d_Presentation;
class SelectBasics_SensitiveEntity;
class SelectBasics_EntityOwner;


//! This class is parent for all builders using in MeshVS_Mesh. <br>
//! It provides base fields and methods all buildes need. <br>
class MeshVS_PrsBuilder : public MMgt_TShared {

public:

  //! Builds presentation of certain type of data. <br>
//! Prs is presentation object which this method constructs. <br>
//! IDs is set of numeric identificators forming object appearance. <br>
//! IDsToExclude is set of IDs to exclude from processing. If some entity <br>
//! has been excluded, it is not processed by other builders. <br>
//! IsElement indicates, IDs is identificators of nodes or elements. <br>
//! DisplayMode is numeric constant describing display mode (see MeshVS_DisplayModeFlags.hxx) <br>
  Standard_EXPORT   virtual  void Build(const Handle(Prs3d_Presentation)& Prs,const TColStd_PackedMapOfInteger& IDs,TColStd_PackedMapOfInteger& IDsToExclude,const Standard_Boolean IsElement,const Standard_Integer DisplayMode) const = 0;
  //! This method is called to build presentation of custom elements (they have MeshVS_ET_0D type). <br>
//! IDs is set of numeric identificators of elements for custom building. <br>
//! IDsToExclude is set of IDs to exclude from processing. If some entity <br>
//! has been excluded, it is not processed by other builders. <br>
//! DisplayMode is numeric constant describing display mode (see MeshVS_DisplayModeFlags.hxx) <br>
  Standard_EXPORT   virtual  void CustomBuild(const Handle(Prs3d_Presentation)& Prs,const TColStd_PackedMapOfInteger& IDs,TColStd_PackedMapOfInteger& IDsToExclude,const Standard_Integer DisplayMode) const;
  //! This method is called to build sensitive of custom elements ( they have MeshVS_ET_0D type ) <br>
  Standard_EXPORT   virtual  Handle_SelectBasics_SensitiveEntity CustomSensitiveEntity(const Handle(SelectBasics_EntityOwner)& Owner,const Standard_Integer SelectMode) const;
  //! Returns flags, assigned with builder during creation <br>
  Standard_EXPORT     Standard_Integer GetFlags() const;
  //! Test whether display mode has flags assigned with this builder. <br>
//! This method has default implementation and can be redefined for advance behavior <br>
//! Returns Standard_True only if display mode is appropriate for this builder <br>
  Standard_EXPORT   virtual  Standard_Boolean TestFlags(const Standard_Integer DisplayMode) const;
  //! Returns builder ID <br>
  Standard_EXPORT     Standard_Integer GetId() const;
  //! Returns priority; as priority bigger, as soon builder will be called. <br>
  Standard_EXPORT     Standard_Integer GetPriority() const;
  //! Returns custom data source or default ( from MeshVS_Mesh ) if custom is NULL <br>
  Standard_EXPORT     Handle_MeshVS_DataSource GetDataSource() const;
  //! Change custom data source <br>
  Standard_EXPORT     void SetDataSource(const Handle(MeshVS_DataSource)& newDS) ;
  //! Returns custom drawer or default ( from MeshVS_Mesh ) if custom is NULL <br>
  Standard_EXPORT     Handle_MeshVS_Drawer GetDrawer() const;
  //! Change custom drawer <br>
  Standard_EXPORT     void SetDrawer(const Handle(MeshVS_Drawer)& newDr) ;
  //! Set excluding state. If it is Standard_True, the nodes or elements, processed by current builder <br>
//! will be noted and next builder won't process its. <br>
  Standard_EXPORT     void SetExcluding(const Standard_Boolean state) ;
  //! Read excluding state <br>
  Standard_EXPORT     Standard_Boolean IsExcludingOn() const;
  //! Set presentation manager for builder <br>
  Standard_EXPORT     void SetPresentationManager(const Handle(PrsMgr_PresentationManager3d)& thePrsMgr) ;
  //! Get presentation manager of builder <br>
  Standard_EXPORT     Handle_PrsMgr_PresentationManager3d GetPresentationManager() const;




  DEFINE_STANDARD_RTTI(MeshVS_PrsBuilder)

protected:

  //! Constructor <br>
//! Parent is pointer to MeshVS_Mesh object <br>
//! Flags is set of display modes corresponding to this builder <br>
//! DS is data source object, from which builder will pick geometry and topological information <br>
//! Id is numeric identificator of builder. You must set it to positive integer, but if <br>
//! you set it to -1, constructor will select the smallest integer, not occupied by other builders <br>
//! Priority is numerical priority constant. As priority bigger, as sooner builder starts during <br>
//! presentation construction <br>
  Standard_EXPORT   MeshVS_PrsBuilder(const Handle(MeshVS_Mesh)& Parent,const MeshVS_DisplayModeFlags& Flags,const Handle(MeshVS_DataSource)& DS,const Standard_Integer Id,const MeshVS_BuilderPriority& Priority = MeshVS_BP_Default);
  //! Returns only custom data source <br>
  Standard_EXPORT     Handle_MeshVS_DataSource DataSource() const;
  //! Returns only custom drawer <br>
  Standard_EXPORT     Handle_MeshVS_Drawer Drawer() const;

MeshVS_MeshPtr myParentMesh;


private: 


Standard_Boolean myIsExcluding;
Handle_MeshVS_DataSource myDataSource;
Handle_MeshVS_Drawer myDrawer;
Standard_Integer myFlags;
Standard_Integer myId;
Standard_Integer myPriority;
Handle_PrsMgr_PresentationManager3d myPrsMgr;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
