// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_EulerAngles_HeaderFile
#define _StepBasic_EulerAngles_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepBasic_EulerAngles_HeaderFile
#include <Handle_StepBasic_EulerAngles.hxx>
#endif

#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class TColStd_HArray1OfReal;


//! Representation of STEP entity EulerAngles <br>
class StepBasic_EulerAngles : public MMgt_TShared {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepBasic_EulerAngles();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const Handle(TColStd_HArray1OfReal)& aAngles) ;
  //! Returns field Angles <br>
  Standard_EXPORT     Handle_TColStd_HArray1OfReal Angles() const;
  //! Set field Angles <br>
  Standard_EXPORT     void SetAngles(const Handle(TColStd_HArray1OfReal)& Angles) ;




  DEFINE_STANDARD_RTTI(StepBasic_EulerAngles)

protected:




private: 


Handle_TColStd_HArray1OfReal theAngles;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
