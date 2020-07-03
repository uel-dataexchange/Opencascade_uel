// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Prs3d_PlaneSet_HeaderFile
#define _Prs3d_PlaneSet_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Prs3d_PlaneSet_HeaderFile
#include <Handle_Prs3d_PlaneSet.hxx>
#endif

#ifndef _gp_Pln_HeaderFile
#include <gp_Pln.hxx>
#endif
#ifndef _Quantity_Length_HeaderFile
#include <Quantity_Length.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class gp_Pln;



class Prs3d_PlaneSet : public MMgt_TShared {

public:

  
  Standard_EXPORT   Prs3d_PlaneSet(const Standard_Real Xdir,const Standard_Real Ydir,const Standard_Real Zdir,const Quantity_Length Xloc,const Quantity_Length Yloc,const Quantity_Length Zloc,const Quantity_Length anOffset);
  
  Standard_EXPORT     void SetDirection(const Standard_Real X,const Standard_Real Y,const Standard_Real Z) ;
  
  Standard_EXPORT     void SetLocation(const Quantity_Length X,const Quantity_Length Y,const Quantity_Length Z) ;
  
  Standard_EXPORT     void SetOffset(const Quantity_Length anOffset) ;
  
  Standard_EXPORT     gp_Pln Plane() const;
  
  Standard_EXPORT     Quantity_Length Offset() const;
  
  Standard_EXPORT     void Location(Quantity_Length& X,Quantity_Length& Y,Quantity_Length& Z) const;
  
  Standard_EXPORT     void Direction(Quantity_Length& X,Quantity_Length& Y,Quantity_Length& Z) const;




  DEFINE_STANDARD_RTTI(Prs3d_PlaneSet)

protected:




private: 


gp_Pln myPlane;
Quantity_Length myOffset;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
