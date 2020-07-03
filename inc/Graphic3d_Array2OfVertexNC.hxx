// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_Array2OfVertexNC_HeaderFile
#define _Graphic3d_Array2OfVertexNC_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class Standard_RangeError;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_DimensionMismatch;
class Graphic3d_VertexNC;



class Graphic3d_Array2OfVertexNC  {
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

  
  Standard_EXPORT   Graphic3d_Array2OfVertexNC(const Standard_Integer R1,const Standard_Integer R2,const Standard_Integer C1,const Standard_Integer C2);
  
  Standard_EXPORT   Graphic3d_Array2OfVertexNC(const Graphic3d_VertexNC& Item,const Standard_Integer R1,const Standard_Integer R2,const Standard_Integer C1,const Standard_Integer C2);
  
  Standard_EXPORT     void Init(const Graphic3d_VertexNC& V) ;
  
  Standard_EXPORT     void Destroy() ;
~Graphic3d_Array2OfVertexNC()
{
  Destroy();
}
  
  Standard_EXPORT    const Graphic3d_Array2OfVertexNC& Assign(const Graphic3d_Array2OfVertexNC& Other) ;
   const Graphic3d_Array2OfVertexNC& operator =(const Graphic3d_Array2OfVertexNC& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer ColLength() const;
  
        Standard_Integer RowLength() const;
  
        Standard_Integer LowerCol() const;
  
        Standard_Integer LowerRow() const;
  
        Standard_Integer UpperCol() const;
  
        Standard_Integer UpperRow() const;
  
        void SetValue(const Standard_Integer Row,const Standard_Integer Col,const Graphic3d_VertexNC& Value) ;
  
       const Graphic3d_VertexNC& Value(const Standard_Integer Row,const Standard_Integer Col) const;
     const Graphic3d_VertexNC& operator()(const Standard_Integer Row,const Standard_Integer Col) const
{
  return Value(Row,Col);
}
  
        Graphic3d_VertexNC& ChangeValue(const Standard_Integer Row,const Standard_Integer Col) ;
      Graphic3d_VertexNC& operator()(const Standard_Integer Row,const Standard_Integer Col) 
{
  return ChangeValue(Row,Col);
}





protected:





private:

  
  Standard_EXPORT   Graphic3d_Array2OfVertexNC(const Graphic3d_Array2OfVertexNC& AnArray);
  
  Standard_EXPORT     void Allocate() ;


Standard_Integer myLowerRow;
Standard_Integer myLowerColumn;
Standard_Integer myUpperRow;
Standard_Integer myUpperColumn;
Standard_Boolean myDeletable;
Standard_Address myData;


};

#define Array2Item Graphic3d_VertexNC
#define Array2Item_hxx <Graphic3d_VertexNC.hxx>
#define TCollection_Array2 Graphic3d_Array2OfVertexNC
#define TCollection_Array2_hxx <Graphic3d_Array2OfVertexNC.hxx>

#include <TCollection_Array2.lxx>

#undef Array2Item
#undef Array2Item_hxx
#undef TCollection_Array2
#undef TCollection_Array2_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
