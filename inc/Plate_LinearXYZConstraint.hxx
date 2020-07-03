// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Plate_LinearXYZConstraint_HeaderFile
#define _Plate_LinearXYZConstraint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Plate_HArray1OfPinpointConstraint_HeaderFile
#include <Handle_Plate_HArray1OfPinpointConstraint.hxx>
#endif
#ifndef _Handle_TColStd_HArray2OfReal_HeaderFile
#include <Handle_TColStd_HArray2OfReal.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Plate_HArray1OfPinpointConstraint;
class TColStd_HArray2OfReal;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Plate_Array1OfPinpointConstraint;
class TColStd_Array1OfReal;
class TColStd_Array2OfReal;
class Plate_PinpointConstraint;


//! define on or several constraints as linear combination of <br>
//!         PinPointConstraint unlike the LinearScalarConstraint, usage <br>
//!         of this kind of constraint preserve the X,Y and Z uncoupling. <br>
class Plate_LinearXYZConstraint  {
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

  
  Standard_EXPORT   Plate_LinearXYZConstraint();
  
  Standard_EXPORT   Plate_LinearXYZConstraint(const Plate_Array1OfPinpointConstraint& PPC,const TColStd_Array1OfReal& coeff);
  
  Standard_EXPORT   Plate_LinearXYZConstraint(const Plate_Array1OfPinpointConstraint& PPC,const TColStd_Array2OfReal& coeff);
  
  Standard_EXPORT   Plate_LinearXYZConstraint(const Standard_Integer ColLen,const Standard_Integer RowLen);
  
       const Plate_Array1OfPinpointConstraint& GetPPC() const;
  
       const TColStd_Array2OfReal& Coeff() const;
  //!  Sets   the PinPointConstraint of   index Index to <br>
//!          Value raise if Index is greater than the length of <br>
//!          PPC or the Row length of coeff or lower  than 1 <br>
  Standard_EXPORT     void SetPPC(const Standard_Integer Index,const Plate_PinpointConstraint& Value) ;
  //!  Sets the coeff  of index (Row,Col)  to Value <br>
//!           raise if  Row (respectively Col)  is greater than the <br>
//!          Row (respectively Column) length of coeff <br>
  Standard_EXPORT     void SetCoeff(const Standard_Integer Row,const Standard_Integer Col,const Standard_Real Value) ;





protected:





private:



Handle_Plate_HArray1OfPinpointConstraint myPPC;
Handle_TColStd_HArray2OfReal myCoef;


};


#include <Plate_LinearXYZConstraint.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
