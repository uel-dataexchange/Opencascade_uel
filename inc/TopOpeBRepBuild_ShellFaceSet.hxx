// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_ShellFaceSet_HeaderFile
#define _TopOpeBRepBuild_ShellFaceSet_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Solid_HeaderFile
#include <TopoDS_Solid.hxx>
#endif
#ifndef _TopOpeBRepBuild_ShapeSet_HeaderFile
#include <TopOpeBRepBuild_ShapeSet.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
class TopoDS_Shape;
class TopoDS_Solid;
class TCollection_AsciiString;
class TopTools_ListOfShape;


//! a bound is a shell, a boundelement is a face. <br>
//! The ShapeSet stores : <br>
//! - a list of shell (bounds), <br>
//! - a list of face (boundelements) to start reconstructions, <br>
//! - a map of edge giving the list of face incident to an edge. <br>
class TopOpeBRepBuild_ShellFaceSet  : public TopOpeBRepBuild_ShapeSet {
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

  //! Creates a ShellFaceSet to build blocks of faces <br>
//! connected by edges. <br>
  Standard_EXPORT   TopOpeBRepBuild_ShellFaceSet();
  //! Creates a ShellFaceSet to build blocks of faces <br>
//! connected by edges. <br>
  Standard_EXPORT   TopOpeBRepBuild_ShellFaceSet(const TopoDS_Shape& S,const Standard_Address Addr = NULL);
  
  Standard_EXPORT    const TopoDS_Solid& Solid() const;
  
  Standard_EXPORT   virtual  void AddShape(const TopoDS_Shape& S) ;
  
  Standard_EXPORT   virtual  void AddStartElement(const TopoDS_Shape& S) ;
  
  Standard_EXPORT   virtual  void AddElement(const TopoDS_Shape& S) ;
  
  Standard_EXPORT   virtual  void DumpSS() ;
  
  Standard_EXPORT   virtual  TCollection_AsciiString SName(const TopoDS_Shape& S,const TCollection_AsciiString& sb = "",const TCollection_AsciiString& sa = "") const;
  
  Standard_EXPORT   virtual  TCollection_AsciiString SName(const TopTools_ListOfShape& S,const TCollection_AsciiString& sb = "",const TCollection_AsciiString& sa = "") const;
  
  Standard_EXPORT   virtual  TCollection_AsciiString SNameori(const TopoDS_Shape& S,const TCollection_AsciiString& sb = "",const TCollection_AsciiString& sa = "") const;
  
  Standard_EXPORT   virtual  TCollection_AsciiString SNameori(const TopTools_ListOfShape& S,const TCollection_AsciiString& sb = "",const TCollection_AsciiString& sa = "") const;





protected:





private:



TopoDS_Solid mySolid;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
