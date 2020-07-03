// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Expr_BinaryFunction_HeaderFile
#define _Expr_BinaryFunction_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Expr_BinaryFunction_HeaderFile
#include <Handle_Expr_BinaryFunction.hxx>
#endif

#ifndef _Handle_Expr_GeneralFunction_HeaderFile
#include <Handle_Expr_GeneralFunction.hxx>
#endif
#ifndef _Expr_BinaryExpression_HeaderFile
#include <Expr_BinaryExpression.hxx>
#endif
#ifndef _Handle_Expr_GeneralExpression_HeaderFile
#include <Handle_Expr_GeneralExpression.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Expr_NamedUnknown_HeaderFile
#include <Handle_Expr_NamedUnknown.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Expr_GeneralFunction;
class Expr_InvalidFunction;
class Standard_NumericError;
class Expr_NotEvaluable;
class Expr_GeneralExpression;
class Expr_NamedUnknown;
class Expr_Array1OfNamedUnknown;
class TColStd_Array1OfReal;
class TCollection_AsciiString;


//! Defines the use of a binary function in an expression <br>
//!          with given arguments. <br>
class Expr_BinaryFunction : public Expr_BinaryExpression {

public:

  //! Creates <me> as <func> (<exp1>,<exp2>). <br>
//!          Raises exception if <func> is not binary. <br>
  Standard_EXPORT   Expr_BinaryFunction(const Handle(Expr_GeneralFunction)& func,const Handle(Expr_GeneralExpression)& exp1,const Handle(Expr_GeneralExpression)& exp2);
  //! Returns the function defining <me>. <br>
  Standard_EXPORT     Handle_Expr_GeneralFunction Function() const;
  //! Returns a GeneralExpression after a simplification <br>
//!          of the arguments of <me>. <br>
  Standard_EXPORT     Handle_Expr_GeneralExpression ShallowSimplified() const;
  //! Returns a copy of <me> having the same unknowns and functions. <br>
  Standard_EXPORT     Handle_Expr_GeneralExpression Copy() const;
  //! Tests if <me> and <Other> define the same expression. <br>
//!          This method does not include any simplification before <br>
//!          testing. <br>
  Standard_EXPORT     Standard_Boolean IsIdentical(const Handle(Expr_GeneralExpression)& Other) const;
  
  Standard_EXPORT     Standard_Boolean IsLinear() const;
  //! Returns the derivative on <X> unknown of <me> <br>
  Standard_EXPORT     Handle_Expr_GeneralExpression Derivative(const Handle(Expr_NamedUnknown)& X) const;
  //! Returns the value of <me> (as a Real) by <br>
//!          replacement of <vars> by <vals>. <br>
//!          Raises NotEvaluable if <me> contains NamedUnknown not <br>
//!          in <vars> or NumericError if result cannot be computed. <br>
  Standard_EXPORT     Standard_Real Evaluate(const Expr_Array1OfNamedUnknown& vars,const TColStd_Array1OfReal& vals) const;
  //! returns a string representing <me> in a readable way. <br>
  Standard_EXPORT     TCollection_AsciiString String() const;




  DEFINE_STANDARD_RTTI(Expr_BinaryFunction)

protected:




private: 


Handle_Expr_GeneralFunction myFunction;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
