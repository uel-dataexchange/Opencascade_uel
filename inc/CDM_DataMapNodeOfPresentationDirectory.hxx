// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _CDM_DataMapNodeOfPresentationDirectory_HeaderFile
#define _CDM_DataMapNodeOfPresentationDirectory_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_CDM_DataMapNodeOfPresentationDirectory_HeaderFile
#include <Handle_CDM_DataMapNodeOfPresentationDirectory.hxx>
#endif

#ifndef _TCollection_ExtendedString_HeaderFile
#include <TCollection_ExtendedString.hxx>
#endif
#ifndef _Handle_CDM_Document_HeaderFile
#include <Handle_CDM_Document.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class CDM_Document;
class TCollection_ExtendedString;
class CDM_PresentationDirectory;
class CDM_DataMapIteratorOfPresentationDirectory;



class CDM_DataMapNodeOfPresentationDirectory : public TCollection_MapNode {

public:

  
      CDM_DataMapNodeOfPresentationDirectory(const TCollection_ExtendedString& K,const Handle(CDM_Document)& I,const TCollection_MapNodePtr& n);
  
        TCollection_ExtendedString& Key() const;
  
        Handle_CDM_Document& Value() const;




  DEFINE_STANDARD_RTTI(CDM_DataMapNodeOfPresentationDirectory)

protected:




private: 


TCollection_ExtendedString myKey;
Handle_CDM_Document myValue;


};

#define TheKey TCollection_ExtendedString
#define TheKey_hxx <TCollection_ExtendedString.hxx>
#define TheItem Handle_CDM_Document
#define TheItem_hxx <CDM_Document.hxx>
#define Hasher TCollection_ExtendedString
#define Hasher_hxx <TCollection_ExtendedString.hxx>
#define TCollection_DataMapNode CDM_DataMapNodeOfPresentationDirectory
#define TCollection_DataMapNode_hxx <CDM_DataMapNodeOfPresentationDirectory.hxx>
#define TCollection_DataMapIterator CDM_DataMapIteratorOfPresentationDirectory
#define TCollection_DataMapIterator_hxx <CDM_DataMapIteratorOfPresentationDirectory.hxx>
#define Handle_TCollection_DataMapNode Handle_CDM_DataMapNodeOfPresentationDirectory
#define TCollection_DataMapNode_Type_() CDM_DataMapNodeOfPresentationDirectory_Type_()
#define TCollection_DataMap CDM_PresentationDirectory
#define TCollection_DataMap_hxx <CDM_PresentationDirectory.hxx>

#include <TCollection_DataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_DataMapNode
#undef TCollection_DataMapNode_hxx
#undef TCollection_DataMapIterator
#undef TCollection_DataMapIterator_hxx
#undef Handle_TCollection_DataMapNode
#undef TCollection_DataMapNode_Type_
#undef TCollection_DataMap
#undef TCollection_DataMap_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
