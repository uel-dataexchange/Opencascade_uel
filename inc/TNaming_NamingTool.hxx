// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TNaming_NamingTool_HeaderFile
#define _TNaming_NamingTool_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_TNaming_NamedShape_HeaderFile
#include <Handle_TNaming_NamedShape.hxx>
#endif
class TDF_LabelMap;
class TNaming_NamedShape;
class TopTools_MapOfShape;
class TDF_Label;
class TopoDS_Shape;



class TNaming_NamingTool  {
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

  
  Standard_EXPORT   static  void CurrentShape(const TDF_LabelMap& Valid,const TDF_LabelMap& Forbiden,const Handle(TNaming_NamedShape)& NS,TopTools_MapOfShape& MS) ;
  
  Standard_EXPORT   static  void CurrentShapeFromShape(const TDF_LabelMap& Valid,const TDF_LabelMap& Forbiden,const TDF_Label& Acces,const TopoDS_Shape& S,TopTools_MapOfShape& MS) ;
  
  Standard_EXPORT   static  void BuildDescendants(const Handle(TNaming_NamedShape)& NS,TDF_LabelMap& Labels) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
