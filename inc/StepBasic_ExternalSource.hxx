// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_ExternalSource_HeaderFile
#define _StepBasic_ExternalSource_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepBasic_ExternalSource_HeaderFile
#include <Handle_StepBasic_ExternalSource.hxx>
#endif

#ifndef _StepBasic_SourceItem_HeaderFile
#include <StepBasic_SourceItem.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class StepBasic_SourceItem;


//! Representation of STEP entity ExternalSource <br>
class StepBasic_ExternalSource : public MMgt_TShared {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepBasic_ExternalSource();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const StepBasic_SourceItem& aSourceId) ;
  //! Returns field SourceId <br>
  Standard_EXPORT     StepBasic_SourceItem SourceId() const;
  //! Set field SourceId <br>
  Standard_EXPORT     void SetSourceId(const StepBasic_SourceItem& SourceId) ;




  DEFINE_STANDARD_RTTI(StepBasic_ExternalSource)

protected:




private: 


StepBasic_SourceItem theSourceId;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
