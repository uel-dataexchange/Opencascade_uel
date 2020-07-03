#pragma once
#include <Interface_ShareFlags.hxx>

class IGESControl_ShareFlags : public Interface_ShareFlags
{
public:
	//! Creates a ShareFlags from a Model and builds required data <br>
	//!           (flags) by calling the General Service Library given as <br>
	//!           argument <lib> <br>
	Standard_EXPORT IGESControl_ShareFlags(const Handle(Interface_InterfaceModel)& amodel, const Interface_GeneralLib& lib);
	//! Same as above, but GeneralLib is detained by a GTool <br>
	Standard_EXPORT IGESControl_ShareFlags(const Handle(Interface_InterfaceModel)& amodel, const Handle(Interface_GTool)& gtool);
	//! Same as above, but GeneralLib is defined through a Protocol <br>
	Standard_EXPORT IGESControl_ShareFlags(const Handle(Interface_InterfaceModel)& amodel, const Handle(Interface_Protocol)& protocol);
	//! Same as above, but works with the GTool of the Model <br>
	Standard_EXPORT IGESControl_ShareFlags(const Handle(Interface_InterfaceModel)& amodel);
	//! Creates a ShareFlags by querying informations from a Graph <br>
	//!           (remark that Graph also has a method IsShared) <br>
	Standard_EXPORT IGESControl_ShareFlags(const Interface_Graph& agraph);
	Standard_EXPORT     void Evaluate(const Interface_GeneralLib& lib, const Handle(Interface_GTool)& gtool);
	~IGESControl_ShareFlags();
};

