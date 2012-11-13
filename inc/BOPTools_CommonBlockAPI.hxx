// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTools_CommonBlockAPI_HeaderFile
#define _BOPTools_CommonBlockAPI_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _BOPTools_ListOfPaveBlock_HeaderFile
#include <BOPTools_ListOfPaveBlock.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class BOPTools_ListOfCommonBlock;
class BOPTools_ListOfPaveBlock;
class BOPTools_PaveBlock;



//! class that provide some  useful tools <br>
//! to manage with a List Of Common Block-s <br>
class BOPTools_CommonBlockAPI  {
public:

  DEFINE_STANDARD_ALLOC

  
//! Constructor <br>
  Standard_EXPORT   BOPTools_CommonBlockAPI(const BOPTools_ListOfCommonBlock& aList);
  
//! Selector <br>
  Standard_EXPORT    const BOPTools_ListOfCommonBlock& List() const;
  
//! Returns all PaveBlock-s (from the list) that are <br>
//! common for the given edge with  DS-index <anE> <br>
  Standard_EXPORT    const BOPTools_ListOfPaveBlock& CommonPaveBlocks(const Standard_Integer anE) const;
  
//! Returns TRUE if given PaveBlock <aPB> is <br>
//! common for the Blocks from the list <br>
  Standard_EXPORT     Standard_Boolean IsCommonBlock(const BOPTools_PaveBlock& aPB) const;





protected:





private:



Standard_Address myListOfCommonBlock;
BOPTools_ListOfPaveBlock myListOfPaveBlock;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
