// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PCollection_HExtendedString_HeaderFile
#define _PCollection_HExtendedString_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PCollection_HExtendedString_HeaderFile
#include <Handle_PCollection_HExtendedString.hxx>
#endif

#ifndef _TCollection_ExtendedString_HeaderFile
#include <TCollection_ExtendedString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_PCollection_HExtendedString_HeaderFile
#include <Handle_PCollection_HExtendedString.hxx>
#endif
#ifndef _Standard_ExtCharacter_HeaderFile
#include <Standard_ExtCharacter.hxx>
#endif
#ifndef _DBC_VArrayOfExtCharacter_HeaderFile
#include <DBC_VArrayOfExtCharacter.hxx>
#endif
#ifndef _Standard_Persistent_HeaderFile
#include <Standard_Persistent.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Handle_PCollection_HAsciiString_HeaderFile
#include <Handle_PCollection_HAsciiString.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class Standard_OutOfRange;
class Standard_NegativeValue;
class Standard_NumericError;
class TCollection_ExtendedString;
class PCollection_HAsciiString;
class DBC_VArrayOfExtCharacter;


class PCollection_HExtendedString : public Standard_Persistent {

public:

  //! Creation and initialization with the string S from <br>
//! TCollection. <br>
  Standard_EXPORT   PCollection_HExtendedString(const TCollection_ExtendedString& S);
  //! Creation and initialisation with the character C <br>
  Standard_EXPORT   PCollection_HExtendedString(const Standard_ExtCharacter C);
  //! Creation of a sub-string of the string S <br>
//! the sub-string starts at the index Fromindex and ends <br>
//! at the index ToIndex. <br>
//! Raises an exception if ToIndex is less than FromIndex <br>
  Standard_EXPORT   PCollection_HExtendedString(const Handle(PCollection_HExtendedString)& S,const Standard_Integer FromIndex,const Standard_Integer ToIndex);
  //! Creation by converting a CString to an extended string. <br>
  Standard_EXPORT   PCollection_HExtendedString(const Standard_CString astring);
  //! Creation by converting a normal Ascii string to an extended string. <br>
  Standard_EXPORT   PCollection_HExtendedString(const Handle(PCollection_HAsciiString)& S);
  //! Pushing a string at the end of the string me. <br>
  Standard_EXPORT     void Append(const Handle(PCollection_HExtendedString)& S) ;
  //! Center. <br>
//! Length becomes equal to Width and the new characters are <br>
//! equal to Filler. <br>
//! Raises an exception if Width is less than zero. <br>
//! If Width < Length nothing happens. <br>
  Standard_EXPORT     void Center(const Standard_Integer Width,const Standard_ExtCharacter Filler) ;
  //! Substitutes all the characters equal to C by NewC in the <br>
//! string <me>. <br>
  Standard_EXPORT     void ChangeAll(const Standard_ExtCharacter C,const Standard_ExtCharacter NewC) ;
  //! Removes all characters in the string <me>. <br>
//! Length is equal to zero now. <br>
  Standard_EXPORT     void Clear() ;
  //! Converts a persistent HExtendedString to a non <br>
//! persistent ExtendedString. <br>
  Standard_EXPORT     TCollection_ExtendedString Convert() const;
  //! Returns the index of the first character of <Set> founded in <me>. <br>
//! The search begins to the index FromIndex and ends to the index ToIndex. <br>
//! Returns zero if failure. <br>
//! Raises an exception if FromIndex or ToIndex is out of range. <br>
  Standard_EXPORT     Standard_Integer FirstLocationInSet(const Handle(PCollection_HExtendedString)& Set,const Standard_Integer FromIndex,const Standard_Integer ToIndex) const;
  //! Returns the index of the first character of <me> <br>
//! that is not present in the set <Set>. <br>
//! The search begins to the index FromIndex and ends to the <br>
//! the index ToIndex in <me>. Returns zero if failure. <br>
//! Raises an exception if FromIndex or ToIndex is out of range. <br>
  Standard_EXPORT     Standard_Integer FirstLocationNotInSet(const Handle(PCollection_HExtendedString)& Set,const Standard_Integer FromIndex,const Standard_Integer ToIndex) const;
  //! Pushing a string after a specific index in the string <me>. <br>
//! Raises an exception if Index is out of bounds. <br>
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(PCollection_HExtendedString)& S) ;
  //! Pushing a string before a specific index in the string <me>. <br>
//! Raises an exception if Index is out of bounds. <br>
  Standard_EXPORT     void InsertBefore(const Standard_Integer Index,const Handle(PCollection_HExtendedString)& S) ;
  //! Returns True if the string <me> is in the "Ascii range". <br>
  Standard_EXPORT     Standard_Boolean IsAscii() const;
  //! Test if characters are different between <me> and <other>. <br>
  Standard_EXPORT     Standard_Boolean IsDifferent(const Handle(PCollection_HExtendedString)& other) const;
  //! Returns True if the string <me> contains zero character. <br>
  Standard_EXPORT     Standard_Boolean IsEmpty() const;
  //! Returns TRUE if <me> is greater than <other>. <br>
  Standard_EXPORT     Standard_Boolean IsGreater(const Handle(PCollection_HExtendedString)& other) const;
  //! Returns TRUE if <me> is less than <other>. <br>
  Standard_EXPORT     Standard_Boolean IsLess(const Handle(PCollection_HExtendedString)& other) const;
  //! Returns True if two strings are equal. <br>
//! The comparison is case sensitive if the flag is set. <br>
  Standard_EXPORT     Standard_Boolean IsSameString(const Handle(PCollection_HExtendedString)& S) const;
  //! Removes all space characters in the begining of the string. <br>
//! Raises an exception if the string <me> is not in the "Ascii range". <br>
  Standard_EXPORT     void LeftAdjust() ;
  //! Left justify. <br>
//! Length becomes equal to Width and the new characters are <br>
//! equal to Filler. <br>
//! If Width < Length nothing happens. <br>
//! Raises an exception if Width is less than zero. <br>
  Standard_EXPORT     void LeftJustify(const Standard_Integer Width,const Standard_ExtCharacter Filler) ;
  //! Number of characters of the String <br>
  Standard_EXPORT     Standard_Integer Length() const;
  //! Returns the index of the nth occurence of the character C <br>
//! in the string <me> from the starting index FromIndex to the <br>
//! ending index ToIndex. Returns zero if failure. <br>
//! Raises an exception if FromIndex or ToIndex is out of range <br>
  Standard_EXPORT     Standard_Integer Location(const Standard_Integer N,const Standard_ExtCharacter C,const Standard_Integer FromIndex,const Standard_Integer ToIndex) const;
  //! Returns an index in the string <me> of the first occurence <br>
//! of the string S in the string <me> from the starting index. <br>
//! FromIndex to the ending index ToIndex. <br>
//! Returns zero if failure. <br>
//! Raises an exception if FromIndex or ToIndex is out of range. <br>
  Standard_EXPORT     Standard_Integer Location(const Handle(PCollection_HExtendedString)& S,const Standard_Integer FromIndex,const Standard_Integer ToIndex) const;
  //! Pushing a string at the begining of the string <me>. <br>
  Standard_EXPORT     void Prepend(const Handle(PCollection_HExtendedString)& S) ;
  //! Prints the content of <me> on the stream S. <br>
  Standard_EXPORT     void Print(Standard_OStream& S) const;
  //! Removes the character located at the index Index in the string. <br>
//! Raises an exception if Index is out of bounds. <br>
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  //! Removes all the characters from the index FromIndex to the <br>
//! index ToIndex. <br>
//! Raises an exception if FromIndex or ToIndex is out of bounds. <br>
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;
  //! Removes all the occurences of the character C in the string. <br>
  Standard_EXPORT     void RemoveAll(const Standard_ExtCharacter C) ;
  //! Removes all space characters at the end of the string. <br>
//! Raises an exception if the string <me> is not in the Unicod "Ascii range". <br>
  Standard_EXPORT     void RightAdjust() ;
  //! Right justify. <br>
//! Length becomes equal to Width and the new characters are <br>
//! equal to Filler. <br>
//! If Width < Length nothing happens. <br>
//! Raises an exception if Width is less than zero. <br>
  Standard_EXPORT     void RightJustify(const Standard_Integer Width,const Standard_ExtCharacter Filler) ;
  //! Substitutes the character located to the position Index <br>
//! by the character C. <br>
//! Raises an exception if the Index is out of bounds <br>
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Standard_ExtCharacter C) ;
  //! Substitutes from the index Index to the end by the string S. <br>
//! Raises an exception if Index is out of bounds. <br>
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(PCollection_HExtendedString)& S) ;
  //! Splits a string of characters into two sub-strings. <br>
  Standard_EXPORT     Handle_PCollection_HExtendedString Split(const Standard_Integer Index) ;
  //! Creation of a sub-string of the string <me>. <br>
//! The sub-string starts to the index FromIndex and ends <br>
//! to the index ToIndex. <br>
//! Raises an exception if ToIndex or FromIndex is out of bounds. <br>
  Standard_EXPORT     Handle_PCollection_HExtendedString SubString(const Standard_Integer FromIndex,const Standard_Integer ToIndex) const;
  //! Length of the string ignoring all spaces (' ') and the <br>
//! control character at the end. <br>
//! Raises an exception if the string <me> is not in the "Ascii range". <br>
  Standard_EXPORT     Standard_Integer UsefullLength() const;
  //! Returns the character of index Index of the string. <br>
  Standard_EXPORT     Standard_ExtCharacter Value(const Standard_Integer Index) const;
  
  Standard_EXPORT   virtual  void ShallowDump(Standard_OStream& s) const;

  PCollection_HExtendedString( )
{
  
}
PCollection_HExtendedString(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    const DBC_VArrayOfExtCharacter& _CSFDB_GetPCollection_HExtendedStringData() const { return Data; }



  DEFINE_STANDARD_RTTI(PCollection_HExtendedString)

protected:




private: 

  //! Assigns the field of the current structure with <br>
//!  the given value. <br>
  Standard_EXPORT     void Assign(const DBC_VArrayOfExtCharacter& TheData) ;

DBC_VArrayOfExtCharacter Data;


};





// other Inline functions and methods (like "C++: function call" methods)
inline void ShallowDump(const Handle_PCollection_HExtendedString& me,Standard_OStream& s) {
 me->ShallowDump(s);
}



#endif
