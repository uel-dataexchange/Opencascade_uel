// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AdvApp2Var_Network_HeaderFile
#define _AdvApp2Var_Network_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _AdvApp2Var_SequenceOfPatch_HeaderFile
#include <AdvApp2Var_SequenceOfPatch.hxx>
#endif
#ifndef _TColStd_SequenceOfReal_HeaderFile
#include <TColStd_SequenceOfReal.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Standard_NoSuchObject;
class AdvApp2Var_SequenceOfPatch;
class TColStd_SequenceOfReal;
class AdvApp2Var_Patch;



class AdvApp2Var_Network  {
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

  
  Standard_EXPORT   AdvApp2Var_Network();
  
  Standard_EXPORT   AdvApp2Var_Network(const AdvApp2Var_SequenceOfPatch& Net,const TColStd_SequenceOfReal& TheU,const TColStd_SequenceOfReal& TheV);
  //! search the Index of the first Patch not approximated, <br>
//!          if all Patches are approximated Standard_False is returned <br>
  Standard_EXPORT     Standard_Boolean FirstNotApprox(Standard_Integer& Index) const;
  
        AdvApp2Var_Patch& ChangePatch(const Standard_Integer Index) ;
      AdvApp2Var_Patch& operator()(const Standard_Integer Index) 
{
  return ChangePatch(Index);
}
  
  Standard_EXPORT     void UpdateInU(const Standard_Real CuttingValue) ;
  
  Standard_EXPORT     void UpdateInV(const Standard_Real CuttingValue) ;
  
  Standard_EXPORT     void SameDegree(const Standard_Integer iu,const Standard_Integer iv,Standard_Integer& ncfu,Standard_Integer& ncfv) ;
  
  Standard_EXPORT     Standard_Integer NbPatch() const;
  
  Standard_EXPORT     Standard_Integer NbPatchInU() const;
  
  Standard_EXPORT     Standard_Integer NbPatchInV() const;
  
  Standard_EXPORT     Standard_Real UParameter(const Standard_Integer Index) const;
  
  Standard_EXPORT     Standard_Real VParameter(const Standard_Integer Index) const;
  
       const AdvApp2Var_Patch& Patch(const Standard_Integer UIndex,const Standard_Integer VIndex) const;
     const AdvApp2Var_Patch& operator()(const Standard_Integer UIndex,const Standard_Integer VIndex) const
{
  return Patch(UIndex,VIndex);
}





protected:





private:



AdvApp2Var_SequenceOfPatch myNet;
TColStd_SequenceOfReal myUParameters;
TColStd_SequenceOfReal myVParameters;


};


#include <AdvApp2Var_Network.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
