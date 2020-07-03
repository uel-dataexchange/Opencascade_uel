// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT_Node_HeaderFile
#define _MAT_Node_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MAT_Node_HeaderFile
#include <Handle_MAT_Node.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_MAT_Arc_HeaderFile
#include <Handle_MAT_Arc.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class MAT_Arc;
class MAT_SequenceOfArc;
class MAT_SequenceOfBasicElt;



class MAT_Node : public MMgt_TShared {

public:

  
  Standard_EXPORT   MAT_Node(const Standard_Integer GeomIndex,const Handle(MAT_Arc)& LinkedArc,const Standard_Real Distance);
  //! Returns the index associated of the geometric <br>
//!            representation of <me>. <br>
  Standard_EXPORT     Standard_Integer GeomIndex() const;
  //! Returns the index associated of the node <br>
  Standard_EXPORT     Standard_Integer Index() const;
  //! Returns in <S> the Arcs linked to <me>. <br>
  Standard_EXPORT     void LinkedArcs(MAT_SequenceOfArc& S) const;
  //! Returns  in <S> the BasicElts equidistant <br>
//!          to <me>. <br>
  Standard_EXPORT     void NearElts(MAT_SequenceOfBasicElt& S) const;
  
  Standard_EXPORT     Standard_Real Distance() const;
  //!Returns True if <me> is a pending Node. <br>
//!          (ie : the number of Arc Linked = 1) <br>
  Standard_EXPORT     Standard_Boolean PendingNode() const;
  //! Returns True if <me> belongs to the figure. <br>
  Standard_EXPORT     Standard_Boolean OnBasicElt() const;
  //! Returns True if the distance of <me> is Infinite <br>
  Standard_EXPORT     Standard_Boolean Infinite() const;
  //! Set the index associated of the node <br>
  Standard_EXPORT     void SetIndex(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void SetLinkedArc(const Handle(MAT_Arc)& anArc) ;




  DEFINE_STANDARD_RTTI(MAT_Node)

protected:




private: 


Standard_Integer nodeIndex;
Standard_Integer geomIndex;
Standard_Address aLinkedArc;
Standard_Real distance;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
