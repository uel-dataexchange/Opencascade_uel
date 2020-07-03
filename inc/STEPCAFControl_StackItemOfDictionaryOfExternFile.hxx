// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPCAFControl_StackItemOfDictionaryOfExternFile_HeaderFile
#define _STEPCAFControl_StackItemOfDictionaryOfExternFile_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_STEPCAFControl_StackItemOfDictionaryOfExternFile_HeaderFile
#include <Handle_STEPCAFControl_StackItemOfDictionaryOfExternFile.hxx>
#endif

#ifndef _Handle_STEPCAFControl_DictionaryOfExternFile_HeaderFile
#include <Handle_STEPCAFControl_DictionaryOfExternFile.hxx>
#endif
#ifndef _Handle_STEPCAFControl_StackItemOfDictionaryOfExternFile_HeaderFile
#include <Handle_STEPCAFControl_StackItemOfDictionaryOfExternFile.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_STEPCAFControl_ExternFile_HeaderFile
#include <Handle_STEPCAFControl_ExternFile.hxx>
#endif
class STEPCAFControl_DictionaryOfExternFile;
class STEPCAFControl_ExternFile;
class STEPCAFControl_IteratorOfDictionaryOfExternFile;



class STEPCAFControl_StackItemOfDictionaryOfExternFile : public MMgt_TShared {

public:

  
  Standard_EXPORT   STEPCAFControl_StackItemOfDictionaryOfExternFile();
  
  Standard_EXPORT   STEPCAFControl_StackItemOfDictionaryOfExternFile(const Handle(STEPCAFControl_StackItemOfDictionaryOfExternFile)& previous);
  
  Standard_EXPORT     Handle_STEPCAFControl_StackItemOfDictionaryOfExternFile Previous() const;
  
  Standard_EXPORT     Handle_STEPCAFControl_DictionaryOfExternFile Value() const;
  
  Standard_EXPORT     void SetValue(const Handle(STEPCAFControl_DictionaryOfExternFile)& cval) ;




  DEFINE_STANDARD_RTTI(STEPCAFControl_StackItemOfDictionaryOfExternFile)

protected:




private: 


Handle_STEPCAFControl_DictionaryOfExternFile thevalue;
Handle_STEPCAFControl_StackItemOfDictionaryOfExternFile theprev;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
