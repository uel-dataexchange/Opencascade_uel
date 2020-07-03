// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColStd_HDoubleListOfPersistent_HeaderFile
#define _PColStd_HDoubleListOfPersistent_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PColStd_HDoubleListOfPersistent_HeaderFile
#include <Handle_PColStd_HDoubleListOfPersistent.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_PColStd_HDoubleListOfPersistent_HeaderFile
#include <Handle_PColStd_HDoubleListOfPersistent.hxx>
#endif
#ifndef _Handle_Standard_Persistent_HeaderFile
#include <Handle_Standard_Persistent.hxx>
#endif
#ifndef _PMMgt_PManaged_HeaderFile
#include <PMMgt_PManaged.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class Standard_Persistent;
class Standard_NoSuchObject;


class PColStd_HDoubleListOfPersistent : public PMMgt_PManaged {

public:

  
  Standard_EXPORT   PColStd_HDoubleListOfPersistent();
  
  Standard_EXPORT     Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     Handle_PColStd_HDoubleListOfPersistent Construct(const Handle(Standard_Persistent)& T) ;
  
  Standard_EXPORT     Handle_Standard_Persistent Value() const;
  
  Standard_EXPORT     Handle_PColStd_HDoubleListOfPersistent Tail() const;
  
  Standard_EXPORT     Handle_PColStd_HDoubleListOfPersistent Previous() const;
  
  Standard_EXPORT     void SwapTail(Handle(PColStd_HDoubleListOfPersistent)& WithList) ;
  
  Standard_EXPORT     void SetValue(const Handle(Standard_Persistent)& T) ;
  
  Standard_EXPORT     void ChangeBackPointer(const Handle(PColStd_HDoubleListOfPersistent)& BackPointer) ;
  
  Standard_EXPORT     void ChangeForwardPointer(const Handle(PColStd_HDoubleListOfPersistent)& ForwardPointer) ;
  
  Standard_EXPORT   virtual  Handle_Standard_Persistent ShallowCopy() const;
  
  Standard_EXPORT   virtual  void ShallowDump(Standard_OStream& s) const;
  
  Standard_EXPORT     void Destroy() ;
~PColStd_HDoubleListOfPersistent()
{
  Destroy();
}
PColStd_HDoubleListOfPersistent(const Storage_stCONSTclCOM& a) : PMMgt_PManaged(a)
{
  
}
    Handle(Standard_Persistent) _CSFDB_GetPColStd_HDoubleListOfPersistentData() const { return Data; }
    void _CSFDB_SetPColStd_HDoubleListOfPersistentData(const Handle(Standard_Persistent)& p) { Data = p; }
    Handle(PColStd_HDoubleListOfPersistent) _CSFDB_GetPColStd_HDoubleListOfPersistentNext() const { return Next; }
    void _CSFDB_SetPColStd_HDoubleListOfPersistentNext(const Handle(PColStd_HDoubleListOfPersistent)& p) { Next = p; }
    Handle(PColStd_HDoubleListOfPersistent) _CSFDB_GetPColStd_HDoubleListOfPersistentBefore() const { return Before; }
    void _CSFDB_SetPColStd_HDoubleListOfPersistentBefore(const Handle(PColStd_HDoubleListOfPersistent)& p) { Before = p; }



  DEFINE_STANDARD_RTTI(PColStd_HDoubleListOfPersistent)

protected:




private: 


Handle_Standard_Persistent Data;
Handle_PColStd_HDoubleListOfPersistent Next;
Handle_PColStd_HDoubleListOfPersistent Before;


};





// other Inline functions and methods (like "C++: function call" methods)
inline Handle_Standard_Persistent ShallowCopy(const Handle_PColStd_HDoubleListOfPersistent& me) {
 return me->ShallowCopy();
}

inline void ShallowDump(const Handle_PColStd_HDoubleListOfPersistent& me,Standard_OStream& s) {
 me->ShallowDump(s);
}



#endif
