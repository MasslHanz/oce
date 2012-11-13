// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PCDM_Reference_HeaderFile
#define _PCDM_Reference_HeaderFile

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
#ifndef _TCollection_ExtendedString_HeaderFile
#include <TCollection_ExtendedString.hxx>
#endif
class TCollection_ExtendedString;



class PCDM_Reference  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   PCDM_Reference();
  
  Standard_EXPORT   PCDM_Reference(const Standard_Integer aReferenceIdentifier,const TCollection_ExtendedString& aFileName,const Standard_Integer aDocumentVersion);
  
  Standard_EXPORT     Standard_Integer ReferenceIdentifier() const;
  
  Standard_EXPORT     TCollection_ExtendedString FileName() const;
  
  Standard_EXPORT     Standard_Integer DocumentVersion() const;





protected:





private:



Standard_Integer myReferenceIdentifier;
TCollection_ExtendedString myFileName;
Standard_Integer myDocumentVersion;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
