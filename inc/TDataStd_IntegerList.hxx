// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_IntegerList_HeaderFile
#define _TDataStd_IntegerList_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TDataStd_IntegerList_HeaderFile
#include <Handle_TDataStd_IntegerList.hxx>
#endif

#ifndef _TColStd_ListOfInteger_HeaderFile
#include <TColStd_ListOfInteger.hxx>
#endif
#ifndef _TDF_Attribute_HeaderFile
#include <TDF_Attribute.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TDF_Attribute_HeaderFile
#include <Handle_TDF_Attribute.hxx>
#endif
#ifndef _Handle_TDF_RelocationTable_HeaderFile
#include <Handle_TDF_RelocationTable.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class Standard_GUID;
class TDF_Label;
class TColStd_ListOfInteger;
class TDF_Attribute;
class TDF_RelocationTable;


//! Contains a list of integers. <br>
class TDataStd_IntegerList : public TDF_Attribute {

public:

  //! Static methods <br>
//!          ============== <br>//! Returns the ID of the list of integer attribute. <br>
  Standard_EXPORT   static const Standard_GUID& GetID() ;
  //! Finds or creates a list of integer values attribute. <br>
  Standard_EXPORT   static  Handle_TDataStd_IntegerList Set(const TDF_Label& label) ;
  
  Standard_EXPORT   TDataStd_IntegerList();
  
  Standard_EXPORT     Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     Standard_Integer Extent() const;
  
  Standard_EXPORT     void Prepend(const Standard_Integer value) ;
  
  Standard_EXPORT     void Append(const Standard_Integer value) ;
  //! Inserts the <value> before the first meet of <before_value>. <br>
  Standard_EXPORT     Standard_Boolean InsertBefore(const Standard_Integer value,const Standard_Integer before_value) ;
  //! Inserts the <value> after the first meet of <after_value>. <br>
  Standard_EXPORT     Standard_Boolean InsertAfter(const Standard_Integer value,const Standard_Integer after_value) ;
  //! Removes the first meet of the <value>. <br>
  Standard_EXPORT     Standard_Boolean Remove(const Standard_Integer value) ;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     Standard_Integer First() const;
  
  Standard_EXPORT     Standard_Integer Last() const;
  
  Standard_EXPORT    const TColStd_ListOfInteger& List() const;
  
  Standard_EXPORT    const Standard_GUID& ID() const;
  
  Standard_EXPORT     void Restore(const Handle(TDF_Attribute)& With) ;
  
  Standard_EXPORT     Handle_TDF_Attribute NewEmpty() const;
  
  Standard_EXPORT     void Paste(const Handle(TDF_Attribute)& Into,const Handle(TDF_RelocationTable)& RT) const;
  
  Standard_EXPORT   virtual  Standard_OStream& Dump(Standard_OStream& anOS) const;




  DEFINE_STANDARD_RTTI(TDataStd_IntegerList)

protected:




private: 


TColStd_ListOfInteger myList;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
