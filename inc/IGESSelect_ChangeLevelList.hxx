// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSelect_ChangeLevelList_HeaderFile
#define _IGESSelect_ChangeLevelList_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESSelect_ChangeLevelList_HeaderFile
#include <Handle_IGESSelect_ChangeLevelList.hxx>
#endif

#ifndef _Handle_IFSelect_IntParam_HeaderFile
#include <Handle_IFSelect_IntParam.hxx>
#endif
#ifndef _IGESSelect_ModelModifier_HeaderFile
#include <IGESSelect_ModelModifier.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_IGESData_IGESModel_HeaderFile
#include <Handle_IGESData_IGESModel.hxx>
#endif
class IFSelect_IntParam;
class IFSelect_ContextModif;
class IGESData_IGESModel;
class Interface_CopyTool;
class TCollection_AsciiString;


//! Changes Level List (in directory part) to a new single value <br>
//!           Only entities attached to a LevelListEntity are considered <br>
//!           If OldNumber is defined, only entities whose LevelList <br>
//!           contains its Value are processed. Else all LevelLists are. <br>
//! <br>
//!           Remark : this concerns the Directory Part only. The Level List <br>
//!           Entities themselves (their content) are not affected. <br>
//! <br>
//!           If NewNumber is defined (positive or zero), it gives the new <br>
//!           value for Level Number. Else, the first value of the LevelList <br>
//!           is set as new LevelNumber <br>
class IGESSelect_ChangeLevelList : public IGESSelect_ModelModifier {

public:

  //! Creates a ChangeLevelList, not yet defined <br>
//!           (see SetOldNumber and SetNewNumber) <br>
  Standard_EXPORT   IGESSelect_ChangeLevelList();
  //! Returns True if OldNumber is defined : then, only entities <br>
//!           which have a LevelList which contains the value are processed. <br>
//!           Else, all entities attached to a LevelList are. <br>
  Standard_EXPORT     Standard_Boolean HasOldNumber() const;
  //! Returns the parameter for OldNumber. If not defined (Null <br>
//!           Handle), it will be interpreted as "all level lists" <br>
  Standard_EXPORT     Handle_IFSelect_IntParam OldNumber() const;
  //! Sets a parameter for OldNumber <br>
  Standard_EXPORT     void SetOldNumber(const Handle(IFSelect_IntParam)& param) ;
  //! Returns True if NewNumber is defined : then, it gives the new <br>
//!           value for Level Number. Else, the first value of the LevelList <br>
//!           is used as new Level Number. <br>
  Standard_EXPORT     Standard_Boolean HasNewNumber() const;
  //! Returns the parameter for NewNumber. If not defined (Null <br>
//!           Handle), it will be interpreted as "new value 0" <br>
  Standard_EXPORT     Handle_IFSelect_IntParam NewNumber() const;
  //! Sets a parameter for NewNumber <br>
  Standard_EXPORT     void SetNewNumber(const Handle(IFSelect_IntParam)& param) ;
  //! Specific action : considers selected target entities : <br>
//!           If OldNumber is not defined, all entities attached to a <br>
//!             Level List <br>
//!           If OldNumber is defined (value not negative), entities with a <br>
//!             Level List which contains this value <br>
//!           Attaches all these entities to value given by NewNumber, or <br>
//!             the first value of the Level List <br>
  Standard_EXPORT     void Performing(IFSelect_ContextModif& ctx,const Handle(IGESData_IGESModel)& target,Interface_CopyTool& TC) const;
  //! Returns a text which begins by <br>
//!           "Changes Level Lists containing <old>", or <br>
//!           "Changes all Level Lists in D.E.", and ends by <br>
//!           " to Number <new>"  or  " to Number = first value in List" <br>
  Standard_EXPORT     TCollection_AsciiString Label() const;




  DEFINE_STANDARD_RTTI(IGESSelect_ChangeLevelList)

protected:




private: 


Handle_IFSelect_IntParam theold;
Handle_IFSelect_IntParam thenew;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
