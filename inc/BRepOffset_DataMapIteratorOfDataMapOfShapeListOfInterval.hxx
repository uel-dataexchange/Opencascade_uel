// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepOffset_DataMapIteratorOfDataMapOfShapeListOfInterval_HeaderFile
#define _BRepOffset_DataMapIteratorOfDataMapOfShapeListOfInterval_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Handle_BRepOffset_DataMapNodeOfDataMapOfShapeListOfInterval_HeaderFile
#include <Handle_BRepOffset_DataMapNodeOfDataMapOfShapeListOfInterval.hxx>
#endif
class Standard_NoSuchObject;
class TopoDS_Shape;
class BRepOffset_ListOfInterval;
class TopTools_ShapeMapHasher;
class BRepOffset_DataMapOfShapeListOfInterval;
class BRepOffset_DataMapNodeOfDataMapOfShapeListOfInterval;



class BRepOffset_DataMapIteratorOfDataMapOfShapeListOfInterval  : public TCollection_BasicMapIterator {
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

  
  Standard_EXPORT   BRepOffset_DataMapIteratorOfDataMapOfShapeListOfInterval();
  
  Standard_EXPORT   BRepOffset_DataMapIteratorOfDataMapOfShapeListOfInterval(const BRepOffset_DataMapOfShapeListOfInterval& aMap);
  
  Standard_EXPORT     void Initialize(const BRepOffset_DataMapOfShapeListOfInterval& aMap) ;
  
  Standard_EXPORT    const TopoDS_Shape& Key() const;
  
  Standard_EXPORT    const BRepOffset_ListOfInterval& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
