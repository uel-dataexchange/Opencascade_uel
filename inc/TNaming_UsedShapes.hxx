// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TNaming_UsedShapes_HeaderFile
#define _TNaming_UsedShapes_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TNaming_UsedShapes_HeaderFile
#include <Handle_TNaming_UsedShapes.hxx>
#endif

#ifndef _TNaming_DataMapOfShapePtrRefShape_HeaderFile
#include <TNaming_DataMapOfShapePtrRefShape.hxx>
#endif
#ifndef _TDF_Attribute_HeaderFile
#include <TDF_Attribute.hxx>
#endif
#ifndef _Handle_TDF_Attribute_HeaderFile
#include <Handle_TDF_Attribute.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TDF_AttributeDelta_HeaderFile
#include <Handle_TDF_AttributeDelta.hxx>
#endif
#ifndef _Handle_TDF_DeltaOnAddition_HeaderFile
#include <Handle_TDF_DeltaOnAddition.hxx>
#endif
#ifndef _Handle_TDF_DeltaOnRemoval_HeaderFile
#include <Handle_TDF_DeltaOnRemoval.hxx>
#endif
#ifndef _Handle_TDF_RelocationTable_HeaderFile
#include <Handle_TDF_RelocationTable.hxx>
#endif
#ifndef _Handle_TDF_DataSet_HeaderFile
#include <Handle_TDF_DataSet.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class TNaming_Builder;
class TNaming_DataMapOfShapePtrRefShape;
class Standard_GUID;
class TDF_Attribute;
class TDF_AttributeDelta;
class TDF_DeltaOnAddition;
class TDF_DeltaOnRemoval;
class TDF_RelocationTable;
class TDF_DataSet;


//! Set of Shapes Used in a Data from TDF <br>
//!          Only one instance by Data, it always <br>
//!          Stored as Attribute of The Root. <br>
class TNaming_UsedShapes : public TDF_Attribute {

public:

  
  Standard_EXPORT     void Destroy() ;
~TNaming_UsedShapes()
{
  Destroy();
}
  
        TNaming_DataMapOfShapePtrRefShape& Map() ;
  //! Returns the ID of the attribute. <br>
       const Standard_GUID& ID() const;
  //! Returns the ID: 2a96b614-ec8b-11d0-bee7-080009dc3333. <br>
  Standard_EXPORT   static const Standard_GUID& GetID() ;
  //! Copies  the attribute  contents into  a  new other <br>
//!          attribute. It is used by Backup(). <br>
  Standard_EXPORT   virtual  Handle_TDF_Attribute BackupCopy() const;
  //! Restores the contents from <anAttribute> into this <br>
//!          one. It is used when aborting a transaction. <br>
  Standard_EXPORT   virtual  void Restore(const Handle(TDF_Attribute)& anAttribute) ;
  //! Clears the table. <br>
  Standard_EXPORT   virtual  void BeforeRemoval() ;
  //! Something to do after applying <anAttDelta>. <br>
  Standard_EXPORT   virtual  Standard_Boolean AfterUndo(const Handle(TDF_AttributeDelta)& anAttDelta,const Standard_Boolean forceIt = Standard_False) ;
  //! this method returns a null handle (no delta). <br>
  Standard_EXPORT   virtual  Handle_TDF_DeltaOnAddition DeltaOnAddition() const;
  //! this method returns a null handle (no delta). <br>
  Standard_EXPORT   virtual  Handle_TDF_DeltaOnRemoval DeltaOnRemoval() const;
  //! Returns an new empty attribute from the good end <br>
//!          type. It is used by the copy algorithm. <br>
  Standard_EXPORT   virtual  Handle_TDF_Attribute NewEmpty() const;
  //! This method is different from the "Copy" one, <br>
//!          because it is used when copying an attribute from <br>
//!          a source structure into a target structure. This <br>
//!          method pastes the current attribute to the label <br>
//!          corresponding to the insertor. The pasted <br>
//!          attribute may be a brand new one or a new version <br>
//!          of the previous one. <br>
  Standard_EXPORT   virtual  void Paste(const Handle(TDF_Attribute)& intoAttribute,const Handle(TDF_RelocationTable)& aRelocTationable) const;
  //! Adds the directly referenced attributes and labels <br>
//!          to <aDataSet>. "Directly" means we have only to <br>
//!          look at the first level of references. <br>
//! <br>
//!          For this, use only the AddLabel() & AddAttribute() <br>
//!          from DataSet and do not try to modify information <br>
//!          previously stored in <aDataSet>. <br>
  Standard_EXPORT   virtual  void References(const Handle(TDF_DataSet)& aDataSet) const;
  //! Dumps the attribute on <aStream>. <br>
  Standard_EXPORT   virtual  Standard_OStream& Dump(Standard_OStream& anOS) const;

friend class TNaming_Builder;


  DEFINE_STANDARD_RTTI(TNaming_UsedShapes)

protected:




private: 

  
  Standard_EXPORT   TNaming_UsedShapes();

TNaming_DataMapOfShapePtrRefShape myMap;


};


#include <TNaming_UsedShapes.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
