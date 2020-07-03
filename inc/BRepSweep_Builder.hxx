// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepSweep_Builder_HeaderFile
#define _BRepSweep_Builder_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BRep_Builder_HeaderFile
#include <BRep_Builder.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif
class BRep_Builder;
class TopoDS_Shape;


//! implements the abstract Builder with the BRep Builder <br>
class BRepSweep_Builder  {
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

  //! Creates a Builder. <br>
  Standard_EXPORT   BRepSweep_Builder(const BRep_Builder& aBuilder);
  
       const BRep_Builder& Builder() const;
  //! Returns an empty Compound. <br>
  Standard_EXPORT     void MakeCompound(TopoDS_Shape& aCompound) const;
  //! Returns an empty CompSolid. <br>
  Standard_EXPORT     void MakeCompSolid(TopoDS_Shape& aCompSolid) const;
  //! Returns an empty Solid. <br>
  Standard_EXPORT     void MakeSolid(TopoDS_Shape& aSolid) const;
  //! Returns an empty Shell. <br>
  Standard_EXPORT     void MakeShell(TopoDS_Shape& aShell) const;
  //! Returns an empty Wire. <br>
  Standard_EXPORT     void MakeWire(TopoDS_Shape& aWire) const;
  //! Adds the Shape 1 in the Shape 2, set to <br>
//!          <Orient> orientation. <br>
  Standard_EXPORT     void Add(TopoDS_Shape& aShape1,const TopoDS_Shape& aShape2,const TopAbs_Orientation Orient) const;
  //! Adds the Shape 1 in the Shape 2. <br>
  Standard_EXPORT     void Add(TopoDS_Shape& aShape1,const TopoDS_Shape& aShape2) const;





protected:





private:



BRep_Builder myBuilder;


};


#include <BRepSweep_Builder.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
