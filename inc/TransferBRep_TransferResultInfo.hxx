// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TransferBRep_TransferResultInfo_HeaderFile
#define _TransferBRep_TransferResultInfo_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TransferBRep_TransferResultInfo_HeaderFile
#include <Handle_TransferBRep_TransferResultInfo.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif


//! Data structure for storing information on transfer result. <br>
//!          At the moment it dispatches information for the following types: <br>
//!          - result, <br>
//!          - result + warning(s), <br>
//!          - result + fail(s), <br>
//!          - result + warning(s) + fail(s) <br>
//!          - no result, <br>
//!          - no result + warning(s), <br>
//!          - no result + fail(s), <br>
//!          - no result + warning(s) + fail(s), <br>
class TransferBRep_TransferResultInfo : public MMgt_TShared {

public:

  //! Creates object with all fields nullified. <br>
  Standard_EXPORT   TransferBRep_TransferResultInfo();
  //! Resets all the fields. <br>
  Standard_EXPORT     void Clear() ;
  
        Standard_Integer& Result() ;
  
        Standard_Integer& ResultWarning() ;
  
        Standard_Integer& ResultFail() ;
  
        Standard_Integer& ResultWarningFail() ;
  
        Standard_Integer& NoResult() ;
  
        Standard_Integer& NoResultWarning() ;
  
        Standard_Integer& NoResultFail() ;
  
        Standard_Integer& NoResultWarningFail() ;




  DEFINE_STANDARD_RTTI(TransferBRep_TransferResultInfo)

protected:




private: 


Standard_Integer myR;
Standard_Integer myRW;
Standard_Integer myRF;
Standard_Integer myRWF;
Standard_Integer myNR;
Standard_Integer myNRW;
Standard_Integer myNRF;
Standard_Integer myNRWF;


};


#include <TransferBRep_TransferResultInfo.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
