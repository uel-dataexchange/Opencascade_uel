// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESData_ViewKindEntity_HeaderFile
#define _IGESData_ViewKindEntity_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESData_ViewKindEntity_HeaderFile
#include <Handle_IGESData_ViewKindEntity.hxx>
#endif

#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_OutOfRange;


//! defines required type for ViewKind in directory part <br>
//!           that is, Single view or Multiple view <br>
//!           An effective ViewKind entity must inherit it and define <br>
//!           IsSingle (True for Single, False for List of Views), <br>
//!           NbViews and ViewItem (especially for a List) <br>
class IGESData_ViewKindEntity : public IGESData_IGESEntity {

public:

  //! says if "me" is a Single View (True) or a List of Views (False) <br>
  Standard_EXPORT   virtual  Standard_Boolean IsSingle() const = 0;
  //! Returns the count of Views for a List of Views. For a Single <br>
//!           View, may return simply 1 <br>
  Standard_EXPORT   virtual  Standard_Integer NbViews() const = 0;
  //! Returns the View n0. <num> for a List of Views. For a Single <br>
//!           Views, may return <me> itself <br>
  Standard_EXPORT   virtual  Handle_IGESData_ViewKindEntity ViewItem(const Standard_Integer num) const = 0;




  DEFINE_STANDARD_RTTI(IGESData_ViewKindEntity)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
