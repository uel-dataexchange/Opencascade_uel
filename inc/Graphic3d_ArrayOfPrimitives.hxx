// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_ArrayOfPrimitives_HeaderFile
#define _Graphic3d_ArrayOfPrimitives_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Graphic3d_ArrayOfPrimitives_HeaderFile
#include <Handle_Graphic3d_ArrayOfPrimitives.hxx>
#endif

#ifndef _Graphic3d_PrimitiveArray_HeaderFile
#include <Graphic3d_PrimitiveArray.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Graphic3d_TypeOfPrimitiveArray_HeaderFile
#include <Graphic3d_TypeOfPrimitiveArray.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
class Standard_OutOfRange;
class Graphic3d_InitialisationError;
class Graphic3d_Group;
class gp_Pnt;
class Quantity_Color;
class gp_Dir;
class gp_Pnt2d;


//! This class furnish services to defined and fill an <br>
//!      array of primitives compatible with the use of <br>
//!      the OPENGl glDrawArrays() or glDrawElements() functions. <br>
//!      NOTE that the main goal of this kind of primitive <br>
//!      is to avoid multiple copies of datas between <br>
//!      each layer of the software. <br>
//!      So the array datas exist only one time and the use <br>
//!      of SetXxxxxx() methods enable to change dynamically <br>
//!      the aspect of this primitive. <br>
class Graphic3d_ArrayOfPrimitives : public MMgt_TShared {

public:

  
  Standard_EXPORT     void Destroy() ;
~Graphic3d_ArrayOfPrimitives()
{
  Destroy();
}
  //! Adds a vertice in the array. <br>
//! returns the actual vertex number. <br>
  Standard_EXPORT     Standard_Integer AddVertex(const gp_Pnt& aVertice) ;
  //! Adds a vertice in the array. <br>
//! returns the actual vertex number. <br>
  Standard_EXPORT     Standard_Integer AddVertex(const Standard_Real X,const Standard_Real Y,const Standard_Real Z) ;
  //! Adds a vertice and vertex color in the vertex array. <br>
//! returns the actual vertex number. <br>
//!  Warning: <aColor> is ignored when the <hasVColors> <br>
//! constructor parameter is FALSE <br>
  Standard_EXPORT     Standard_Integer AddVertex(const gp_Pnt& aVertice,const Quantity_Color& aColor) ;
  //! Adds a vertice and vertex color in the vertex array. <br>
//! returns the actual vertex number. <br>
//! Warning: <aColor> is ignored when the <hasVColors> <br>
//! constructor parameter is FALSE <br>
//! aColor = Alpha << 24 + Blue << 16 + Green << 8 + Red <br>
//! On all architecture proccers type (x86 or SPARC) you can <br>
//! use this byte order. <br>
  Standard_EXPORT     Standard_Integer AddVertex(const gp_Pnt& aVertice,const Standard_Integer aColor) ;
  //! Adds a vertice and vertex normal in the vertex array. <br>
//! returns the actual vertex number. <br>
//!  Warning: <aNormal> is ignored when the <hasVNormals> <br>
//! constructor parameter is FALSE. <br>
  Standard_EXPORT     Standard_Integer AddVertex(const gp_Pnt& aVertice,const gp_Dir& aNormal) ;
  //! Adds a vertice and vertex normal in the vertex array. <br>
//! returns the actual vertex number. <br>
//!  Warning: <aNormal> is ignored when the <hasVNormals> <br>
//! constructor parameter is FALSE. <br>
  Standard_EXPORT     Standard_Integer AddVertex(const Standard_Real X,const Standard_Real Y,const Standard_Real Z,const Standard_Real NX,const Standard_Real NY,const Standard_Real NZ) ;
  //! Adds a vertice,vertex normal and color in the vertex array. <br>
//! returns the actual vertex number. <br>
//!  Warning: <aNormal> is ignored when the <hasVNormals> <br>
//! constructor parameter is FALSE. <br>
//!          <aColor> is ignored when the <hasVColors> <br>
//! constructor parameter is FALSE <br>
  Standard_EXPORT     Standard_Integer AddVertex(const gp_Pnt& aVertice,const gp_Dir& aNormal,const Quantity_Color& aColor) ;
  //! Adds a vertice,vertex normal and color in the vertex array. <br>
//! returns the actual vertex number. <br>
//!  Warning: <aNormal> is ignored when the <hasVNormals> <br>
//! constructor parameter is FALSE. <br>
//!          <aColor> is ignored when the <hasVColors> <br>
//! constructor parameter is FALSE <br>
//! aColor = Alpha << 24 + Blue << 16 + Green << 8 + Red <br>
//! On all architecture proccers type (x86 or SPARC) you can <br>
//! use this byte order. <br>
  Standard_EXPORT     Standard_Integer AddVertex(const gp_Pnt& aVertice,const gp_Dir& aNormal,const Standard_Integer aColor) ;
  //! Adds a vertice and vertex texture in the vertex array. <br>
//! returns the actual vertex number. <br>
//! <aTexel> is ignored when the <hasVTexels> <br>
//! constructor parameter is FALSE. <br>
  Standard_EXPORT     Standard_Integer AddVertex(const gp_Pnt& aVertice,const gp_Pnt2d& aTexel) ;
  //! Adds a vertice and vertex texture coordinates in the vertex array. <br>
//! returns the actual vertex number. <br>
//! <aTexel> is ignored when the <hasVTexels> <br>
//! constructor parameter is FALSE. <br>
  Standard_EXPORT     Standard_Integer AddVertex(const Standard_Real X,const Standard_Real Y,const Standard_Real Z,const Standard_Real TX,const Standard_Real TY) ;
  //! Adds a vertice,vertex normal and texture in the vertex array. <br>
//! returns the actual vertex number. <br>
//!  Warning: <aNormal> is ignored when the <hasVNormals> <br>
//! constructor parameter is FALSE. <br>
//! <aTexel> is ignored when the <hasVTexels> <br>
//! constructor parameter is FALSE. <br>
  Standard_EXPORT     Standard_Integer AddVertex(const gp_Pnt& aVertice,const gp_Dir& aNormal,const gp_Pnt2d& aTexel) ;
  //! Adds a vertice,vertex normal and texture in the vertex array. <br>
//! returns the actual vertex number. <br>
//!  Warning: <aNormal> is ignored when the <hasVNormals> <br>
//! constructor parameter is FALSE. <br>
//! <aTexel> is ignored when the <hasVTexels> <br>
//! constructor parameter is FALSE. <br>
  Standard_EXPORT     Standard_Integer AddVertex(const Standard_Real X,const Standard_Real Y,const Standard_Real Z,const Standard_Real NX,const Standard_Real NY,const Standard_Real NZ,const Standard_Real TX,const Standard_Real TY) ;
  //! Adds a bound of length <edgeNumber> in the bound array <br>
//! returns the actual bounds number. <br>
  Standard_EXPORT     Standard_Integer AddBound(const Standard_Integer edgeNumber) ;
  //! Adds a bound of length <edgeNumber> and bound color <br>
//! <aBColor> in the bound array. <br>
//! returns the actual bounds number. <br>
//!  Warning: <aBColor> is ignored when the <hasBColors> <br>
//! constructor parameter is FALSE <br>
  Standard_EXPORT     Standard_Integer AddBound(const Standard_Integer edgeNumber,const Quantity_Color& aBColor) ;
  //! Adds a bound of length <edgeNumber> and bound color <br>
//! coordinates in the bound array. <br>
//! returns the actual bounds number. <br>
//!  Warning: <R,G,B> are ignored when the <hasBColors> <br>
//! constructor parameter is FALSE <br>
  Standard_EXPORT     Standard_Integer AddBound(const Standard_Integer edgeNumber,const Standard_Real R,const Standard_Real G,const Standard_Real B) ;
  //! Adds an edge in the range [1,VertexNumber()] in the array, <br>
//! if <isVisible> is FALSE the edge between <vertexIndex> and <br>
//! the next edge will not be visible even if the SetEdgeOn() method <br>
//! is activated in Graphic3d_AspectFillArea3d class. <br>
//! returns the actual edges number. <br>
//!  Warning: <isVisible> is ignored when the <hasEdgeInfos> <br>
//! constructor parameter is FALSE. <br>
  Standard_EXPORT     Standard_Integer AddEdge(const Standard_Integer vertexIndex,const Standard_Boolean isVisible = Standard_True) ;
  //! Orientate correctly all vertexs & normals of this array <br>
//! according to the <aNormal> parameter and <br>
//! returns TRUE when something has change in the array. <br>
//!  Warning: When the array has edges this method is apply <br>
//! on edge sub array instead on vertex sub array. <br>
  Standard_EXPORT     Standard_Boolean Orientate(const gp_Dir& aNormal) ;
  //! Orientate correctly all vertexs & normal of the bound <aBound> <br>
//! according to the <aNormal> parameter and <br>
//! returns TRUE when something has change in the array. <br>
//!  Warning: When the array has edges this method is apply <br>
//! on edge sub array instead on vertex sub array. <br>
//! When this array has no bound, <aBoundIndex> design the item number <br>
  Standard_EXPORT     Standard_Boolean Orientate(const Standard_Integer aBoundIndex,const gp_Dir& aNormal) ;
  //! Change the vertice of rank <anIndex> in the array. <br>
  Standard_EXPORT     void SetVertice(const Standard_Integer anIndex,const gp_Pnt& aVertice) ;
  //! Change the vertice of rank <anIndex> in the array. <br>
        void SetVertice(const Standard_Integer anIndex,const Standard_Real X,const Standard_Real Y,const Standard_Real Z) ;
  //! Change the vertex color of rank <anIndex> in the array. <br>
  Standard_EXPORT     void SetVertexColor(const Standard_Integer anIndex,const Quantity_Color& aColor) ;
  //! Change the vertex color of rank <anIndex> in the array. <br>
        void SetVertexColor(const Standard_Integer anIndex,const Standard_Real R,const Standard_Real G,const Standard_Real B) ;
  //! Change the vertex color of rank <anIndex> in the array. <br>
//! aColor = Alpha << 24 + Blue << 16 + Green << 8 + Red <br>
//! On all architecture proccers type (x86 or SPARC) you can <br>
//! use this byte order. <br>
  Standard_EXPORT     void SetVertexColor(const Standard_Integer anIndex,const Standard_Integer aColor) ;
  //! Change the vertex normal of rank <anIndex> in the array. <br>
  Standard_EXPORT     void SetVertexNormal(const Standard_Integer anIndex,const gp_Dir& aNormal) ;
  //! Change the vertex normal of rank <anIndex> in the array. <br>
        void SetVertexNormal(const Standard_Integer anIndex,const Standard_Real NX,const Standard_Real NY,const Standard_Real NZ) ;
  //! Change the vertex texel of rank <anIndex> in the array. <br>
  Standard_EXPORT     void SetVertexTexel(const Standard_Integer anIndex,const gp_Pnt2d& aTexel) ;
  //! Change the vertex texel of rank <anIndex> in the array. <br>
        void SetVertexTexel(const Standard_Integer anIndex,const Standard_Real TX,const Standard_Real TY) ;
  //! Change the bound color of rank <anIndex> in the array. <br>
  Standard_EXPORT     void SetBoundColor(const Standard_Integer anIndex,const Quantity_Color& aColor) ;
  //! Change the bound color of rank <anIndex> in the array. <br>
        void SetBoundColor(const Standard_Integer anIndex,const Standard_Real R,const Standard_Real G,const Standard_Real B) ;
  //! Returns the array address. <br>
        Graphic3d_PrimitiveArray Array() const;
  //! Returns the type of this primitive <br>
        Graphic3d_TypeOfPrimitiveArray Type() const;
  //! Returns the string type of this primitive <br>
  Standard_EXPORT     Standard_CString StringType() const;
  //! Returns TRUE when vertex normals array is defined. <br>
        Standard_Boolean HasVertexNormals() const;
  //! Returns TRUE when vertex colors array is defined. <br>
        Standard_Boolean HasVertexColors() const;
  //! Returns TRUE when vertex texels array is defined. <br>
        Standard_Boolean HasVertexTexels() const;
  //! Returns the number of defined vertex <br>
        Standard_Integer VertexNumber() const;
  //! Returns the vertice at rank <aRank> <br>
//! from the vertex table if defined. <br>
  Standard_EXPORT     gp_Pnt Vertice(const Standard_Integer aRank) const;
  //! Returns the vertice coordinates at rank <aRank> <br>
//! from the vertex table if defined. <br>
        void Vertice(const Standard_Integer aRank,Standard_Real& X,Standard_Real& Y,Standard_Real& Z) const;
  //! Returns the vertex color at rank <aRank> <br>
//! from the vertex table if defined. <br>
  Standard_EXPORT     Quantity_Color VertexColor(const Standard_Integer aRank) const;
  //! Returns the vertex color values at rank <aRank> <br>
//! from the vertex table if defined. <br>
        void VertexColor(const Standard_Integer aRank,Standard_Real& R,Standard_Real& G,Standard_Real& B) const;
  //! Returns the vertex color values at rank <aRank> <br>
//! from the vertex table if defined. <br>
        void VertexColor(const Standard_Integer aRank,Standard_Integer& aColor) const;
  //! Returns the vertex normal at rank <aRank> <br>
//! from the vertex table if defined. <br>
  Standard_EXPORT     gp_Dir VertexNormal(const Standard_Integer aRank) const;
  //! Returns the vertex normal coordinates at rank <aRank> <br>
//! from the vertex table if defined. <br>
        void VertexNormal(const Standard_Integer aRank,Standard_Real& NX,Standard_Real& NY,Standard_Real& NZ) const;
  //! Returns the vertex texture at rank <aRank> <br>
//! from the vertex table if defined. <br>
  Standard_EXPORT     gp_Pnt2d VertexTexel(const Standard_Integer aRank) const;
  //! Returns the vertex texture coordinates at rank <aRank> <br>
//! from the vertex table if defined. <br>
        void VertexTexel(const Standard_Integer aRank,Standard_Real& TX,Standard_Real& TY) const;
  //! Returns TRUE when edge visibillity array is defined. <br>
        Standard_Boolean HasEdgeInfos() const;
  //! Returns the number of defined edges <br>
        Standard_Integer EdgeNumber() const;
  //! Returns the vertex index at rank <aRank> <br>
//! in the range [1,VertexNumber()] <br>
        Standard_Integer Edge(const Standard_Integer aRank) const;
  //! Returns TRUE when the edge at rank <aRank> <br>
//! is visible. <br>
        Standard_Boolean EdgeIsVisible(const Standard_Integer aRank) const;
  //! Returns TRUE when bound colors array is defined. <br>
        Standard_Boolean HasBoundColors() const;
  //! Returns the number of defined bounds <br>
        Standard_Integer BoundNumber() const;
  //! Returns the edge number at rank <aRank>. <br>
        Standard_Integer Bound(const Standard_Integer aRank) const;
  //! Returns the bound color at rank <aRank> <br>
//! from the bound table if defined. <br>
  Standard_EXPORT     Quantity_Color BoundColor(const Standard_Integer aRank) const;
  //! Returns the bound color values at rank <aRank> <br>
//! from the bound table if defined. <br>
  Standard_EXPORT     void BoundColor(const Standard_Integer aRank,Standard_Real& R,Standard_Real& G,Standard_Real& B) const;
  //! Returns the number of total items according to <br>
//!  the array type. <br>
  Standard_EXPORT     Standard_Integer ItemNumber() const;
  //! Enable to use the arrays of primitives <br>
//!  Warning: Updates the current value of the environment symbol <br>
//!  CSF_USE_ARRAY_OF_PRIMITIVES <br>
  Standard_EXPORT   static  void Enable() ;
  //! Disable to use the arrays of primitives <br>
//!  Warning: Updates the current value of the environment symbol <br>
//!  CSF_USE_ARRAY_OF_PRIMITIVES <br>
  Standard_EXPORT   static  void Disable() ;
  //! Returns TRUE when the arrays are enable to use. <br>
//!  Warning: The initial value can be defined seting the symbol <br>
//!  CSF_USE_ARRAY_OF_PRIMITIVES to "Yes" or "No" <br>
  Standard_EXPORT   static  Standard_Boolean IsEnable() ;
  //! Returns TRUE only when the contains of this array is <br>
//! available. <br>
  Standard_EXPORT     Standard_Boolean IsValid() ;

friend class Graphic3d_Group;


  DEFINE_STANDARD_RTTI(Graphic3d_ArrayOfPrimitives)

protected:

  //!  Warning <br>
//! You must use a coherent set of AddVertex() methods according to the <br>
//! <hasVNormals>,<hasVColors>,<hasVTexels>,<hasBColors> <br>
//! User is responsible of confuse vertex and bad normal orientation. <br>
//! You must use AddBound() method only if the <maxBounds> <br>
//! constructor parameter is > 0. <br>
//! You must use AddEdge() method only if the <maxEdges> <br>
//! constructor parameter is > 0. <br>
//! You must use a coherent set of AddEdge() methods according to the <br>
//! <hasEdgeInfos> constructor parameter. <br>
  Standard_EXPORT   Graphic3d_ArrayOfPrimitives(const Graphic3d_TypeOfPrimitiveArray aType,const Standard_Integer maxVertexs,const Standard_Integer maxBounds,const Standard_Integer maxEdges,const Standard_Boolean hasVNormals,const Standard_Boolean hasVColors,const Standard_Boolean hasBColors,const Standard_Boolean hasTexels,const Standard_Boolean hasEdgeInfos);



private: 

  //! Orientate correctly a set of vertexs & normal <br>
//! from <aVertexIndex> to <aVertexIndex>+<aVertexNumber>-1 <br>
//! according to the <aNormal> parameter and <br>
//! returns TRUE when something has change in the array. <br>
//!  Warning: When the array has edges this method is apply <br>
//! on edge sub array instead on vertex sub array. <br>
  Standard_EXPORT     Standard_Boolean Orientate(const Standard_Integer aVertexIndex,const Standard_Integer aVertexNumber,const gp_Dir& aNormal) ;
  
  Standard_EXPORT     void ComputeVNormals(const Standard_Integer fromIndex,const Standard_Integer toIndex) ;

Graphic3d_PrimitiveArray myPrimitiveArray;
Standard_Integer myMaxBounds;
Standard_Integer myMaxVertexs;
Standard_Integer myMaxEdges;


};


#include <Graphic3d_ArrayOfPrimitives.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
