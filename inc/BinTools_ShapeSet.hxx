// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BinTools_ShapeSet_HeaderFile
#define _BinTools_ShapeSet_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopTools_IndexedMapOfShape_HeaderFile
#include <TopTools_IndexedMapOfShape.hxx>
#endif
#ifndef _BinTools_LocationSet_HeaderFile
#include <BinTools_LocationSet.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _BRep_Builder_HeaderFile
#include <BRep_Builder.hxx>
#endif
#ifndef _BinTools_SurfaceSet_HeaderFile
#include <BinTools_SurfaceSet.hxx>
#endif
#ifndef _BinTools_CurveSet_HeaderFile
#include <BinTools_CurveSet.hxx>
#endif
#ifndef _BinTools_Curve2dSet_HeaderFile
#include <BinTools_Curve2dSet.hxx>
#endif
#ifndef _TColStd_IndexedMapOfTransient_HeaderFile
#include <TColStd_IndexedMapOfTransient.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
#ifndef _Standard_IStream_HeaderFile
#include <Standard_IStream.hxx>
#endif
#ifndef _TopAbs_ShapeEnum_HeaderFile
#include <TopAbs_ShapeEnum.hxx>
#endif
class TopoDS_Shape;
class BinTools_LocationSet;


//! Writes topology in OStream in binary format <br>
class BinTools_ShapeSet  {
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

  //! Builds an empty ShapeSet. <br>
//!          Parameter <isWithTriangles> is added for XML Persistence <br>
  Standard_EXPORT   BinTools_ShapeSet(const Standard_Boolean isWithTriangles = Standard_False);
  
  Standard_EXPORT   virtual  void Delete() ;
Standard_EXPORT virtual ~BinTools_ShapeSet(){Delete() ; }
  
  Standard_EXPORT     void SetFormatNb(const Standard_Integer theFormatNb) ;
  //! two formats available for the moment: <br>
//!          First: does not write CurveOnSurface UV Points into the file <br>
//!                 on reading calls Check() method. <br>
//!          Second: stores CurveOnSurface UV Points. <br>
//!          On reading format is recognized from Version string. <br>
  Standard_EXPORT     Standard_Integer FormatNb() const;
  //! Clears the content of the set. <br>
  Standard_EXPORT   virtual  void Clear() ;
  //! Stores <S> and its sub-shape. Returns the index of <S>. <br>
//!          The method AddGeometry is called on each sub-shape. <br>
  Standard_EXPORT     Standard_Integer Add(const TopoDS_Shape& S) ;
  //! Returns the sub-shape of index <I>. <br>
//! <br>
  Standard_EXPORT    const TopoDS_Shape& Shape(const Standard_Integer I) const;
  //! Returns the index of <S>. <br>
  Standard_EXPORT     Standard_Integer Index(const TopoDS_Shape& S) const;
  
  Standard_EXPORT    const BinTools_LocationSet& Locations() const;
  
  Standard_EXPORT     BinTools_LocationSet& ChangeLocations() ;
  //!Returns number of shapes read from file. <br>
  Standard_EXPORT     Standard_Integer NbShapes() const;
  //! Writes the content of  me  on the stream <OS> in binary <br>
//!          format that can be read back by Read. <br>
//! <br>
//!          Writes the locations. <br>
//! <br>
//!          Writes the geometry calling WriteGeometry. <br>
//! <br>
//!          Dumps the shapes from last to first. <br>
//!            For each shape  : <br>
//!              Write the type. <br>
//!              calls WriteGeometry(S). <br>
//!              Write the flags, the subshapes. <br>
  Standard_EXPORT   virtual  void Write(Standard_OStream& OS) const;
  //! Reads the content of me from the binary stream  <IS>. me <br>
//!          is first cleared. <br>
//! <br>
//!          Reads the locations. <br>
//! <br>
//!          Reads the geometry calling ReadGeometry. <br>
//! <br>
//!          Reads the shapes. <br>
//!            For each shape <br>
//!              Reads the type. <br>
//!              calls ReadGeometry(T,S). <br>
//!              Reads the flag, the subshapes. <br>
  Standard_EXPORT   virtual  void Read(Standard_IStream& IS) ;
  //! Writes   on  <OS>   the shape   <S>.    Writes the <br>
//!          orientation, the index of the TShape and the index <br>
//!          of the Location. <br>
  Standard_EXPORT   virtual  void Write(const TopoDS_Shape& S,Standard_OStream& OS) const;
  //! Writes the geometry of  me  on the stream <OS> in a <br>
//!          binary format that can be read back by Read. <br>
  Standard_EXPORT   virtual  void WriteGeometry(Standard_OStream& OS) const;
  //! Reads the geometry of me from the  stream  <IS>. <br>
  Standard_EXPORT   virtual  void ReadGeometry(Standard_IStream& IS) ;
  //! Reads  from <IS>  a shape  and  returns  it in  S. <br>
//!          <NbShapes> is the number of tshapes in the set. <br>
  Standard_EXPORT   virtual  void Read(TopoDS_Shape& S,Standard_IStream& IS,const Standard_Integer NbShapes) const;
  //! Writes the geometry of <S>  on the stream <OS> in a <br>
//!          binary format that can be read back by Read. <br>
  Standard_EXPORT   virtual  void WriteGeometry(const TopoDS_Shape& S,Standard_OStream& OS) const;
  //! Reads the geometry of a shape of type <T> from the <br>
//!          stream <IS> and returns it in <S>. <br>
  Standard_EXPORT   virtual  void ReadGeometry(const TopAbs_ShapeEnum T,Standard_IStream& IS,TopoDS_Shape& S) ;
  //! Stores the goemetry of <S>. <br>
  Standard_EXPORT   virtual  void AddGeometry(const TopoDS_Shape& S) ;
  //! Inserts  the shape <S2> in  the  shape <S1>. <br>
  Standard_EXPORT   virtual  void AddShapes(TopoDS_Shape& S1,const TopoDS_Shape& S2) ;
  //! Reads the 3d polygons  of me <br>
//!          from the  stream  <IS>. <br>
  Standard_EXPORT     void ReadPolygon3D(Standard_IStream& IS) ;
  //! Writes the 3d polygons <br>
//!          on the stream <OS> in a format that can <br>
//!          be read back by Read. <br>
  Standard_EXPORT     void WritePolygon3D(Standard_OStream& OS) const;
  //! Reads the triangulation of me <br>
//!          from the  stream  <IS>. <br>
  Standard_EXPORT     void ReadTriangulation(Standard_IStream& IS) ;
  //! Writes the triangulation <br>
//!          on the stream <OS> in a format that can <br>
//!          be read back by Read. <br>
  Standard_EXPORT     void WriteTriangulation(Standard_OStream& OS) const;
  //! Reads the polygons on triangulation of me <br>
//!          from the  stream  <IS>. <br>
  Standard_EXPORT     void ReadPolygonOnTriangulation(Standard_IStream& IS) ;
  //! Writes the polygons on triangulation <br>
//!          on the stream <OS> in a format that can <br>
//!          be read back by Read. <br>
  Standard_EXPORT     void WritePolygonOnTriangulation(Standard_OStream& OS) const;





protected:





private:



TopTools_IndexedMapOfShape myShapes;
BinTools_LocationSet myLocations;
Standard_Integer myFormatNb;
BRep_Builder myBuilder;
BinTools_SurfaceSet mySurfaces;
BinTools_CurveSet myCurves;
BinTools_Curve2dSet myCurves2d;
TColStd_IndexedMapOfTransient myPolygons2D;
TColStd_IndexedMapOfTransient myPolygons3D;
TColStd_IndexedMapOfTransient myTriangulations;
TColStd_IndexedMapOfTransient myNodes;
Standard_Boolean myWithTriangles;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
