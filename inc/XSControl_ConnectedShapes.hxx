// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XSControl_ConnectedShapes_HeaderFile
#define _XSControl_ConnectedShapes_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_XSControl_ConnectedShapes_HeaderFile
#include <Handle_XSControl_ConnectedShapes.hxx>
#endif

#ifndef _Handle_XSControl_TransferReader_HeaderFile
#include <Handle_XSControl_TransferReader.hxx>
#endif
#ifndef _IFSelect_SelectExplore_HeaderFile
#include <IFSelect_SelectExplore.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfTransient_HeaderFile
#include <Handle_TColStd_HSequenceOfTransient.hxx>
#endif
#ifndef _Handle_Transfer_TransientProcess_HeaderFile
#include <Handle_Transfer_TransientProcess.hxx>
#endif
#ifndef _TopAbs_ShapeEnum_HeaderFile
#include <TopAbs_ShapeEnum.hxx>
#endif
class XSControl_TransferReader;
class Standard_Transient;
class Interface_Graph;
class Interface_EntityIterator;
class TCollection_AsciiString;
class TColStd_HSequenceOfTransient;
class TopoDS_Shape;
class Transfer_TransientProcess;


//! From a TopoDS_Shape, or from the entity which has produced it, <br>
//!           searches for the shapes, and the entities which have produced <br>
//!           them in last transfer, which are adjacent to it by VERTICES <br>
class XSControl_ConnectedShapes : public IFSelect_SelectExplore {

public:

  //! Creates a Selection ConnectedShapes. It remains to be set a <br>
//!           TransferReader <br>
  Standard_EXPORT   XSControl_ConnectedShapes();
  //! Creates a Selection ConnectedShapes, which will work with the <br>
//!           current TransferProcess brought by the TransferReader <br>
  Standard_EXPORT   XSControl_ConnectedShapes(const Handle(XSControl_TransferReader)& TR);
  //! Sets a TransferReader to sort entities : it brings the <br>
//!           TransferProcess which may change, while the TransferReader does not <br>
  Standard_EXPORT     void SetReader(const Handle(XSControl_TransferReader)& TR) ;
  //! Explores an entity : entities from which are connected to that <br>
//!           produced by this entity, including itself <br>
  Standard_EXPORT     Standard_Boolean Explore(const Standard_Integer level,const Handle(Standard_Transient)& ent,const Interface_Graph& G,Interface_EntityIterator& explored) const;
  //! Returns a text defining the criterium. <br>
//!           "Connected Entities through produced Shapes" <br>
  Standard_EXPORT     TCollection_AsciiString ExploreLabel() const;
  //! This functions considers a shape from a transfer and performs <br>
//!           the search function explained above <br>
  Standard_EXPORT   static  Handle_TColStd_HSequenceOfTransient AdjacentEntities(const TopoDS_Shape& ashape,const Handle(Transfer_TransientProcess)& TP,const TopAbs_ShapeEnum type) ;




  DEFINE_STANDARD_RTTI(XSControl_ConnectedShapes)

protected:




private: 


Handle_XSControl_TransferReader theTR;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
