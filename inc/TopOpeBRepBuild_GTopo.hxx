// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_GTopo_HeaderFile
#define _TopOpeBRepBuild_GTopo_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopAbs_ShapeEnum_HeaderFile
#include <TopAbs_ShapeEnum.hxx>
#endif
#ifndef _TopOpeBRepDS_Config_HeaderFile
#include <TopOpeBRepDS_Config.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TopAbs_State_HeaderFile
#include <TopAbs_State.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif



class TopOpeBRepBuild_GTopo  {
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

  
  Standard_EXPORT   TopOpeBRepBuild_GTopo();
  
  Standard_EXPORT   TopOpeBRepBuild_GTopo(const Standard_Integer II,const Standard_Integer IN,const Standard_Integer IO,const Standard_Integer NI,const Standard_Integer NN,const Standard_Integer NO,const Standard_Integer OI,const Standard_Integer ON,const Standard_Integer OO,const TopAbs_ShapeEnum t1,const TopAbs_ShapeEnum t2,const TopOpeBRepDS_Config C1,const TopOpeBRepDS_Config C2);
  
  Standard_EXPORT     void Reset() ;
  
  Standard_EXPORT     void Set(const Standard_Boolean II,const Standard_Boolean IN,const Standard_Boolean IO,const Standard_Boolean NI,const Standard_Boolean NN,const Standard_Boolean NO,const Standard_Boolean OI,const Standard_Boolean ON,const Standard_Boolean OO) ;
  
  Standard_EXPORT     void Type(TopAbs_ShapeEnum& t1,TopAbs_ShapeEnum& t2) const;
  
  Standard_EXPORT     void ChangeType(const TopAbs_ShapeEnum t1,const TopAbs_ShapeEnum t2) ;
  
  Standard_EXPORT     TopOpeBRepDS_Config Config1() const;
  
  Standard_EXPORT     TopOpeBRepDS_Config Config2() const;
  
  Standard_EXPORT     void ChangeConfig(const TopOpeBRepDS_Config C1,const TopOpeBRepDS_Config C2) ;
  
  Standard_EXPORT     Standard_Boolean Value(const TopAbs_State s1,const TopAbs_State s2) const;
  
  Standard_EXPORT     Standard_Boolean Value(const Standard_Integer I1,const Standard_Integer I2) const;
  
  Standard_EXPORT     Standard_Boolean Value(const Standard_Integer II) const;
  
  Standard_EXPORT     void ChangeValue(const Standard_Integer i1,const Standard_Integer i2,const Standard_Boolean b) ;
  
  Standard_EXPORT     void ChangeValue(const TopAbs_State s1,const TopAbs_State s2,const Standard_Boolean b) ;
  
  Standard_EXPORT     Standard_Integer GIndex(const TopAbs_State S) const;
  
  Standard_EXPORT     TopAbs_State GState(const Standard_Integer I) const;
  
  Standard_EXPORT     void Index(const Standard_Integer II,Standard_Integer& i1,Standard_Integer& i2) const;
  
  Standard_EXPORT     void DumpVal(Standard_OStream& OS,const TopAbs_State s1,const TopAbs_State s2) const;
  
  Standard_EXPORT     void DumpType(Standard_OStream& OS) const;
  
  Standard_EXPORT   static  void DumpSSB(Standard_OStream& OS,const TopAbs_State s1,const TopAbs_State s2,const Standard_Boolean b) ;
  
  Standard_EXPORT   virtual  void Dump(Standard_OStream& OS,const Standard_Address s = NULL) const;
  
  Standard_EXPORT     void StatesON(TopAbs_State& s1,TopAbs_State& s2) const;
  
  Standard_EXPORT     Standard_Boolean IsToReverse1() const;
  
  Standard_EXPORT     Standard_Boolean IsToReverse2() const;
  
  Standard_EXPORT     void SetReverse(const Standard_Boolean rev) ;
  
  Standard_EXPORT     Standard_Boolean Reverse() const;
  
  Standard_EXPORT     TopOpeBRepBuild_GTopo CopyPermuted() const;





protected:





private:



Standard_Boolean mycases[3][3];
TopAbs_ShapeEnum myt1;
TopAbs_ShapeEnum myt2;
TopOpeBRepDS_Config myConfig1;
TopOpeBRepDS_Config myConfig2;
Standard_Boolean myReverseForce;
Standard_Boolean myReverseValue;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
