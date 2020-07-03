// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SWDRAW_HeaderFile
#define _SWDRAW_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
class Draw_Interpretor;
class SWDRAW_ShapeTool;
class SWDRAW_ShapeAnalysis;
class SWDRAW_ShapeBuild;
class SWDRAW_ShapeConstruct;
class SWDRAW_ShapeCustom;
class SWDRAW_ShapeExtend;
class SWDRAW_ShapeFix;
class SWDRAW_ShapeUpgrade;
class SWDRAW_ShapeProcess;
class SWDRAW_ShapeProcessAPI;
class SWDRAW_ToVRML;


//! Provides DRAW interface to the functionalities of Shape Healing <br>
//!          toolkit (SHAPEWORKS Delivery Unit). <br>
//! <br>
//!          Classes prefixed with Shape* corresponds to the packages of <br>
//!          Shape Healing. <br>
class SWDRAW  {
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

  //! Loads commands defined in SWDRAW <br>
  Standard_EXPORT   static  void Init(Draw_Interpretor& theCommands) ;





protected:





private:

  //! Returns the name of the DRAW group accumulating the <br>
//!          commands from the classes prefixed with Shape*. <br>
//!          Returns "Shape Healing". <br>
  Standard_EXPORT   static  Standard_CString GroupName() ;



friend class SWDRAW_ShapeTool;
friend class SWDRAW_ShapeAnalysis;
friend class SWDRAW_ShapeBuild;
friend class SWDRAW_ShapeConstruct;
friend class SWDRAW_ShapeCustom;
friend class SWDRAW_ShapeExtend;
friend class SWDRAW_ShapeFix;
friend class SWDRAW_ShapeUpgrade;
friend class SWDRAW_ShapeProcess;
friend class SWDRAW_ShapeProcessAPI;
friend class SWDRAW_ToVRML;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
