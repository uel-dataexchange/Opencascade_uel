// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_SelectionIterator_HeaderFile
#define _IFSelect_SelectionIterator_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_IFSelect_HSeqOfSelection_HeaderFile
#include <Handle_IFSelect_HSeqOfSelection.hxx>
#endif
#ifndef _Handle_IFSelect_Selection_HeaderFile
#include <Handle_IFSelect_Selection.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class IFSelect_HSeqOfSelection;
class Standard_NoSuchObject;
class IFSelect_Selection;
class IFSelect_TSeqOfSelection;


//! Defines an Iterator on a list of Selections <br>
class IFSelect_SelectionIterator  {
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

  //! Creates an empty iterator, ready to be filled <br>
  Standard_EXPORT   IFSelect_SelectionIterator();
  //! Creates an iterator from a Selection : it lists the Selections <br>
//!           from which <sel> depends (given by its method FillIterator) <br>
  Standard_EXPORT   IFSelect_SelectionIterator(const Handle(IFSelect_Selection)& sel);
  //! Adds to an iterator the content of another one <br>
//!           (each selection is present only once in the result) <br>
  Standard_EXPORT     void AddFromIter(IFSelect_SelectionIterator& iter) ;
  //! Adds a Selection to an iterator (if not yet noted) <br>
  Standard_EXPORT     void AddItem(const Handle(IFSelect_Selection)& sel) ;
  //! Adds a list of Selections to an iterator (this list comes <br>
//!           from the description of a Selection or a Dispatch, etc...) <br>
  Standard_EXPORT     void AddList(const IFSelect_TSeqOfSelection& list) ;
  //! Returns True if there are more Selections to get <br>
  Standard_EXPORT     Standard_Boolean More() const;
  //! Sets iterator to the next item <br>
  Standard_EXPORT     void Next() ;
  //! Returns the current Selction beeing iterated <br>
//!           Error if count of Selection has been passed <br>
  Standard_EXPORT    const Handle_IFSelect_Selection& Value() const;





protected:





private:



Standard_Integer thecurr;
Handle_IFSelect_HSeqOfSelection thelist;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
