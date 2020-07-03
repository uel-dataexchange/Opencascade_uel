// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_Generator_HeaderFile
#define _GeomFill_Generator_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _GeomFill_Profiler_HeaderFile
#include <GeomFill_Profiler.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Geom_Surface;
class StdFail_NotDone;
class Standard_DomainError;


//! Create a surface using generating lines.  Inherits <br>
//!          profiler.  The  surface will be  a  BSplineSurface <br>
//!          passing  by   all  the  curves  described  in  the <br>
//!          generator. The VDegree of the resulting surface is <br>
//!          1. <br>
class GeomFill_Generator  : public GeomFill_Profiler {
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

  
  Standard_EXPORT   GeomFill_Generator();
  //! Converts all curves to BSplineCurves. <br>
//!          Set them to the common profile. <br>
//!          Compute the surface (degv = 1). <br>
//!          <PTol> is used to compare 2 knots. <br>
  Standard_EXPORT   virtual  void Perform(const Standard_Real PTol) ;
  
       const Handle_Geom_Surface& Surface() const;





protected:





private:



Handle_Geom_Surface mySurface;


};


#include <GeomFill_Generator.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
