// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDataStd_HeaderFile
#define _MDataStd_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_MDF_ASDriverHSequence_HeaderFile
#include <Handle_MDF_ASDriverHSequence.hxx>
#endif
#ifndef _Handle_CDM_MessageDriver_HeaderFile
#include <Handle_CDM_MessageDriver.hxx>
#endif
#ifndef _Handle_MDF_ARDriverHSequence_HeaderFile
#include <Handle_MDF_ARDriverHSequence.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TDataStd_RealEnum_HeaderFile
#include <TDataStd_RealEnum.hxx>
#endif
class MDF_ASDriverHSequence;
class CDM_MessageDriver;
class MDF_ARDriverHSequence;
class MDataStd_DirectoryStorageDriver;
class MDataStd_UAttributeStorageDriver;
class MDataStd_NameStorageDriver;
class MDataStd_CommentStorageDriver;
class MDataStd_IntegerStorageDriver;
class MDataStd_IntegerArrayStorageDriver;
class MDataStd_RealStorageDriver;
class MDataStd_RealArrayStorageDriver;
class MDataStd_ExtStringArrayStorageDriver;
class MDataStd_VariableStorageDriver;
class MDataStd_ExpressionStorageDriver;
class MDataStd_RelationStorageDriver;
class MDataStd_NoteBookStorageDriver;
class MDataStd_TreeNodeStorageDriver;
class MDataStd_TickStorageDriver;
class MDataStd_IntegerListStorageDriver;
class MDataStd_RealListStorageDriver;
class MDataStd_ExtStringListStorageDriver;
class MDataStd_BooleanListStorageDriver;
class MDataStd_ReferenceListStorageDriver;
class MDataStd_BooleanArrayStorageDriver;
class MDataStd_ReferenceArrayStorageDriver;
class MDataStd_ByteArrayStorageDriver;
class MDataStd_NamedDataStorageDriver;
class MDataStd_AsciiStringStorageDriver;
class MDataStd_IntPackedMapStorageDriver;
class MDataStd_DirectoryRetrievalDriver;
class MDataStd_UAttributeRetrievalDriver;
class MDataStd_NameRetrievalDriver;
class MDataStd_CommentRetrievalDriver;
class MDataStd_IntegerRetrievalDriver;
class MDataStd_IntegerArrayRetrievalDriver;
class MDataStd_IntegerArrayRetrievalDriver_1;
class MDataStd_RealRetrievalDriver;
class MDataStd_RealArrayRetrievalDriver;
class MDataStd_RealArrayRetrievalDriver_1;
class MDataStd_ExtStringArrayRetrievalDriver;
class MDataStd_ExtStringArrayRetrievalDriver_1;
class MDataStd_VariableRetrievalDriver;
class MDataStd_ExpressionRetrievalDriver;
class MDataStd_RelationRetrievalDriver;
class MDataStd_NoteBookRetrievalDriver;
class MDataStd_TreeNodeRetrievalDriver;
class MDataStd_TickRetrievalDriver;
class MDataStd_IntegerListRetrievalDriver;
class MDataStd_RealListRetrievalDriver;
class MDataStd_ExtStringListRetrievalDriver;
class MDataStd_BooleanListRetrievalDriver;
class MDataStd_ReferenceListRetrievalDriver;
class MDataStd_BooleanArrayRetrievalDriver;
class MDataStd_ReferenceArrayRetrievalDriver;
class MDataStd_ByteArrayRetrievalDriver;
class MDataStd_ByteArrayRetrievalDriver_1;
class MDataStd_NamedDataRetrievalDriver;
class MDataStd_AsciiStringRetrievalDriver;
class MDataStd_IntPackedMapRetrievalDriver;
class MDataStd_IntPackedMapRetrievalDriver_1;


//! Storage    and  Retrieval  drivers   for modelling <br>
//!          attributes.   Transient  attributes are defined in <br>
//!          package TDataStd and persistent one are defined in <br>
//!          package PDataStd <br>
class MDataStd  {
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

  //! Adds the attribute storage drivers to <aDriverSeq>. <br>
  Standard_EXPORT   static  void AddStorageDrivers(const Handle(MDF_ASDriverHSequence)& aDriverSeq,const Handle(CDM_MessageDriver)& theMessageDriver) ;
  //! Adds the attribute retrieval drivers to <aDriverSeq>. <br>//! Translation of TDataStd enumerations to integer <br>
//!          =============================================== <br>
  Standard_EXPORT   static  void AddRetrievalDrivers(const Handle(MDF_ARDriverHSequence)& aDriverSeq,const Handle(CDM_MessageDriver)& theMessageDriver) ;
  
  Standard_EXPORT   static  Standard_Integer RealDimensionToInteger(const TDataStd_RealEnum e) ;
  
  Standard_EXPORT   static  TDataStd_RealEnum IntegerToRealDimension(const Standard_Integer i) ;





protected:





private:




friend class MDataStd_DirectoryStorageDriver;
friend class MDataStd_UAttributeStorageDriver;
friend class MDataStd_NameStorageDriver;
friend class MDataStd_CommentStorageDriver;
friend class MDataStd_IntegerStorageDriver;
friend class MDataStd_IntegerArrayStorageDriver;
friend class MDataStd_RealStorageDriver;
friend class MDataStd_RealArrayStorageDriver;
friend class MDataStd_ExtStringArrayStorageDriver;
friend class MDataStd_VariableStorageDriver;
friend class MDataStd_ExpressionStorageDriver;
friend class MDataStd_RelationStorageDriver;
friend class MDataStd_NoteBookStorageDriver;
friend class MDataStd_TreeNodeStorageDriver;
friend class MDataStd_TickStorageDriver;
friend class MDataStd_IntegerListStorageDriver;
friend class MDataStd_RealListStorageDriver;
friend class MDataStd_ExtStringListStorageDriver;
friend class MDataStd_BooleanListStorageDriver;
friend class MDataStd_ReferenceListStorageDriver;
friend class MDataStd_BooleanArrayStorageDriver;
friend class MDataStd_ReferenceArrayStorageDriver;
friend class MDataStd_ByteArrayStorageDriver;
friend class MDataStd_NamedDataStorageDriver;
friend class MDataStd_AsciiStringStorageDriver;
friend class MDataStd_IntPackedMapStorageDriver;
friend class MDataStd_DirectoryRetrievalDriver;
friend class MDataStd_UAttributeRetrievalDriver;
friend class MDataStd_NameRetrievalDriver;
friend class MDataStd_CommentRetrievalDriver;
friend class MDataStd_IntegerRetrievalDriver;
friend class MDataStd_IntegerArrayRetrievalDriver;
friend class MDataStd_IntegerArrayRetrievalDriver_1;
friend class MDataStd_RealRetrievalDriver;
friend class MDataStd_RealArrayRetrievalDriver;
friend class MDataStd_RealArrayRetrievalDriver_1;
friend class MDataStd_ExtStringArrayRetrievalDriver;
friend class MDataStd_ExtStringArrayRetrievalDriver_1;
friend class MDataStd_VariableRetrievalDriver;
friend class MDataStd_ExpressionRetrievalDriver;
friend class MDataStd_RelationRetrievalDriver;
friend class MDataStd_NoteBookRetrievalDriver;
friend class MDataStd_TreeNodeRetrievalDriver;
friend class MDataStd_TickRetrievalDriver;
friend class MDataStd_IntegerListRetrievalDriver;
friend class MDataStd_RealListRetrievalDriver;
friend class MDataStd_ExtStringListRetrievalDriver;
friend class MDataStd_BooleanListRetrievalDriver;
friend class MDataStd_ReferenceListRetrievalDriver;
friend class MDataStd_BooleanArrayRetrievalDriver;
friend class MDataStd_ReferenceArrayRetrievalDriver;
friend class MDataStd_ByteArrayRetrievalDriver;
friend class MDataStd_ByteArrayRetrievalDriver_1;
friend class MDataStd_NamedDataRetrievalDriver;
friend class MDataStd_AsciiStringRetrievalDriver;
friend class MDataStd_IntPackedMapRetrievalDriver;
friend class MDataStd_IntPackedMapRetrievalDriver_1;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
