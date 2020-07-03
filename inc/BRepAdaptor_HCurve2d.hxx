// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepAdaptor_HCurve2d_HeaderFile
#define _BRepAdaptor_HCurve2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BRepAdaptor_HCurve2d_HeaderFile
#include <Handle_BRepAdaptor_HCurve2d.hxx>
#endif

#ifndef _BRepAdaptor_Curve2d_HeaderFile
#include <BRepAdaptor_Curve2d.hxx>
#endif
#ifndef _Adaptor2d_HCurve2d_HeaderFile
#include <Adaptor2d_HCurve2d.hxx>
#endif
class Standard_OutOfRange;
class Standard_NoSuchObject;
class Standard_DomainError;
class BRepAdaptor_Curve2d;
class Adaptor2d_Curve2d;



class BRepAdaptor_HCurve2d : public Adaptor2d_HCurve2d {

public:

  
  Standard_EXPORT   BRepAdaptor_HCurve2d();
  
  Standard_EXPORT   BRepAdaptor_HCurve2d(const BRepAdaptor_Curve2d& C);
  
  Standard_EXPORT     void Set(const BRepAdaptor_Curve2d& C) ;
  
  Standard_EXPORT    const Adaptor2d_Curve2d& Curve2d() const;
  
        BRepAdaptor_Curve2d& ChangeCurve2d() ;




  DEFINE_STANDARD_RTTI(BRepAdaptor_HCurve2d)

protected:


BRepAdaptor_Curve2d myCurve;


private: 




};

#define TheCurve BRepAdaptor_Curve2d
#define TheCurve_hxx <BRepAdaptor_Curve2d.hxx>
#define Adaptor2d_GenHCurve2d BRepAdaptor_HCurve2d
#define Adaptor2d_GenHCurve2d_hxx <BRepAdaptor_HCurve2d.hxx>
#define Handle_Adaptor2d_GenHCurve2d Handle_BRepAdaptor_HCurve2d
#define Adaptor2d_GenHCurve2d_Type_() BRepAdaptor_HCurve2d_Type_()

#include <Adaptor2d_GenHCurve2d.lxx>

#undef TheCurve
#undef TheCurve_hxx
#undef Adaptor2d_GenHCurve2d
#undef Adaptor2d_GenHCurve2d_hxx
#undef Handle_Adaptor2d_GenHCurve2d
#undef Adaptor2d_GenHCurve2d_Type_


// other Inline functions and methods (like "C++: function call" methods)


#endif
