// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _NLPlate_HPG0G1Constraint_HeaderFile
#define _NLPlate_HPG0G1Constraint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_NLPlate_HPG0G1Constraint_HeaderFile
#include <Handle_NLPlate_HPG0G1Constraint.hxx>
#endif

#ifndef _Plate_D1_HeaderFile
#include <Plate_D1.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _NLPlate_HPG0Constraint_HeaderFile
#include <NLPlate_HPG0Constraint.hxx>
#endif
class gp_XY;
class gp_XYZ;
class Plate_D1;


//! define a PinPoint G0+G1  Constraint  used to load a Non Linear <br>
//!          Plate <br>
class NLPlate_HPG0G1Constraint : public NLPlate_HPG0Constraint {

public:

  
  Standard_EXPORT   NLPlate_HPG0G1Constraint(const gp_XY& UV,const gp_XYZ& Value,const Plate_D1& D1T);
  
  Standard_EXPORT   virtual  void SetOrientation(const Standard_Integer Orient = 0) ;
  
  Standard_EXPORT   virtual  Standard_Integer ActiveOrder() const;
  
  Standard_EXPORT   virtual  Standard_Integer Orientation() ;
  
  Standard_EXPORT   virtual const Plate_D1& G1Target() const;




  DEFINE_STANDARD_RTTI(NLPlate_HPG0G1Constraint)

protected:




private: 


Plate_D1 myG1Target;
Standard_Integer myOrientation;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
