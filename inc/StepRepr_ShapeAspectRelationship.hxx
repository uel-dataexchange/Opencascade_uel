// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepRepr_ShapeAspectRelationship_HeaderFile
#define _StepRepr_ShapeAspectRelationship_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepRepr_ShapeAspectRelationship_HeaderFile
#include <Handle_StepRepr_ShapeAspectRelationship.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_StepRepr_ShapeAspect_HeaderFile
#include <Handle_StepRepr_ShapeAspect.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class TCollection_HAsciiString;
class StepRepr_ShapeAspect;


//! Representation of STEP entity ShapeAspectRelationship <br>
class StepRepr_ShapeAspectRelationship : public MMgt_TShared {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepRepr_ShapeAspectRelationship();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const Handle(TCollection_HAsciiString)& aName,const Standard_Boolean hasDescription,const Handle(TCollection_HAsciiString)& aDescription,const Handle(StepRepr_ShapeAspect)& aRelatingShapeAspect,const Handle(StepRepr_ShapeAspect)& aRelatedShapeAspect) ;
  //! Returns field Name <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString Name() const;
  //! Set field Name <br>
  Standard_EXPORT     void SetName(const Handle(TCollection_HAsciiString)& Name) ;
  //! Returns field Description <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString Description() const;
  //! Set field Description <br>
  Standard_EXPORT     void SetDescription(const Handle(TCollection_HAsciiString)& Description) ;
  //! Returns True if optional field Description is defined <br>
  Standard_EXPORT     Standard_Boolean HasDescription() const;
  //! Returns field RelatingShapeAspect <br>
  Standard_EXPORT     Handle_StepRepr_ShapeAspect RelatingShapeAspect() const;
  //! Set field RelatingShapeAspect <br>
  Standard_EXPORT     void SetRelatingShapeAspect(const Handle(StepRepr_ShapeAspect)& RelatingShapeAspect) ;
  //! Returns field RelatedShapeAspect <br>
  Standard_EXPORT     Handle_StepRepr_ShapeAspect RelatedShapeAspect() const;
  //! Set field RelatedShapeAspect <br>
  Standard_EXPORT     void SetRelatedShapeAspect(const Handle(StepRepr_ShapeAspect)& RelatedShapeAspect) ;




  DEFINE_STANDARD_RTTI(StepRepr_ShapeAspectRelationship)

protected:




private: 


Handle_TCollection_HAsciiString theName;
Handle_TCollection_HAsciiString theDescription;
Handle_StepRepr_ShapeAspect theRelatingShapeAspect;
Handle_StepRepr_ShapeAspect theRelatedShapeAspect;
Standard_Boolean defDescription;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
