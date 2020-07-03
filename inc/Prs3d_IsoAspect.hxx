// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Prs3d_IsoAspect_HeaderFile
#define _Prs3d_IsoAspect_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Prs3d_IsoAspect_HeaderFile
#include <Handle_Prs3d_IsoAspect.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Prs3d_LineAspect_HeaderFile
#include <Prs3d_LineAspect.hxx>
#endif
#ifndef _Quantity_NameOfColor_HeaderFile
#include <Quantity_NameOfColor.hxx>
#endif
#ifndef _Aspect_TypeOfLine_HeaderFile
#include <Aspect_TypeOfLine.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class Quantity_Color;


//! A framework to define the display attributes of isoparameters. <br>
//! This framework can be used to modify the default <br>
//! setting for isoparameters in AIS_Drawer. <br>
class Prs3d_IsoAspect : public Prs3d_LineAspect {

public:

  //! Constructs a framework to define display attributes of isoparameters. <br>
//! These include: <br>
//! -   the color attribute aColor <br>
//! -   the type of line aType <br>
//! -   the width value aWidth <br>
//! -   aNumber, the number of isoparameters to be   displayed. <br>
  Standard_EXPORT   Prs3d_IsoAspect(const Quantity_NameOfColor aColor,const Aspect_TypeOfLine aType,const Standard_Real aWidth,const Standard_Integer aNumber);
  
  Standard_EXPORT   Prs3d_IsoAspect(const Quantity_Color& aColor,const Aspect_TypeOfLine aType,const Standard_Real aWidth,const Standard_Integer aNumber);
  //! defines the number of U or V isoparametric curves <br>
//!         to be drawn for a single face. <br>
//!          Default value: 10 <br>
  Standard_EXPORT     void SetNumber(const Standard_Integer aNumber) ;
  //! returns the number of U or V isoparametric curves drawn for a single face. <br>
  Standard_EXPORT     Standard_Integer Number() const;
  
  Standard_EXPORT   virtual  void Print(Standard_OStream& s) const;




  DEFINE_STANDARD_RTTI(Prs3d_IsoAspect)

protected:




private: 


Standard_Integer myNumber;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
