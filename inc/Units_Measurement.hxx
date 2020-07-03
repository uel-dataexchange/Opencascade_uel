// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Units_Measurement_HeaderFile
#define _Units_Measurement_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Units_Token_HeaderFile
#include <Handle_Units_Token.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
class Units_Token;


//! This class  defines  a measurement which is the <br>
//!          association of a real value and a unit. <br>
class Units_Measurement  {
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

  //! It is the empty constructor of the class. <br>
  Standard_EXPORT   Units_Measurement();
  //! Returns an instance  of this class.   <avalue> defines <br>
//!          the measurement, and <atoken>  the token which defines <br>
//!          the unit used. <br>
  Standard_EXPORT   Units_Measurement(const Standard_Real avalue,const Handle(Units_Token)& atoken);
  //! Returns an  instance of this  class.  <avalue> defines <br>
//!          the  measurement, and <aunit> the   unit used, <br>
//!          described in natural language. <br>
  Standard_EXPORT   Units_Measurement(const Standard_Real avalue,const Standard_CString aunit);
  //! Converts (if   possible)  the  measurement   object into <br>
//!          another   unit.      <aunit>   must  have    the  same <br>
//!          dimensionality as  the  unit  contained in   the token <br>
//!          <thetoken>. <br>
  Standard_EXPORT     void Convert(const Standard_CString aunit) ;
  //! Returns a Measurement object with the integer value of <br>
//!          the measurement contained in <me>. <br>
  Standard_EXPORT     Units_Measurement Integer() const;
  //! Returns a Measurement object with the fractional value <br>
//!          of the measurement contained in <me>. <br>
  Standard_EXPORT     Units_Measurement Fractional() const;
  //! Returns the value of the measurement. <br>
  Standard_EXPORT     Standard_Real Measurement() const;
  //! Returns the token contained in <me>. <br>
  Standard_EXPORT     Handle_Units_Token Token() const;
  //! Returns (if it is possible) a measurement which is the <br>
//!          addition  of  <me>  and  <ameasurement>.  The   chosen <br>
//!          returned unit is the unit of <me>. <br>
  Standard_EXPORT     Units_Measurement Add(const Units_Measurement& ameasurement) const;
    Units_Measurement operator +(const Units_Measurement& ameasurement) const
{
  return Add(ameasurement);
}
  //! Returns (if it is possible) a measurement which is the <br>
//!          subtraction of  <me>  and <ameasurement>.   The chosen <br>
//!          returned unit is the unit of <me>. <br>
  Standard_EXPORT     Units_Measurement Subtract(const Units_Measurement& ameasurement) const;
    Units_Measurement operator -(const Units_Measurement& ameasurement) const
{
  return Subtract(ameasurement);
}
  //! Returns  a measurement which  is the multiplication of <br>
//!          <me> and <ameasurement>. <br>
  Standard_EXPORT     Units_Measurement Multiply(const Units_Measurement& ameasurement) const;
    Units_Measurement operator *(const Units_Measurement& ameasurement) const
{
  return Multiply(ameasurement);
}
  //! Returns  a measurement which  is the multiplication of <br>
//!          <me> with the value  <avalue>. <br>
  Standard_EXPORT     Units_Measurement Multiply(const Standard_Real avalue) const;
    Units_Measurement operator *(const Standard_Real avalue) const
{
  return Multiply(avalue);
}
  //! Returns a measurement which  is the division of  <me> by <br>
//!          <ameasurement>. <br>
  Standard_EXPORT     Units_Measurement Divide(const Units_Measurement& ameasurement) const;
    Units_Measurement operator /(const Units_Measurement& ameasurement) const
{
  return Divide(ameasurement);
}
  //! Returns  a measurement which  is the division of <me> by <br>
//!          the constant <avalue>. <br>
  Standard_EXPORT     Units_Measurement Divide(const Standard_Real avalue) const;
    Units_Measurement operator /(const Standard_Real avalue) const
{
  return Divide(avalue);
}
  //! Returns   a    measurement  which   is <me>    powered <br>
//!          <anexponent>. <br>
  Standard_EXPORT     Units_Measurement Power(const Standard_Real anexponent) const;
  
  Standard_EXPORT     Standard_Boolean HasToken() const;
  //! Useful for debugging. <br>
  Standard_EXPORT     void Dump() const;





protected:





private:



Standard_Real themeasurement;
Handle_Units_Token thetoken;
Standard_Boolean myHasToken;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
