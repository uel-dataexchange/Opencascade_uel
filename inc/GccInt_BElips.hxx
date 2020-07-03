// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GccInt_BElips_HeaderFile
#define _GccInt_BElips_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_GccInt_BElips_HeaderFile
#include <Handle_GccInt_BElips.hxx>
#endif

#ifndef _gp_Elips2d_HeaderFile
#include <gp_Elips2d.hxx>
#endif
#ifndef _GccInt_Bisec_HeaderFile
#include <GccInt_Bisec.hxx>
#endif
#ifndef _GccInt_IType_HeaderFile
#include <GccInt_IType.hxx>
#endif
class gp_Elips2d;


//! Describes an ellipse as a bisecting curve between two <br>
//! 2D geometric objects (such as circles or points). <br>
class GccInt_BElips : public GccInt_Bisec {

public:

  
//! Constructs a bisecting curve whose geometry is the 2D ellipse Ellipse. <br>
  Standard_EXPORT   GccInt_BElips(const gp_Elips2d& Ellipse);
  //! Returns a 2D ellipse which is the geometry of this bisecting curve. <br>
  Standard_EXPORT   virtual  gp_Elips2d Ellipse() const;
  //! Returns GccInt_Ell, which is the type of any GccInt_BElips bisecting curve. <br>
  Standard_EXPORT     GccInt_IType ArcType() const;




  DEFINE_STANDARD_RTTI(GccInt_BElips)

protected:




private: 


gp_Elips2d eli;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
