// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP242_TessellatedSolid_HeaderFile
#define _StepAP242_TessellatedSolid_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Handle.hxx>

#include <StepAP242_TessellatedShell.hxx>
#include <StepAP242_TessellatedSurface.hxx>
#include <NCollection_Array1.hxx>
#include <NCollection_Handle.hxx>

#include <StepShape_ManifoldSolidBrep.hxx>

class Standard_Transient;
class StepShape_HArray1OfFace;
class TCollection_HAsciiString;
class StepShape_Face;


DEFINE_STANDARD_HANDLE(StepAP242_TessellatedSolid, StepAP242_TessellatedShell);

class StepAP242_TessellatedSolid : public StepAP242_TessellatedShell {

public:

  //! Returns a ConnectedFaceSet <br>
  Standard_EXPORT   StepAP242_TessellatedSolid();
  
  Standard_EXPORT   void Init(const Handle(TCollection_HAsciiString)& aName, const NCollection_Handle<StepAP242_ArrayOfTessellatedSurface>& aComplexTriangulatedSurfaces, const Handle(StepShape_ManifoldSolidBrep)& aSolid);

  Standard_EXPORT   Handle(StepShape_ManifoldSolidBrep) Solid() const;


protected:
  Handle(StepShape_ManifoldSolidBrep) mySolid;



public: 

	DEFINE_STANDARD_RTTIEXT(StepAP242_TessellatedSolid, StepAP242_TessellatedShell);

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
