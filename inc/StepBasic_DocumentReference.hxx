// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_DocumentReference_HeaderFile
#define _StepBasic_DocumentReference_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepBasic_DocumentReference_HeaderFile
#include <Handle_StepBasic_DocumentReference.hxx>
#endif

#ifndef _Handle_StepBasic_Document_HeaderFile
#include <Handle_StepBasic_Document.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class StepBasic_Document;
class TCollection_HAsciiString;



class StepBasic_DocumentReference : public MMgt_TShared {

public:

  
  Standard_EXPORT     void Init0(const Handle(StepBasic_Document)& aAssignedDocument,const Handle(TCollection_HAsciiString)& aSource) ;
  
  Standard_EXPORT     Handle_StepBasic_Document AssignedDocument() const;
  
  Standard_EXPORT     void SetAssignedDocument(const Handle(StepBasic_Document)& aAssignedDocument) ;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString Source() const;
  
  Standard_EXPORT     void SetSource(const Handle(TCollection_HAsciiString)& aSource) ;




  DEFINE_STANDARD_RTTI(StepBasic_DocumentReference)

protected:




private: 


Handle_StepBasic_Document theAssignedDocument;
Handle_TCollection_HAsciiString theSource;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
