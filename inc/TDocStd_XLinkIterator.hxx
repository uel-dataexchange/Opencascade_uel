// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDocStd_XLinkIterator_HeaderFile
#define _TDocStd_XLinkIterator_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TDocStd_XLinkPtr_HeaderFile
#include <TDocStd_XLinkPtr.hxx>
#endif
#ifndef _Handle_TDocStd_Document_HeaderFile
#include <Handle_TDocStd_Document.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoMoreObject;
class TDocStd_Document;


//! Iterates on Reference attributes. <br>
class TDocStd_XLinkIterator  {
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

  //! Returns an empty iterator; <br>
  Standard_EXPORT   TDocStd_XLinkIterator();
  //! Creates an iterator on Reference of <D>. <br>
  Standard_EXPORT   TDocStd_XLinkIterator(const Handle(TDocStd_Document)& D);
  //! Restarts an iteration with <D>. <br>
  Standard_EXPORT     void Initialize(const Handle(TDocStd_Document)& D) ;
  //! Returns True if there is a current Item in the <br>
//!          iteration. <br>
//! <br>
        Standard_Boolean More() const;
  //! Move to the next item; raises if there is no more item. <br>
  Standard_EXPORT     void Next() ;
  //! Returns the current item; a null handle if there is none. <br>
//! <br>
        TDocStd_XLinkPtr Value() const;





protected:





private:

  
  Standard_EXPORT     void Init(const Handle(TDocStd_Document)& D) ;


TDocStd_XLinkPtr myValue;


};


#include <TDocStd_XLinkIterator.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
