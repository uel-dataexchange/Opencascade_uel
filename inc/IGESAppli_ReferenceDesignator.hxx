// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESAppli_ReferenceDesignator_HeaderFile
#define _IGESAppli_ReferenceDesignator_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESAppli_ReferenceDesignator_HeaderFile
#include <Handle_IGESAppli_ReferenceDesignator.hxx>
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
class TCollection_HAsciiString;


//! defines ReferenceDesignator, Type <406> Form <7> <br>
//!          in package IGESAppli <br>
//!          Used to attach a text string containing the value of <br>
//!          a component reference designator to an entity being <br>
//!          used to represent a component. <br>
class IGESAppli_ReferenceDesignator : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESAppli_ReferenceDesignator();
  //! This method is used to set the fields of the class <br>
//!           ReferenceDesignator <br>
//!       - nbPropVal : Number of property values = 1 <br>
//!       - aText     : Reference designator text <br>
  Standard_EXPORT     void Init(const Standard_Integer nbPropVal,const Handle(TCollection_HAsciiString)& aText) ;
  //! returns the number of property values <br>
//! is always 1 <br>
  Standard_EXPORT     Standard_Integer NbPropertyValues() const;
  //! returns the Reference designator text <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString RefDesignatorText() const;




  DEFINE_STANDARD_RTTI(IGESAppli_ReferenceDesignator)

protected:




private: 


Standard_Integer theNbPropertyValues;
Handle_TCollection_HAsciiString theRefDesigText;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
