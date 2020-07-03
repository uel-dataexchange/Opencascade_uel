// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeFix_DataMapIteratorOfDataMapOfShapeBox2d_HeaderFile
#define _ShapeFix_DataMapIteratorOfDataMapOfShapeBox2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Handle_ShapeFix_DataMapNodeOfDataMapOfShapeBox2d_HeaderFile
#include <Handle_ShapeFix_DataMapNodeOfDataMapOfShapeBox2d.hxx>
#endif
class Standard_NoSuchObject;
class TopoDS_Shape;
class Bnd_Box2d;
class TopTools_ShapeMapHasher;
class ShapeFix_DataMapOfShapeBox2d;
class ShapeFix_DataMapNodeOfDataMapOfShapeBox2d;



class ShapeFix_DataMapIteratorOfDataMapOfShapeBox2d  : public TCollection_BasicMapIterator {
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

  
  Standard_EXPORT   ShapeFix_DataMapIteratorOfDataMapOfShapeBox2d();
  
  Standard_EXPORT   ShapeFix_DataMapIteratorOfDataMapOfShapeBox2d(const ShapeFix_DataMapOfShapeBox2d& aMap);
  
  Standard_EXPORT     void Initialize(const ShapeFix_DataMapOfShapeBox2d& aMap) ;
  
  Standard_EXPORT    const TopoDS_Shape& Key() const;
  
  Standard_EXPORT    const Bnd_Box2d& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
