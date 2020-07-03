// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Voxel_FloatDS_HeaderFile
#define _Voxel_FloatDS_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Voxel_DS_HeaderFile
#include <Voxel_DS.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif


//! A 3D voxel model keeping a foating-point <br>
//!          value for each voxel. <br>
class Voxel_FloatDS  : public Voxel_DS {
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

  //! An empty constructor. <br>
  Standard_EXPORT   Voxel_FloatDS();
  //! A constructor initializing the voxel model. <br>
//!          (x, y, z) - the start point of the box. <br>
//!          (x_len, y_len, z_len) - lengths in x, y and z directions along axes of a co-ordinate system. <br>
//!          (nb_x, nb_y, nb_z) - number of splits (voxels) along x, y and z directions. <br>
  Standard_EXPORT   Voxel_FloatDS(const Standard_Real x,const Standard_Real y,const Standard_Real z,const Standard_Real x_len,const Standard_Real y_len,const Standard_Real z_len,const Standard_Integer nb_x,const Standard_Integer nb_y,const Standard_Integer nb_z);
  //! Initialization of the voxel model. <br>
//!          (x, y, z) - the start point of the box. <br>
//!          (x_len, y_len, z_len) - lengths in x, y and z directions along axes of a co-ordinate system. <br>
//!          (nb_x, nb_y, nb_z) - number of splits (voxels) along x, y and z directions. <br>
  Standard_EXPORT   virtual  void Init(const Standard_Real x,const Standard_Real y,const Standard_Real z,const Standard_Real x_len,const Standard_Real y_len,const Standard_Real z_len,const Standard_Integer nb_x,const Standard_Integer nb_y,const Standard_Integer nb_z) ;
  //! A destructor of the voxel model. <br>
  Standard_EXPORT     void Destroy() ;
~Voxel_FloatDS()
{
  Destroy();
}
  //! The method sets all values equal to 0 (false) and <br>
//!          releases the memory. <br>
  Standard_EXPORT     void SetZero() ;
  //! Defines a value for voxel with co-ordinates (ix, iy, iz). <br>
//!          Initial state of the model is so that all voxels have value 0.0f, <br>
//!          and this data doesn't occupy memory. <br>
//!          Memory for data is allocating during setting non-zero values. <br>
  Standard_EXPORT     void Set(const Standard_Integer ix,const Standard_Integer iy,const Standard_Integer iz,const Standard_ShortReal data) ;
  //! Returns the value of voxel with co-ordinates (ix, iy, iz). <br>
  Standard_EXPORT     Standard_ShortReal Get(const Standard_Integer ix,const Standard_Integer iy,const Standard_Integer iz) const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
