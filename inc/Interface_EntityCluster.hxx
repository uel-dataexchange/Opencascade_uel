// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Interface_EntityCluster_HeaderFile
#define _Interface_EntityCluster_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Interface_EntityCluster_HeaderFile
#include <Handle_Interface_EntityCluster.hxx>
#endif

#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_Interface_EntityCluster_HeaderFile
#include <Handle_Interface_EntityCluster.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_Transient;
class Standard_OutOfRange;
class Standard_NullObject;
class Interface_EntityList;
class Interface_EntityIterator;


//! Auxiliary class for EntityList. An EntityList designates an <br>
//!           EntityCluster, which brings itself an fixed maximum count of <br>
//!           Entities. If it is full, it gives access to another cluster <br>
//!           ("Next"). This class is intended to give a good compromise <br>
//!           between access time (faster than a Sequence, good for little <br>
//!           count) and memory use (better than a Sequence in any case, <br>
//!           overall for little count, better than an Array for a very <br>
//!           little count. It is designed for a light management. <br>
//!           Remark that a new Item may not be Null, because this is the <br>
//!           criterium used for "End of List" <br>
class Interface_EntityCluster : public MMgt_TShared {

public:

  //! Creates an empty, non-chained, EntityCluster <br>
  Standard_EXPORT   Interface_EntityCluster();
  //! Creates a non-chained EntityCluster, filled with one Entity <br>
  Standard_EXPORT   Interface_EntityCluster(const Handle(Standard_Transient)& ent);
  //! Creates an empty EntityCluster, chained with another one <br>
//!           (that is, put BEFORE this other one in the list) <br>
  Standard_EXPORT   Interface_EntityCluster(const Handle(Interface_EntityCluster)& ec);
  //! Creates an EntityCluster, filled with a first Entity, and <br>
//!           chained to another EntityCluster (BEFORE it, as above) <br>
  Standard_EXPORT   Interface_EntityCluster(const Handle(Standard_Transient)& ant,const Handle(Interface_EntityCluster)& ec);
  //! Appends an Entity to the Cluster. If it is not full, adds the <br>
//!           entity directly inside itself. Else, transmits to its Next <br>
//!           and Creates it if it does not yet exist <br>
  Standard_EXPORT     void Append(const Handle(Standard_Transient)& ent) ;
  //! Removes an Entity from the Cluster. If it is not found, calls <br>
//!           its Next one to do so. <br>
//!           Returns True if it becomes itself empty, False else <br>
//!           (thus, a Cluster which becomes empty is deleted from the list) <br>
  Standard_EXPORT     Standard_Boolean Remove(const Handle(Standard_Transient)& ent) ;
  //! Removes an Entity from the Cluster, given its rank. If <num> <br>
//!           is greater than NbLocal, calls its Next with (num - NbLocal), <br>
//!           Returns True if it becomes itself empty, False else <br>
  Standard_EXPORT     Standard_Boolean Remove(const Standard_Integer num) ;
  //! Returns total count of Entities (including Next) <br>
  Standard_EXPORT     Standard_Integer NbEntities() const;
  //! Returns the Entity identified by its rank in the list <br>
//!           (including Next) <br>
  Standard_EXPORT    const Handle_Standard_Transient& Value(const Standard_Integer num) const;
  //! Changes an Entity given its rank. <br>
  Standard_EXPORT     void SetValue(const Standard_Integer num,const Handle(Standard_Transient)& ent) ;
  //! Fills an Iterator with designated Entities (includes Next) <br>
  Standard_EXPORT     void FillIterator(Interface_EntityIterator& iter) const;


friend class Interface_EntityList;


  DEFINE_STANDARD_RTTI(Interface_EntityCluster)

protected:




private: 

  //! Returns True if all the set of entities local to a Cluster is <br>
//!           full. Used by EntityList. <br>
  Standard_EXPORT     Standard_Boolean IsLocalFull() const;
  //! Returns count of entities in the local set (without Next) <br>
//!           Entities can then be read normally by method Value <br>
  Standard_EXPORT     Standard_Integer NbLocal() const;
  //! Returns True if a Cluster has a Next <br>
  Standard_EXPORT     Standard_Boolean HasNext() const;
  //! Returns Next Cluster in the chain <br>
  Standard_EXPORT     Handle_Interface_EntityCluster Next() const;

Handle_Standard_Transient theents[4];
Handle_Interface_EntityCluster thenext;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
