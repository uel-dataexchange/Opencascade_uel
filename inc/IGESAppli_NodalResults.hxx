// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESAppli_NodalResults_HeaderFile
#define _IGESAppli_NodalResults_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESAppli_NodalResults_HeaderFile
#include <Handle_IGESAppli_NodalResults.hxx>
#endif

#ifndef _Handle_IGESDimen_GeneralNote_HeaderFile
#include <Handle_IGESDimen_GeneralNote.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfInteger_HeaderFile
#include <Handle_TColStd_HArray1OfInteger.hxx>
#endif
#ifndef _Handle_IGESAppli_HArray1OfNode_HeaderFile
#include <Handle_IGESAppli_HArray1OfNode.hxx>
#endif
#ifndef _Handle_TColStd_HArray2OfReal_HeaderFile
#include <Handle_TColStd_HArray2OfReal.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
#ifndef _Handle_IGESAppli_Node_HeaderFile
#include <Handle_IGESAppli_Node.hxx>
#endif
class IGESDimen_GeneralNote;
class TColStd_HArray1OfInteger;
class IGESAppli_HArray1OfNode;
class TColStd_HArray2OfReal;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class IGESAppli_Node;


//! defines NodalResults, Type <146> <br>
//!          in package IGESAppli <br>
//!          Used to store the Analysis Data results per FEM Node <br>
class IGESAppli_NodalResults : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESAppli_NodalResults();
  //! This method is used to set the fields of the class <br>
//!           NodalResults <br>
//!       - aNote              : General Note that describes the <br>
//!                              analysis case <br>
//!       - aNumber            : Analysis Subcase number <br>
//!       - aTime              : Analysis time <br>
//!       - allNodeIdentifiers : Node identifiers for the nodes <br>
//!       - allNodes           : List of FEM Node Entities <br>
//!       - allData            : Values of the Finite Element analysis <br>
//!                              result data <br>
//! raises exception if Lengths of allNodeIdentifiers, allNodes and <br>
//! allData (Cols) are not same <br>
  Standard_EXPORT     void Init(const Handle(IGESDimen_GeneralNote)& aNote,const Standard_Integer aNumber,const Standard_Real aTime,const Handle(TColStd_HArray1OfInteger)& allNodeIdentifiers,const Handle(IGESAppli_HArray1OfNode)& allNodes,const Handle(TColStd_HArray2OfReal)& allData) ;
  //! Changes the FormNumber (which indicates Type of Result) <br>
//!           Error if not in range [0-34] <br>
  Standard_EXPORT     void SetFormNumber(const Standard_Integer form) ;
  //! returns the General Note Entity that describes the analysis case <br>
  Standard_EXPORT     Handle_IGESDimen_GeneralNote Note() const;
  //! returns zero if there is no subcase <br>
  Standard_EXPORT     Standard_Integer SubCaseNumber() const;
  //! returns the Analysis time value for this subcase. It is the time <br>
//! at which transient analysis results occur in the mathematical <br>
//! FEM model. <br>
  Standard_EXPORT     Standard_Real Time() const;
  //! returns number of real values in array V for a FEM node <br>
  Standard_EXPORT     Standard_Integer NbData() const;
  //! returns number of FEM nodes for which data is to be read. <br>
  Standard_EXPORT     Standard_Integer NbNodes() const;
  //! returns FEM node number identifier for the (Index)th node <br>
//! raises exception if Index <= 0 or Index > NbNodes <br>
  Standard_EXPORT     Standard_Integer NodeIdentifier(const Standard_Integer Index) const;
  //! returns the node as specified by the Index <br>
//! raises exception if Index <= 0 or Index > NbNodes <br>
  Standard_EXPORT     Handle_IGESAppli_Node Node(const Standard_Integer Index) const;
  //! returns the finite element analysis result value <br>
//! raises exception if (NodeNum <= 0 or NodeNum > NbNodes()) or <br>
//! if (DataNum <=0 or DataNum > NbData()) <br>
  Standard_EXPORT     Standard_Real Data(const Standard_Integer NodeNum,const Standard_Integer DataNum) const;




  DEFINE_STANDARD_RTTI(IGESAppli_NodalResults)

protected:




private: 


Handle_IGESDimen_GeneralNote theNote;
Standard_Integer theSubCaseNum;
Standard_Real theTime;
Handle_TColStd_HArray1OfInteger theNodeIdentifiers;
Handle_IGESAppli_HArray1OfNode theNodes;
Handle_TColStd_HArray2OfReal theData;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
