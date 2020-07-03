// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntSurf_Transition_HeaderFile
#define _IntSurf_Transition_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _IntSurf_TypeTrans_HeaderFile
#include <IntSurf_TypeTrans.hxx>
#endif
#ifndef _IntSurf_Situation_HeaderFile
#include <IntSurf_Situation.hxx>
#endif
class Standard_DomainError;


//! Definition of the transition at the intersection <br>
//!          between an intersection line and a restriction curve <br>
//!          on a surface. <br>
class IntSurf_Transition  {
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

  //! Empty constructor. Creates an UNDECIDED transition. <br>
  Standard_EXPORT   IntSurf_Transition();
  //! Create a IN or OUT transition <br>
  Standard_EXPORT   IntSurf_Transition(const Standard_Boolean Tangent,const IntSurf_TypeTrans Type);
  //! Create a TOUCH transition. <br>
  Standard_EXPORT   IntSurf_Transition(const Standard_Boolean Tangent,const IntSurf_Situation Situ,const Standard_Boolean Oppos);
  //! Set the values of an IN or OUT transition. <br>
        void SetValue(const Standard_Boolean Tangent,const IntSurf_TypeTrans Type) ;
  //! Set the values of a TOUCH transition. <br>
        void SetValue(const Standard_Boolean Tangent,const IntSurf_Situation Situ,const Standard_Boolean Oppos) ;
  //! Set the values of an UNDECIDED transition. <br>
        void SetValue() ;
  //! Returns the type of Transition (in/out/touch/undecided) <br>
//!          for the arc given by value. This the transition of <br>
//!          the intersection line compared to the Arc of restriction, <br>
//!          i-e when the function returns INSIDE for example, it <br>
//!          means that the intersection line goes inside the <br>
//!          part of plane limited by the arc of restriction. <br>
        IntSurf_TypeTrans TransitionType() const;
  //! Returns TRUE if the point is tangent to the arc <br>
//!          given by Value. <br>
//!          An exception is raised if TransitionType returns UNDECIDED. <br>
        Standard_Boolean IsTangent() const;
  //! Returns a significant value if TransitionType returns <br>
//!          TOUCH. In this case, the function returns : <br>
//!          INSIDE when the intersection line remains inside the Arc, <br>
//!          OUTSIDE when it remains outside the Arc, <br>
//!          UNKNOWN when the calsulus cannot give results. <br>
//!          If TransitionType returns IN, or OUT, or UNDECIDED, a <br>
//!          exception is raised. <br>
        IntSurf_Situation Situation() const;
  //! returns a significant value if TransitionType returns <br>
//!          TOUCH. <br>
//!          In this case, the function returns true when <br>
//!          the 2 curves locally define two different parts of the <br>
//!          space. <br>
//!          If TransitionType returns IN or OUT or UNDECIDED, an <br>
//!          exception is raised. <br>
        Standard_Boolean IsOpposite() const;





protected:





private:



Standard_Boolean tangent;
IntSurf_TypeTrans typetra;
IntSurf_Situation situat;
Standard_Boolean oppos;


};


#include <IntSurf_Transition.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
