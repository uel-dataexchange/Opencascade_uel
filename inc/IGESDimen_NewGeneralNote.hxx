// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDimen_NewGeneralNote_HeaderFile
#define _IGESDimen_NewGeneralNote_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESDimen_NewGeneralNote_HeaderFile
#include <Handle_IGESDimen_NewGeneralNote.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _gp_XYZ_HeaderFile
#include <gp_XYZ.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfInteger_HeaderFile
#include <Handle_TColStd_HArray1OfInteger.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
#ifndef _Handle_Interface_HArray1OfHAsciiString_HeaderFile
#include <Handle_Interface_HArray1OfHAsciiString.hxx>
#endif
#ifndef _Handle_IGESData_HArray1OfIGESEntity_HeaderFile
#include <Handle_IGESData_HArray1OfIGESEntity.hxx>
#endif
#ifndef _Handle_TColgp_HArray1OfXYZ_HeaderFile
#include <Handle_TColgp_HArray1OfXYZ.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_IGESData_IGESEntity_HeaderFile
#include <Handle_IGESData_IGESEntity.hxx>
#endif
class TColStd_HArray1OfInteger;
class TColStd_HArray1OfReal;
class Interface_HArray1OfHAsciiString;
class IGESData_HArray1OfIGESEntity;
class TColgp_HArray1OfXYZ;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class gp_XYZ;
class gp_Pnt;
class TCollection_HAsciiString;
class IGESData_IGESEntity;


//! defines NewGeneralNote, Type <213> Form <0> <br>
//!          in package IGESDimen <br>
//!          Further attributes for formatting text strings <br>
class IGESDimen_NewGeneralNote : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESDimen_NewGeneralNote();
  //! This method is used to set the fields of the class <br>
//!           NewGeneralNote <br>
//!       - width                : Width of text containment area <br>
//!       - height               : Height of text containment area <br>
//!       - justifyCode          : Justification code <br>
//!       - areaLoc              : Text containment area location <br>
//!       - areaRotationAngle    : Text containment area rotation <br>
//!       - baseLinePos          : Base line position <br>
//!       - normalInterlineSpace : Normal interline spacing <br>
//!       - charDisplays         : Character display type <br>
//!       - charWidths           : Character width <br>
//!       - charHeights          : Character height <br>
//!       - interCharSpc         : Intercharacter spacing <br>
//!       - interLineSpc         : Interline spacing <br>
//!       - fontStyles           : Font style <br>
//!       - charAngles           : Character angle <br>
//!       - controlCodeStrings   : Control Code string <br>
//!       - nbChars              : Number of characters in string <br>
//!       - boxWidths            : Box width <br>
//!       - boxHeights           : Box height <br>
//!       - charSetCodes         : Character Set Interpretation <br>
//!       - charSetEntities      : Character Set Font <br>
//!       - slAngles             : Slant angle of text in radians <br>
//!       - rotAngles            : Rotation angle of text in radians <br>
//!       - mirrorFlags          : Type of mirroring <br>
//!       - rotateFlags          : Rotate internal text flag <br>
//!       - startPoints          : Text start point <br>
//!       - texts                : Text strings <br>
//! raises exception if there is mismatch between the various <br>
//! Array Lengths. <br>
  Standard_EXPORT     void Init(const Standard_Real width,const Standard_Real height,const Standard_Integer justifyCode,const gp_XYZ& areaLoc,const Standard_Real areaRotationAngle,const gp_XYZ& baseLinePos,const Standard_Real normalInterlineSpace,const Handle(TColStd_HArray1OfInteger)& charDisplays,const Handle(TColStd_HArray1OfReal)& charWidths,const Handle(TColStd_HArray1OfReal)& charHeights,const Handle(TColStd_HArray1OfReal)& interCharSpc,const Handle(TColStd_HArray1OfReal)& interLineSpc,const Handle(TColStd_HArray1OfInteger)& fontStyles,const Handle(TColStd_HArray1OfReal)& charAngles,const Handle(Interface_HArray1OfHAsciiString)& controlCodeStrings,const Handle(TColStd_HArray1OfInteger)& nbChars,const Handle(TColStd_HArray1OfReal)& boxWidths,const Handle(TColStd_HArray1OfReal)& boxHeights,const Handle(TColStd_HArray1OfInteger)& charSetCodes,const Handle(IGESData_HArray1OfIGESEntity)& charSetEntities,const Handle(TColStd_HArray1OfReal)& slAngles,const Handle(TColStd_HArray1OfReal)& rotAngles,const Handle(TColStd_HArray1OfInteger)& mirrorFlags,const Handle(TColStd_HArray1OfInteger)& rotateFlags,const Handle(TColgp_HArray1OfXYZ)& startPoints,const Handle(Interface_HArray1OfHAsciiString)& texts) ;
  //! returns width of text containment area of all strings in the note <br>
  Standard_EXPORT     Standard_Real TextWidth() const;
  //! returns height of text containment area of all strings in the note <br>
  Standard_EXPORT     Standard_Real TextHeight() const;
  //! returns Justification code of all strings within the note <br>
//!      0 = no justification <br>
//!      1 = right justified <br>
//!      2 = center justified <br>
//!      3 = left justified <br>
  Standard_EXPORT     Standard_Integer JustifyCode() const;
  //! returns Text containment area Location point <br>
  Standard_EXPORT     gp_Pnt AreaLocation() const;
  //! returns Text containment area Location point after Transformation <br>
  Standard_EXPORT     gp_Pnt TransformedAreaLocation() const;
  //! returns distance from the containment area plane <br>
  Standard_EXPORT     Standard_Real ZDepthAreaLocation() const;
  //! returns rotation angle of text containment area in radians <br>
  Standard_EXPORT     Standard_Real AreaRotationAngle() const;
  //! returns position of first base line <br>
  Standard_EXPORT     gp_Pnt BaseLinePosition() const;
  //! returns position of first base line after Transformation <br>
  Standard_EXPORT     gp_Pnt TransformedBaseLinePosition() const;
  //! returns distance from the Base line position plane <br>
  Standard_EXPORT     Standard_Real ZDepthBaseLinePosition() const;
  //! returns Normal Interline Spacing <br>
  Standard_EXPORT     Standard_Real NormalInterlineSpace() const;
  //! returns number of text HAsciiStrings <br>
  Standard_EXPORT     Standard_Integer NbStrings() const;
  //! returns Fixed/Variable width character display of string <br>
//!      0 = Fixed <br>
//!      1 = Variable <br>
//! raises exception if Index <= 0 or Index > NbStrings() <br>
  Standard_EXPORT     Standard_Integer CharacterDisplay(const Standard_Integer Index) const;
  //! returns False if Character display width is Fixed <br>
//! optional method, if required <br>
//! raises exception if Index <= 0 or Index > NbStrings() <br>
  Standard_EXPORT     Standard_Boolean IsVariable(const Standard_Integer Index) const;
  //! returns Character Width of string <br>
//! raises exception if Index <= 0 or Index > NbStrings() <br>
  Standard_EXPORT     Standard_Real CharacterWidth(const Standard_Integer Index) const;
  //! returns Character Height of string <br>
//! raises exception if Index <= 0 or Index > NbStrings() <br>
  Standard_EXPORT     Standard_Real CharacterHeight(const Standard_Integer Index) const;
  //! returns Inter-character spacing of string <br>
//! raises exception if Index <= 0 or Index > NbStrings() <br>
  Standard_EXPORT     Standard_Real InterCharacterSpace(const Standard_Integer Index) const;
  //! returns Interline spacing of string <br>
//! raises exception if Index <= 0 or Index > NbStrings() <br>
  Standard_EXPORT     Standard_Real InterlineSpace(const Standard_Integer Index) const;
  //! returns FontStyle of string <br>
//! raises exception if Index <= 0 or Index > NbStrings() <br>
  Standard_EXPORT     Standard_Integer FontStyle(const Standard_Integer Index) const;
  //! returns CharacterAngle of string <br>
//! Angle returned will be between 0 and 2PI <br>
//! raises exception if Index <= 0 or Index > NbStrings() <br>
  Standard_EXPORT     Standard_Real CharacterAngle(const Standard_Integer Index) const;
  //! returns ControlCodeString of string <br>
//! raises exception if Index <= 0 or Index > NbStrings() <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString ControlCodeString(const Standard_Integer Index) const;
  //! returns number of characters in string or zero <br>
//! raises exception if Index <= 0 or Index > NbStrings() <br>
  Standard_EXPORT     Standard_Integer NbCharacters(const Standard_Integer Index) const;
  //! returns Box width of string <br>
//! raises exception if Index <= 0 or Index > NbStrings() <br>
  Standard_EXPORT     Standard_Real BoxWidth(const Standard_Integer Index) const;
  //! returns Box height of string <br>
//! raises exception if Index <= 0 or Index > NbStrings() <br>
  Standard_EXPORT     Standard_Real BoxHeight(const Standard_Integer Index) const;
  //! returns False if Value, True if Pointer (Entity) <br>
//! raises exception if Index <= 0 or Index > NbStrings() <br>
  Standard_EXPORT     Standard_Boolean IsCharSetEntity(const Standard_Integer Index) const;
  //! returns Character Set Interpretation (default = 1) of string <br>
//! returns 0 if IsCharSetEntity () is True <br>
//!      1 = Standard ASCII <br>
//!      1001 = Symbol Font1 <br>
//!      1002 = Symbol Font2 <br>
//!      1003 = Symbol Font3 <br>
//! raises exception if Index <= 0 or Index > NbStrings() <br>
  Standard_EXPORT     Standard_Integer CharSetCode(const Standard_Integer Index) const;
  //! returns Character Set Interpretation of string <br>
//! returns a Null Handle if IsCharSetEntity () is False <br>
//! raises exception if Index <= 0 or Index > NbStrings() <br>
  Standard_EXPORT     Handle_IGESData_IGESEntity CharSetEntity(const Standard_Integer Index) const;
  //! returns Slant angle of string in radians <br>
//! default value = PI/2 <br>
//! raises exception if Index <= 0 or Index > NbStrings() <br>
  Standard_EXPORT     Standard_Real SlantAngle(const Standard_Integer Index) const;
  //! returns Rotation angle of string in radians <br>
//! raises exception if Index <= 0 or Index > NbStrings() <br>
  Standard_EXPORT     Standard_Real RotationAngle(const Standard_Integer Index) const;
  //! returns Mirror Flag of string <br>
//!      0 = no mirroring <br>
//!      1 = mirror axis is perpendicular to the text base line <br>
//!      2 = mirror axis is text base line <br>
//! raises exception if Index <= 0 or Index > NbStrings() <br>
  Standard_EXPORT     Standard_Integer MirrorFlag(const Standard_Integer Index) const;
  //! returns False if MirrorFlag = 0. ie. no mirroring <br>
//! else returns True <br>
//! raises exception if Index <= 0 or Index > NbStrings() <br>
  Standard_EXPORT     Standard_Boolean IsMirrored(const Standard_Integer Index) const;
  //! returns Rotate internal text Flag of string <br>
//!      0 = text horizontal <br>
//!      1 = text vertical <br>
//! raises exception if Index <= 0 or Index > NbStrings() <br>
  Standard_EXPORT     Standard_Integer RotateFlag(const Standard_Integer Index) const;
  //! returns text start point of string <br>
//! raises exception if Index <= 0 or Index > NbStrings() <br>
  Standard_EXPORT     gp_Pnt StartPoint(const Standard_Integer Index) const;
  //! returns text start point of string after Transformation <br>
//! raises exception if Index <= 0 or Index > NbStrings() <br>
  Standard_EXPORT     gp_Pnt TransformedStartPoint(const Standard_Integer Index) const;
  //! returns distance from the start point plane <br>
//! raises exception if Index <= 0 or Index > NbStrings() <br>
  Standard_EXPORT     Standard_Real ZDepthStartPoint(const Standard_Integer Index) const;
  //! returns text string <br>
//! raises exception if Index <= 0 or Index > NbStrings() <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString Text(const Standard_Integer Index) const;




  DEFINE_STANDARD_RTTI(IGESDimen_NewGeneralNote)

protected:




private: 


Standard_Real theWidth;
Standard_Real theHeight;
Standard_Integer theJustifyCode;
gp_XYZ theAreaLoc;
Standard_Real theAreaRotationAngle;
gp_XYZ theBaseLinePos;
Standard_Real theNormalInterlineSpace;
Handle_TColStd_HArray1OfInteger theCharDisplays;
Handle_TColStd_HArray1OfReal theCharWidths;
Handle_TColStd_HArray1OfReal theCharHeights;
Handle_TColStd_HArray1OfReal theInterCharSpaces;
Handle_TColStd_HArray1OfReal theInterlineSpaces;
Handle_TColStd_HArray1OfInteger theFontStyles;
Handle_TColStd_HArray1OfReal theCharAngles;
Handle_Interface_HArray1OfHAsciiString theControlCodeStrings;
Handle_TColStd_HArray1OfInteger theNbChars;
Handle_TColStd_HArray1OfReal theBoxWidths;
Handle_TColStd_HArray1OfReal theBoxHeights;
Handle_TColStd_HArray1OfInteger theCharSetCodes;
Handle_IGESData_HArray1OfIGESEntity theCharSetEntities;
Handle_TColStd_HArray1OfReal theSlantAngles;
Handle_TColStd_HArray1OfReal theRotationAngles;
Handle_TColStd_HArray1OfInteger theMirrorFlags;
Handle_TColStd_HArray1OfInteger theRotateFlags;
Handle_TColgp_HArray1OfXYZ theStartPoints;
Handle_Interface_HArray1OfHAsciiString theTexts;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
