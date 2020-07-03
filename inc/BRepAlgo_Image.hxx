// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepAlgo_Image_HeaderFile
#define _BRepAlgo_Image_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopTools_ListOfShape_HeaderFile
#include <TopTools_ListOfShape.hxx>
#endif
#ifndef _TopTools_DataMapOfShapeShape_HeaderFile
#include <TopTools_DataMapOfShapeShape.hxx>
#endif
#ifndef _TopTools_DataMapOfShapeListOfShape_HeaderFile
#include <TopTools_DataMapOfShapeListOfShape.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopAbs_ShapeEnum_HeaderFile
#include <TopAbs_ShapeEnum.hxx>
#endif
class Standard_ConstructionError;
class TopoDS_Shape;
class TopTools_ListOfShape;


//! Stores link between a shape <S> and a shape <NewS> <br>
//!          obtained from <S>. <NewS> is an image of <S>. <br>
class BRepAlgo_Image  {
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

  
  Standard_EXPORT   BRepAlgo_Image();
  
  Standard_EXPORT     void SetRoot(const TopoDS_Shape& S) ;
  //! Links <NewS> as image of <OldS>. <br>
  Standard_EXPORT     void Bind(const TopoDS_Shape& OldS,const TopoDS_Shape& NewS) ;
  //! Links <NewS> as image of <OldS>. <br>
  Standard_EXPORT     void Bind(const TopoDS_Shape& OldS,const TopTools_ListOfShape& NewS) ;
  //! Add <NewS> to the image of <OldS>. <br>
  Standard_EXPORT     void Add(const TopoDS_Shape& OldS,const TopoDS_Shape& NewS) ;
  //! Add <NewS> to the image of <OldS>. <br>
  Standard_EXPORT     void Add(const TopoDS_Shape& OldS,const TopTools_ListOfShape& NewS) ;
  
  Standard_EXPORT     void Clear() ;
  //! Remove <S> to set of images. <br>
  Standard_EXPORT     void Remove(const TopoDS_Shape& S) ;
  
  Standard_EXPORT    const TopTools_ListOfShape& Roots() const;
  
  Standard_EXPORT     Standard_Boolean IsImage(const TopoDS_Shape& S) const;
  //! Returns the generator of <S> <br>
  Standard_EXPORT    const TopoDS_Shape& ImageFrom(const TopoDS_Shape& S) const;
  //! Returns the upper generator of <S> <br>
  Standard_EXPORT    const TopoDS_Shape& Root(const TopoDS_Shape& S) const;
  
  Standard_EXPORT     Standard_Boolean HasImage(const TopoDS_Shape& S) const;
  //! Returns the Image of <S>. <br>
//!          Returns <S> in the list if HasImage(S) is false. <br>
  Standard_EXPORT    const TopTools_ListOfShape& Image(const TopoDS_Shape& S) const;
  //! Stores in <L> the images of images of...images of <S>. <br>
//!          <L> contains only <S> if  HasImage(S) is false. <br>
  Standard_EXPORT     void LastImage(const TopoDS_Shape& S,TopTools_ListOfShape& L) const;
  //!  Keeps only the link between roots and lastimage. <br>
  Standard_EXPORT     void Compact() ;
  //! Deletes in the images the shape of type <ShapeType> <br>
//!          which are not in <S>. <br>
//!  Warning:  Compact() must be call before. <br>
  Standard_EXPORT     void Filter(const TopoDS_Shape& S,const TopAbs_ShapeEnum ShapeType) ;





protected:





private:



TopTools_ListOfShape roots;
TopTools_DataMapOfShapeShape up;
TopTools_DataMapOfShapeListOfShape down;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
