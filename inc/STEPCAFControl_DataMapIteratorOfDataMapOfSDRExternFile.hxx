// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPCAFControl_DataMapIteratorOfDataMapOfSDRExternFile_HeaderFile
#define _STEPCAFControl_DataMapIteratorOfDataMapOfSDRExternFile_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Handle_StepShape_ShapeDefinitionRepresentation_HeaderFile
#include <Handle_StepShape_ShapeDefinitionRepresentation.hxx>
#endif
#ifndef _Handle_STEPCAFControl_ExternFile_HeaderFile
#include <Handle_STEPCAFControl_ExternFile.hxx>
#endif
#ifndef _Handle_STEPCAFControl_DataMapNodeOfDataMapOfSDRExternFile_HeaderFile
#include <Handle_STEPCAFControl_DataMapNodeOfDataMapOfSDRExternFile.hxx>
#endif
class Standard_NoSuchObject;
class StepShape_ShapeDefinitionRepresentation;
class STEPCAFControl_ExternFile;
class TColStd_MapTransientHasher;
class STEPCAFControl_DataMapOfSDRExternFile;
class STEPCAFControl_DataMapNodeOfDataMapOfSDRExternFile;



class STEPCAFControl_DataMapIteratorOfDataMapOfSDRExternFile  : public TCollection_BasicMapIterator {
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

  
  Standard_EXPORT   STEPCAFControl_DataMapIteratorOfDataMapOfSDRExternFile();
  
  Standard_EXPORT   STEPCAFControl_DataMapIteratorOfDataMapOfSDRExternFile(const STEPCAFControl_DataMapOfSDRExternFile& aMap);
  
  Standard_EXPORT     void Initialize(const STEPCAFControl_DataMapOfSDRExternFile& aMap) ;
  
  Standard_EXPORT    const Handle_StepShape_ShapeDefinitionRepresentation& Key() const;
  
  Standard_EXPORT    const Handle_STEPCAFControl_ExternFile& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
