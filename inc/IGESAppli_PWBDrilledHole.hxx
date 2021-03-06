// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESAppli_PWBDrilledHole_HeaderFile
#define _IGESAppli_PWBDrilledHole_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESAppli_PWBDrilledHole_HeaderFile
#include <Handle_IGESAppli_PWBDrilledHole.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif


//! defines PWBDrilledHole, Type <406> Form <26> <br>
//!          in package IGESAppli <br>
//!          Used to identify an entity that locates a drilled hole <br>
//!          and to specify the characteristics of the drilled hole <br>
class IGESAppli_PWBDrilledHole : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESAppli_PWBDrilledHole();
  //! This method is used to set the fields of the class <br>
//!           PWBDrilledHole <br>
//!       - nbPropVal  : number of property values, always = 3 <br>
//!       - aDrillDia  : Drill diameter size <br>
//!       - aFinishDia : Finish diameter size <br>
//!       - aCode      : Function code for drilled hole <br>
  Standard_EXPORT     void Init(const Standard_Integer nbPropVal,const Standard_Real aDrillDia,const Standard_Real aFinishDia,const Standard_Integer aCode) ;
  //! returns number of property values, always = 3 <br>
  Standard_EXPORT     Standard_Integer NbPropertyValues() const;
  //! returns Drill diameter size <br>
  Standard_EXPORT     Standard_Real DrillDiameterSize() const;
  //! returns Finish diameter size <br>
  Standard_EXPORT     Standard_Real FinishDiameterSize() const;
  //! returns Function code for drilled hole <br>
//! is 0, 1, 2, 3, 4, 5 or 5001-9999 <br>
  Standard_EXPORT     Standard_Integer FunctionCode() const;




  DEFINE_STANDARD_RTTI(IGESAppli_PWBDrilledHole)

protected:




private: 


Standard_Integer theNbPropertyValues;
Standard_Real theDrillDiameter;
Standard_Real theFinishDiameter;
Standard_Integer theFunctionCode;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
