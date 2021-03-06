// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTools_DEProcessor_HeaderFile
#define _BOPTools_DEProcessor_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _BOPTools_PPaveFiller_HeaderFile
#include <BOPTools_PPaveFiller.hxx>
#endif
#ifndef _BooleanOperations_PShapesDataStructure_HeaderFile
#include <BooleanOperations_PShapesDataStructure.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _BOPTools_IndexedDataMapOfIntegerDEInfo_HeaderFile
#include <BOPTools_IndexedDataMapOfIntegerDEInfo.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class BOPTools_PaveFiller;
class BOPTools_ListOfPaveBlock;
class TopoDS_Edge;
class TopoDS_Face;
class TopoDS_Vertex;



//! <br>
//!  The  Algorithm to compute and store in interferences' pool <br>
//! and in the Data  Structure  the following values <br>
//! for degenerated edges <br>
//!         1.  Paves/Pave set(s) <br>
//!         2.  Split parts <br>
//!         3.  States (3D) for split parts <br>
//! <br>
class BOPTools_DEProcessor  {
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

  
//! Constructor <br>
  Standard_EXPORT   BOPTools_DEProcessor(const BOPTools_PaveFiller& aFiller,const Standard_Integer aDim = 3);
  
//! Launches the processor <br>
  Standard_EXPORT     void Do() ;
  
//! Returns TRUE if it is Ok <br>
  Standard_EXPORT     Standard_Boolean IsDone() const;





protected:





private:

  
  Standard_EXPORT     void FindDegeneratedEdges() ;
  
  Standard_EXPORT     void DoPaves() ;
  
  Standard_EXPORT     void FindPaveBlocks(const Standard_Integer nED,const Standard_Integer nVD,const Standard_Integer nFD,BOPTools_ListOfPaveBlock& aLPB) ;
  
  Standard_EXPORT     void FillPaveSet(const Standard_Integer nED,const Standard_Integer nVD,const Standard_Integer nFD,BOPTools_ListOfPaveBlock& aLPB) ;
  
  Standard_EXPORT     void FillSplitEdgesPool(const Standard_Integer nED) ;
  
  Standard_EXPORT     void MakeSplitEdges(const Standard_Integer nED,const Standard_Integer nFD) ;
  
  Standard_EXPORT     void MakeSplitEdge(const TopoDS_Edge& aS1,const TopoDS_Face& aF,const TopoDS_Vertex& aV1,const Standard_Real aP1,const TopoDS_Vertex& aV2,const Standard_Real aP2,TopoDS_Edge& aNewEdge) ;
  
  Standard_EXPORT     void DoStates(const Standard_Integer nED,const Standard_Integer nFD) ;
  
  Standard_EXPORT     void DoStates2D(const Standard_Integer nED,const Standard_Integer nFD) ;


Standard_Integer myDim;
BOPTools_PPaveFiller myFiller;
BooleanOperations_PShapesDataStructure myDS;
Standard_Boolean myIsDone;
BOPTools_IndexedDataMapOfIntegerDEInfo myDEMap;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
