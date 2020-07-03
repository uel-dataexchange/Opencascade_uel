// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MoniTool_TimerSentry_HeaderFile
#define _MoniTool_TimerSentry_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_MoniTool_Timer_HeaderFile
#include <Handle_MoniTool_Timer.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
class MoniTool_Timer;


//! A tool to facilitate using MoniTool_Timer functionality <br>
//!          by automatically ensuring consistency of start/stop actions <br>
class MoniTool_TimerSentry  {
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

  //! Constructor creates an instance and runs the corresponding timer <br>
      MoniTool_TimerSentry(const Standard_CString cname);
  //! Constructor creates an instance and runs the corresponding timer <br>
      MoniTool_TimerSentry(const Handle(MoniTool_Timer)& timer);
  //! Destructor stops the associated timer <br>
        void Destroy() ;
Standard_EXPORT ~MoniTool_TimerSentry () { Destroy(); }
  
        Handle_MoniTool_Timer Timer() const;
  //! Manually stops the timer <br>
        void Stop() ;





protected:





private:



Handle_MoniTool_Timer myTimer;


};


#include <MoniTool_TimerSentry.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
