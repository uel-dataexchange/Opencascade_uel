// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Transfer_IteratorOfProcessForFinder_HeaderFile
#define _Transfer_IteratorOfProcessForFinder_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Transfer_HSequenceOfFinder_HeaderFile
#include <Handle_Transfer_HSequenceOfFinder.hxx>
#endif
#ifndef _Transfer_TransferIterator_HeaderFile
#include <Transfer_TransferIterator.hxx>
#endif
#ifndef _Handle_Transfer_Finder_HeaderFile
#include <Handle_Transfer_Finder.hxx>
#endif
#ifndef _Handle_Transfer_ProcessForFinder_HeaderFile
#include <Handle_Transfer_ProcessForFinder.hxx>
#endif
#ifndef _Handle_Transfer_IndexedDataMapNodeOfTransferMapOfProcessForFinder_HeaderFile
#include <Handle_Transfer_IndexedDataMapNodeOfTransferMapOfProcessForFinder.hxx>
#endif
#ifndef _Handle_Transfer_ActorOfProcessForFinder_HeaderFile
#include <Handle_Transfer_ActorOfProcessForFinder.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Transfer_Binder_HeaderFile
#include <Handle_Transfer_Binder.hxx>
#endif
class Transfer_HSequenceOfFinder;
class Standard_NoSuchObject;
class Transfer_Finder;
class Transfer_FindHasher;
class Transfer_ProcessForFinder;
class Transfer_TransferMapOfProcessForFinder;
class Transfer_IndexedDataMapNodeOfTransferMapOfProcessForFinder;
class Transfer_ActorOfProcessForFinder;
class Transfer_Binder;



class Transfer_IteratorOfProcessForFinder  : public Transfer_TransferIterator {
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

  
  Standard_EXPORT   Transfer_IteratorOfProcessForFinder(const Standard_Boolean withstarts);
  
  Standard_EXPORT     void Add(const Handle(Transfer_Binder)& binder) ;
  
  Standard_EXPORT     void Add(const Handle(Transfer_Binder)& binder,const Handle(Transfer_Finder)& start) ;
  
  Standard_EXPORT     void Filter(const Handle(Transfer_HSequenceOfFinder)& list,const Standard_Boolean keep = Standard_True) ;
  
  Standard_EXPORT     Standard_Boolean HasStarting() const;
  
  Standard_EXPORT    const Handle_Transfer_Finder& Starting() const;





protected:





private:



Handle_Transfer_HSequenceOfFinder thestarts;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
