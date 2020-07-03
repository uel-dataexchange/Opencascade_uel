// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepBuilderAPI_WireError_HeaderFile
#define _BRepBuilderAPI_WireError_HeaderFile

//! Indicates the outcome of wire <br>
//! construction, i.e. whether it is successful or not, as explained below: <br>
//! -      BRepBuilderAPI_WireDone No <br>
//!    error occurred. The wire is correctly built. <br>
//! -      BRepBuilderAPI_EmptyWire No <br>
//! initialization of the algorithm. Only an empty constructor was used. <br>
//! -      BRepBuilderAPI_DisconnectedWire <br>
//! The last edge which you attempted to add was not connected to the wire. <br>
//! -      BRepBuilderAPI_NonManifoldWire <br>
//!    The wire with some singularity. <br>
enum BRepBuilderAPI_WireError {
BRepBuilderAPI_WireDone,
BRepBuilderAPI_EmptyWire,
BRepBuilderAPI_DisconnectedWire,
BRepBuilderAPI_NonManifoldWire
};

#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif

#endif
