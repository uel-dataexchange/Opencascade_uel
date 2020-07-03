// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopAbs_ShapeEnum_HeaderFile
#define _TopAbs_ShapeEnum_HeaderFile

//! This package gives resources for Topology oriented <br>
//!          applications such as : Topological Data Structure, <br>
//!          Topological Algorithms. <br>
//! <br>
//!          It contains : <br>
//! <br>
//!            * The ShapeEnum   enumeration  to  describe  the <br>
//!            differents topological shapes. <br>
//! <br>
//!            * The  Orientation  enumeration to  describe the <br>
//!            orientation of a topological shape. <br>
//! <br>
//!            * The  State    enumeration  to  describes  the <br>
//!            position of a point relative to a Shape. <br>
//! <br>
//!            * Methods to manage the enumerations. <br>//! Identifies various topological shapes. This <br>
//! enumeration allows you to use dynamic typing of shapes. <br>
//! The values are listed in order of complexity, from the <br>
//! most complex to the most simple i.e. <br>
//! COMPOUND > COMPSOLID > SOLID > .... > VERTEX > SHAPE. <br>
//!  Any shape can contain simpler shapes in its definition. <br>
//! Abstract topological data structure describes a basic <br>
//! entity, the shape (present in this enumeration as the <br>
//! SHAPE value), which can be divided into the following <br>
//! component topologies: <br>
//! - COMPOUND: A group of any of the shapes below. <br>
//! - COMPSOLID: A set of solids connected by their <br>
//!   faces. This expands the notions of WIRE and SHELL to solids. <br>
//! - SOLID: A part of 3D space bounded by shells. <br>
//! - SHELL: A set of faces connected by some of the <br>
//!   edges of their wire boundaries. A shell can be open or closed. <br>
//! - FACE: Part of a plane (in 2D geometry) or a surface <br>
//!   (in 3D geometry) bounded by a closed wire. Its <br>
//!   geometry is constrained (trimmed) by contours. <br>
//! - WIRE: A sequence of edges connected by their <br>
//!  vertices. It can be open or closed depending on <br>
//!  whether the edges are linked or not. <br>
//! - EDGE: A single dimensional shape corresponding <br>
//!   to a curve, and bound by a vertex at each extremity. <br>
//! - VERTEX: A zero-dimensional shape corresponding to a point in geometry. <br>
enum TopAbs_ShapeEnum {
TopAbs_COMPOUND,
TopAbs_COMPSOLID,
TopAbs_SOLID,
TopAbs_SHELL,
TopAbs_FACE,
TopAbs_WIRE,
TopAbs_EDGE,
TopAbs_VERTEX,
TopAbs_SHAPE
};

#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif

#endif
