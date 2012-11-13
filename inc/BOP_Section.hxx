// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOP_Section_HeaderFile
#define _BOP_Section_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BOP_Builder_HeaderFile
#include <BOP_Builder.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_BOP_HistoryCollector_HeaderFile
#include <Handle_BOP_HistoryCollector.hxx>
#endif
class BOPTools_DSFiller;
class BOP_HistoryCollector;



class BOP_Section  : public BOP_Builder {
public:

  DEFINE_STANDARD_ALLOC

  
//! Empty constructor; <br>
  Standard_EXPORT   BOP_Section();
  
//! Does the BO from the beggining to the end, <br>
//! i.e.  create new DataStructure, DSFiller, <br>
//! compute all  interferences, compute states, <br>
//! build result etc <br>
  Standard_EXPORT   virtual  void Do() ;
  
//! Does the BO from the beggining to the end, <br>
//! i.e.  create new DataStructure, DSFiller, <br>
//! compute all  interferences, compute states, <br>
//! build result etc <br>
  Standard_EXPORT     void Do(const Standard_Boolean toApprox,const Standard_Boolean toComputePCurve1,const Standard_Boolean toComputePCurve2) ;
  
//! Does the BO using existing Filler to the end <br>
  Standard_EXPORT   virtual  void DoWithFiller(const BOPTools_DSFiller& aDSF) ;
  
//! Destructor <br>
  Standard_EXPORT   virtual  void Destroy() ;
Standard_EXPORT virtual ~BOP_Section(){Destroy();}
  
  Standard_EXPORT   virtual  void SetHistoryCollector(const Handle(BOP_HistoryCollector)& theHistory) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
