// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _NLPlate_HPG1Constraint_HeaderFile
#define _NLPlate_HPG1Constraint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_NLPlate_HPG1Constraint_HeaderFile
#include <Handle_NLPlate_HPG1Constraint.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Plate_D1_HeaderFile
#include <Plate_D1.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _NLPlate_HGPPConstraint_HeaderFile
#include <NLPlate_HGPPConstraint.hxx>
#endif
class gp_XY;
class Plate_D1;


//! define a PinPoint (no G0)  G1 Constraint used to load a Non <br>
//!  Linear Plate <br>
class NLPlate_HPG1Constraint : public NLPlate_HGPPConstraint {

public:

  
  Standard_EXPORT   NLPlate_HPG1Constraint(const gp_XY& UV,const Plate_D1& D1T);
  
  Standard_EXPORT   virtual  void SetIncrementalLoadAllowed(const Standard_Boolean ILA) ;
  
  Standard_EXPORT   virtual  void SetOrientation(const Standard_Integer Orient = 0) ;
  
  Standard_EXPORT   virtual  Standard_Boolean IncrementalLoadAllowed() const;
  
  Standard_EXPORT   virtual  Standard_Integer ActiveOrder() const;
  
  Standard_EXPORT   virtual  Standard_Boolean IsG0() const;
  
  Standard_EXPORT   virtual  Standard_Integer Orientation() ;
  
  Standard_EXPORT   virtual const Plate_D1& G1Target() const;




  DEFINE_STANDARD_RTTI(NLPlate_HPG1Constraint)

protected:




private: 


Standard_Boolean IncrementalLoadingAllowed;
Plate_D1 myG1Target;
Standard_Integer myOrientation;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
