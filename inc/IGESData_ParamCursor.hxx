// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESData_ParamCursor_HeaderFile
#define _IGESData_ParamCursor_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Interface_InterfaceError;


//! Auxiliary class for ParamReader. <br>
//!           It stores commands for a ParamReader to manage the current <br>
//!           parameter number. Used by methods Read... from ParamReader. <br>
//!           It allows to define the following commands : <br>
//!           - read a parameter specified by a precise Number (basic case) <br>
//!           - read a parameter then set Current Number to follow its number <br>
//!           - read the current parameter (with Current Number) then <br>
//!             advance Current Number by one <br>
//!           - idem with several : read "nb" parameters from one specified, <br>
//!             included, with or without setting Current Number to follow <br>
//!             last parameter read <br>
//!           - read several parameter from the current one, then advance <br>
//!             Current Number to follow the last one read <br>
//!           - Read several parameters (as above) but in interlaced lists, <br>
//!             i.e. from complex items (each one including successively for <br>
//!             instance, an Integer, a Real, an Entity ...) <br>
//! <br>
//!           If commands to advance Current Number are not set, it must be <br>
//!           set by the user (with method SetCurrent from ParamReader) <br>
//!           ParamReader offers methods which create most useful cases <br>
class IGESData_ParamCursor  {
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

  //! Creates a Cursor to read a precise parameter of ParamReader, <br>
//!           identified by its number, then set Current Number to "num + 1" <br>
//!           (this constructor allows to simply give a Number to a method <br>
//!           Read... from ParamReader, which will be translated into a <br>
//!           ParamCursor by compiler) <br>
  Standard_EXPORT   IGESData_ParamCursor(const Standard_Integer num);
  //! Creates a Cursor to read a list of parameters (count "nb") <br>
//!           starting from a precise one (number "num") included, then <br>
//!           set Current Number of ParamNumber to the first following one <br>
//!           ("num + nb") <br>
//!           If size is given, it means that each parameter is made of more <br>
//!           than one term. One term is the normal (default) case : for <br>
//!           instance, a Parameter comprises one Integer, or one Entity ... <br>
//!           Size gives the complete size of each Item if it is complex. <br>
//!           To be used ONLY IF it is constant <br>
  Standard_EXPORT   IGESData_ParamCursor(const Standard_Integer num,const Standard_Integer nb,const Standard_Integer size = 1);
  //! Defines the size of a term to read in the item : this commands <br>
//!           ParamReader to read "size" parameters for each item, then <br>
//!           skip the remainder of the item to the same term of next Item <br>
//!           (that is, skip "item size" - "term size") <br>
//! <br>
//!           In addition, Offset from beginning of Item is managed : <br>
//!           After being created, and for the frist call to SetTerm, the <br>
//!           part of Item to be read begins exactly as the Item begins <br>
//!           But after a SetTerm, the next read will add an offset which is <br>
//!           the size of former term. <br>
//! <br>
//!           autoadv commands Advance management. If it is True (default), <br>
//!           the last SetTerm (Item size has been covered) calls SetAdvance <br>
//!           If it is False, SetAdvance must be called directly if necessary <br>
//! <br>
//!           Error if a SetTerm overpasses the size of the Item <br>
  Standard_EXPORT     void SetTerm(const Standard_Integer size,const Standard_Boolean autoadv = Standard_True) ;
  //! Defines a term of one Parameter (very current case) <br>
  Standard_EXPORT     void SetOne(const Standard_Boolean autoadv = Standard_True) ;
  //! Defines a term of two Parameters for a XY (current case) <br>
  Standard_EXPORT     void SetXY(const Standard_Boolean autoadv = Standard_True) ;
  //! Defines a term of three Parameters for XYZ (current case) <br>
  Standard_EXPORT     void SetXYZ(const Standard_Boolean autoadv = Standard_True) ;
  //! Changes command to advance current cursor after reading <br>
//!           parameters. If "advance" True, sets advance, if "False", <br>
//!           resets it. ParamCursor is created by default with True. <br>
  Standard_EXPORT     void SetAdvance(const Standard_Boolean advance) ;
  //! Returns (included) starting number for reading parameters <br>
        Standard_Integer Start() const;
  //! Returns (excluded) upper limit number for reading parameters <br>
        Standard_Integer Limit() const;
  //! Returns required count of items to be read <br>
        Standard_Integer Count() const;
  //! Returns length of item (count of parameters per item) <br>
        Standard_Integer ItemSize() const;
  //! Returns length of current term (count of parameters) in item <br>
        Standard_Integer TermSize() const;
  //! Returns offset from which current term must be read in item <br>
        Standard_Integer Offset() const;
  //! Returns True if Advance command has been set <br>
        Standard_Boolean Advance() const;





protected:





private:



Standard_Integer thestart;
Standard_Integer thelimit;
Standard_Integer thecount;
Standard_Integer theisize;
Standard_Integer theoffst;
Standard_Integer thetsize;
Standard_Boolean theadv;


};


#include <IGESData_ParamCursor.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
