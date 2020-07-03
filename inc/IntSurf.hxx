// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntSurf_HeaderFile
#define _IntSurf_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

class gp_Vec;
class gp_Dir;
class IntSurf_Transition;
class IntSurf_PntOn2S;
class IntSurf_SequenceOfPntOn2S;
class IntSurf_Couple;
class IntSurf_SequenceOfCouple;
class IntSurf_LineOn2S;
class IntSurf_Quadric;
class IntSurf_QuadricTool;
class IntSurf_PathPoint;
class IntSurf_SequenceOfPathPoint;
class IntSurf_PathPointTool;
class IntSurf_InteriorPoint;
class IntSurf_SequenceOfInteriorPoint;
class IntSurf_InteriorPointTool;
class IntSurf_Transition;
class IntSurf_ListOfPntOn2S;
class IntSurf_SequenceNodeOfSequenceOfPntOn2S;
class IntSurf_SequenceNodeOfSequenceOfCouple;
class IntSurf_SequenceNodeOfSequenceOfPathPoint;
class IntSurf_SequenceNodeOfSequenceOfInteriorPoint;
class IntSurf_ListNodeOfListOfPntOn2S;
class IntSurf_ListIteratorOfListOfPntOn2S;


//! This package provides resources for <br>
//!          all the packages concerning the intersection <br>
//!          between surfaces. <br>
class IntSurf  {
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

  //! Computes the transition of the intersection point <br>
//!          between the two lines. <br>
//!          TgFirst is the tangent vector of the first line. <br>
//!          TgSecond is the tangent vector of the second line. <br>
//!          Normal is the direction used to orientate the cross <br>
//!          product TgFirst^TgSecond. <br>
//!          TFirst is the transition of the point on the first line. <br>
//!          TSecond is the transition of the point on the second line. <br>
  Standard_EXPORT   static  void MakeTransition(const gp_Vec& TgFirst,const gp_Vec& TgSecond,const gp_Dir& Normal,IntSurf_Transition& TFirst,IntSurf_Transition& TSecond) ;





protected:





private:




friend class IntSurf_PntOn2S;
friend class IntSurf_SequenceOfPntOn2S;
friend class IntSurf_Couple;
friend class IntSurf_SequenceOfCouple;
friend class IntSurf_LineOn2S;
friend class IntSurf_Quadric;
friend class IntSurf_QuadricTool;
friend class IntSurf_PathPoint;
friend class IntSurf_SequenceOfPathPoint;
friend class IntSurf_PathPointTool;
friend class IntSurf_InteriorPoint;
friend class IntSurf_SequenceOfInteriorPoint;
friend class IntSurf_InteriorPointTool;
friend class IntSurf_Transition;
friend class IntSurf_ListOfPntOn2S;
friend class IntSurf_SequenceNodeOfSequenceOfPntOn2S;
friend class IntSurf_SequenceNodeOfSequenceOfCouple;
friend class IntSurf_SequenceNodeOfSequenceOfPathPoint;
friend class IntSurf_SequenceNodeOfSequenceOfInteriorPoint;
friend class IntSurf_ListNodeOfListOfPntOn2S;
friend class IntSurf_ListIteratorOfListOfPntOn2S;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
