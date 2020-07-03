// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESAppli_RegionRestriction_HeaderFile
#define _IGESAppli_RegionRestriction_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESAppli_RegionRestriction_HeaderFile
#include <Handle_IGESAppli_RegionRestriction.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif


//! defines RegionRestriction, Type <406> Form <2> <br>
//!          in package IGESAppli <br>
//!          Defines regions to set an application's restriction <br>
//!          over a region. <br>
class IGESAppli_RegionRestriction : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESAppli_RegionRestriction();
  //! This method is used to set the fields of the class <br>
//!           RegionRestriction <br>
//!       - nbPropVal  : Number of property values, always = 3 <br>
//!       - aViasRest  : Electrical Vias restriction <br>
//!       - aCompoRest : Electrical components restriction <br>
//!       - aCktRest   : Electrical circuitry restriction <br>
  Standard_EXPORT     void Init(const Standard_Integer nbPropVal,const Standard_Integer aViasRest,const Standard_Integer aCompoRest,const Standard_Integer aCktRest) ;
  //! is always 3 <br>
  Standard_EXPORT     Standard_Integer NbPropertyValues() const;
  //! returns the Electrical vias restriction <br>
//! is 0, 1 or 2 <br>
  Standard_EXPORT     Standard_Integer ElectricalViasRestriction() const;
  //! returns the Electrical components restriction <br>
//! is 0, 1 or 2 <br>
  Standard_EXPORT     Standard_Integer ElectricalComponentRestriction() const;
  //! returns the Electrical circuitry restriction <br>
//! is 0, 1 or 2 <br>
  Standard_EXPORT     Standard_Integer ElectricalCktRestriction() const;




  DEFINE_STANDARD_RTTI(IGESAppli_RegionRestriction)

protected:




private: 


Standard_Integer theNbPropertyValues;
Standard_Integer theElectViasRestrict;
Standard_Integer theElectCompRestrict;
Standard_Integer theElectCktRestrict;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
