// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESData_IGESWriter_HeaderFile
#define _IGESData_IGESWriter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_IGESData_IGESModel_HeaderFile
#include <Handle_IGESData_IGESModel.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfHAsciiString_HeaderFile
#include <Handle_TColStd_HSequenceOfHAsciiString.hxx>
#endif
#ifndef _Standard_Character_HeaderFile
#include <Standard_Character.hxx>
#endif
#ifndef _IGESData_Array1OfDirPart_HeaderFile
#include <IGESData_Array1OfDirPart.hxx>
#endif
#ifndef _TColStd_Array1OfInteger_HeaderFile
#include <TColStd_Array1OfInteger.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _IGESData_ReadStage_HeaderFile
#include <IGESData_ReadStage.hxx>
#endif
#ifndef _Interface_LineBuffer_HeaderFile
#include <Interface_LineBuffer.hxx>
#endif
#ifndef _Interface_FloatWriter_HeaderFile
#include <Interface_FloatWriter.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Handle_IGESData_Protocol_HeaderFile
#include <Handle_IGESData_Protocol.hxx>
#endif
#ifndef _Handle_IGESData_IGESEntity_HeaderFile
#include <Handle_IGESData_IGESEntity.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class IGESData_IGESModel;
class TColStd_HSequenceOfHAsciiString;
class Interface_InterfaceMismatch;
class Interface_FloatWriter;
class IGESData_Protocol;
class IGESData_GlobalSection;
class IGESData_IGESEntity;
class TCollection_HAsciiString;
class gp_XY;
class gp_XYZ;


//! manages atomic file writing, under control of IGESModel : <br>
//!           prepare text to be sent then sends it <br>
//!           takes into account distinction between successive Sections <br>
class IGESData_IGESWriter  {
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

  //! Creates an IGESWriter, empty ready to work <br>
//!           (see the methods SendModel and Print) <br>
  Standard_EXPORT   IGESData_IGESWriter(const Handle(IGESData_IGESModel)& amodel);
  //! Default constructor (not used) to satisfy the compiler <br>
  Standard_EXPORT   IGESData_IGESWriter();
  //! Constructor by copy (not used) to satisfy the compiler <br>
  Standard_EXPORT   IGESData_IGESWriter(const IGESData_IGESWriter& other);
  //! Returns the embedded FloatWriter, which controls sending Reals <br>
//!           Use this method to access FloatWriter in order to consult or <br>
//!           change its options (MainFormat, FormatForRange,ZeroSuppress), <br>
//!           because it is returned as the address of its field <br>
  Standard_EXPORT     Interface_FloatWriter& FloatWriter() ;
  //! Returns the write mode, in order to be read and/or changed <br>
//!           Write Mode controls the way final print works <br>
//!           0 (D) : Normal IGES, 10 : FNES <br>
  Standard_EXPORT     Standard_Integer& WriteMode() ;
  //! Sends an additionnal Starting Line : this is the way used to <br>
//!           send comments in an IGES File (at beginning of the file). <br>
//!           If the line is more than 72 char.s long, it is splited into <br>
//!           as many lines as required to send it completely <br>
  Standard_EXPORT     void SendStartLine(const Standard_CString startline) ;
  //! Sends the complete IGESModel (Global Section, Entities as <br>
//!            Directory Entries & Parameter Lists, etc...) <br>
//!            i.e. fills a list of texts. Once filled, it can be sent by <br>
//!            method Print <br>
  Standard_EXPORT     void SendModel(const Handle(IGESData_Protocol)& protocol) ;
  //! declares sending of S section (only a declaration) <br>
//!           error if state is not initial <br>
  Standard_EXPORT     void SectionS() ;
  //! prepares sending of header, from a GlobalSection (stores it) <br>
//!           error if SectionS was not called just before <br>
//!           takes in account special characters (Separator, EndMark) <br>
  Standard_EXPORT     void SectionG(const IGESData_GlobalSection& header) ;
  //! prepares sending of list of entities, as Sections D (directory <br>
//!           list) and P (Parameters lists, one per entity) <br>
//!           Entities will be then processed, one after the other <br>
//!           error if SectionG has not be called just before <br>
  Standard_EXPORT     void SectionsDP() ;
  //! declares sending of T section (only a declaration) <br>
//!           error if does not follow Entities sending <br>
  Standard_EXPORT     void SectionT() ;
  //! translates directory part of an Entity into a litteral DirPart <br>
//!           Some infos are computed after sending parameters <br>
//!           Error if not in sections DP or Stage not "Dir" <br>
  Standard_EXPORT     void DirPart(const Handle(IGESData_IGESEntity)& anent) ;
  //! sends own parameters of the entity, by sending firstly its <br>
//!           type, then calling specific method WriteOwnParams <br>
//!           Error if not in sections DP or Stage not "Own" <br>
  Standard_EXPORT     void OwnParams(const Handle(IGESData_IGESEntity)& anent) ;
  //! sends associativity list, as complement of parameters list <br>
//!           error if not in sections DP or Stage not "Associativity" <br>
  Standard_EXPORT     void Associativities(const Handle(IGESData_IGESEntity)& anent) ;
  //! sends property list, as complement of parameters list <br>
//!           error if not in sections DP or Stage not "Property" <br>
  Standard_EXPORT     void Properties(const Handle(IGESData_IGESEntity)& anent) ;
  //! declares end of sending an entity (ends param list by ';') <br>
  Standard_EXPORT     void EndEntity() ;
  //! sends a void parameter, that is null text <br>
  Standard_EXPORT     void SendVoid() ;
  //! sends an Integer parameter <br>
  Standard_EXPORT     void Send(const Standard_Integer val) ;
  //! sends a Boolean parameter as an Integer value 0(False)/1(True) <br>
  Standard_EXPORT     void SendBoolean(const Standard_Boolean val) ;
  //! sends a Real parameter. Works with FloatWriter <br>
  Standard_EXPORT     void Send(const Standard_Real val) ;
  //! sends a Text parameter under Hollerith form <br>
  Standard_EXPORT     void Send(const Handle(TCollection_HAsciiString)& val) ;
  //! sends a Reference to an Entity (if its Number is N, its <br>
//!           pointer is 2*N-1) <br>
//!           If <val> is Null, "0" will be sent <br>
//!           If <negative> is True, "Pointer" is sent as negative <br>
  Standard_EXPORT     void Send(const Handle(IGESData_IGESEntity)& val,const Standard_Boolean negative = Standard_False) ;
  //! sends a parameter under its exact form given as a string <br>
  Standard_EXPORT     void SendString(const Handle(TCollection_HAsciiString)& val) ;
  //! Sends a XY, interpreted as a couple of 2 Reals (X & Y) <br>
  Standard_EXPORT     void Send(const gp_XY& val) ;
  //! Sends a XYZ, interpreted as a couple of 2 Reals (X , Y & Z) <br>
  Standard_EXPORT     void Send(const gp_XYZ& val) ;
  //! Returns the list of strings for a section given its rank <br>
//!           1 : Start (if not empty)  2 : Global  3 or 4 : Parameters <br>
//!           RQ: no string list for Directory section <br>
//!           An empty section gives a null handle <br>
  Standard_EXPORT     Handle_TColStd_HSequenceOfHAsciiString SectionStrings(const Standard_Integer numsec) const;
  //! Writes result on an output defined as an OStream <br>
//!           resolves stored infos at this time; in particular, numbers of <br>
//!           lines used to adress P-section from D-section and final totals <br>
//!           Takes WriteMode into account <br>
  Standard_EXPORT     Standard_Boolean Print(Standard_OStream& S) const;





protected:





private:

  //! Basic action of adding a string to current parameter list as a <br>
//!           line; manages size limit (64 or 72 according Sestion G or P) <br>
//!           <more>, if precised, requires that <more> characters will <br>
//!           remain free on the current line once this AddString done <br>
  Standard_EXPORT     void AddString(const Handle(TCollection_HAsciiString)& val,const Standard_Integer more = 0) ;
  //! Basic action of adding a string to current parameter list as a <br>
//!           line. Manages size limit (64 or 72 according Sestion G or P) <br>
//!           <val> is the string and <lnval> its length. If <lnval> is not <br>
//!           given, it is computed by strlen(val). <br>
//!           <more>, if precised, requires that <more> characters will <br>
//!           remain free on the current line once this AddString done <br>
  Standard_EXPORT     void AddString(const Standard_CString val,const Standard_Integer lnval = 0,const Standard_Integer more = 0) ;
  //! Adds a string defined as a single character (for instance, the <br>
//!           parameter separator). Manages size limit <br>
//!           <more>, if precised, requires that <more> characters will <br>
//!           remain free on the current line once this AddString done <br>
  Standard_EXPORT     void AddChar(const Standard_Character val,const Standard_Integer more = 0) ;


Handle_IGESData_IGESModel themodel;
Handle_TColStd_HSequenceOfHAsciiString thestar;
Handle_TColStd_HSequenceOfHAsciiString thehead;
Standard_Character thesep;
Standard_Character theendm;
IGESData_Array1OfDirPart thedirs;
TColStd_Array1OfInteger thepnum;
Handle_TColStd_HSequenceOfHAsciiString thepars;
Standard_Integer thesect;
IGESData_ReadStage thestep;
Interface_LineBuffer thecurr;
Standard_Integer themodew;
Interface_FloatWriter thefloatw;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
