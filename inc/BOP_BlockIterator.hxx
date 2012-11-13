// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOP_BlockIterator_HeaderFile
#define _BOP_BlockIterator_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoMoreObject;



class BOP_BlockIterator  {
public:

  DEFINE_STANDARD_ALLOC

  
//! Empty  Constructor <br>
  Standard_EXPORT   BOP_BlockIterator();
  
//! Creates an object with initial range <br>
//! of  [Lower,Upper] <br>
  Standard_EXPORT   BOP_BlockIterator(const Standard_Integer Lower,const Standard_Integer Upper);
  
//! Initialize an object with initial range <br>
//! of  [Lower,Upper] <br>
  Standard_EXPORT     void Initialize() ;
  
//! Support of Iteration <br>
  Standard_EXPORT     Standard_Boolean More() const;
  
//! Support of Iteration <br>
  Standard_EXPORT     void Next() ;
  
//! Support of Iteration <br>
  Standard_EXPORT     Standard_Integer Value() const;
  
//! Returns the extension=myUpper - myLower + 1; <br>
  Standard_EXPORT     Standard_Integer Extent() const;





protected:





private:



Standard_Integer myLower;
Standard_Integer myUpper;
Standard_Integer myValue;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
