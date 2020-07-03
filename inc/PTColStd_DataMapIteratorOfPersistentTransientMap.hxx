// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PTColStd_DataMapIteratorOfPersistentTransientMap_HeaderFile
#define _PTColStd_DataMapIteratorOfPersistentTransientMap_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Handle_Standard_Persistent_HeaderFile
#include <Handle_Standard_Persistent.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_PTColStd_DataMapNodeOfPersistentTransientMap_HeaderFile
#include <Handle_PTColStd_DataMapNodeOfPersistentTransientMap.hxx>
#endif
class Standard_NoSuchObject;
class Standard_Persistent;
class Standard_Transient;
class PTColStd_MapPersistentHasher;
class PTColStd_PersistentTransientMap;
class PTColStd_DataMapNodeOfPersistentTransientMap;



class PTColStd_DataMapIteratorOfPersistentTransientMap  : public TCollection_BasicMapIterator {
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

  
  Standard_EXPORT   PTColStd_DataMapIteratorOfPersistentTransientMap();
  
  Standard_EXPORT   PTColStd_DataMapIteratorOfPersistentTransientMap(const PTColStd_PersistentTransientMap& aMap);
  
  Standard_EXPORT     void Initialize(const PTColStd_PersistentTransientMap& aMap) ;
  
  Standard_EXPORT    const Handle_Standard_Persistent& Key() const;
  
  Standard_EXPORT    const Handle_Standard_Transient& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
