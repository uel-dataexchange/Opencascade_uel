// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOP_HistoryCollector_HeaderFile
#define _BOP_HistoryCollector_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BOP_HistoryCollector_HeaderFile
#include <Handle_BOP_HistoryCollector.hxx>
#endif

#ifndef _TopTools_ListOfShape_HeaderFile
#include <TopTools_ListOfShape.hxx>
#endif
#ifndef _BOP_Operation_HeaderFile
#include <BOP_Operation.hxx>
#endif
#ifndef _TopTools_DataMapOfShapeListOfShape_HeaderFile
#include <TopTools_DataMapOfShapeListOfShape.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _BOPTools_PDSFiller_HeaderFile
#include <BOPTools_PDSFiller.hxx>
#endif
class TopoDS_Shape;
class TopTools_ListOfShape;



class BOP_HistoryCollector : public MMgt_TShared {

public:

  
  Standard_EXPORT   virtual const TopTools_ListOfShape& Generated(const TopoDS_Shape& S) ;
  
  Standard_EXPORT   virtual  void SetResult(const TopoDS_Shape& theResult,const BOPTools_PDSFiller& theDSFiller) ;
  
  Standard_EXPORT   virtual const TopTools_ListOfShape& Modified(const TopoDS_Shape& S) ;
  
  Standard_EXPORT   virtual  Standard_Boolean IsDeleted(const TopoDS_Shape& S) ;
  
  Standard_EXPORT   virtual  Standard_Boolean HasGenerated() const;
  
  Standard_EXPORT   virtual  Standard_Boolean HasModified() const;
  
  Standard_EXPORT   virtual  Standard_Boolean HasDeleted() const;




  DEFINE_STANDARD_RTTI(BOP_HistoryCollector)

protected:

  
  Standard_EXPORT   BOP_HistoryCollector();
  
  Standard_EXPORT   BOP_HistoryCollector(const TopoDS_Shape& theShape1,const TopoDS_Shape& theShape2,const BOP_Operation theOperation);

TopTools_ListOfShape myEmptyList;
BOP_Operation myOp;
TopTools_DataMapOfShapeListOfShape myGenMap;
TopTools_DataMapOfShapeListOfShape myModifMap;
TopoDS_Shape myS1;
TopoDS_Shape myS2;
TopoDS_Shape myResult;
Standard_Boolean myHasDeleted;


private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
