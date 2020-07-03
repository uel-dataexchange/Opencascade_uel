// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDimen_DimensionTolerance_HeaderFile
#define _IGESDimen_DimensionTolerance_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESDimen_DimensionTolerance_HeaderFile
#include <Handle_IGESDimen_DimensionTolerance.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif


//! defines Dimension Tolerance, Type <406>, Form <29> <br>
//!          in package IGESDimen <br>
//!          Provides tolerance information for a dimension which <br>
//!          can be used by the receiving system to regenerate the <br>
//!          dimension. <br>
class IGESDimen_DimensionTolerance : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESDimen_DimensionTolerance();
  //! This method is used to set the fields of the class <br>
//!           DimensionTolerance <br>
//!       - nbPropVal     : Number of property values, default = 8 <br>
//!       - aSecTolFlag   : Secondary Tolerance Flag <br>
//!                             0 = Applies to primary dimension <br>
//!                             1 = Applies to secondary dimension <br>
//!                             2 = Display values as fractions <br>
//!       - aTolType      : Tolerance Type <br>
//!                             1  = Bilateral <br>
//!                             2  = Upper/Lower <br>
//!                             3  = Unilateral Upper <br>
//!                             4  = Unilateral Lower <br>
//!                             5  = Range - min before max <br>
//!                             6  = Range - min after max <br>
//!                             7  = Range - min above max <br>
//!                             8  = Range - min below max <br>
//!                             9  = Nominal + Range - min above max <br>
//!                             10 = Nominal + Range - min below max <br>
//!       - aTolPlaceFlag : Tolerance Placement Flag <br>
//!                             1 = Before nominal value <br>
//!                             2 = After nominal value <br>
//!                             3 = Above nominal value <br>
//!                             4 = Below nominal value <br>
//!       - anUpperTol    : Upper Tolerance <br>
//!       - aLowerTol     : Lower Tolerance <br>
//!       - aSignFlag     : Sign Suppression Flag <br>
//!       - aFracFlag     : Fraction Flag <br>
//!                             0 = Display values as decimal numbers <br>
//!                             1 = Display values as mixed fractions <br>
//!                             2 = Display values as fractions <br>
//!       - aPrecision    : Precision Value <br>
  Standard_EXPORT     void Init(const Standard_Integer nbPropVal,const Standard_Integer aSecTolFlag,const Standard_Integer aTolType,const Standard_Integer aTolPlaceFlag,const Standard_Real anUpperTol,const Standard_Real aLowerTol,const Standard_Boolean aSignFlag,const Standard_Integer aFracFlag,const Standard_Integer aPrecision) ;
  //! returns the number of property values, always = 8 <br>
  Standard_EXPORT     Standard_Integer NbPropertyValues() const;
  //! returns the Secondary Tolerance Flag <br>
  Standard_EXPORT     Standard_Integer SecondaryToleranceFlag() const;
  //! returns the Tolerance Type <br>
  Standard_EXPORT     Standard_Integer ToleranceType() const;
  //! returns the Tolerance Placement Flag, default = 2 <br>
  Standard_EXPORT     Standard_Integer TolerancePlacementFlag() const;
  //! returns the Upper or Bilateral Tolerance Value <br>
  Standard_EXPORT     Standard_Real UpperTolerance() const;
  //! returns the Lower Tolerance Value <br>
  Standard_EXPORT     Standard_Real LowerTolerance() const;
  //! returns the Sign Suppression Flag <br>
  Standard_EXPORT     Standard_Boolean SignSuppressionFlag() const;
  //! returns the Fraction Flag <br>
  Standard_EXPORT     Standard_Integer FractionFlag() const;
  //! returns the Precision for Value Display <br>
  Standard_EXPORT     Standard_Integer Precision() const;




  DEFINE_STANDARD_RTTI(IGESDimen_DimensionTolerance)

protected:




private: 


Standard_Integer theNbPropertyValues;
Standard_Integer theSecondaryToleranceFlag;
Standard_Integer theToleranceType;
Standard_Integer theTolerancePlacementFlag;
Standard_Real theUpperTolerance;
Standard_Real theLowerTolerance;
Standard_Boolean theSignSuppressionFlag;
Standard_Integer theFractionFlag;
Standard_Integer thePrecision;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
