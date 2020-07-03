// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TestTopOpeTools_HeaderFile
#define _TestTopOpeTools_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

class Draw_Interpretor;
class TestTopOpeTools_Mesure;
class TestTopOpeTools_Array1OfMesure;
class TestTopOpeTools_HArray1OfMesure;



//! <br>
//!  Provide Trace control on packages involved in <br>
//!  topological operations kernel, from Draw command interpretor. <br>
//! <br>
//!  They may be used by users of topological operation kernel, such as : <br>
//! <br>
//!  * topological operation performer, <br>
//!  * hidden line removal performer, <br>
//!  * fillet, chamfer performer <br>
//! <br>
//!  Trace  control   consists  in  management  of <br>
//!  control functions,  activating/desactivating  execution  of <br>
//!  instructions considered as purely PASSIVE code, <br>
//!  performing dumps, prints, and drawing of internal objects <br>
//!  dealed by some topological operation packages. <br>
//! <br>
//!  All of the Trace controls in top.ope. kernel <br>
//!  are enclosed by the C conditional compilation statements : <br>
//!  #ifdef DEB  ...  #endif <br>
//! <br>
//!  The "Traced" packages of topological operation kernel are : <br>
//!     - TopBuild <br>
//!     - TopOpeBRepTool <br>
//!     - TopOpeBRepDS <br>
//! <br>
//!  How to use the Trace : <br>
//!  ---------------------- <br>
//! <br>
//!  In a Test.cxx program using  the Draw command interpretor, dealing <br>
//!  a set of commands theCommands (Draw_CommandManager theCommands)  : <br>
class TestTopOpeTools  {
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

  //! Defines all topological operation test commands <br>
  Standard_EXPORT   static  void AllCommands(Draw_Interpretor& I) ;
  //! Defines the dump commands on <br>
//!          topological operation packages. <br>
  Standard_EXPORT   static  void TraceCommands(Draw_Interpretor& I) ;
  //! Defines auxiliary commands <br>
  Standard_EXPORT   static  void OtherCommands(Draw_Interpretor& I) ;





protected:





private:




friend class TestTopOpeTools_Mesure;
friend class TestTopOpeTools_Array1OfMesure;
friend class TestTopOpeTools_HArray1OfMesure;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
