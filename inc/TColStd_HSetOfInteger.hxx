// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_HSetOfInteger_HeaderFile
#define _TColStd_HSetOfInteger_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TColStd_HSetOfInteger_HeaderFile
#include <Handle_TColStd_HSetOfInteger.hxx>
#endif

#ifndef _TColStd_SetOfInteger_HeaderFile
#include <TColStd_SetOfInteger.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TColStd_SetOfInteger;



class TColStd_HSetOfInteger : public MMgt_TShared {

public:

  
  Standard_EXPORT   TColStd_HSetOfInteger();
  
        Standard_Integer Extent() const;
  
        Standard_Boolean IsEmpty() const;
  
        void Clear() ;
  
        Standard_Boolean Add(const Standard_Integer& T) ;
  
        Standard_Boolean Remove(const Standard_Integer& T) ;
  
  Standard_EXPORT     Handle_TColStd_HSetOfInteger Union(const Handle(TColStd_HSetOfInteger)& B) const;
  
  Standard_EXPORT     Handle_TColStd_HSetOfInteger Intersection(const Handle(TColStd_HSetOfInteger)& B) const;
  
  Standard_EXPORT     Handle_TColStd_HSetOfInteger Difference(const Handle(TColStd_HSetOfInteger)& B) const;
  
        Standard_Boolean Contains(const Standard_Integer& T) const;
  
        Standard_Boolean IsASubset(const Handle(TColStd_HSetOfInteger)& S) const;
  
        Standard_Boolean IsAProperSubset(const Handle(TColStd_HSetOfInteger)& S) const;
  
  Standard_EXPORT     Handle_TColStd_HSetOfInteger ShallowCopy() const;
  
       const TColStd_SetOfInteger& Set() const;
  
        TColStd_SetOfInteger& ChangeSet() ;




  DEFINE_STANDARD_RTTI(TColStd_HSetOfInteger)

protected:




private: 


TColStd_SetOfInteger mySet;


};

#define Item Standard_Integer
#define Item_hxx <Standard_Integer.hxx>
#define TheSet TColStd_SetOfInteger
#define TheSet_hxx <TColStd_SetOfInteger.hxx>
#define TCollection_HSet TColStd_HSetOfInteger
#define TCollection_HSet_hxx <TColStd_HSetOfInteger.hxx>
#define Handle_TCollection_HSet Handle_TColStd_HSetOfInteger
#define TCollection_HSet_Type_() TColStd_HSetOfInteger_Type_()

#include <TCollection_HSet.lxx>

#undef Item
#undef Item_hxx
#undef TheSet
#undef TheSet_hxx
#undef TCollection_HSet
#undef TCollection_HSet_hxx
#undef Handle_TCollection_HSet
#undef TCollection_HSet_Type_


// other Inline functions and methods (like "C++: function call" methods)
inline Handle_TColStd_HSetOfInteger ShallowCopy(const Handle_TColStd_HSetOfInteger& me) {
 return me->ShallowCopy();
}



#endif
