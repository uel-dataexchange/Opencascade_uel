// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColStd_VArrayTNodeOfFieldOfHArray2OfPersistent_HeaderFile
#define _PColStd_VArrayTNodeOfFieldOfHArray2OfPersistent_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Standard_Persistent_HeaderFile
#include <Handle_Standard_Persistent.hxx>
#endif
#ifndef _Handle_PColStd_VArrayNodeOfFieldOfHArray2OfPersistent_HeaderFile
#include <Handle_PColStd_VArrayNodeOfFieldOfHArray2OfPersistent.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class Standard_Persistent;
class PColStd_FieldOfHArray2OfPersistent;
class PColStd_VArrayNodeOfFieldOfHArray2OfPersistent;



class PColStd_VArrayTNodeOfFieldOfHArray2OfPersistent  {
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

  
      PColStd_VArrayTNodeOfFieldOfHArray2OfPersistent();
  
      PColStd_VArrayTNodeOfFieldOfHArray2OfPersistent(const Handle(Standard_Persistent)& aValue);
  
        void SetValue(const Handle(Standard_Persistent)& aValue) ;
  
        Standard_Address Value() const;





protected:





private:



Handle_Standard_Persistent myValue;


};

#define Item Handle_Standard_Persistent
#define Item_hxx <Standard_Persistent.hxx>
#define DBC_VArrayNode PColStd_VArrayNodeOfFieldOfHArray2OfPersistent
#define DBC_VArrayNode_hxx <PColStd_VArrayNodeOfFieldOfHArray2OfPersistent.hxx>
#define DBC_VArrayTNode PColStd_VArrayTNodeOfFieldOfHArray2OfPersistent
#define DBC_VArrayTNode_hxx <PColStd_VArrayTNodeOfFieldOfHArray2OfPersistent.hxx>
#define Handle_DBC_VArrayNode Handle_PColStd_VArrayNodeOfFieldOfHArray2OfPersistent
#define DBC_VArrayNode_Type_() PColStd_VArrayNodeOfFieldOfHArray2OfPersistent_Type_()
#define DBC_VArray PColStd_FieldOfHArray2OfPersistent
#define DBC_VArray_hxx <PColStd_FieldOfHArray2OfPersistent.hxx>

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
