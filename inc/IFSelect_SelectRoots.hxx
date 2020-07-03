// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_SelectRoots_HeaderFile
#define _IFSelect_SelectRoots_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IFSelect_SelectRoots_HeaderFile
#include <Handle_IFSelect_SelectRoots.hxx>
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
class Interface_EntityIterator;
class Interface_Graph;
class Standard_Transient;
class Interface_InterfaceModel;
class TCollection_AsciiString;


//! A SelectRoots sorts the Entities which are local roots of a <br>
//!           set of Entities (not shared by other Entities inside this set, <br>
//!           even if they are shared by other Entities outside it) <br>
class IFSelect_SelectRoots : public IFSelect_SelectExtract {

public:

  //! Creates a SelectRoots <br>
  Standard_EXPORT   IFSelect_SelectRoots();
  //! Returns the list of local roots. It is redefined for a purpose <br>
//!           of effeciency : calling a Sort routine for each Entity would <br>
//!           cost more ressource than to work in once using a Map <br>
//!           RootResult takes in account the Direct status <br>
  Standard_EXPORT   virtual  Interface_EntityIterator RootResult(const Interface_Graph& G) const;
  //! Returns always True, because RootResult has done work <br>
  Standard_EXPORT     Standard_Boolean Sort(const Standard_Integer rank,const Handle(Standard_Transient)& ent,const Handle(Interface_InterfaceModel)& model) const;
  //! Returns a text defining the criterium : "Local Root Entities" <br>
  Standard_EXPORT     TCollection_AsciiString ExtractLabel() const;




  DEFINE_STANDARD_RTTI(IFSelect_SelectRoots)

protected:

  //! Returns True, because RootResult assures uniqueness <br>
  Standard_EXPORT   virtual  Standard_Boolean HasUniqueResult() const;



private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
