// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDimen_Section_HeaderFile
#define _IGESDimen_Section_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESDimen_Section_HeaderFile
#include <Handle_IGESDimen_Section.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_TColgp_HArray1OfXY_HeaderFile
#include <Handle_TColgp_HArray1OfXY.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
class TColgp_HArray1OfXY;
class Standard_OutOfRange;
class gp_Pnt;


//! defines Section, Type <106> Form <31-38> <br>
//!          in package IGESDimen <br>
//!          Contains information to display sectioned sides <br>
class IGESDimen_Section : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESDimen_Section();
  //! This method is used to set the fields of the class <br>
//!           Section <br>
//!       - dataType   : Interpretation Flag, always = 1 <br>
//!       - aDisp      : Common z displacement <br>
//!       - dataPoints : Data points <br>
  Standard_EXPORT     void Init(const Standard_Integer dataType,const Standard_Real aDisp,const Handle(TColgp_HArray1OfXY)& dataPoints) ;
  //! Changes FormNumber (indicates the Type of the Hatches) <br>
//!           Error if not in range [31-38] <br>
  Standard_EXPORT     void SetFormNumber(const Standard_Integer form) ;
  //! returns Interpretation Flag, always = 1 <br>
  Standard_EXPORT     Standard_Integer Datatype() const;
  //! returns number of Data Points <br>
  Standard_EXPORT     Standard_Integer NbPoints() const;
  //! returns common Z displacement <br>
  Standard_EXPORT     Standard_Real ZDisplacement() const;
  //! returns Index'th data point <br>
//! raises exception if Index <= 0 or Index > NbPoints() <br>
  Standard_EXPORT     gp_Pnt Point(const Standard_Integer Index) const;
  //! returns Index'th data point after Transformation <br>
//! raises exception if Index <= 0 or Index > NbPoints() <br>
  Standard_EXPORT     gp_Pnt TransformedPoint(const Standard_Integer Index) const;




  DEFINE_STANDARD_RTTI(IGESDimen_Section)

protected:




private: 


Standard_Integer theDatatype;
Standard_Real theZDisplacement;
Handle_TColgp_HArray1OfXY theDataPoints;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
