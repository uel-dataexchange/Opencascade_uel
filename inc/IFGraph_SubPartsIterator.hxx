// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFGraph_SubPartsIterator_HeaderFile
#define _IFGraph_SubPartsIterator_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Interface_Graph_HeaderFile
#include <Interface_Graph.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfInteger_HeaderFile
#include <Handle_TColStd_HSequenceOfInteger.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Interface_InterfaceModel_HeaderFile
#include <Handle_Interface_InterfaceModel.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
class TColStd_HSequenceOfInteger;
class Standard_OutOfRange;
class Standard_NoSuchObject;
class Interface_InterfaceError;
class Interface_Graph;
class Interface_InterfaceModel;
class Standard_Transient;
class Interface_EntityIterator;
class Interface_GraphContent;


//! defines general form for graph classes of which result is <br>
//!           not a single iteration on Entities, but a nested one : <br>
//!           External iteration works on sub-parts, identified by each <br>
//!           class (according to its algorithm) <br>
//!           Internal Iteration concerns Entities of a sub-part <br>
//!           Sub-Parts are assumed to be disjoined; if they are not, <br>
//!           the first one has priority <br>
//! <br>
//!           A SubPartsIterator can work in two steps : first, load <br>
//!           entities which have to be processed <br>
//!           then, analyse to set those entities into sub-parts <br>
class IFGraph_SubPartsIterator  {
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

  //! Creates with a Graph, whole or parts of it <br>
//!           whole True  : works on the entire Model <br>
//!           whole False : empty, ready to be filled <br>
//!           SubPartIterator is set to load entities <br>
  Standard_EXPORT   IFGraph_SubPartsIterator(const Interface_Graph& agraph,const Standard_Boolean whole);
  //! Creates a SubPartIterator from another one and gets its Data <br>
//!           Note that only non-empty sub-parts are taken into account <br>
//!           PartNum is set to the last one <br>
  Standard_EXPORT   IFGraph_SubPartsIterator(IFGraph_SubPartsIterator& other);
  //! Gets Parts from another SubPartsIterator (in addition to the <br>
//!           ones already recorded) <br>
//!           Error if both SubPartsIterators are not based on the same Model <br>
  Standard_EXPORT     void GetParts(IFGraph_SubPartsIterator& other) ;
  //! Returns the Model with which this Iterator was created <br>
  Standard_EXPORT     Handle_Interface_InterfaceModel Model() const;
  //! Adds an empty part and sets it to receive entities <br>
  Standard_EXPORT     void AddPart() ;
  //! Returns count of registered parts <br>
  Standard_EXPORT     Standard_Integer NbParts() const;
  //! Returns numero of part which currently receives entities <br>
//!           (0 at load time) <br>
  Standard_EXPORT     Standard_Integer PartNum() const;
  //! Sets SubPartIterator to get Entities (by GetFromEntity & <br>
//!           GetFromIter) into load status, to be analysed later <br>
  Standard_EXPORT     void SetLoad() ;
  //! Sets numero of receiving part to a new value <br>
//!           Error if not in range (1-NbParts) <br>
  Standard_EXPORT     void SetPartNum(const Standard_Integer num) ;
  //! Adds an Entity : into load status if in Load mode, to the <br>
//!           current part if there is one. If shared is True, adds <br>
//!           also its shared ones (shared at all levels) <br>
  Standard_EXPORT     void GetFromEntity(const Handle(Standard_Transient)& ent,const Standard_Boolean shared) ;
  //! Adds a list of Entities (into Load mode or to a Part), <br>
//!           given as an Iterator <br>
  Standard_EXPORT     void GetFromIter(const Interface_EntityIterator& iter) ;
  //! Erases data (parts, entities) : "me" becomes empty and in <br>
//!           load status <br>
  Standard_EXPORT     void Reset() ;
  //! Called by Clear, this method allows evaluation just before <br>
//!           iteration; its default is doing nothing, it is designed to <br>
//!           be redefined <br>
  Standard_EXPORT   virtual  void Evaluate() ;
  //! Returns entities which where loaded (not set into a sub-part) <br>
  Standard_EXPORT     Interface_GraphContent Loaded() const;
  //! Same as above, but under the form of a Graph <br>
  Standard_EXPORT     Interface_Graph LoadedGraph() const;
  //! Returns True if an Entity is loaded (either set into a <br>
//!           sub-part or not) <br>
  Standard_EXPORT     Standard_Boolean IsLoaded(const Handle(Standard_Transient)& ent) const;
  //! Returns True if an Entity is Present in a sub-part <br>
  Standard_EXPORT     Standard_Boolean IsInPart(const Handle(Standard_Transient)& ent) const;
  //! Returns number of the sub-part in which an Entity has been set <br>
//!           if it is not in a sub-part (or not loaded at all), Returns 0 <br>
  Standard_EXPORT     Standard_Integer EntityPartNum(const Handle(Standard_Transient)& ent) const;
  //! Sets iteration to its beginning; calls Evaluate <br>
  Standard_EXPORT     void Start() ;
  //! Returns True if there are more sub-parts to iterate on <br>
//!           Note : an empty sub-part is not taken in account by Iteration <br>
  Standard_EXPORT     Standard_Boolean More() ;
  //! Sets iteration to the next sub-part <br>
//!           if there is not, IsSingle-Entities will raises an exception <br>
  Standard_EXPORT     void Next() ;
  //! Returns True if current sub-part is single (has only one Entity) <br>
//!           Error if there is no sub-part to iterate now <br>
  Standard_EXPORT     Standard_Boolean IsSingle() const;
  //! Returns the first entity of current sub-part, that is for a <br>
//!           Single one, the only one it contains <br>
//!           Error : same as above (end of iteration) <br>
  Standard_EXPORT     Handle_Standard_Transient FirstEntity() const;
  //! Returns current sub-part, not as a "Value", but as an Iterator <br>
//!           on Entities it contains <br>
//!           Error : same as above (end of iteration) <br>
  Standard_EXPORT     Interface_EntityIterator Entities() const;
  
  Standard_EXPORT   virtual  void Delete() ;
Standard_EXPORT virtual ~IFGraph_SubPartsIterator() { Delete(); }





protected:



Interface_Graph thegraph;


private:

  //! Returns the Graph used by <me>. Used to create another <br>
//!           SubPartsIterator from <me> <br>
  Standard_EXPORT    const Interface_Graph& Graph() const;


Handle_TColStd_HSequenceOfInteger theparts;
Handle_TColStd_HSequenceOfInteger thefirsts;
Standard_Integer thepart;
Standard_Integer thecurr;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
