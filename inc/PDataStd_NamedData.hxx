// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PDataStd_NamedData_HeaderFile
#define _PDataStd_NamedData_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PDataStd_NamedData_HeaderFile
#include <Handle_PDataStd_NamedData.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_PCollection_HExtendedString_HeaderFile
#include <Handle_PCollection_HExtendedString.hxx>
#endif
#ifndef _Standard_Byte_HeaderFile
#include <Standard_Byte.hxx>
#endif
#ifndef _Handle_PColStd_HArray1OfInteger_HeaderFile
#include <Handle_PColStd_HArray1OfInteger.hxx>
#endif
#ifndef _Handle_PColStd_HArray1OfReal_HeaderFile
#include <Handle_PColStd_HArray1OfReal.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_PColStd_HArray2OfInteger_HeaderFile
#include <Handle_PColStd_HArray2OfInteger.hxx>
#endif
#ifndef _Handle_PColStd_HArray1OfExtendedString_HeaderFile
#include <Handle_PColStd_HArray1OfExtendedString.hxx>
#endif
#ifndef _Handle_PDataStd_HArray1OfByte_HeaderFile
#include <Handle_PDataStd_HArray1OfByte.hxx>
#endif
#ifndef _Handle_PDataStd_HArray1OfHArray1OfInteger_HeaderFile
#include <Handle_PDataStd_HArray1OfHArray1OfInteger.hxx>
#endif
#ifndef _Handle_PDataStd_HArray1OfHArray1OfReal_HeaderFile
#include <Handle_PDataStd_HArray1OfHArray1OfReal.hxx>
#endif
#ifndef _PDF_Attribute_HeaderFile
#include <PDF_Attribute.hxx>
#endif
#ifndef _Handle_TColStd_HArray2OfInteger_HeaderFile
#include <Handle_TColStd_HArray2OfInteger.hxx>
#endif
class PCollection_HExtendedString;
class PColStd_HArray1OfInteger;
class PColStd_HArray1OfReal;
class PColStd_HArray2OfInteger;
class PColStd_HArray1OfExtendedString;
class PDataStd_HArray1OfByte;
class PDataStd_HArray1OfHArray1OfInteger;
class PDataStd_HArray1OfHArray1OfReal;
class TColStd_HArray2OfInteger;


class PDataStd_NamedData : public PDF_Attribute {

public:

  
  Standard_EXPORT   PDataStd_NamedData();
  //! 6 pairs of (lower, upper) <theDimension> should be  initialized <br>
//!  if  (upper  -  lower)  ==  0  and (upper  |  lower) == 0, the corresponding <br>
//!  array is empty (not requested) <br>
  Standard_EXPORT     void Init(const Handle(TColStd_HArray2OfInteger)& theDimension) ;
  
  Standard_EXPORT     void SetIntDataItem(const Standard_Integer index,const Handle(PCollection_HExtendedString)& key,const Standard_Integer value) ;
  
  Standard_EXPORT     Standard_Integer IntDataItemValue(const Standard_Integer index,Handle(PCollection_HExtendedString)& key) const;
  
  Standard_EXPORT     void SetRealDataItem(const Standard_Integer index,const Handle(PCollection_HExtendedString)& key,const Standard_Real value) ;
  
  Standard_EXPORT     Standard_Real RealDataItemValue(const Standard_Integer index,Handle(PCollection_HExtendedString)& key) const;
  
  Standard_EXPORT     void SetStrDataItem(const Standard_Integer index,const Handle(PCollection_HExtendedString)& key,const Handle(PCollection_HExtendedString)& value) ;
  
  Standard_EXPORT     Handle_PCollection_HExtendedString StrDataItemValue(const Standard_Integer index,Handle(PCollection_HExtendedString)& key) const;
  
  Standard_EXPORT     void SetByteDataItem(const Standard_Integer index,const Handle(PCollection_HExtendedString)& key,const Standard_Byte value) ;
  
  Standard_EXPORT     Standard_Byte ByteDataItemValue(const Standard_Integer index,Handle(PCollection_HExtendedString)& key) const;
  
  Standard_EXPORT     void SetArrIntDataItem(const Standard_Integer index,const Handle(PCollection_HExtendedString)& key,const Handle(PColStd_HArray1OfInteger)& value) ;
  
  Standard_EXPORT     Handle_PColStd_HArray1OfInteger ArrIntDataItemValue(const Standard_Integer index,Handle(PCollection_HExtendedString)& key) const;
  
  Standard_EXPORT     void SetArrRealDataItem(const Standard_Integer index,const Handle(PCollection_HExtendedString)& key,const Handle(PColStd_HArray1OfReal)& value) ;
  
  Standard_EXPORT     Handle_PColStd_HArray1OfReal ArrRealDataItemValue(const Standard_Integer index,Handle(PCollection_HExtendedString)& key) const;
  
  Standard_EXPORT     Standard_Integer LowerI() const;
  
  Standard_EXPORT     Standard_Integer UpperI() const;
  
  Standard_EXPORT     Standard_Integer LowerR() const;
  
  Standard_EXPORT     Standard_Integer UpperR() const;
  
  Standard_EXPORT     Standard_Integer LowerS() const;
  
  Standard_EXPORT     Standard_Integer UpperS() const;
  
  Standard_EXPORT     Standard_Integer LowerB() const;
  
  Standard_EXPORT     Standard_Integer UpperB() const;
  
  Standard_EXPORT     Standard_Integer LowerAI() const;
  
  Standard_EXPORT     Standard_Integer UpperAI() const;
  
  Standard_EXPORT     Standard_Integer LowerAR() const;
  
  Standard_EXPORT     Standard_Integer UpperAR() const;
  //! Returns true if at least one named integer value is kept. <br>
  Standard_EXPORT     Standard_Boolean HasIntegers() const;
  //! Returns true if at least one named real value is kept. <br>
  Standard_EXPORT     Standard_Boolean HasReals() const;
  //! Returns true if at least one named string value is kept. <br>
  Standard_EXPORT     Standard_Boolean HasStrings() const;
  //! Returns true if at least one named byte value is kept. <br>
  Standard_EXPORT     Standard_Boolean HasBytes() const;
  //! Returns true if at least one named array of integer values is kept. <br>
  Standard_EXPORT     Standard_Boolean HasArraysOfIntegers() const;
  //! Returns true if at least one named array of real values is kept. <br>
  Standard_EXPORT     Standard_Boolean HasArraysOfReals() const;

PDataStd_NamedData(const Storage_stCONSTclCOM& a) : PDF_Attribute(a)
{
  
}
    Handle(PColStd_HArray2OfInteger) _CSFDB_GetPDataStd_NamedDatamyDimensions() const { return myDimensions; }
    void _CSFDB_SetPDataStd_NamedDatamyDimensions(const Handle(PColStd_HArray2OfInteger)& p) { myDimensions = p; }
    Handle(PColStd_HArray1OfExtendedString) _CSFDB_GetPDataStd_NamedDatamyIntKeys() const { return myIntKeys; }
    void _CSFDB_SetPDataStd_NamedDatamyIntKeys(const Handle(PColStd_HArray1OfExtendedString)& p) { myIntKeys = p; }
    Handle(PColStd_HArray1OfInteger) _CSFDB_GetPDataStd_NamedDatamyIntValues() const { return myIntValues; }
    void _CSFDB_SetPDataStd_NamedDatamyIntValues(const Handle(PColStd_HArray1OfInteger)& p) { myIntValues = p; }
    Handle(PColStd_HArray1OfExtendedString) _CSFDB_GetPDataStd_NamedDatamyRealKeys() const { return myRealKeys; }
    void _CSFDB_SetPDataStd_NamedDatamyRealKeys(const Handle(PColStd_HArray1OfExtendedString)& p) { myRealKeys = p; }
    Handle(PColStd_HArray1OfReal) _CSFDB_GetPDataStd_NamedDatamyRealValues() const { return myRealValues; }
    void _CSFDB_SetPDataStd_NamedDatamyRealValues(const Handle(PColStd_HArray1OfReal)& p) { myRealValues = p; }
    Handle(PColStd_HArray1OfExtendedString) _CSFDB_GetPDataStd_NamedDatamyStrKeys() const { return myStrKeys; }
    void _CSFDB_SetPDataStd_NamedDatamyStrKeys(const Handle(PColStd_HArray1OfExtendedString)& p) { myStrKeys = p; }
    Handle(PColStd_HArray1OfExtendedString) _CSFDB_GetPDataStd_NamedDatamyStrValues() const { return myStrValues; }
    void _CSFDB_SetPDataStd_NamedDatamyStrValues(const Handle(PColStd_HArray1OfExtendedString)& p) { myStrValues = p; }
    Handle(PColStd_HArray1OfExtendedString) _CSFDB_GetPDataStd_NamedDatamyByteKeys() const { return myByteKeys; }
    void _CSFDB_SetPDataStd_NamedDatamyByteKeys(const Handle(PColStd_HArray1OfExtendedString)& p) { myByteKeys = p; }
    Handle(PDataStd_HArray1OfByte) _CSFDB_GetPDataStd_NamedDatamyByteValues() const { return myByteValues; }
    void _CSFDB_SetPDataStd_NamedDatamyByteValues(const Handle(PDataStd_HArray1OfByte)& p) { myByteValues = p; }
    Handle(PColStd_HArray1OfExtendedString) _CSFDB_GetPDataStd_NamedDatamyArrIntKeys() const { return myArrIntKeys; }
    void _CSFDB_SetPDataStd_NamedDatamyArrIntKeys(const Handle(PColStd_HArray1OfExtendedString)& p) { myArrIntKeys = p; }
    Handle(PDataStd_HArray1OfHArray1OfInteger) _CSFDB_GetPDataStd_NamedDatamyArrIntValues() const { return myArrIntValues; }
    void _CSFDB_SetPDataStd_NamedDatamyArrIntValues(const Handle(PDataStd_HArray1OfHArray1OfInteger)& p) { myArrIntValues = p; }
    Handle(PColStd_HArray1OfExtendedString) _CSFDB_GetPDataStd_NamedDatamyArrRealKeys() const { return myArrRealKeys; }
    void _CSFDB_SetPDataStd_NamedDatamyArrRealKeys(const Handle(PColStd_HArray1OfExtendedString)& p) { myArrRealKeys = p; }
    Handle(PDataStd_HArray1OfHArray1OfReal) _CSFDB_GetPDataStd_NamedDatamyArrRealValues() const { return myArrRealValues; }
    void _CSFDB_SetPDataStd_NamedDatamyArrRealValues(const Handle(PDataStd_HArray1OfHArray1OfReal)& p) { myArrRealValues = p; }



  DEFINE_STANDARD_RTTI(PDataStd_NamedData)

protected:




private: 


Handle_PColStd_HArray2OfInteger myDimensions;
Handle_PColStd_HArray1OfExtendedString myIntKeys;
Handle_PColStd_HArray1OfInteger myIntValues;
Handle_PColStd_HArray1OfExtendedString myRealKeys;
Handle_PColStd_HArray1OfReal myRealValues;
Handle_PColStd_HArray1OfExtendedString myStrKeys;
Handle_PColStd_HArray1OfExtendedString myStrValues;
Handle_PColStd_HArray1OfExtendedString myByteKeys;
Handle_PDataStd_HArray1OfByte myByteValues;
Handle_PColStd_HArray1OfExtendedString myArrIntKeys;
Handle_PDataStd_HArray1OfHArray1OfInteger myArrIntValues;
Handle_PColStd_HArray1OfExtendedString myArrRealKeys;
Handle_PDataStd_HArray1OfHArray1OfReal myArrRealValues;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
