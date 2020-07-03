// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DDF_HeaderFile
#define _DDF_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Handle_TDF_Data_HeaderFile
#include <Handle_TDF_Data.hxx>
#endif
#ifndef _Handle_TDF_Attribute_HeaderFile
#include <Handle_TDF_Attribute.hxx>
#endif
class TDF_Data;
class TDF_Label;
class Standard_GUID;
class TDF_Attribute;
class Draw_Interpretor;
class DDF_Data;
class DDF_Browser;
class DDF_Transaction;
class DDF_TransactionStack;
class DDF_StackNodeOfTransactionStack;
class DDF_StackIteratorOfTransactionStack;


//! Provides facilities to manipulate data framework <br>
//!          in a Draw-Commands environment. <br>
class DDF  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Search in draw  directory the framewok  identified <br>
//!          by its name <Name>. returns True if found. In that <br>
//!          case <DF> is setted. <br>
  Standard_EXPORT   static  Standard_Boolean GetDF(Standard_CString& Name,Handle(TDF_Data)& DF,const Standard_Boolean Complain = Standard_True) ;
  //! Search in <DF>  the label identified by its  entry <br>
//!          <Entry>.  returns  <True> if  found. In  that case <br>
//!          <Label> is setted. <br>
  Standard_EXPORT   static  Standard_Boolean FindLabel(const Handle(TDF_Data)& DF,const Standard_CString Entry,TDF_Label& Label,const Standard_Boolean Complain = Standard_True) ;
  //! Search in <DF> the  label identified by its entry <br>
//!         <Entry>.   if label doesn't  exist, create  and add <br>
//!         the Label in <DF>. In that case return True. <br>
  Standard_EXPORT   static  Standard_Boolean AddLabel(const Handle(TDF_Data)& DF,const Standard_CString Entry,TDF_Label& Label) ;
  //! Search   in <DF> the  attribute  identified by its <br>
//!          <ID> and its <entry>.  returns <True> if found. In <br>
//!          that case A is setted. <br>
  Standard_EXPORT   static  Standard_Boolean Find(const Handle(TDF_Data)& DF,const Standard_CString Entry,const Standard_GUID& ID,Handle(TDF_Attribute)& A,const Standard_Boolean Complain = Standard_True) ;
  
  Standard_EXPORT   static  Draw_Interpretor& ReturnLabel(Draw_Interpretor& theCommands,const TDF_Label& L) ;
  
  Standard_EXPORT   static  void AllCommands(Draw_Interpretor& theCommands) ;
  //! Basic commands. <br>
  Standard_EXPORT   static  void BasicCommands(Draw_Interpretor& theCommands) ;
  //! Data framework commands <br>
//!           create, clear & copy. <br>
  Standard_EXPORT   static  void DataCommands(Draw_Interpretor& theCommands) ;
  //! open commit abort a transaction <br>
//!           undo facilities. <br>
  Standard_EXPORT   static  void TransactionCommands(Draw_Interpretor& theCommands) ;
  //! Browser commands . <br>
  Standard_EXPORT   static  void BrowserCommands(Draw_Interpretor& theCommands) ;





protected:





private:




friend class DDF_Data;
friend class DDF_Browser;
friend class DDF_Transaction;
friend class DDF_TransactionStack;
friend class DDF_StackNodeOfTransactionStack;
friend class DDF_StackIteratorOfTransactionStack;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
