// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSelect_Activator_HeaderFile
#define _IGESSelect_Activator_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESSelect_Activator_HeaderFile
#include <Handle_IGESSelect_Activator.hxx>
#endif

#ifndef _IFSelect_Activator_HeaderFile
#include <IFSelect_Activator.hxx>
#endif
#ifndef _IFSelect_ReturnStatus_HeaderFile
#include <IFSelect_ReturnStatus.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_IFSelect_SessionPilot_HeaderFile
#include <Handle_IFSelect_SessionPilot.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
class IFSelect_SessionPilot;


//! Performs Actions specific to IGESSelect, i.e. creation of <br>
//!           IGES Selections and Dispatches, plus dumping specific to IGES <br>
class IGESSelect_Activator : public IFSelect_Activator {

public:

  
  Standard_EXPORT   IGESSelect_Activator();
  //! Executes a Command Line for IGESSelect <br>
  Standard_EXPORT     IFSelect_ReturnStatus Do(const Standard_Integer number,const Handle(IFSelect_SessionPilot)& pilot) ;
  //! Sends a short help message for IGESSelect commands <br>
  Standard_EXPORT     Standard_CString Help(const Standard_Integer number) const;




  DEFINE_STANDARD_RTTI(IGESSelect_Activator)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
