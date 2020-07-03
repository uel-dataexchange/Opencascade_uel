// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESGraph_DrawingUnits_HeaderFile
#define _IGESGraph_DrawingUnits_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESGraph_DrawingUnits_HeaderFile
#include <Handle_IGESGraph_DrawingUnits.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class TCollection_HAsciiString;


//! defines IGESDrawingUnits, Type <406> Form <17> <br>
//!          in package IGESGraph <br>
class IGESGraph_DrawingUnits : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESGraph_DrawingUnits();
  //! This method is used to set the fields of the class <br>
//!           DrawingUnits <br>
//!      - nbProps : Number of property values (NP = 2) <br>
//!      - aFlag   : DrawingUnits Flag <br>
//!      - aUnit   : DrawingUnits Name <br>
  Standard_EXPORT     void Init(const Standard_Integer nbProps,const Standard_Integer aFlag,const Handle(TCollection_HAsciiString)& aUnit) ;
  //! returns the number of property values in <me> <br>
  Standard_EXPORT     Standard_Integer NbPropertyValues() const;
  //! returns the drawing space units of <me> <br>
  Standard_EXPORT     Standard_Integer Flag() const;
  //! returns the name of the drawing space units of <me> <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString Unit() const;
  //! Computes the value of the unit, in meters, according Flag <br>
//!           (same values as for GlobalSection from IGESData) <br>
  Standard_EXPORT     Standard_Real UnitValue() const;




  DEFINE_STANDARD_RTTI(IGESGraph_DrawingUnits)

protected:




private: 


Standard_Integer theNbPropertyValues;
Standard_Integer theFlag;
Handle_TCollection_HAsciiString theUnit;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
