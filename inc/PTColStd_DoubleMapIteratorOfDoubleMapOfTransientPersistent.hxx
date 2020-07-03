// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PTColStd_DoubleMapIteratorOfDoubleMapOfTransientPersistent_HeaderFile
#define _PTColStd_DoubleMapIteratorOfDoubleMapOfTransientPersistent_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_Standard_Persistent_HeaderFile
#include <Handle_Standard_Persistent.hxx>
#endif
#ifndef _Handle_PTColStd_DoubleMapNodeOfDoubleMapOfTransientPersistent_HeaderFile
#include <Handle_PTColStd_DoubleMapNodeOfDoubleMapOfTransientPersistent.hxx>
#endif
class Standard_NoSuchObject;
class Standard_Transient;
class Standard_Persistent;
class TColStd_MapTransientHasher;
class PTColStd_MapPersistentHasher;
class PTColStd_DoubleMapOfTransientPersistent;
class PTColStd_DoubleMapNodeOfDoubleMapOfTransientPersistent;



class PTColStd_DoubleMapIteratorOfDoubleMapOfTransientPersistent  : public TCollection_BasicMapIterator {
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

  
  Standard_EXPORT   PTColStd_DoubleMapIteratorOfDoubleMapOfTransientPersistent();
  
  Standard_EXPORT   PTColStd_DoubleMapIteratorOfDoubleMapOfTransientPersistent(const PTColStd_DoubleMapOfTransientPersistent& aMap);
  
  Standard_EXPORT     void Initialize(const PTColStd_DoubleMapOfTransientPersistent& aMap) ;
  
  Standard_EXPORT    const Handle_Standard_Transient& Key1() const;
  
  Standard_EXPORT    const Handle_Standard_Persistent& Key2() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
