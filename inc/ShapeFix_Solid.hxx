// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeFix_Solid_HeaderFile
#define _ShapeFix_Solid_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_ShapeFix_Solid_HeaderFile
#include <Handle_ShapeFix_Solid.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _Handle_ShapeFix_Shell_HeaderFile
#include <Handle_ShapeFix_Shell.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _ShapeFix_Root_HeaderFile
#include <ShapeFix_Root.hxx>
#endif
#ifndef _ShapeExtend_Status_HeaderFile
#include <ShapeExtend_Status.hxx>
#endif
#ifndef _Handle_ShapeExtend_BasicMsgRegistrator_HeaderFile
#include <Handle_ShapeExtend_BasicMsgRegistrator.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class ShapeFix_Shell;
class TopoDS_Solid;
class TopoDS_Shell;
class TopoDS_Shape;
class ShapeExtend_BasicMsgRegistrator;


//! Provides method to build a solid from a shells and <br>
//!          orients them in order to have a valid solid with finite volume <br>
class ShapeFix_Solid : public ShapeFix_Root {

public:

  //! Empty constructor; <br>
  Standard_EXPORT   ShapeFix_Solid();
  //! Initializes by solid. <br>
  Standard_EXPORT   ShapeFix_Solid(const TopoDS_Solid& solid);
  //! Initializes by solid . <br>
  Standard_EXPORT   virtual  void Init(const TopoDS_Solid& solid) ;
  //! Iterates on shells and performs fixes <br>
//!          (calls ShapeFix_Shell for each subshell) <br>
  Standard_EXPORT   virtual  Standard_Boolean Perform() ;
  //! Calls MakeSolid and orients the solid to be "not infinite" <br>
  Standard_EXPORT     TopoDS_Solid SolidFromShell(const TopoDS_Shell& shell) ;
  //! Returns the status of the last Fix. <br>
  Standard_EXPORT     Standard_Boolean Status(const ShapeExtend_Status status) const;
  //! Returns resulting solid. <br>
  Standard_EXPORT     TopoDS_Shape Solid() const;
  //! Returns tool for fixing shells. <br>
        Handle_ShapeFix_Shell FixShellTool() const;
  //! Sets message registrator <br>
  Standard_EXPORT   virtual  void SetMsgRegistrator(const Handle(ShapeExtend_BasicMsgRegistrator)& msgreg) ;
  //! Sets basic precision value (also to FixShellTool) <br>
  Standard_EXPORT   virtual  void SetPrecision(const Standard_Real preci) ;
  //! Sets minimal allowed tolerance (also to FixShellTool) <br>
  Standard_EXPORT   virtual  void SetMinTolerance(const Standard_Real mintol) ;
  //! Sets maximal allowed tolerance (also to FixShellTool) <br>
  Standard_EXPORT   virtual  void SetMaxTolerance(const Standard_Real maxtol) ;
  //! Returns (modifiable) the mode for applying fixes of <br>
//!          ShapeFix_Shell, by default True. <br>
        Standard_Integer& FixShellMode() ;
  //! Returns (modifiable) the mode for creation of solids. <br>
//!          If mode myCreateOpenSolidMode is equal to true <br>
//!          solids are created from open shells <br>
//!          else solids are created  from closed shells only. <br>
//!          ShapeFix_Shell, by default False. <br>
        Standard_Boolean& CreateOpenSolidMode() ;
  //! In case of multiconnexity returns compound of fixed solids <br>
//!          else returns one solid. <br>
  Standard_EXPORT     TopoDS_Shape Shape() ;




  DEFINE_STANDARD_RTTI(ShapeFix_Solid)

protected:


TopoDS_Shape mySolid;
Handle_ShapeFix_Shell myFixShell;
Standard_Integer myStatus;
Standard_Integer myFixShellMode;


private: 


Standard_Boolean myCreateOpenSolidMode;


};


#include <ShapeFix_Solid.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
