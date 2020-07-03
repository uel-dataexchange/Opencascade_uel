// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOP_Loop_HeaderFile
#define _BOP_Loop_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BOP_Loop_HeaderFile
#include <Handle_BOP_Loop.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _BOP_BlockIterator_HeaderFile
#include <BOP_BlockIterator.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class TopoDS_Shape;
class BOP_BlockIterator;



//!         A Loop is an existing shape (Shell,Wire) or a set <br>
//!         of shapes (Faces,Edges) which are connex. <br>
//!         a set of connex shape is represented by a BlockIterator <br>
class BOP_Loop : public MMgt_TShared {

public:

  
//! Creates the object using the  shape S; <br>
  Standard_EXPORT   BOP_Loop(const TopoDS_Shape& S);
  
//! Creates the object using the BlockIterator BI; <br>
  Standard_EXPORT   BOP_Loop(const BOP_BlockIterator& BI);
  
//! Returns TRUE if the object was created using shape <br>
  Standard_EXPORT   virtual  Standard_Boolean IsShape() const;
  
//! Returns Shape from which  the object was created <br>
//! Valid only when IsShape() is TRUE <br>
  Standard_EXPORT   virtual const TopoDS_Shape& Shape() const;
  
  Standard_EXPORT    const BOP_BlockIterator& BlockIterator() const;




  DEFINE_STANDARD_RTTI(BOP_Loop)

protected:


Standard_Boolean myIsShape;
TopoDS_Shape myShape;
BOP_BlockIterator myBlockIterator;


private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
