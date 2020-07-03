// File:        PCDM_ReadWriter.cxx
// Created:     Tue Dec  9 08:32:51 1997
// Author:      Jean-Louis Frenkel
//              <rmi@frilox.paris1.matra-dtv.fr>


#include <PCDM_ReadWriter.ixx>
#include <UTL.hxx>
#include <PCDM_ReadWriter_1.hxx>
#include <Storage_Schema.hxx>
#include <Standard_ErrorHandler.hxx>
#include <Storage_HeaderData.hxx>
#include <Storage_TypeData.hxx>
#include <UTL.hxx>
#include <TColStd_HSequenceOfAsciiString.hxx>
#include <PCDM.hxx>
#include <PCDM_DOMHeaderParser.hxx>

#define FILE_FORMAT "FILE_FORMAT: "

static TCollection_ExtendedString TryXmlDriverType
                                (const TCollection_AsciiString& theFileName);

//=======================================================================
//function : Open
//purpose  : 
//=======================================================================

void PCDM_ReadWriter::Open (Storage_BaseDriver&                 aDriver,
                            const TCollection_ExtendedString&   aFileName,
                            const Storage_OpenMode              aMode)
{
  Storage_Error error = UTL::OpenFile(aDriver,aFileName,aMode);
  if(error != Storage_VSOk) {
    Standard_SStream aMsg; aMsg << "could not open the file: ";
    aMsg << aFileName;
    switch (error) {
    case Storage_VSOpenError: aMsg << "; file was not found or permission denied"; break;
    case Storage_VSAlreadyOpen: aMsg<< "; file was already opened";
    default:
      break;
    }
    aMsg << (char)0;
    Standard_Failure::Raise(aMsg);
  }
}

//=======================================================================
//function : Reader
//purpose  : 
//=======================================================================

//Handle(PCDM_ReadWriter) PCDM_ReadWriter::Reader(const TCollection_ExtendedString& aFileName) {

Handle(PCDM_ReadWriter) PCDM_ReadWriter::Reader
                                           (const TCollection_ExtendedString&)
{
  static Handle(PCDM_ReadWriter_1) theReader=new PCDM_ReadWriter_1;
  return theReader;
}

//=======================================================================
//function : Writer
//purpose  : 
//=======================================================================

Handle(PCDM_ReadWriter) PCDM_ReadWriter::Writer ()
{
  static Handle(PCDM_ReadWriter_1) theWriter=new PCDM_ReadWriter_1;
  return theWriter;
}
 
//=======================================================================
//function : WriteFileFormat
//purpose  : 
//=======================================================================

void PCDM_ReadWriter::WriteFileFormat (const Handle(Storage_Data)& aData,
                                       const Handle(CDM_Document)& aDocument)
{ 
  TCollection_AsciiString ligne(FILE_FORMAT);
  ligne += TCollection_AsciiString(aDocument->StorageFormat(),'?');

  aData->AddToUserInfo(ligne);
}

//=======================================================================
//function : FileFormat
//purpose  : 
//=======================================================================

TCollection_ExtendedString PCDM_ReadWriter::FileFormat
                                (const TCollection_ExtendedString& aFileName)
{
  TCollection_ExtendedString theFormat;
  
  PCDM_BaseDriverPointer theFileDriver;

  TCollection_AsciiString theFileName (UTL::CString(aFileName));
  if (PCDM::FileDriverType (theFileName, theFileDriver) == PCDM_TOFD_Unknown)
    return ::TryXmlDriverType (theFileName);

  static Standard_Boolean theFileIsOpen;
  theFileIsOpen=Standard_False;

  try {
    OCC_CATCH_SIGNALS
    
    Open(*theFileDriver,aFileName,Storage_VSRead);
    theFileIsOpen=Standard_True;
    Handle(Storage_Schema) s = new Storage_Schema;
    Handle(Storage_HeaderData) hd = s->ReadHeaderSection(*theFileDriver);
    const TColStd_SequenceOfAsciiString &refUserInfo = hd->UserInfo();
    Standard_Boolean found=Standard_False;
    for (Standard_Integer i =1; !found && i<=  refUserInfo.Length() ; i++) {
      if(refUserInfo(i).Search(FILE_FORMAT) != -1) {
        found=Standard_True;
        theFormat=UTL::ExtendedString(refUserInfo(i).Token(" ",2));
      }
    }
    if(!found) theFormat=s->ReadTypeSection(*theFileDriver)->Types()->Value(1);
  }
  catch (Standard_Failure) {}

  
  if(theFileIsOpen)theFileDriver->Close();

  delete theFileDriver;

  return theFormat;
}

//=======================================================================
//function : ::TryXmlDriverType
//purpose  : called from FileFormat()
//=======================================================================

static TCollection_ExtendedString TryXmlDriverType
                                (const TCollection_AsciiString& theFileName)
{
  TCollection_ExtendedString theFormat;
  PCDM_DOMHeaderParser       aParser;
  const char                 * aDocumentElementName = "document";
  aParser.SetStartElementName (Standard_CString(aDocumentElementName));

  // Parse the file; if there is no error or an error appears before retrieval
  // of the DocumentElement, the XML format cannot be defined
  if (aParser.parse (theFileName.ToCString()))
  {
    LDOM_Element anElement = aParser.GetElement();
    if (anElement.getTagName().equals (LDOMString(aDocumentElementName)))
      theFormat = anElement.getAttribute ("format");
  }
  return theFormat;
}
