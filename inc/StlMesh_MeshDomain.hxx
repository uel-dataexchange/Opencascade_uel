// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StlMesh_MeshDomain_HeaderFile
#define _StlMesh_MeshDomain_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StlMesh_MeshDomain_HeaderFile
#include <Handle_StlMesh_MeshDomain.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TColgp_SequenceOfXYZ_HeaderFile
#include <TColgp_SequenceOfXYZ.hxx>
#endif
#ifndef _StlMesh_SequenceOfMeshTriangle_HeaderFile
#include <StlMesh_SequenceOfMeshTriangle.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NegativeValue;
class Standard_NullValue;
class StlMesh_SequenceOfMeshTriangle;
class TColgp_SequenceOfXYZ;


//! A  mesh domain is  a set of triangles defined with <br>
//!          three geometric vertices. The  mesh domain has its <br>
//!          own deflection. <br>
//! <br>
class StlMesh_MeshDomain : public MMgt_TShared {

public:

  //! The mesh deflection is defaulted to Confusion from <br>
//!          package Precision. <br>
  Standard_EXPORT   StlMesh_MeshDomain();
  //! Raised if the deflection is lower than zero <br>//! Raised if the deflection  is lower than  Confusion <br>
//!          from package Precision <br>
  Standard_EXPORT   StlMesh_MeshDomain(const Standard_Real Deflection);
  //! Build a triangle with the triplet of vertices (V1, <br>
//!          V2, V3).  This triplet defines  the indexes of the <br>
//!          vertex in the  current domain The coordinates  Xn, <br>
//!          Yn,  Zn  defines   the normal  direction   to  the <br>
//!          triangle.  Returns  the  range of  the triangle in <br>
//!          the current domain. <br>
  Standard_EXPORT   virtual  Standard_Integer AddTriangle(const Standard_Integer V1,const Standard_Integer V2,const Standard_Integer V3,const Standard_Real Xn,const Standard_Real Yn,const Standard_Real Zn) ;
  //! Returns the range of the vertex in the current <br>
//!          domain. <br>
  Standard_EXPORT   virtual  Standard_Integer AddVertex(const Standard_Real X,const Standard_Real Y,const Standard_Real Z) ;
  //! Returns  the range of   the vertex in  the current <br>
//!          domain.  The current vertex is not inserted in the <br>
//!          mesh if it already exist. <br>
  Standard_EXPORT   virtual  Standard_Integer AddOnlyNewVertex(const Standard_Real X,const Standard_Real Y,const Standard_Real Z,Standard_Boolean& IsNew) ;
  
      virtual  Standard_Real Deflection() const;
  //! Number of triangles in the mesh. <br>
      virtual  Standard_Integer NbTriangles() const;
  //! Number of vertices in the mesh. <br>
      virtual  Standard_Integer NbVertices() const;
  //! Returns the set of triangles of the  current mesh domain <br>
      virtual const StlMesh_SequenceOfMeshTriangle& Triangles() const;
  //! Returns  the coordinates   of the  vertices of the <br>
//!          mesh domain   of range <DomainIndex>.   {XV1, YV1, <br>
//!          ZV1, XV2, YV2, ZV2, XV3,.....} <br>
      virtual const TColgp_SequenceOfXYZ& Vertices() const;




  DEFINE_STANDARD_RTTI(StlMesh_MeshDomain)

protected:




private: 


Standard_Real deflection;
Standard_Integer nbVertices;
Standard_Integer nbTriangles;
TColgp_SequenceOfXYZ vertexCoords;
StlMesh_SequenceOfMeshTriangle trianglesVertex;


};


#include <StlMesh_MeshDomain.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
