// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTools_PCurveMaker_HeaderFile
#define _BOPTools_PCurveMaker_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BOPTools_PPaveFiller_HeaderFile
#include <BOPTools_PPaveFiller.hxx>
#endif
#ifndef _BooleanOperations_PShapesDataStructure_HeaderFile
#include <BooleanOperations_PShapesDataStructure.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class BOPTools_PaveFiller;



//!  Class provides computation p-curves for the edges and theirs <br>
//! split parts <br>
class BOPTools_PCurveMaker  {
public:

  DEFINE_STANDARD_ALLOC

  
//! Constructor <br>
  Standard_EXPORT   BOPTools_PCurveMaker(const BOPTools_PaveFiller& aFiller);
  
//! Launch the processor <br>
  Standard_EXPORT     void Do() ;
  
//! Returns TRUE if Ok <br>
  Standard_EXPORT     Standard_Boolean IsDone() const;





protected:





private:



BOPTools_PPaveFiller myFiller;
BooleanOperations_PShapesDataStructure myDS;
Standard_Boolean myIsDone;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
