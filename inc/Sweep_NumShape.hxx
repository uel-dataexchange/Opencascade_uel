// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Sweep_NumShape_HeaderFile
#define _Sweep_NumShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopAbs_ShapeEnum_HeaderFile
#include <TopAbs_ShapeEnum.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif


//! Gives    a  simple  indexed   representation  of a <br>
//!          Directing Edge topology. <br>
class Sweep_NumShape  {
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

  //! Creates a dummy indexed edge. <br>
  Standard_EXPORT   Sweep_NumShape();
  //! Creates a new simple indexed edge. <br>
//! <br>
//!          For an Edge : Index is the  number of vertices (0, <br>
//!          1 or 2),Type is TopAbs_EDGE, Closed  is true if it <br>
//!          is a  closed edge, BegInf is true  if  the Edge is <br>
//!          infinite at the  begenning, EndInf is true  if the <br>
//!          edge is infinite at the end. <br>
//! <br>
//!          For a Vertex : Index is the index of the vertex in <br>
//!          the edge (1 or 2),  Type  is TopAbsVERTEX, all the <br>
//!          other fields have no meanning. <br>
  Standard_EXPORT   Sweep_NumShape(const Standard_Integer Index,const TopAbs_ShapeEnum Type,const Standard_Boolean Closed = Standard_False,const Standard_Boolean BegInf = Standard_False,const Standard_Boolean EndInf = Standard_False);
  //! Reinitialize a simple indexed edge. <br>
//! <br>
//!          For an Edge : Index is the  number of vertices (0, <br>
//!          1 or 2),Type is TopAbs_EDGE, Closed  is true if it <br>
//!          is a  closed edge, BegInf is true  if  the Edge is <br>
//!          infinite at the  begenning, EndInf is true  if the <br>
//!          edge is infinite at the end. <br>
//! <br>
//!          For a Vertex : Index is the index of the vertex in <br>
//!          the edge (1 or 2), Type is TopAbsVERTEX, Closed is <br>
//!          true if it is the vertex of a closed edge, all the <br>
//!          other fields have no meanning. <br>
  Standard_EXPORT     void Init(const Standard_Integer Index,const TopAbs_ShapeEnum Type,const Standard_Boolean Closed = Standard_False,const Standard_Boolean BegInf = Standard_False,const Standard_Boolean EndInf = Standard_False) ;
  
        Standard_Integer Index() const;
  
        TopAbs_ShapeEnum Type() const;
  
        Standard_Boolean Closed() const;
  
        Standard_Boolean BegInfinite() const;
  
        Standard_Boolean EndInfinite() const;
  
  Standard_EXPORT     TopAbs_Orientation Orientation() const;





protected:





private:



TopAbs_ShapeEnum myType;
Standard_Integer myIndex;
Standard_Boolean myClosed;
Standard_Boolean myBegInf;
Standard_Boolean myEndInf;


};


#include <Sweep_NumShape.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
