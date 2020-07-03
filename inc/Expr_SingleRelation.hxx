// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Expr_SingleRelation_HeaderFile
#define _Expr_SingleRelation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Expr_SingleRelation_HeaderFile
#include <Handle_Expr_SingleRelation.hxx>
#endif

#ifndef _Handle_Expr_GeneralExpression_HeaderFile
#include <Handle_Expr_GeneralExpression.hxx>
#endif
#ifndef _Expr_GeneralRelation_HeaderFile
#include <Expr_GeneralRelation.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Expr_GeneralRelation_HeaderFile
#include <Handle_Expr_GeneralRelation.hxx>
#endif
#ifndef _Handle_Expr_NamedUnknown_HeaderFile
#include <Handle_Expr_NamedUnknown.hxx>
#endif
class Expr_GeneralExpression;
class Standard_OutOfRange;
class Expr_GeneralRelation;
class Expr_NamedUnknown;



class Expr_SingleRelation : public Expr_GeneralRelation {

public:

  //! Defines the first member of the relation <br>
  Standard_EXPORT     void SetFirstMember(const Handle(Expr_GeneralExpression)& exp) ;
  //! Defines the second member of the relation <br>
  Standard_EXPORT     void SetSecondMember(const Handle(Expr_GeneralExpression)& exp) ;
  //! Returns the first member of the relation <br>
  Standard_EXPORT     Handle_Expr_GeneralExpression FirstMember() const;
  //! Returns the second member of the relation <br>
  Standard_EXPORT     Handle_Expr_GeneralExpression SecondMember() const;
  //! Tests if <me> is linear between its NamedUnknowns. <br>
  Standard_EXPORT     Standard_Boolean IsLinear() const;
  //! Returns the number of relations contained in <me>. <br>
  Standard_EXPORT     Standard_Integer NbOfSubRelations() const;
  //! Returns the number of SingleRelations contained in <br>
//!          <me> (Always 1). <br>
  Standard_EXPORT     Standard_Integer NbOfSingleRelations() const;
  //! Returns the relation denoted by <index> in <me>. <br>
//!          An exception is raised if index is out of range. <br>
  Standard_EXPORT     Handle_Expr_GeneralRelation SubRelation(const Standard_Integer index) const;
  //! Tests if <me> contains <exp>. <br>
  Standard_EXPORT     Standard_Boolean Contains(const Handle(Expr_GeneralExpression)& exp) const;
  //! Replaces all occurences of <var> with <with> in <me>. <br>
  Standard_EXPORT     void Replace(const Handle(Expr_NamedUnknown)& var,const Handle(Expr_GeneralExpression)& with) ;




  DEFINE_STANDARD_RTTI(Expr_SingleRelation)

protected:




private: 


Handle_Expr_GeneralExpression myFirstMember;
Handle_Expr_GeneralExpression mySecondMember;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
