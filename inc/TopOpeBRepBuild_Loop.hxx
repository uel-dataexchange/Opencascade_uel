// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_Loop_HeaderFile
#define _TopOpeBRepBuild_Loop_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TopOpeBRepBuild_Loop_HeaderFile
#include <Handle_TopOpeBRepBuild_Loop.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _TopOpeBRepBuild_BlockIterator_HeaderFile
#include <TopOpeBRepBuild_BlockIterator.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class TopoDS_Shape;
class TopOpeBRepBuild_BlockIterator;



//! a Loop is an existing shape (Shell,Wire) or a set <br>
//! of shapes (Faces,Edges) which are connex. <br>
//! a set of connex shape is represented by a BlockIterator <br>
class TopOpeBRepBuild_Loop : public MMgt_TShared {

public:

  
  Standard_EXPORT   TopOpeBRepBuild_Loop(const TopoDS_Shape& S);
  
  Standard_EXPORT   TopOpeBRepBuild_Loop(const TopOpeBRepBuild_BlockIterator& BI);
  
  Standard_EXPORT   virtual  Standard_Boolean IsShape() const;
  
  Standard_EXPORT   virtual const TopoDS_Shape& Shape() const;
  
  Standard_EXPORT    const TopOpeBRepBuild_BlockIterator& BlockIterator() const;
  
  Standard_EXPORT   virtual  void Dump() const;




  DEFINE_STANDARD_RTTI(TopOpeBRepBuild_Loop)

protected:


Standard_Boolean myIsShape;
TopoDS_Shape myShape;
TopOpeBRepBuild_BlockIterator myBlockIterator;


private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
