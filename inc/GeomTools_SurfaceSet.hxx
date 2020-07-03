// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomTools_SurfaceSet_HeaderFile
#define _GeomTools_SurfaceSet_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TColStd_IndexedMapOfTransient_HeaderFile
#include <TColStd_IndexedMapOfTransient.hxx>
#endif
#ifndef _Handle_Message_ProgressIndicator_HeaderFile
#include <Handle_Message_ProgressIndicator.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
#ifndef _Standard_IStream_HeaderFile
#include <Standard_IStream.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Message_ProgressIndicator;
class Standard_OutOfRange;
class Geom_Surface;


//! Stores a set of Surfaces from Geom. <br>
class GeomTools_SurfaceSet  {
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

  //! Returns an empty set of Surfaces. <br>
  Standard_EXPORT   GeomTools_SurfaceSet();
  //! Clears the content of the set. <br>
  Standard_EXPORT     void Clear() ;
  //! Incorporate a new Surface in the  set and returns <br>
//!          its index. <br>
  Standard_EXPORT     Standard_Integer Add(const Handle(Geom_Surface)& S) ;
  //! Returns the Surface of index <I>. <br>
  Standard_EXPORT     Handle_Geom_Surface Surface(const Standard_Integer I) const;
  //! Returns the index of <L>. <br>
  Standard_EXPORT     Standard_Integer Index(const Handle(Geom_Surface)& S) const;
  //! Dumps the content of me on the stream <OS>. <br>
  Standard_EXPORT     void Dump(Standard_OStream& OS) const;
  //! Writes the content of  me  on the stream <OS> in a <br>
//!          format that can be read back by Read. <br>
  Standard_EXPORT     void Write(Standard_OStream& OS) const;
  //! Reads the content of me from the  stream  <IS>. me <br>
//!          is first cleared. <br>
//! <br>
  Standard_EXPORT     void Read(Standard_IStream& IS) ;
  //! Dumps the surface on the stream,  if compact is True <br>
//!          use the compact format that can be read back. <br>
  Standard_EXPORT   static  void PrintSurface(const Handle(Geom_Surface)& S,Standard_OStream& OS,const Standard_Boolean compact = Standard_False) ;
  //! Reads the surface  from  the stream.  The  surface  is <br>
//!          assumed   to have  been  writtent  with  the Print <br>
//!          method (compact = True). <br>
//! <br>
  Standard_EXPORT   static  Standard_IStream& ReadSurface(Standard_IStream& IS,Handle(Geom_Surface)& S) ;
  
  Standard_EXPORT     void SetProgress(const Handle(Message_ProgressIndicator)& PR) ;
  
  Standard_EXPORT     Handle_Message_ProgressIndicator GetProgress() const;





protected:





private:



TColStd_IndexedMapOfTransient myMap;
Handle_Message_ProgressIndicator myProgress;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
