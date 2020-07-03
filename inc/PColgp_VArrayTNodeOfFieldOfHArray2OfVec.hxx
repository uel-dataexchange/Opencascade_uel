// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_VArrayTNodeOfFieldOfHArray2OfVec_HeaderFile
#define _PColgp_VArrayTNodeOfFieldOfHArray2OfVec_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_Vec_HeaderFile
#include <gp_Vec.hxx>
#endif
#ifndef _Handle_PColgp_VArrayNodeOfFieldOfHArray2OfVec_HeaderFile
#include <Handle_PColgp_VArrayNodeOfFieldOfHArray2OfVec.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class gp_Vec;
class PColgp_FieldOfHArray2OfVec;
class PColgp_VArrayNodeOfFieldOfHArray2OfVec;



class PColgp_VArrayTNodeOfFieldOfHArray2OfVec  {
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

  
      PColgp_VArrayTNodeOfFieldOfHArray2OfVec();
  
      PColgp_VArrayTNodeOfFieldOfHArray2OfVec(const gp_Vec& aValue);
  
        void SetValue(const gp_Vec& aValue) ;
  
        Standard_Address Value() const;





protected:





private:



gp_Vec myValue;


};

#define Item gp_Vec
#define Item_hxx <gp_Vec.hxx>
#define DBC_VArrayNode PColgp_VArrayNodeOfFieldOfHArray2OfVec
#define DBC_VArrayNode_hxx <PColgp_VArrayNodeOfFieldOfHArray2OfVec.hxx>
#define DBC_VArrayTNode PColgp_VArrayTNodeOfFieldOfHArray2OfVec
#define DBC_VArrayTNode_hxx <PColgp_VArrayTNodeOfFieldOfHArray2OfVec.hxx>
#define Handle_DBC_VArrayNode Handle_PColgp_VArrayNodeOfFieldOfHArray2OfVec
#define DBC_VArrayNode_Type_() PColgp_VArrayNodeOfFieldOfHArray2OfVec_Type_()
#define DBC_VArray PColgp_FieldOfHArray2OfVec
#define DBC_VArray_hxx <PColgp_FieldOfHArray2OfVec.hxx>

#include <DBC_VArrayTNode.lxx>

#undef Item
#undef Item_hxx
#undef DBC_VArrayNode
#undef DBC_VArrayNode_hxx
#undef DBC_VArrayTNode
#undef DBC_VArrayTNode_hxx
#undef Handle_DBC_VArrayNode
#undef DBC_VArrayNode_Type_
#undef DBC_VArray
#undef DBC_VArray_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
