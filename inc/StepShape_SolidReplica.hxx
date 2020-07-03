// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_SolidReplica_HeaderFile
#define _StepShape_SolidReplica_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepShape_SolidReplica_HeaderFile
#include <Handle_StepShape_SolidReplica.hxx>
#endif

#ifndef _Handle_StepShape_SolidModel_HeaderFile
#include <Handle_StepShape_SolidModel.hxx>
#endif
#ifndef _Handle_StepGeom_CartesianTransformationOperator3d_HeaderFile
#include <Handle_StepGeom_CartesianTransformationOperator3d.hxx>
#endif
#ifndef _StepShape_SolidModel_HeaderFile
#include <StepShape_SolidModel.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class StepShape_SolidModel;
class StepGeom_CartesianTransformationOperator3d;
class TCollection_HAsciiString;



class StepShape_SolidReplica : public StepShape_SolidModel {

public:

  //! Returns a SolidReplica <br>
  Standard_EXPORT   StepShape_SolidReplica();
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const Handle(StepShape_SolidModel)& aParentSolid,const Handle(StepGeom_CartesianTransformationOperator3d)& aTransformation) ;
  
  Standard_EXPORT     void SetParentSolid(const Handle(StepShape_SolidModel)& aParentSolid) ;
  
  Standard_EXPORT     Handle_StepShape_SolidModel ParentSolid() const;
  
  Standard_EXPORT     void SetTransformation(const Handle(StepGeom_CartesianTransformationOperator3d)& aTransformation) ;
  
  Standard_EXPORT     Handle_StepGeom_CartesianTransformationOperator3d Transformation() const;




  DEFINE_STANDARD_RTTI(StepShape_SolidReplica)

protected:




private: 


Handle_StepShape_SolidModel parentSolid;
Handle_StepGeom_CartesianTransformationOperator3d transformation;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
