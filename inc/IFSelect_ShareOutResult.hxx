// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_ShareOutResult_HeaderFile
#define _IFSelect_ShareOutResult_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_IFSelect_ShareOut_HeaderFile
#include <Handle_IFSelect_ShareOut.hxx>
#endif
#ifndef _Handle_IFSelect_Dispatch_HeaderFile
#include <Handle_IFSelect_Dispatch.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TColStd_SequenceOfInteger_HeaderFile
#include <TColStd_SequenceOfInteger.hxx>
#endif
#ifndef _Interface_Graph_HeaderFile
#include <Interface_Graph.hxx>
#endif
#ifndef _IFGraph_SubPartsIterator_HeaderFile
#include <IFGraph_SubPartsIterator.hxx>
#endif
#ifndef _Handle_Interface_InterfaceModel_HeaderFile
#include <Handle_Interface_InterfaceModel.hxx>
#endif
#ifndef _Handle_IFSelect_PacketList_HeaderFile
#include <Handle_IFSelect_PacketList.hxx>
#endif
class IFSelect_ShareOut;
class IFSelect_Dispatch;
class Standard_NoSuchObject;
class Interface_InterfaceError;
class Interface_InterfaceModel;
class Interface_Graph;
class IFSelect_PacketList;
class Interface_EntityIterator;
class TCollection_AsciiString;


//! This class gives results computed from a ShareOut : simulation <br>
//!           before transfer, helps to list entities ... <br>
//!           Transfer itself will later be performed, either by a <br>
//!           TransferCopy to simply divide up a file, or a TransferDispatch <br>
//!           which can be parametred with more details <br>
class IFSelect_ShareOutResult  {
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

  //! Creates a ShareOutResult from a ShareOut, to work on a Model <br>
//!           (without any more precision; uses Active Protocol) <br>
  Standard_EXPORT   IFSelect_ShareOutResult(const Handle(IFSelect_ShareOut)& sho,const Handle(Interface_InterfaceModel)& mod);
  //! Creates a ShareOutResult from a ShareOut, to work on a Graph <br>
//!           already computed, which defines the Input Model and can <br>
//!           specialize some Entities <br>
  Standard_EXPORT   IFSelect_ShareOutResult(const Handle(IFSelect_ShareOut)& sho,const Interface_Graph& G);
  //! Creates a ShareOutResult from a unique Dispatch, to work on <br>
//!           a Model. As if it was a ShareOut with only one Dispatch <br>
//!           (without any more precision; uses Active Protocol) <br>
//!           Allows to compute the effect of a single Dispatch <br>
  Standard_EXPORT   IFSelect_ShareOutResult(const Handle(IFSelect_Dispatch)& disp,const Handle(Interface_InterfaceModel)& mod);
  //! Creates a ShareOutResult from a unique Dispatch, to work on <br>
//!           a Graph. As if it was a ShareOut with only one Dispatch <br>
//!           Allows to compute the effect of a single Dispatch <br>
  Standard_EXPORT   IFSelect_ShareOutResult(const Handle(IFSelect_Dispatch)& disp,const Interface_Graph& G);
  //! Returns the ShareOut used to create the ShareOutResult <br>
//!           if creation from a Dispatch, returns a Null Handle <br>
  Standard_EXPORT     Handle_IFSelect_ShareOut ShareOut() const;
  //! Returns the Graph used to create theShareOutResult <br>
  Standard_EXPORT    const Interface_Graph& Graph() const;
  //! Erases computed data, in order to command a new Evaluation <br>
  Standard_EXPORT     void Reset() ;
  //! Evaluates the result of a ShareOut : determines Entities to be <br>
//!           forgotten by the ShareOut, Entities to be transferred several <br>
//!           times (duplicated), prepares an iteration on the packets to be <br>
//!           produced <br>
//!           Called the first time anyone question is asked, or after a <br>
//!           call to Reset. Works by calling the method Prepare. <br>
  Standard_EXPORT     void Evaluate() ;
  //! Returns the list of recorded Packets, under two modes : <br>
//!           - <complete> = False, the strict definition of Packets, i.e. <br>
//!             for each one, the Root Entities, to be explicitely sent <br>
//!           - <complete> = True (Default), the completely evaluated list, <br>
//!             i.e. which really gives the destination of each entity : <br>
//!             this mode allows to evaluate duplications <br>
//!           Remark that to send packets, iteration remains preferable <br>
//!           (file names are managed) <br>
  Standard_EXPORT     Handle_IFSelect_PacketList Packets(const Standard_Boolean complete = Standard_True) ;
  //! Returns the total count of produced non empty packets <br>
//!           (in out : calls Evaluate as necessary) <br>
  Standard_EXPORT     Standard_Integer NbPackets() ;
  //! Prepares the iteration on the packets <br>
//!           This method is called by Evaluate, but can be called anytime <br>
//!           The iteration consists in taking each Dispatch of the ShareOut <br>
//!           beginning by the first one, compute its packets, then iterate <br>
//!           on these packets. Once all these packets are iterated, the <br>
//!           iteration passes to the next Dispatch, or stops. <br>
//!           For a creation from a unique Dispatch, same but with only <br>
//!           this Dispatch. <br>
//!           Each packet can be listed, or really transferred (producing <br>
//!           a derived Model, from which a file can be generated) <br>
//! <br>
//!           Prepare sets the iteration to the first Dispatch, first Packet <br>
  Standard_EXPORT     void Prepare() ;
  //! Returns True if there is more packets in the current Dispatch, <br>
//!           else if there is more Dispatch in the ShareOut <br>
  Standard_EXPORT     Standard_Boolean More() ;
  //! Passes to the next Packet in the current Dispatch, or if there <br>
//!           is none, to the next Dispatch in the ShareOut <br>
  Standard_EXPORT     void Next() ;
  //! Passes to the next Dispatch, regardless about remaining packets <br>
  Standard_EXPORT     void NextDispatch() ;
  //! Returns the current Dispatch <br>
  Standard_EXPORT     Handle_IFSelect_Dispatch Dispatch() const;
  //! Returns the Rank of the current Dispatch in the ShareOut <br>
//!           Returns Zero if there is none (iteration finished) <br>
  Standard_EXPORT     Standard_Integer DispatchRank() const;
  //! Returns Number (rank) of current Packet in current Dispatch, <br>
//!           and total count of Packets in current Dispatch, as arguments <br>
  Standard_EXPORT     void PacketsInDispatch(Standard_Integer& numpack,Standard_Integer& nbpacks) const;
  //! Returns the list of Roots of the current Packet (never empty) <br>
//!           (i.e. the Entities to be themselves asked for transfer) <br>
//!           Error if there is none (iteration finished) <br>
  Standard_EXPORT     Interface_EntityIterator PacketRoot() ;
  //! Returns the complete content of the current Packet (i.e. <br>
//!           with shared entities, which will also be put in the file) <br>
  Standard_EXPORT     Interface_EntityIterator PacketContent() ;
  //! Returns the File Name which corresponds to current Packet <br>
//!           (computed by ShareOut) <br>
//!           If current Packet has no associated name (see ShareOut), <br>
//!           the returned value is Null <br>
  Standard_EXPORT     TCollection_AsciiString FileName() const;





protected:



Interface_Graph thegraph;
IFGraph_SubPartsIterator thedispres;


private:



Handle_IFSelect_ShareOut theshareout;
Handle_IFSelect_Dispatch thedispatch;
Standard_Boolean theeval;
Standard_Integer thedispnum;
Standard_Integer thepacknum;
Standard_Integer thepackdisp;
Standard_Integer thenbindisp;
TColStd_SequenceOfInteger thedisplist;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
