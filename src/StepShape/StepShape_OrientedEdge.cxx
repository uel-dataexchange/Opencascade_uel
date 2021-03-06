#include <StepShape_OrientedEdge.ixx>


StepShape_OrientedEdge::StepShape_OrientedEdge ()  {}


void StepShape_OrientedEdge::Init(
	const Handle(TCollection_HAsciiString)& aName,
	const Handle(StepShape_Edge)& aEdgeElement,
	const Standard_Boolean aOrientation)
{
	// --- classe own fields ---
	edgeElement = aEdgeElement;
	orientation = aOrientation;
	// --- classe inherited fields ---
	Handle(StepShape_Vertex) aEdgeStart;
	aEdgeStart.Nullify();
	Handle(StepShape_Vertex) aEdgeEnd;
	aEdgeEnd.Nullify();
	StepShape_Edge::Init(aName, aEdgeStart, aEdgeEnd);
}


void StepShape_OrientedEdge::SetEdgeElement(const Handle(StepShape_Edge)& aEdgeElement)
{
	edgeElement = aEdgeElement;
}

Handle(StepShape_Edge) StepShape_OrientedEdge::EdgeElement() const
{
	return edgeElement;
}

void StepShape_OrientedEdge::SetOrientation(const Standard_Boolean aOrientation)
{
	orientation = aOrientation;
}

Standard_Boolean StepShape_OrientedEdge::Orientation() const
{
	return orientation;
}

void StepShape_OrientedEdge::SetEdgeStart(const Handle(StepShape_Vertex)& /*aEdgeStart*/)
{
	// WARNING : the field is redefined.
	// field set up forbidden.
	cout << "Field is redefined, SetUp Forbidden" << endl;
}

Handle(StepShape_Vertex) StepShape_OrientedEdge::EdgeStart() const
{
	// WARNING : the field is redefined.
	// method body is not yet automaticly wrote
  if (Orientation()) {
    return edgeElement->EdgeStart();
  }
  else {
    return edgeElement->EdgeEnd();
  }
}

void StepShape_OrientedEdge::SetEdgeEnd(const Handle(StepShape_Vertex)& /*aEdgeEnd*/)
{
	// WARNING : the field is redefined.
	// field set up forbidden.
	cout << "Field is redefined, SetUp Forbidden" << endl;
}

Handle(StepShape_Vertex) StepShape_OrientedEdge::EdgeEnd() const
{
	// WARNING : the field is redefined.
	// method body is not yet automaticly wrote

  if (Orientation()) {
    return edgeElement->EdgeEnd();
  }
  else {
    return edgeElement->EdgeStart();
  }
}
