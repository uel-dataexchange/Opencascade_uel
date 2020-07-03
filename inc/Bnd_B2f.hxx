// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Bnd_B2f_HeaderFile
#define _Bnd_B2f_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _gp_XY_HeaderFile
#include <gp_XY.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class gp_XY;
class gp_Pnt2d;
class gp_Trsf2d;
class gp_Ax2d;



class Bnd_B2f  {
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

  
      Bnd_B2f();
  
      Bnd_B2f(const gp_XY& theCenter,const gp_XY& theHSize);
  
        Standard_Boolean IsVoid() const;
  
        void Clear() ;
  
  Standard_EXPORT     void Add(const gp_XY& thePnt) ;
  
  Standard_EXPORT     void Add(const gp_Pnt2d& thePnt) ;
  
        void Add(const Bnd_B2f& theBox) ;
  
        gp_XY CornerMin() const;
  
        gp_XY CornerMax() const;
  
        Standard_Real SquareExtent() const;
  
        void Enlarge(const Standard_Real theDiff) ;
  
  Standard_EXPORT     Standard_Boolean Limit(const Bnd_B2f& theOtherBox) ;
  
  Standard_EXPORT     Bnd_B2f Transformed(const gp_Trsf2d& theTrsf) const;
  
        Standard_Boolean IsOut(const gp_XY& thePnt) const;
  
  Standard_EXPORT     Standard_Boolean IsOut(const gp_XY& theCenter,const Standard_Real theRadius,const Standard_Boolean isCircleHollow = Standard_False) const;
  
        Standard_Boolean IsOut(const Bnd_B2f& theOtherBox) const;
  
  Standard_EXPORT     Standard_Boolean IsOut(const Bnd_B2f& theOtherBox,const gp_Trsf2d& theTrsf) const;
  
  Standard_EXPORT     Standard_Boolean IsOut(const gp_Ax2d& theLine) const;
  
  Standard_EXPORT     Standard_Boolean IsOut(const gp_XY& theP0,const gp_XY& theP1) const;
  
        Standard_Boolean IsIn(const Bnd_B2f& theBox) const;
  
  Standard_EXPORT     Standard_Boolean IsIn(const Bnd_B2f& theBox,const gp_Trsf2d& theTrsf) const;
  
        void SetCenter(const gp_XY& theCenter) ;
  
        void SetHSize(const gp_XY& theHSize) ;





protected:



Standard_ShortReal myCenter[2];
Standard_ShortReal myHSize[2];


private:





};

#define RealType Standard_ShortReal
#define RealType_hxx <Standard_ShortReal.hxx>
#define Bnd_B2x Bnd_B2f
#define Bnd_B2x_hxx <Bnd_B2f.hxx>

#include <Bnd_B2x.lxx>

#undef RealType
#undef RealType_hxx
#undef Bnd_B2x
#undef Bnd_B2x_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
