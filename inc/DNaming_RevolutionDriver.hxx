// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DNaming_RevolutionDriver_HeaderFile
#define _DNaming_RevolutionDriver_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_DNaming_RevolutionDriver_HeaderFile
#include <Handle_DNaming_RevolutionDriver.hxx>
#endif

#ifndef _TFunction_Driver_HeaderFile
#include <TFunction_Driver.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class TFunction_Logbook;
class TDF_Label;
class BRepPrimAPI_MakeRevol;
class TopoDS_Shape;



class DNaming_RevolutionDriver : public TFunction_Driver {

public:

  //! Constructor <br>//! validation <br>
//!          ========== <br>
  Standard_EXPORT   DNaming_RevolutionDriver();
  //! Validates labels of a function in <log>. <br>
//!          In regeneration mode this method must be called (by the <br>
//!          solver) even if the function is not executed, to build <br>
//!          the valid label scope. <br>//! execution of function <br>
//!          ====================== <br>
  Standard_EXPORT   virtual  void Validate(TFunction_Logbook& theLog) const;
  //! Analyse in <log> if the loaded function must be executed <br>
//!          (i.e.arguments are modified) or not. <br>
//!          If the Function label itself is modified, the function must <br>
//!          be executed. <br>
  Standard_EXPORT   virtual  Standard_Boolean MustExecute(const TFunction_Logbook& theLog) const;
  //! Execute the function and push in <log> the impacted <br>
//!          labels (see method SetImpacted). <br>
  Standard_EXPORT   virtual  Standard_Integer Execute(TFunction_Logbook& theLog) const;




  DEFINE_STANDARD_RTTI(DNaming_RevolutionDriver)

protected:




private: 

  
  Standard_EXPORT     void LoadNamingDS(const TDF_Label& theResultLabel,BRepPrimAPI_MakeRevol& mkRevol,const TopoDS_Shape& Basis,const TopoDS_Shape& Context) const;



};





// other Inline functions and methods (like "C++: function call" methods)


#endif
