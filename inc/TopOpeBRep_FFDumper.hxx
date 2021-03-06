// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRep_FFDumper_HeaderFile
#define _TopOpeBRep_FFDumper_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TopOpeBRep_FFDumper_HeaderFile
#include <Handle_TopOpeBRep_FFDumper.hxx>
#endif

#ifndef _TopOpeBRep_PFacesFiller_HeaderFile
#include <TopOpeBRep_PFacesFiller.hxx>
#endif
#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
#ifndef _TopTools_DataMapOfShapeInteger_HeaderFile
#include <TopTools_DataMapOfShapeInteger.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _TopOpeBRepDS_Kind_HeaderFile
#include <TopOpeBRepDS_Kind.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TopOpeBRep_LineInter;
class TopOpeBRep_VPointInter;
class TopoDS_Shape;



class TopOpeBRep_FFDumper : public MMgt_TShared {

public:

  
  Standard_EXPORT   TopOpeBRep_FFDumper(const TopOpeBRep_PFacesFiller& PFF);
  
  Standard_EXPORT     void Init(const TopOpeBRep_PFacesFiller& PFF) ;
  
  Standard_EXPORT     void DumpLine(const Standard_Integer I) ;
  
  Standard_EXPORT     void DumpLine(const TopOpeBRep_LineInter& L) ;
  
  Standard_EXPORT     void DumpVP(const TopOpeBRep_VPointInter& VP) ;
  
  Standard_EXPORT     void DumpVP(const TopOpeBRep_VPointInter& VP,const Standard_Integer ISI) ;
  
  Standard_EXPORT     Standard_Integer ExploreIndex(const TopoDS_Shape& S,const Standard_Integer ISI) const;
  
  Standard_EXPORT     void DumpDSP(const TopOpeBRep_VPointInter& VP,const TopOpeBRepDS_Kind GK,const Standard_Integer G,const Standard_Boolean newinDS) const;
  
  Standard_EXPORT     TopOpeBRep_PFacesFiller PFacesFillerDummy() const;




  DEFINE_STANDARD_RTTI(TopOpeBRep_FFDumper)

protected:




private: 


TopOpeBRep_PFacesFiller myPFF;
TopoDS_Face myF1;
TopoDS_Face myF2;
TopTools_DataMapOfShapeInteger myEM1;
TopTools_DataMapOfShapeInteger myEM2;
Standard_Integer myEn1;
Standard_Integer myEn2;
Standard_Integer myLineIndex;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
