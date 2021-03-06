// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepClass_FClass2dOfFClassifier_HeaderFile
#define _BRepClass_FClass2dOfFClassifier_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _gp_Lin2d_HeaderFile
#include <gp_Lin2d.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _TopTrans_CurveTransition_HeaderFile
#include <TopTrans_CurveTransition.hxx>
#endif
#ifndef _BRepClass_Intersector_HeaderFile
#include <BRepClass_Intersector.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TopAbs_State_HeaderFile
#include <TopAbs_State.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif
class Standard_DomainError;
class BRepClass_Edge;
class BRepClass_Intersector;
class gp_Lin2d;



class BRepClass_FClass2dOfFClassifier  {
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

  
  Standard_EXPORT   BRepClass_FClass2dOfFClassifier();
  
  Standard_EXPORT     void Reset(const gp_Lin2d& L,const Standard_Real P,const Standard_Real Tol) ;
  
  Standard_EXPORT     void Compare(const BRepClass_Edge& E,const TopAbs_Orientation Or) ;
  
        Standard_Real Parameter() const;
  
        BRepClass_Intersector& Intersector() ;
  
        Standard_Integer ClosestIntersection() const;
  
        TopAbs_State State() const;
  
        Standard_Boolean IsHeadOrEnd() const;





protected:





private:



Standard_Boolean myIsSet;
Standard_Boolean myFirstCompare;
Standard_Boolean myFirstTrans;
gp_Lin2d myLin;
Standard_Real myParam;
Standard_Real myTolerance;
TopTrans_CurveTransition myTrans;
BRepClass_Intersector myIntersector;
Standard_Integer myClosest;
TopAbs_State myState;
Standard_Boolean myIsHeadOrEnd;


};

#define TheEdge BRepClass_Edge
#define TheEdge_hxx <BRepClass_Edge.hxx>
#define TheIntersector BRepClass_Intersector
#define TheIntersector_hxx <BRepClass_Intersector.hxx>
#define TopClass_Classifier2d BRepClass_FClass2dOfFClassifier
#define TopClass_Classifier2d_hxx <BRepClass_FClass2dOfFClassifier.hxx>

#include <TopClass_Classifier2d.lxx>

#undef TheEdge
#undef TheEdge_hxx
#undef TheIntersector
#undef TheIntersector_hxx
#undef TopClass_Classifier2d
#undef TopClass_Classifier2d_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
