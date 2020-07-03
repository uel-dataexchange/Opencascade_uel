// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepRepr_CompoundRepresentationItem_HeaderFile
#define _StepRepr_CompoundRepresentationItem_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepRepr_CompoundRepresentationItem_HeaderFile
#include <Handle_StepRepr_CompoundRepresentationItem.hxx>
#endif

#ifndef _Handle_StepRepr_HArray1OfRepresentationItem_HeaderFile
#include <Handle_StepRepr_HArray1OfRepresentationItem.hxx>
#endif
#ifndef _StepRepr_RepresentationItem_HeaderFile
#include <StepRepr_RepresentationItem.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_StepRepr_RepresentationItem_HeaderFile
#include <Handle_StepRepr_RepresentationItem.hxx>
#endif
class StepRepr_HArray1OfRepresentationItem;
class TCollection_HAsciiString;
class StepRepr_RepresentationItem;


//! Added for Dimensional Tolerances <br>
class StepRepr_CompoundRepresentationItem : public StepRepr_RepresentationItem {

public:

  
  Standard_EXPORT   StepRepr_CompoundRepresentationItem();
  
  Standard_EXPORT     void Init(const Handle(TCollection_HAsciiString)& aName,const Handle(StepRepr_HArray1OfRepresentationItem)& item_element) ;
  
  Standard_EXPORT     Handle_StepRepr_HArray1OfRepresentationItem ItemElement() const;
  
  Standard_EXPORT     Standard_Integer NbItemElement() const;
  
  Standard_EXPORT     void SetItemElement(const Handle(StepRepr_HArray1OfRepresentationItem)& item_element) ;
  
  Standard_EXPORT     Handle_StepRepr_RepresentationItem ItemElementValue(const Standard_Integer num) const;
  
  Standard_EXPORT     void SetItemElementValue(const Standard_Integer num,const Handle(StepRepr_RepresentationItem)& anelement) ;




  DEFINE_STANDARD_RTTI(StepRepr_CompoundRepresentationItem)

protected:




private: 


Handle_StepRepr_HArray1OfRepresentationItem theItemElement;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
