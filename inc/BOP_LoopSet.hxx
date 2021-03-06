// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOP_LoopSet_HeaderFile
#define _BOP_LoopSet_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BOP_ListOfLoop_HeaderFile
#include <BOP_ListOfLoop.hxx>
#endif
#ifndef _BOP_ListIteratorOfListOfLoop_HeaderFile
#include <BOP_ListIteratorOfListOfLoop.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_BOP_Loop_HeaderFile
#include <Handle_BOP_Loop.hxx>
#endif
class BOP_ListOfLoop;
class BOP_Loop;



//!  The auxiliary class to store  and iterate on Loop(s) <br>
class BOP_LoopSet  {
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

  
//! Empty constructor; <br>
  Standard_EXPORT   BOP_LoopSet();
  
//! Destructor; <br>
  Standard_EXPORT   virtual  void Delete() ;
Standard_EXPORT virtual ~BOP_LoopSet(){Delete() ; }
  
//! Modifier; <br>
  Standard_EXPORT     BOP_ListOfLoop& ChangeListOfLoop() ;
  
  Standard_EXPORT   virtual  void InitLoop() ;
  
  Standard_EXPORT   virtual  Standard_Boolean MoreLoop() const;
  
  Standard_EXPORT   virtual  void NextLoop() ;
  
  Standard_EXPORT   virtual const Handle_BOP_Loop& Loop() const;





protected:





private:



BOP_ListOfLoop myListOfLoop;
BOP_ListIteratorOfListOfLoop myLoopIterator;
Standard_Integer myLoopIndex;
Standard_Integer myNbLoop;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
