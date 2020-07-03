#include  <Transfer_TransientListBinder.ixx>
//#include  <TColStd.hxx>
  
//=======================================================================
//function : Constructor
//purpose  : 
//=======================================================================

Transfer_TransientListBinder::Transfer_TransientListBinder  ()
{  theres = new TColStd_HSequenceOfTransient();  }

//=======================================================================
//function : Constructor
//purpose  : 
//=======================================================================

Transfer_TransientListBinder::Transfer_TransientListBinder
  (const Handle(TColStd_HSequenceOfTransient)& list)
{  theres = list;  }

//=======================================================================
//function : IsMultiple
//purpose  : 
//=======================================================================

Standard_Boolean  Transfer_TransientListBinder::IsMultiple () const
{  return (NbTransients() > 1);  }

//=======================================================================
//function : ResultType
//purpose  : 
//=======================================================================

Handle(Standard_Type)  Transfer_TransientListBinder::ResultType () const
{  return STANDARD_TYPE(Transfer_TransientListBinder);  }

//=======================================================================
//function : ResultTypeName
//purpose  : 
//=======================================================================

Standard_CString  Transfer_TransientListBinder::ResultTypeName () const
{  return "list(Standard_Transient)";  }


//=======================================================================
//function : AddResult
//purpose  : 
//=======================================================================

void  Transfer_TransientListBinder::AddResult (const Handle(Standard_Transient)& Transient)
{  theres->Append(Transient);  }

//=======================================================================
//function : Result
//purpose  : 
//=======================================================================

Handle(TColStd_HSequenceOfTransient) Transfer_TransientListBinder::Result () const
{  return theres;  }

//=======================================================================
//function : SetResult
//purpose  : 
//=======================================================================

void  Transfer_TransientListBinder::SetResult
  (const Standard_Integer num, const Handle(Standard_Transient)& Transient)
{  theres->SetValue(num,Transient);  }

//=======================================================================
//function : NbTransients
//purpose  : 
//=======================================================================

Standard_Integer  Transfer_TransientListBinder::NbTransients () const
{  return theres->Length();  }

//=======================================================================
//function : Transient
//purpose  : 
//=======================================================================

const Handle(Standard_Transient)&
  Transfer_TransientListBinder::Transient (const Standard_Integer num) const
{  return theres->Value(num);  }

