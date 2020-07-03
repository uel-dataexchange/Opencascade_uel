// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SelectMgr_AndFilter_HeaderFile
#define _SelectMgr_AndFilter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_SelectMgr_AndFilter_HeaderFile
#include <Handle_SelectMgr_AndFilter.hxx>
#endif

#ifndef _SelectMgr_CompositionFilter_HeaderFile
#include <SelectMgr_CompositionFilter.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_SelectMgr_EntityOwner_HeaderFile
#include <Handle_SelectMgr_EntityOwner.hxx>
#endif
class SelectMgr_EntityOwner;


//! A framework to define a selection filter for two or <br>
//! more types of entity. <br>
class SelectMgr_AndFilter : public SelectMgr_CompositionFilter {

public:

  //! Constructs an empty selection filter object for two or <br>
//! more types of entity. <br>
  Standard_EXPORT   SelectMgr_AndFilter();
  
  Standard_EXPORT     Standard_Boolean IsOk(const Handle(SelectMgr_EntityOwner)& anobj) const;




  DEFINE_STANDARD_RTTI(SelectMgr_AndFilter)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
