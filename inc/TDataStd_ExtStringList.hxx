// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_ExtStringList_HeaderFile
#define _TDataStd_ExtStringList_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TDataStd_ExtStringList_HeaderFile
#include <Handle_TDataStd_ExtStringList.hxx>
#endif

#ifndef _TDataStd_ListOfExtendedString_HeaderFile
#include <TDataStd_ListOfExtendedString.hxx>
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
class TCollection_ExtendedString;
class TDataStd_ListOfExtendedString;
class TDF_Attribute;
class TDF_RelocationTable;


//! Contains a list of ExtendedString. <br>
class TDataStd_ExtStringList : public TDF_Attribute {

public:

  //! Static methods <br>
//!          ============== <br>//! Returns the ID of the list of strings attribute. <br>
  Standard_EXPORT   static const Standard_GUID& GetID() ;
  //! Finds or creates a list of string values attribute. <br>
  Standard_EXPORT   static  Handle_TDataStd_ExtStringList Set(const TDF_Label& label) ;
  
  Standard_EXPORT   TDataStd_ExtStringList();
  
  Standard_EXPORT     Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     Standard_Integer Extent() const;
  
  Standard_EXPORT     void Prepend(const TCollection_ExtendedString& value) ;
  
  Standard_EXPORT     void Append(const TCollection_ExtendedString& value) ;
  //! Inserts the <value> before the first meet of <before_value>. <br>
  Standard_EXPORT     Standard_Boolean InsertBefore(const TCollection_ExtendedString& value,const TCollection_ExtendedString& before_value) ;
  //! Inserts the <value> after the first meet of <after_value>. <br>
  Standard_EXPORT     Standard_Boolean InsertAfter(const TCollection_ExtendedString& value,const TCollection_ExtendedString& after_value) ;
  //! Removes the first meet of the <value>. <br>
  Standard_EXPORT     Standard_Boolean Remove(const TCollection_ExtendedString& value) ;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT    const TCollection_ExtendedString& First() const;
  
  Standard_EXPORT    const TCollection_ExtendedString& Last() const;
  
  Standard_EXPORT    const TDataStd_ListOfExtendedString& List() const;
  
  Standard_EXPORT    const Standard_GUID& ID() const;
  
  Standard_EXPORT     void Restore(const Handle(TDF_Attribute)& With) ;
  
  Standard_EXPORT     Handle_TDF_Attribute NewEmpty() const;
  
  Standard_EXPORT     void Paste(const Handle(TDF_Attribute)& Into,const Handle(TDF_RelocationTable)& RT) const;
  
  Standard_EXPORT   virtual  Standard_OStream& Dump(Standard_OStream& anOS) const;




  DEFINE_STANDARD_RTTI(TDataStd_ExtStringList)

protected:




private: 


TDataStd_ListOfExtendedString myList;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
