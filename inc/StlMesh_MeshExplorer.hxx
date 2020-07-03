// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StlMesh_MeshExplorer_HeaderFile
#define _StlMesh_MeshExplorer_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_StlMesh_Mesh_HeaderFile
#include <Handle_StlMesh_Mesh.hxx>
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
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class StlMesh_Mesh;
class Standard_OutOfRange;
class Standard_NoMoreObject;
class Standard_NoSuchObject;


//! Provides  facilities to explore  the triangles  of <br>
//!          each mesh domain. <br>
//! <br>
class StlMesh_MeshExplorer  {
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

  
  Standard_EXPORT   StlMesh_MeshExplorer(const Handle(StlMesh_Mesh)& M);
  //! Returns the mesh deflection of the current domain. <br>
  Standard_EXPORT     Standard_Real Deflection() const;
  //! Initializes the exploration  of the  triangles  of <br>
//!          the mesh domain of range <DomainIndex>. <br>//! Raised if <DomainIndex> is lower than 1 or greater <br>
//!          than the number of domains. <br>
  Standard_EXPORT     void InitTriangle(const Standard_Integer DomainIndex = 1) ;
  
        Standard_Boolean MoreTriangle() const;
  //! Raised if there is no more triangle in the current <br>
//!          domain. <br>
  Standard_EXPORT     void NextTriangle() ;
  //! Raised if there is no more triangle in the current <br>
//!          domain. <br>
  Standard_EXPORT     void TriangleVertices(Standard_Real& X1,Standard_Real& Y1,Standard_Real& Z1,Standard_Real& X2,Standard_Real& Y2,Standard_Real& Z2,Standard_Real& X3,Standard_Real& Y3,Standard_Real& Z3) const;
  //! Raised if there is no more triangle in the current <br>
//!          domain. <br>
  Standard_EXPORT     void TriangleOrientation(Standard_Real& Xn,Standard_Real& Yn,Standard_Real& Zn) const;





protected:





private:



Handle_StlMesh_Mesh mesh;
Standard_Real xn;
Standard_Real yn;
Standard_Real zn;
Standard_Integer v1;
Standard_Integer v2;
Standard_Integer v3;
Standard_Integer domainIndex;
Standard_Integer nbTriangles;
Standard_Integer triangleIndex;
TColgp_SequenceOfXYZ trianglesVertex;
StlMesh_SequenceOfMeshTriangle trianglesdef;


};


#include <StlMesh_MeshExplorer.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
