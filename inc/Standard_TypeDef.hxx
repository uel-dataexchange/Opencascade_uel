// File:      Standard_TypeDef.hxx
// Copyright: Open Cascade 2006

#ifndef _Standard_TypeDef_HeaderFile
#define _Standard_TypeDef_HeaderFile

#include <stddef.h>

#define Standard_False (Standard_Boolean)0
#define Standard_True  (Standard_Boolean)1

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

typedef int Standard_Integer;
typedef double Standard_Real;
typedef unsigned int Standard_Boolean;
typedef float Standard_ShortReal;
typedef char  Standard_Character;
typedef unsigned char  Standard_Byte;
typedef void* Standard_Address;
typedef size_t Standard_Size;
//

typedef unsigned int       uint32_t;
// Unicode primitives, char16_t, char32_t
typedef char          Standard_Utf8Char;     //!< signed   UTF-8 char
typedef unsigned char Standard_Utf8UChar;    //!< unsigned UTF-8 char
#if ((defined(__GNUC__) && !defined(__clang__) && ((__GNUC__ == 4 && __GNUC_MINOR__ <= 3) || __GNUC__ < 4)) || (defined(_MSC_VER) && (_MSC_VER < 1600)))
// compatibility with old GCC and MSVC compilers
typedef uint16_t      Standard_ExtCharacter;
typedef uint16_t      Standard_Utf16Char;
typedef uint32_t      Standard_Utf32Char;
#else
typedef unsigned short      Standard_ExtCharacter;
typedef unsigned short      Standard_Utf16Char;    //!< UTF-16 char (always unsigned)
typedef unsigned int        Standard_Utf32Char;    //!< UTF-32 char (always unsigned)
#endif
typedef wchar_t       Standard_WideChar;     //!< wide char (unsigned UTF-16 on Windows platform and signed UTF-32 on Linux)

//
typedef const Standard_Character*    Standard_CString;
typedef const Standard_ExtCharacter* Standard_ExtString;
// declare operator new in global scope for old sun compiler
#ifndef WORKAROUND_SUNPRO_NEW_PLACEMENT
#define WORKAROUND_SUNPRO_NEW_PLACEMENT
#if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x420)
inline void* operator new(size_t,void* anAddress) 
{
  return anAddress;
}
#endif
#endif

#endif

