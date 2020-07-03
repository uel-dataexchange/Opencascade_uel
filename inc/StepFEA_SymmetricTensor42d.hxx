// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_SymmetricTensor42d_HeaderFile
#define _StepFEA_SymmetricTensor42d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _StepData_SelectType_HeaderFile
#include <StepData_SelectType.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
class Standard_Transient;
class TColStd_HArray1OfReal;


//! Representation of STEP SELECT type SymmetricTensor42d <br>
class StepFEA_SymmetricTensor42d  : public StepData_SelectType {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Empty constructor <br>
  Standard_EXPORT   StepFEA_SymmetricTensor42d();
  //! Recognizes a kind of SymmetricTensor42d select type <br>
//!          1 -> HArray1OfReal from TColStd <br>
//!          0 else <br>
  Standard_EXPORT     Standard_Integer CaseNum(const Handle(Standard_Transient)& ent) const;
  //! Returns Value as AnisotropicSymmetricTensor42d (or Null if another type) <br>
  Standard_EXPORT     Handle_TColStd_HArray1OfReal AnisotropicSymmetricTensor42d() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
