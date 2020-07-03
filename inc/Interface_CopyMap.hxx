// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Interface_CopyMap_HeaderFile
#define _Interface_CopyMap_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Interface_CopyMap_HeaderFile
#include <Handle_Interface_CopyMap.hxx>
#endif

#ifndef _Handle_Interface_InterfaceModel_HeaderFile
#include <Handle_Interface_InterfaceModel.hxx>
#endif
#ifndef _TColStd_Array1OfTransient_HeaderFile
#include <TColStd_Array1OfTransient.hxx>
#endif
#ifndef _Interface_CopyControl_HeaderFile
#include <Interface_CopyControl.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Interface_InterfaceModel;
class Interface_InterfaceError;
class Standard_Transient;


//! Manages a Map for the need of single Transfers, such as Copies <br>
//!           In such transfer, Starting Entities are read from a unique <br>
//!           Starting Model, and each transferred Entity is bound to one <br>
//!           and only one Result, which cannot be changed later. <br>
class Interface_CopyMap : public Interface_CopyControl {

public:

  //! Creates a CopyMap adapted to work from a Model <br>
  Standard_EXPORT   Interface_CopyMap(const Handle(Interface_InterfaceModel)& amodel);
  //! Clears Transfer List. Gets Ready to begin another Transfer <br>
  Standard_EXPORT     void Clear() ;
  //! Returns the InterfaceModel used at Creation time <br>
  Standard_EXPORT     Handle_Interface_InterfaceModel Model() const;
  //! Binds a Starting Entity identified by its Number <num> in the <br>
//!           Starting Model, to a Result of Transfer <res> <br>
  Standard_EXPORT     void Bind(const Handle(Standard_Transient)& ent,const Handle(Standard_Transient)& res) ;
  //! Search for the result of a Starting Object (i.e. an Entity, <br>
//!           identified by its Number <num> in the Starting Model) <br>
//!           Returns True  if a  Result is Bound (and fills <res>) <br>
//!           Returns False if no result is Bound (and nullifies <res>) <br>
  Standard_EXPORT     Standard_Boolean Search(const Handle(Standard_Transient)& ent,Handle(Standard_Transient)& res) const;




  DEFINE_STANDARD_RTTI(Interface_CopyMap)

protected:




private: 


Handle_Interface_InterfaceModel themod;
TColStd_Array1OfTransient theres;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
