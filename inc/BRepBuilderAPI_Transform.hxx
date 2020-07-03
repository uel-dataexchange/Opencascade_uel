// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepBuilderAPI_Transform_HeaderFile
#define _BRepBuilderAPI_Transform_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_Trsf_HeaderFile
#include <gp_Trsf.hxx>
#endif
#ifndef _TopLoc_Location_HeaderFile
#include <TopLoc_Location.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _BRepBuilderAPI_ModifyShape_HeaderFile
#include <BRepBuilderAPI_ModifyShape.hxx>
#endif
class Standard_NoSuchObject;
class gp_Trsf;
class TopoDS_Shape;
class TopTools_ListOfShape;


//! Geometric transformation on a shape. <br>
//! The transformation to be applied is defined as a <br>
//! gp_Trsf transformation, i.e. a transformation which does <br>
//! not modify the underlying geometry of shapes. <br>
//! The transformation is applied to: <br>
//! -   all curves which support edges of a shape, and <br>
//! -   all surfaces which support its faces. <br>
//! A Transform object provides a framework for: <br>
//! -   defining the geometric transformation to be applied, <br>
//! -   implementing the transformation algorithm, and <br>
//! -   consulting the results. <br>
class BRepBuilderAPI_Transform  : public BRepBuilderAPI_ModifyShape {
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

  //!  Constructs a framework for applying the geometric <br>
//! transformation T to a shape. Use the function Perform <br>
//! to define the shape to transform. <br>
  Standard_EXPORT   BRepBuilderAPI_Transform(const gp_Trsf& T);
  //! Creates a transformation from the gp_Trsf <T>, and <br>
//!          applies it to the shape <S>. If the transformation <br>
//!          is  direct   and isometric (determinant  =  1) and <br>
//!          <Copy> =  Standard_False,  the resulting shape  is <br>
//!          <S> on   which  a  new  location has    been  set. <br>
//!          Otherwise,  the   transformation is applied   on a <br>
//!          duplication of <S>. <br>
  Standard_EXPORT   BRepBuilderAPI_Transform(const TopoDS_Shape& S,const gp_Trsf& T,const Standard_Boolean Copy = Standard_False);
  //! pplies the geometric transformation defined at the <br>
//! time of construction of this framework to the shape S. <br>
//! - If the transformation T is direct and isometric, in <br>
//! other words, if the determinant of the vectorial part <br>
//! of T is equal to 1., and if Copy equals false (the <br>
//! default value), the resulting shape is the same as <br>
//! the original but with a new location assigned to it. <br>
//! -   In all other cases, the transformation is applied to a duplicate of S. <br>
//! Use the function Shape to access the result. <br>
//! Note: this framework can be reused to apply the same <br>
//! geometric transformation to other shapes. You only <br>
//! need to specify them by calling the function Perform again. <br>
  Standard_EXPORT     void Perform(const TopoDS_Shape& S,const Standard_Boolean Copy = Standard_False) ;
  //! Returns the modified shape corresponding to <S>. <br>
  Standard_EXPORT   virtual const TopoDS_Shape& ModifiedShape(const TopoDS_Shape& S) const;
  //! Returns the list  of shapes modified from the shape <br>
//!          <S>. <br>
  Standard_EXPORT   virtual const TopTools_ListOfShape& Modified(const TopoDS_Shape& S) ;





protected:





private:



gp_Trsf myTrsf;
TopLoc_Location myLocation;
Standard_Boolean myUseModif;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
