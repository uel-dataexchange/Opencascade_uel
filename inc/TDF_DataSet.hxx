// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_DataSet_HeaderFile
#define _TDF_DataSet_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TDF_DataSet_HeaderFile
#include <Handle_TDF_DataSet.hxx>
#endif

#ifndef _TDF_LabelList_HeaderFile
#include <TDF_LabelList.hxx>
#endif
#ifndef _TDF_LabelMap_HeaderFile
#include <TDF_LabelMap.hxx>
#endif
#ifndef _TDF_AttributeMap_HeaderFile
#include <TDF_AttributeMap.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TDF_Attribute_HeaderFile
#include <Handle_TDF_Attribute.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class TDF_Label;
class TDF_LabelMap;
class TDF_Attribute;
class TDF_AttributeMap;
class TDF_LabelList;


//! This class is a set of TDF informations like <br>
//!          labels and attributes. <br>
class TDF_DataSet : public MMgt_TShared {

public:

  //! Creates an  empty   DataSet  object. <br>
  Standard_EXPORT   TDF_DataSet();
  //! Clears all information. <br>
  Standard_EXPORT     void Clear() ;
  //! Returns true if there is at least one label or one <br>
//!          attribute. <br>
        Standard_Boolean IsEmpty() const;
  //! Adds <aLabel> in  the  current  data  set. <br>
        void AddLabel(const TDF_Label& aLabel) ;
  //! Returns true if the label  <alabel>   is in the data set. <br>
        Standard_Boolean ContainsLabel(const TDF_Label& aLabel) const;
  //! Returns the map of labels in this data set. <br>
//! This map can be used directly, or updated. <br>
//! <br>
        TDF_LabelMap& Labels() ;
  //! Adds <anAttribute> into the current data  set. <br>
        void AddAttribute(const Handle(TDF_Attribute)& anAttribute) ;
  //! Returns true if <anAttribute> is in the data set. <br>
        Standard_Boolean ContainsAttribute(const Handle(TDF_Attribute)& anAttribute) const;
  //! Returns the map of attributes in the  current  data   set. <br>
//!  This map can be used directly, or updated. <br>
//! <br>
        TDF_AttributeMap& Attributes() ;
  //! Adds a root label to <myRootLabels>. <br>
//! <br>
        void AddRoot(const TDF_Label& aLabel) ;
  //! Returns <myRootLabels> to be used or updated. <br>
//! <br>
        TDF_LabelList& Roots() ;
  //! Dumps the minimum information about <me> on <br>
//!          <aStream>. <br>
//! <br>
  Standard_EXPORT     Standard_OStream& Dump(Standard_OStream& anOS) const;
    Standard_OStream& operator<<(Standard_OStream& anOS) const
{
  return Dump(anOS);
}




  DEFINE_STANDARD_RTTI(TDF_DataSet)

protected:




private: 


TDF_LabelList myRootLabels;
TDF_LabelMap myLabelMap;
TDF_AttributeMap myAttributeMap;


};


#include <TDF_DataSet.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
