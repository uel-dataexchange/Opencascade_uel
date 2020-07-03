// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomliteTest_HeaderFile
#define _GeomliteTest_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

class Draw_Interpretor;


//! this  package  provides  elementary commands for  curves  and <br>
//!          surface. <br>
class GeomliteTest  {
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

  //! defines all geometric commands. <br>
  Standard_EXPORT   static  void AllCommands(Draw_Interpretor& I) ;
  //! defines curve commands. <br>
  Standard_EXPORT   static  void CurveCommands(Draw_Interpretor& I) ;
  //! defines surface commands. <br>
  Standard_EXPORT   static  void SurfaceCommands(Draw_Interpretor& I) ;
  //! defines commands to test the Geom2dAPI <br>
//!          - Intersection <br>
//!          - Extrema <br>
//!          - Projection <br>
//!          - Approximation, interpolation <br>
  Standard_EXPORT   static  void API2dCommands(Draw_Interpretor& I) ;
  //! defines constrained curves commands. <br>
  Standard_EXPORT   static  void ApproxCommands(Draw_Interpretor& I) ;
  //! defines curves and surfaces modification commands. <br>
//!          - Curve extension to point <br>
//!          - Surface extension by length <br>
  Standard_EXPORT   static  void ModificationCommands(Draw_Interpretor& I) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
