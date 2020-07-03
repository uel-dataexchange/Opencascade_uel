// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Aspect_LineStyle_HeaderFile
#define _Aspect_LineStyle_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Aspect_TypeOfLine_HeaderFile
#include <Aspect_TypeOfLine.hxx>
#endif
#ifndef _Handle_TColQuantity_HArray1OfLength_HeaderFile
#include <Handle_TColQuantity_HArray1OfLength.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TColQuantity_HArray1OfLength;
class Aspect_LineStyleDefinitionError;
class TColQuantity_Array1OfLength;


//! This class allows the definition of a Line Style. <br>
//!	    The Style can be Predefined or defined by the user <br>
class Aspect_LineStyle  {
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

  //! Creates a line style with the default value of <br>
//!	    LineStyle type : SOLID <br>
  Standard_EXPORT   Aspect_LineStyle();
  //! Creates the line style <Type>. <br>
  Standard_EXPORT   Aspect_LineStyle(const Aspect_TypeOfLine Type);
  //! Creates a line style from METER Float style descriptor . <br>
//!	    Style Descriptor is : <br>
//!	    Each Odd float described the Drawn part of the style . <br>
//!	    Each Even float described the Hidden part of the style . <br>
//!	    (e.g) [0.010,0.002,0.005,0.004] <br>
//!		  Draw 10 MM ,Move 2 MM,Draw 5 MM .. <br>
  Standard_EXPORT   Aspect_LineStyle(const TColQuantity_Array1OfLength& Style);
  //! Updates the line style <me> from the definition of the <br>
//!	    line style <Other>. <br>
  Standard_EXPORT     Aspect_LineStyle& Assign(const Aspect_LineStyle& Other) ;
    Aspect_LineStyle& operator =(const Aspect_LineStyle& Other) 
{
  return Assign(Other);
}
  //! Updates the line style <me> from the definition of the <br>
//!	    line style <Type>. <br>
  Standard_EXPORT     void SetValues(const Aspect_TypeOfLine Type) ;
  //! Updates a line style with the new Float descriptor <br>
  Standard_EXPORT     void SetValues(const TColQuantity_Array1OfLength& Style) ;
  //! Returns the type of the line style <me> <br>
  Standard_EXPORT     Aspect_TypeOfLine Style() const;
  //! Returns the components length of the line style <br>
  Standard_EXPORT     Standard_Integer Length() const;
  //! Returns the components of a line style <br>
  Standard_EXPORT    const TColQuantity_Array1OfLength& Values() const;
  
  Standard_EXPORT     Standard_Boolean IsEqual(const Aspect_LineStyle& Other) const;
    Standard_Boolean operator==(const Aspect_LineStyle& Other) const
{
  return IsEqual(Other);
}
  
  Standard_EXPORT     Standard_Boolean IsNotEqual(const Aspect_LineStyle& Other) const;
    Standard_Boolean operator!=(const Aspect_LineStyle& Other) const
{
  return IsNotEqual(Other);
}





protected:





private:

  //! Set MyLineDescriptor with the predefined style values <br>
//!	    according of type <br>
  Standard_EXPORT     Handle_TColQuantity_HArray1OfLength PredefinedStyle(const Aspect_TypeOfLine Type) ;


Aspect_TypeOfLine MyLineType;
Handle_TColQuantity_HArray1OfLength MyLineDescriptor;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
