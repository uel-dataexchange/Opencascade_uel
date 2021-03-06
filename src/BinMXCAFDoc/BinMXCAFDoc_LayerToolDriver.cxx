// File:	BinMXCAFDoc_LayerToolDriver.cxx
// Created:	Tue May 17 13:16:41 2005
// Author:	Eugeny NAPALKOV <eugeny.napalkov@opencascade.com>
// Copyright:	Open CasCade S.A. 2005

#include <BinMXCAFDoc_LayerToolDriver.ixx>
#include <XCAFDoc_LayerTool.hxx>

//=======================================================================
//function :
//purpose  : 
//=======================================================================
BinMXCAFDoc_LayerToolDriver::BinMXCAFDoc_LayerToolDriver(const Handle(CDM_MessageDriver)& theMsgDriver)
     : BinMDF_ADriver(theMsgDriver, STANDARD_TYPE(XCAFDoc_LayerTool)->Name()) {
}

//=======================================================================
//function :
//purpose  : 
//=======================================================================
Handle(TDF_Attribute) BinMXCAFDoc_LayerToolDriver::NewEmpty() const {
  return new XCAFDoc_LayerTool();
}

//=======================================================================
//function :
//purpose  : 
//=======================================================================
Standard_Boolean BinMXCAFDoc_LayerToolDriver::Paste(const BinObjMgt_Persistent& /*theSource*/,
						    const Handle(TDF_Attribute)& /*theTarget*/,
						    BinObjMgt_RRelocationTable& /*theRelocTable*/) const
{
  return Standard_True;
}

//=======================================================================
//function :
//purpose  : 
//=======================================================================
void BinMXCAFDoc_LayerToolDriver::Paste(const Handle(TDF_Attribute)& /*theSource*/,
					BinObjMgt_Persistent& /*theTarget*/,
					BinObjMgt_SRelocationTable& /*theRelocTable*/) const
{
}

