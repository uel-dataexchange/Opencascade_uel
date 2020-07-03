// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_AreaBuilder_HeaderFile
#define _TopOpeBRepBuild_AreaBuilder_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopOpeBRepBuild_ListOfListOfLoop_HeaderFile
#include <TopOpeBRepBuild_ListOfListOfLoop.hxx>
#endif
#ifndef _TopOpeBRepBuild_ListIteratorOfListOfListOfLoop_HeaderFile
#include <TopOpeBRepBuild_ListIteratorOfListOfListOfLoop.hxx>
#endif
#ifndef _TopOpeBRepBuild_ListIteratorOfListOfLoop_HeaderFile
#include <TopOpeBRepBuild_ListIteratorOfListOfLoop.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopAbs_State_HeaderFile
#include <TopAbs_State.hxx>
#endif
#ifndef _Handle_TopOpeBRepBuild_Loop_HeaderFile
#include <Handle_TopOpeBRepBuild_Loop.hxx>
#endif
#ifndef _TopOpeBRepBuild_LoopEnum_HeaderFile
#include <TopOpeBRepBuild_LoopEnum.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class TopOpeBRepBuild_LoopSet;
class TopOpeBRepBuild_LoopClassifier;
class TopOpeBRepBuild_Loop;
class TopOpeBRepBuild_ListOfLoop;
class TopOpeBRepBuild_ListIteratorOfListOfLoop;



//!  The AreaBuilder algorithm is  used  to <br>
//!  reconstruct complex  topological objects as  Faces <br>
//!  or Solids. <br>
//!  * Loop is  the  composite topological object of <br>
//!  the boundary. Wire for a Face. Shell for a Solid. <br>
//!  *  LoopSet is a  tool describing the object  to <br>
//!  build.  It gives an iteration  on Loops.  For each <br>
//!  Loop it tells if it is on the boundary or if it is <br>
//!  an interference. <br>
//!  * LoopClassifier  is an algorithm  used to test <br>
//!  if a Loop is inside  another  Loop. <br>
//!  The  result of the  reconstruction is an iteration <br>
//!  on the reconstructed areas.  An  area is described <br>
//!  by a set of Loops. <br>
//!  A AreaBuilder is built with : <br>
//!    - a LoopSet describing the object to reconstruct. <br>
//!    - a LoopClassifier providing the classification algorithm. <br>
class TopOpeBRepBuild_AreaBuilder  {
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

  
  Standard_EXPORT   TopOpeBRepBuild_AreaBuilder();
  //! Creates a AreaBuilder to build the areas on <br>
//! the shapes described by <LS> using the classifier <LC>. <br>
  Standard_EXPORT   TopOpeBRepBuild_AreaBuilder(TopOpeBRepBuild_LoopSet& LS,TopOpeBRepBuild_LoopClassifier& LC,const Standard_Boolean ForceClass = Standard_False);
  
  Standard_EXPORT   virtual  void Delete() ;
Standard_EXPORT virtual ~TopOpeBRepBuild_AreaBuilder(){Delete() ; }
  //! Sets a AreaBuilder to find the areas on <br>
//! the shapes described by <LS> using the classifier <LC>. <br>
  Standard_EXPORT   virtual  void InitAreaBuilder(TopOpeBRepBuild_LoopSet& LS,TopOpeBRepBuild_LoopClassifier& LC,const Standard_Boolean ForceClass = Standard_False) ;
  //! Initialize iteration on areas. <br>
  Standard_EXPORT     Standard_Integer InitArea() ;
  
  Standard_EXPORT     Standard_Boolean MoreArea() const;
  
  Standard_EXPORT     void NextArea() ;
  //! Initialize iteration on loops of current Area. <br>
  Standard_EXPORT     Standard_Integer InitLoop() ;
  
  Standard_EXPORT     Standard_Boolean MoreLoop() const;
  
  Standard_EXPORT     void NextLoop() ;
  //! Returns the current Loop in the current area. <br>
  Standard_EXPORT    const Handle_TopOpeBRepBuild_Loop& Loop() const;
  
  Standard_EXPORT   virtual  void ADD_Loop_TO_LISTOFLoop(const Handle(TopOpeBRepBuild_Loop)& L,TopOpeBRepBuild_ListOfLoop& LOL,const Standard_Address s = NULL) const;
  
  Standard_EXPORT   virtual  void REM_Loop_FROM_LISTOFLoop(TopOpeBRepBuild_ListIteratorOfListOfLoop& ITLOL,TopOpeBRepBuild_ListOfLoop& LOL,const Standard_Address s = NULL) const;
  
  Standard_EXPORT   virtual  void ADD_LISTOFLoop_TO_LISTOFLoop(TopOpeBRepBuild_ListOfLoop& LOL1,TopOpeBRepBuild_ListOfLoop& LOL2,const Standard_Address s = NULL,const Standard_Address s1 = NULL,const Standard_Address s2 = NULL) const;





protected:

  
  Standard_EXPORT     TopAbs_State CompareLoopWithListOfLoop(TopOpeBRepBuild_LoopClassifier& LC,const Handle(TopOpeBRepBuild_Loop)& L,const TopOpeBRepBuild_ListOfLoop& LOL,const TopOpeBRepBuild_LoopEnum le) const;
  
  Standard_EXPORT     void Atomize(TopAbs_State& state,const TopAbs_State newstate) const;


TopOpeBRepBuild_ListOfListOfLoop myArea;
TopOpeBRepBuild_ListIteratorOfListOfListOfLoop myAreaIterator;
TopOpeBRepBuild_ListIteratorOfListOfLoop myLoopIterator;
Standard_Boolean myUNKNOWNRaise;


private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
