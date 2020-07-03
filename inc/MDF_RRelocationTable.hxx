// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDF_RRelocationTable_HeaderFile
#define _MDF_RRelocationTable_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MDF_RRelocationTable_HeaderFile
#include <Handle_MDF_RRelocationTable.hxx>
#endif

#ifndef _PTColStd_PersistentTransientMap_HeaderFile
#include <PTColStd_PersistentTransientMap.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_PDF_Attribute_HeaderFile
#include <Handle_PDF_Attribute.hxx>
#endif
#ifndef _Handle_TDF_Attribute_HeaderFile
#include <Handle_TDF_Attribute.hxx>
#endif
#ifndef _Handle_Standard_Persistent_HeaderFile
#include <Handle_Standard_Persistent.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
class PDF_Attribute;
class TDF_Attribute;
class Standard_Persistent;
class Standard_Transient;
class PTColStd_PersistentTransientMap;



class MDF_RRelocationTable : public MMgt_TShared {

public:

  
  Standard_EXPORT   MDF_RRelocationTable(const Standard_Boolean theSelfRelocation = Standard_False);
  
  Standard_EXPORT     void SetSelfRelocation(const Standard_Boolean theStatus = Standard_True) ;
  
  Standard_EXPORT     Standard_Boolean IsSelfRelocation() const;
  
  Standard_EXPORT     void SetRelocation(const Handle(PDF_Attribute)& aSourceAttribute,const Handle(TDF_Attribute)& aTargetAttribute) ;
  
  Standard_EXPORT     Standard_Boolean HasRelocation(const Handle(PDF_Attribute)& aSourceAttribute,Handle(TDF_Attribute)& aTargetAttribute) ;
  
  Standard_EXPORT     void SetOtherRelocation(const Handle(Standard_Persistent)& aSource,const Handle(Standard_Transient)& aTarget) ;
  
  Standard_EXPORT     Standard_Boolean HasOtherRelocation(const Handle(Standard_Persistent)& aSource,Handle(Standard_Transient)& aTarget) ;
  
  Standard_EXPORT     PTColStd_PersistentTransientMap& AttributeTable() ;
  
  Standard_EXPORT     PTColStd_PersistentTransientMap& OtherTable() ;




  DEFINE_STANDARD_RTTI(MDF_RRelocationTable)

protected:




private: 


PTColStd_PersistentTransientMap myAttributeTable;
PTColStd_PersistentTransientMap myOtherTable;
Standard_Boolean mySelfRelocation;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
