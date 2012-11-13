// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTools_InterferenceLine_HeaderFile
#define _BOPTools_InterferenceLine_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BOPTools_ListOfInterference_HeaderFile
#include <BOPTools_ListOfInterference.hxx>
#endif
#ifndef _BooleanOperations_KindOfInterference_HeaderFile
#include <BooleanOperations_KindOfInterference.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class BOPTools_ListOfInterference;
class BOPTools_Interference;


//! class for storing information about all <br>
//!         interferences for given shape. <br>
//!         So,  for each shape in the DS, we will have <br>
//!         the  following interference list <br>
//!         (i1, t1, r1), (i2, t2, r2),...(iN, tN, rN), <br>
//!         where <br>
//!         (iN, tN, rN) - object of type  BOPTools_Interference <br>
//!         The  class 	BOPTools_InterferenceLine is  dedicated <br>
//!         to provide convinient tools to  manage this info. <br>
//! <br>
class BOPTools_InterferenceLine  {
public:

  DEFINE_STANDARD_ALLOC

  
//! Empty constructor <br>
  Standard_EXPORT   BOPTools_InterferenceLine();
  
//! Returns info. list for interferences of given type <br>
  Standard_EXPORT    const BOPTools_ListOfInterference& GetOnType(const BooleanOperations_KindOfInterference aType) const;
  
//! Returns  TRUE if the interference of type <aType> <br>
//! with the shape <aWith> has already been computed. <br>
  Standard_EXPORT     Standard_Boolean IsComputed(const Standard_Integer aWith,const BooleanOperations_KindOfInterference aType) const;
  
//! Adds  info. about the Interference to the list <br>
  Standard_EXPORT     void AddInterference(const BOPTools_Interference& anInterference) ;
  
//! Adds  info. about the Interference to the list <br>
  Standard_EXPORT     void AddInterference(const Standard_Integer aWith,const BooleanOperations_KindOfInterference aType,const Standard_Integer anIndex) ;
  
//! Selector <br>
  Standard_EXPORT    const BOPTools_ListOfInterference& List() const;
  
//! Selector <br>
  Standard_EXPORT    const BOPTools_ListOfInterference& RealList() const;
  
//! Returns  TRUE if the list contains at least one  interference <br>
//! with non-empty result <br>
  Standard_EXPORT     Standard_Boolean HasInterference() const;





protected:





private:



BOPTools_ListOfInterference myList;
BOPTools_ListOfInterference mySSList;
BOPTools_ListOfInterference myESList;
BOPTools_ListOfInterference myVSList;
BOPTools_ListOfInterference myEEList;
BOPTools_ListOfInterference myVEList;
BOPTools_ListOfInterference myVVList;
BOPTools_ListOfInterference myEmptyList;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
