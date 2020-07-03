#ifndef _Storage_Schema_HeaderFile
#include <Storage_Schema.hxx>
#endif
#ifndef _Storage_BaseDriver_HeaderFile
#include <Storage_BaseDriver.hxx>
#endif
#ifndef _Storage_CallBack_HeaderFile
#include <Storage_CallBack.hxx>
#endif
#ifndef _Storage_Macros_HeaderFile
#include <Storage_Macros.hxx>
#endif
class Handle(PDF_Data);
class Handle(PDF_Attribute);
class Handle(PDF_TagSource);
class Handle(PDF_Reference);
class Handle(PDF_HAttributeArray1);
class PDF_FieldOfHAttributeArray1;
class Handle(PDataStd_Name);
class Handle(PDataStd_Comment);
class Handle(PDataStd_Integer);
class Handle(PDataStd_IntegerArray);
class Handle(PDataStd_IntegerArray_1);
class Handle(PDataStd_Real);
class Handle(PDataStd_RealArray);
class Handle(PDataStd_RealArray_1);
class Handle(PDataStd_ExtStringArray);
class Handle(PDataStd_ExtStringArray_1);
class Handle(PDataStd_TreeNode);
class Handle(PDataStd_Expression);
class Handle(PDataStd_Relation);
class Handle(PDataStd_Variable);
class Handle(PDataStd_NoteBook);
class Handle(PDataStd_UAttribute);
class Handle(PDataStd_Directory);
class Handle(PDataStd_Tick);
class Handle(PDataStd_IntegerList);
class Handle(PDataStd_RealList);
class Handle(PDataStd_ExtStringList);
class Handle(PDataStd_BooleanList);
class Handle(PDataStd_ReferenceList);
class Handle(PDataStd_BooleanArray);
class Handle(PDataStd_ReferenceArray);
class Handle(PDataStd_ByteArray);
class Handle(PDataStd_ByteArray_1);
class Handle(PDataStd_NamedData);
class Handle(PDataStd_AsciiString);
class Handle(PDataStd_IntPackedMap);
class Handle(PDataStd_IntPackedMap_1);
class Handle(PDataStd_HArray1OfHAsciiString);
class PDataStd_FieldOfHArray1OfHAsciiString;
class Handle(PDataStd_HArray1OfHArray1OfInteger);
class PDataStd_FieldOfHArray1OfHArray1OfInteger;
class Handle(PDataStd_HArray1OfHArray1OfReal);
class PDataStd_FieldOfHArray1OfHArray1OfReal;
class Handle(PDataStd_HArray1OfByte);
class PDataStd_FieldOfHArray1OfByte;
class Handle(PFunction_Function);
class Handle(PDocStd_Document);
class Handle(PDocStd_XLink);
class Handle(PCDM_Document);
class Handle(Standard_Persistent);
class Standard_Storable;
class Handle(PColStd_HArray1OfInteger);
class Handle(PCollection_HAsciiString);
class Handle(PCollection_HExtendedString);
class Handle(PColStd_HArray1OfReal);
class Handle(PColStd_HArray1OfExtendedString);
class Standard_GUID;
class Handle(PColStd_HArray2OfInteger);
class PColStd_FieldOfHArray1OfInteger;
class DBC_VArrayOfCharacter;
class DBC_VArrayOfExtCharacter;
class PColStd_FieldOfHArray1OfReal;
class PColStd_FieldOfHArray1OfExtendedString;
class PColStd_FieldOfHArray2OfInteger;
// This file is generated by WOK (CSFDBSchema).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StdLSchema_HeaderFile
#define _StdLSchema_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Storage_Macros_HeaderFile
#include <Storage_Macros.hxx>
#endif
#ifndef _Storage_stCONSTclCOM_HeaderFile
#include <Storage_stCONSTclCOM.hxx>
#endif
#ifndef _Storage_Schema_HeaderFile
#include <Storage_Schema.hxx>
#endif
#ifndef _Storage_CallBack_HeaderFile
#include <Storage_CallBack.hxx>
#endif
#ifndef _Storage_BaseDriver_HeaderFile
#include <Storage_BaseDriver.hxx>
#endif

DEFINE_STANDARD_HANDLE(StdLSchema,Storage_Schema)


class StdLSchema : public Storage_Schema {
public:

  Storage_DECLARE_SCHEMA_METHODS(StdLSchema)

  DEFINE_STANDARD_RTTI(StdLSchema)
};

#endif
