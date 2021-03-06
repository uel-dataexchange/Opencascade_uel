// File		Graphic3d_ArrayOfTriangleStrips.cxx
// Created	04/01/01 : GG : G005

#include <Graphic3d_ArrayOfTriangleStrips.ixx>

Graphic3d_ArrayOfTriangleStrips :: Graphic3d_ArrayOfTriangleStrips (
                        const Standard_Integer maxVertexs,
                        const Standard_Integer maxStrips,
                        const Standard_Boolean hasVNormals,
                        const Standard_Boolean hasVColors,
                        const Standard_Boolean hasSColors,
                        const Standard_Boolean hasVTexels)
	: Graphic3d_ArrayOfPrimitives(Graphic3d_TOPA_TRIANGLESTRIPS,maxVertexs,maxStrips,0,hasVNormals,hasVColors,hasSColors,hasVTexels,Standard_False) {}
