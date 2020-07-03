// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Viewer_View_HeaderFile
#define _Viewer_View_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Viewer_View_HeaderFile
#include <Handle_Viewer_View.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Quantity_Factor_HeaderFile
#include <Quantity_Factor.hxx>
#endif
class Viewer_BadValue;


//! This class defines a view. <br>
class Viewer_View : public MMgt_TShared {

public:

  //! Clears the window and redraws all primitives. <br>
  Standard_EXPORT   virtual  void Update() const = 0;
  //! sets the immediate update mode and returns the previous one. <br>
  Standard_EXPORT     Standard_Boolean SetImmediateUpdate(const Standard_Boolean onoff) ;
  //! Centres the defined pixel window defined by the <br>
//! minimum and maximum pixels Xmin, Ymin, Xmax, <br>
//! Ymax so that it occupies the largest possible space <br>
//! while maintaining the initial height/width ratio. <br>
//! Exceptions <br>
//! Viewer_BadValue if the size of the defined <br>
//! projection window is equal to 0. <br>
  Standard_EXPORT   virtual  void WindowFit(const Standard_Integer Xmin,const Standard_Integer Ymin,const Standard_Integer Xmax,const Standard_Integer Ymax)  = 0;
  //! Sets the center of the object space defined by x, y <br>
//! and the zoom factor aZoomFactor. The view is updated. <br>
  Standard_EXPORT   virtual  void Place(const Standard_Integer x,const Standard_Integer y,const Quantity_Factor aZoomFactor = 1)  = 0;




  DEFINE_STANDARD_RTTI(Viewer_View)

protected:

  
  Standard_EXPORT   Viewer_View();
  
  Standard_EXPORT     void ImmediateUpdate() const;

Standard_Boolean myImmediateUpdate;


private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
