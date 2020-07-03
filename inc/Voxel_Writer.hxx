// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Voxel_Writer_HeaderFile
#define _Voxel_Writer_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Voxel_VoxelFileFormat_HeaderFile
#include <Voxel_VoxelFileFormat.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Voxel_BoolDS;
class Voxel_ColorDS;
class Voxel_FloatDS;
class TCollection_ExtendedString;


//! Writes a cube of voxels on disk. <br>
class Voxel_Writer  {
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
  Standard_EXPORT   Voxel_Writer();
  //! Defines the file format for voxels. <br>
//!          ASCII - slow and occupies more space on disk. <br>
//!          BINARY - fast and occupies less space on disk. <br>
  Standard_EXPORT     void SetFormat(const Voxel_VoxelFileFormat format) ;
  //! Defines the voxels (1bit). <br>
  Standard_EXPORT     void SetVoxels(const Voxel_BoolDS& voxels) ;
  //! Defines the voxels (4bit). <br>
  Standard_EXPORT     void SetVoxels(const Voxel_ColorDS& voxels) ;
  //! Defines the voxels (4bytes). <br>
  Standard_EXPORT     void SetVoxels(const Voxel_FloatDS& voxels) ;
  //! Writes the voxels on disk <br>
//!          using the defined format and file name. <br>
  Standard_EXPORT     Standard_Boolean Write(const TCollection_ExtendedString& file) const;





protected:





private:

  //! Writes 1bit voxels on disk in ASCII format. <br>
  Standard_EXPORT     Standard_Boolean WriteBoolAsciiVoxels(const TCollection_ExtendedString& file) const;
  //! Writes 4bit voxels on disk in ASCII format. <br>
  Standard_EXPORT     Standard_Boolean WriteColorAsciiVoxels(const TCollection_ExtendedString& file) const;
  //! Writes 4bytes voxels on disk in ASCII format. <br>
  Standard_EXPORT     Standard_Boolean WriteFloatAsciiVoxels(const TCollection_ExtendedString& file) const;
  //! Writes 1bit voxels on disk in BINARY format. <br>
  Standard_EXPORT     Standard_Boolean WriteBoolBinaryVoxels(const TCollection_ExtendedString& file) const;
  //! Writes 4bit voxels on disk in BINARY format. <br>
  Standard_EXPORT     Standard_Boolean WriteColorBinaryVoxels(const TCollection_ExtendedString& file) const;
  //! Writes 4bytes voxels on disk in BINARY format. <br>
  Standard_EXPORT     Standard_Boolean WriteFloatBinaryVoxels(const TCollection_ExtendedString& file) const;


Voxel_VoxelFileFormat myFormat;
Standard_Address myBoolVoxels;
Standard_Address myColorVoxels;
Standard_Address myFloatVoxels;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
