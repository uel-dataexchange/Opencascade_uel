// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_PolyHLRToShape_HeaderFile
#define _HLRBRep_PolyHLRToShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_HLRBRep_PolyAlgo_HeaderFile
#include <Handle_HLRBRep_PolyAlgo.hxx>
#endif
#ifndef _HLRBRep_ListOfBPnt2D_HeaderFile
#include <HLRBRep_ListOfBPnt2D.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class HLRBRep_PolyAlgo;
class TopoDS_Shape;


//! A framework for filtering the computation <br>
//! results of an HLRBRep_Algo algorithm by extraction. <br>
//! From the results calculated by the algorithm on <br>
//! a shape, a filter returns the type of edge you <br>
//! want to identify. You can choose any of the following types of output: <br>
//! -   visible sharp edges <br>
//! -   hidden sharp edges <br>
//! -   visible smooth edges <br>
//! -   hidden smooth edges <br>
//! -   visible sewn edges <br>
//! -   hidden sewn edges <br>
//! -   visible outline edges <br>
//! -   hidden outline edges. <br>
//! -   visible isoparameters and <br>
//! -   hidden isoparameters. <br>
//! Sharp edges present a C0 continuity (non G1). <br>
//! Smooth edges present a G1 continuity (non G2). <br>
//! Sewn edges present a C2 continuity. <br>
//! The result is composed of 2D edges in the <br>
//! projection plane of the view which the <br>
//! algorithm has worked with. These 2D edges <br>
//! are not included in the data structure of the visualized shape. <br>
//! In order to obtain a complete image, you must <br>
//! combine the shapes given by each of the chosen filters. <br>
//! The construction of the shape does not call a <br>
//! new computation of the algorithm, but only <br>
//! reads its internal results. <br>
class HLRBRep_PolyHLRToShape  {
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

  //! Constructs a framework for filtering the results <br>
//! of the HLRBRep_Algo algorithm, A. <br>
//! Use the extraction filters to obtain the results you want for A. <br>
  Standard_EXPORT   HLRBRep_PolyHLRToShape();
  
  Standard_EXPORT     void Update(const Handle(HLRBRep_PolyAlgo)& A) ;
  
        void Show() ;
  
        void Hide() ;
  
        TopoDS_Shape VCompound() ;
  
        TopoDS_Shape VCompound(const TopoDS_Shape& S) ;
  //! Sets the extraction filter for visible smooth edges. <br>
        TopoDS_Shape Rg1LineVCompound() ;
  
        TopoDS_Shape Rg1LineVCompound(const TopoDS_Shape& S) ;
  //! Sets the extraction filter for visible sewn edges. <br>
        TopoDS_Shape RgNLineVCompound() ;
  
        TopoDS_Shape RgNLineVCompound(const TopoDS_Shape& S) ;
  
        TopoDS_Shape OutLineVCompound() ;
  //! Sets the extraction filter for visible outlines. <br>
        TopoDS_Shape OutLineVCompound(const TopoDS_Shape& S) ;
  
        TopoDS_Shape HCompound() ;
  
        TopoDS_Shape HCompound(const TopoDS_Shape& S) ;
  
        TopoDS_Shape Rg1LineHCompound() ;
  //! Sets the extraction filter for hidden smooth edges. <br>
        TopoDS_Shape Rg1LineHCompound(const TopoDS_Shape& S) ;
  
        TopoDS_Shape RgNLineHCompound() ;
  //! Sets the extraction filter for hidden sewn edges. <br>
        TopoDS_Shape RgNLineHCompound(const TopoDS_Shape& S) ;
  
        TopoDS_Shape OutLineHCompound() ;
  //! Sets the extraction filter for hidden outlines. <br>
//! Hidden outlines occur, for instance, in tori. In <br>
//! this case, the inner outlines of the torus seen on its side are hidden. <br>
        TopoDS_Shape OutLineHCompound(const TopoDS_Shape& S) ;





protected:





private:

  
  Standard_EXPORT     TopoDS_Shape InternalCompound(const Standard_Integer typ,const Standard_Boolean visible,const TopoDS_Shape& S) ;


Handle_HLRBRep_PolyAlgo myAlgo;
HLRBRep_ListOfBPnt2D myBiPntVis;
HLRBRep_ListOfBPnt2D myBiPntHid;
Standard_Boolean myHideMode;


};


#include <HLRBRep_PolyHLRToShape.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
