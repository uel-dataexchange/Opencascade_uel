// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_LocationSet_HeaderFile
#define _TopTools_LocationSet_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopLoc_IndexedMapOfLocation_HeaderFile
#include <TopLoc_IndexedMapOfLocation.hxx>
#endif
#ifndef _Handle_Message_ProgressIndicator_HeaderFile
#include <Handle_Message_ProgressIndicator.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
#ifndef _Standard_IStream_HeaderFile
#include <Standard_IStream.hxx>
#endif
class Message_ProgressIndicator;
class Standard_OutOfRange;
class TopLoc_Location;


//! The class LocationSet stores a set of location in <br>
//!          a relocatable state. <br>
//! <br>
//!          It can be created from Locations. <br>
//! <br>
//!          It can create Locations. <br>
//! <br>
//!          It can be write and read from a stream. <br>
class TopTools_LocationSet  {
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

  //! Returns an empty set of locations. <br>
  Standard_EXPORT   TopTools_LocationSet();
  //! Clears the content of the set. <br>
  Standard_EXPORT     void Clear() ;
  //! Incorporate a new Location in the  set and returns <br>
//!          its index. <br>
  Standard_EXPORT     Standard_Integer Add(const TopLoc_Location& L) ;
  //! Returns the location of index <I>. <br>
//! <br>
  Standard_EXPORT    const TopLoc_Location& Location(const Standard_Integer I) const;
  //! Returns the index of <L>. <br>
  Standard_EXPORT     Standard_Integer Index(const TopLoc_Location& L) const;
  //! Dumps the content of me on the stream <OS>. <br>
  Standard_EXPORT     void Dump(Standard_OStream& OS) const;
  //! Writes the content of  me  on the stream <OS> in a <br>
//!          format that can be read back by Read. <br>
  Standard_EXPORT     void Write(Standard_OStream& OS) const;
  //! Reads the content of me from the  stream  <IS>. me <br>
//!          is first cleared. <br>
//! <br>
  Standard_EXPORT     void Read(Standard_IStream& IS) ;
  
  Standard_EXPORT     void SetProgress(const Handle(Message_ProgressIndicator)& PR) ;
  
  Standard_EXPORT     Handle_Message_ProgressIndicator GetProgress() const;





protected:





private:



TopLoc_IndexedMapOfLocation myMap;
Handle_Message_ProgressIndicator myProgress;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
