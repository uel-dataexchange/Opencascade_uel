// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_SelectUnknownEntities_HeaderFile
#define _IFSelect_SelectUnknownEntities_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IFSelect_SelectUnknownEntities_HeaderFile
#include <Handle_IFSelect_SelectUnknownEntities.hxx>
#endif

#ifndef _IFSelect_SelectExtract_HeaderFile
#include <IFSelect_SelectExtract.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_Interface_InterfaceModel_HeaderFile
#include <Handle_Interface_InterfaceModel.hxx>
#endif
class Standard_Transient;
class Interface_InterfaceModel;
class TCollection_AsciiString;


//! A SelectUnknownEntities sorts the Entities which are qualified <br>
//!           as "Unknown" (their Type has not been recognized) <br>
class IFSelect_SelectUnknownEntities : public IFSelect_SelectExtract {

public:

  //! Creates a SelectUnknownEntities <br>
  Standard_EXPORT   IFSelect_SelectUnknownEntities();
  //! Returns True for an Entity which is qualified as "Unknown", <br>
//!           i.e. if <model> known <ent> (through its Number) as Unknown <br>
  Standard_EXPORT     Standard_Boolean Sort(const Standard_Integer rank,const Handle(Standard_Transient)& ent,const Handle(Interface_InterfaceModel)& model) const;
  //! Returns a text defining the criterium : "Recognized Entities" <br>
  Standard_EXPORT     TCollection_AsciiString ExtractLabel() const;




  DEFINE_STANDARD_RTTI(IFSelect_SelectUnknownEntities)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
