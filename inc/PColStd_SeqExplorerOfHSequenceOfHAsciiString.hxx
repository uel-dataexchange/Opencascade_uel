// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColStd_SeqExplorerOfHSequenceOfHAsciiString_HeaderFile
#define _PColStd_SeqExplorerOfHSequenceOfHAsciiString_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_PColStd_SeqNodeOfHSequenceOfHAsciiString_HeaderFile
#include <Handle_PColStd_SeqNodeOfHSequenceOfHAsciiString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_PColStd_HSequenceOfHAsciiString_HeaderFile
#include <Handle_PColStd_HSequenceOfHAsciiString.hxx>
#endif
#ifndef _Handle_PCollection_HAsciiString_HeaderFile
#include <Handle_PCollection_HAsciiString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class PColStd_SeqNodeOfHSequenceOfHAsciiString;
class PColStd_HSequenceOfHAsciiString;
class Standard_NoSuchObject;
class Standard_OutOfRange;
class PCollection_HAsciiString;



class PColStd_SeqExplorerOfHSequenceOfHAsciiString  {
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

  
  Standard_EXPORT   PColStd_SeqExplorerOfHSequenceOfHAsciiString(const Handle(PColStd_HSequenceOfHAsciiString)& S);
  
  Standard_EXPORT     Handle_PCollection_HAsciiString Value(const Standard_Integer Index) ;
  
  Standard_EXPORT     Standard_Boolean Contains(const Handle(PCollection_HAsciiString)& T) ;
  
  Standard_EXPORT     Standard_Integer Location(const Standard_Integer N,const Handle(PCollection_HAsciiString)& T,const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;
  
  Standard_EXPORT     Standard_Integer Location(const Standard_Integer N,const Handle(PCollection_HAsciiString)& T) ;





protected:





private:



Handle_PColStd_SeqNodeOfHSequenceOfHAsciiString CurrentItem;
Standard_Integer CurrentIndex;
Handle_PColStd_HSequenceOfHAsciiString TheSequence;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
