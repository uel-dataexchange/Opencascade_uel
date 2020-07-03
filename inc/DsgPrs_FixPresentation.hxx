// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DsgPrs_FixPresentation_HeaderFile
#define _DsgPrs_FixPresentation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Prs3d_Presentation_HeaderFile
#include <Handle_Prs3d_Presentation.hxx>
#endif
#ifndef _Handle_Prs3d_Drawer_HeaderFile
#include <Handle_Prs3d_Drawer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Prs3d_Presentation;
class Prs3d_Drawer;
class gp_Pnt;
class gp_Dir;


//! class which draws the presentation of Fixed objects <br>
class DsgPrs_FixPresentation  {
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

  //! draws the presentation of fixed objects by <br>
//!          drawing the 'fix' symbol at position <aPntEnd>. <br>
//!          A binding segment is drawn between <aPntAttach> <br>
//!          ( which belongs the the fix object) and <aPntEnd>. <br>
//!          aSymbSize is the size of the 'fix'symbol <br>
  Standard_EXPORT   static  void Add(const Handle(Prs3d_Presentation)& aPresentation,const Handle(Prs3d_Drawer)& aDrawer,const gp_Pnt& aPntAttach,const gp_Pnt& aPntEnd,const gp_Dir& aNormPln,const Standard_Real aSymbSize) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
