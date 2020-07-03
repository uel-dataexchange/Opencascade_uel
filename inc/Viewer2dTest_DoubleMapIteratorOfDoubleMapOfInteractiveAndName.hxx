// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Viewer2dTest_DoubleMapIteratorOfDoubleMapOfInteractiveAndName_HeaderFile
#define _Viewer2dTest_DoubleMapIteratorOfDoubleMapOfInteractiveAndName_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Handle_AIS2D_InteractiveObject_HeaderFile
#include <Handle_AIS2D_InteractiveObject.hxx>
#endif
#ifndef _Handle_Viewer2dTest_DoubleMapNodeOfDoubleMapOfInteractiveAndName_HeaderFile
#include <Handle_Viewer2dTest_DoubleMapNodeOfDoubleMapOfInteractiveAndName.hxx>
#endif
class Standard_NoSuchObject;
class AIS2D_InteractiveObject;
class TCollection_AsciiString;
class TColStd_MapTransientHasher;
class Viewer2dTest_DoubleMapOfInteractiveAndName;
class Viewer2dTest_DoubleMapNodeOfDoubleMapOfInteractiveAndName;



class Viewer2dTest_DoubleMapIteratorOfDoubleMapOfInteractiveAndName  : public TCollection_BasicMapIterator {
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

  
  Standard_EXPORT   Viewer2dTest_DoubleMapIteratorOfDoubleMapOfInteractiveAndName();
  
  Standard_EXPORT   Viewer2dTest_DoubleMapIteratorOfDoubleMapOfInteractiveAndName(const Viewer2dTest_DoubleMapOfInteractiveAndName& aMap);
  
  Standard_EXPORT     void Initialize(const Viewer2dTest_DoubleMapOfInteractiveAndName& aMap) ;
  
  Standard_EXPORT    const Handle_AIS2D_InteractiveObject& Key1() const;
  
  Standard_EXPORT    const TCollection_AsciiString& Key2() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
