// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepRepr_RepresentationMap_HeaderFile
#define _StepRepr_RepresentationMap_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepRepr_RepresentationMap_HeaderFile
#include <Handle_StepRepr_RepresentationMap.hxx>
#endif

#ifndef _Handle_StepRepr_RepresentationItem_HeaderFile
#include <Handle_StepRepr_RepresentationItem.hxx>
#endif
#ifndef _Handle_StepRepr_Representation_HeaderFile
#include <Handle_StepRepr_Representation.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class StepRepr_RepresentationItem;
class StepRepr_Representation;



class StepRepr_RepresentationMap : public MMgt_TShared {

public:

  //! Returns a RepresentationMap <br>
  Standard_EXPORT   StepRepr_RepresentationMap();
  
  Standard_EXPORT   virtual  void Init(const Handle(StepRepr_RepresentationItem)& aMappingOrigin,const Handle(StepRepr_Representation)& aMappedRepresentation) ;
  
  Standard_EXPORT     void SetMappingOrigin(const Handle(StepRepr_RepresentationItem)& aMappingOrigin) ;
  
  Standard_EXPORT     Handle_StepRepr_RepresentationItem MappingOrigin() const;
  
  Standard_EXPORT     void SetMappedRepresentation(const Handle(StepRepr_Representation)& aMappedRepresentation) ;
  
  Standard_EXPORT     Handle_StepRepr_Representation MappedRepresentation() const;




  DEFINE_STANDARD_RTTI(StepRepr_RepresentationMap)

protected:




private: 


Handle_StepRepr_RepresentationItem mappingOrigin;
Handle_StepRepr_Representation mappedRepresentation;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
