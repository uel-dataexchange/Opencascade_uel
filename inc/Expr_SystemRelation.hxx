// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Expr_SystemRelation_HeaderFile
#define _Expr_SystemRelation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Expr_SystemRelation_HeaderFile
#include <Handle_Expr_SystemRelation.hxx>
#endif

#ifndef _Expr_SequenceOfGeneralRelation_HeaderFile
#include <Expr_SequenceOfGeneralRelation.hxx>
#endif
#ifndef _Expr_GeneralRelation_HeaderFile
#include <Expr_GeneralRelation.hxx>
#endif
#ifndef _Handle_Expr_GeneralRelation_HeaderFile
#include <Handle_Expr_GeneralRelation.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Expr_GeneralExpression_HeaderFile
#include <Handle_Expr_GeneralExpression.hxx>
#endif
#ifndef _Handle_Expr_NamedUnknown_HeaderFile
#include <Handle_Expr_NamedUnknown.hxx>
#endif
class Standard_OutOfRange;
class Standard_NoSuchObject;
class Standard_DimensionMismatch;
class Standard_NumericError;
class Expr_GeneralRelation;
class Expr_GeneralExpression;
class Expr_NamedUnknown;
class TCollection_AsciiString;



class Expr_SystemRelation : public Expr_GeneralRelation {

public:

  //! Creates a system with one relation <br>
  Standard_EXPORT   Expr_SystemRelation(const Handle(Expr_GeneralRelation)& relation);
  //! Appends <relation> in the list of components of <me>. <br>
  Standard_EXPORT     void Add(const Handle(Expr_GeneralRelation)& relation) ;
  
  Standard_EXPORT     void Remove(const Handle(Expr_GeneralRelation)& relation) ;
  //! Tests if <me> is linear between its NamedUnknowns. <br>
  Standard_EXPORT     Standard_Boolean IsLinear() const;
  //! Returns the number of relations contained in <me>. <br>
  Standard_EXPORT     Standard_Integer NbOfSubRelations() const;
  //! Returns the number of SingleRelations contained in <br>
//!          <me>. <br>
  Standard_EXPORT     Standard_Integer NbOfSingleRelations() const;
  //! Returns the relation denoted by <index> in <me>. <br>
//!          An exception is raised if <index> is out of range. <br>
  Standard_EXPORT     Handle_Expr_GeneralRelation SubRelation(const Standard_Integer index) const;
  
  Standard_EXPORT     Standard_Boolean IsSatisfied() const;
  //! Returns a GeneralRelation after replacement of <br>
//!          NamedUnknowns by an associated expression, and after <br>
//!          values computation. <br>
  Standard_EXPORT     Handle_Expr_GeneralRelation Simplified() const;
  //! Replaces NamedUnknowns by associated expressions, <br>
//!          and computes values in <me>. <br>
  Standard_EXPORT     void Simplify() ;
  //! Returns a copy of <me> having the same unknowns and functions. <br>
  Standard_EXPORT     Handle_Expr_GeneralRelation Copy() const;
  //! Tests if <me> contains <exp>. <br>
  Standard_EXPORT     Standard_Boolean Contains(const Handle(Expr_GeneralExpression)& exp) const;
  //! Replaces all occurences of <var> with <with> in <me>. <br>
  Standard_EXPORT     void Replace(const Handle(Expr_NamedUnknown)& var,const Handle(Expr_GeneralExpression)& with) ;
  //! returns a string representing <me> in a readable way. <br>
  Standard_EXPORT     TCollection_AsciiString String() const;




  DEFINE_STANDARD_RTTI(Expr_SystemRelation)

protected:




private: 


Expr_SequenceOfGeneralRelation myRelations;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
